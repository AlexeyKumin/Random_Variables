using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ZedGraph;

namespace Prob_Th_Shooters
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public double AddGraph2(ZedGraphControl Graph, Task T, string s1, string s2)
        {
            GraphPane panel = Graph.GraphPane;
            panel.CurveList.Clear();
            PointPairList f_list = new PointPairList();
            PointPairList s_list = new PointPairList();
            double max = 0;
            double F = 0;
            f_list.Add(2, F);
            double F1 = 0;
            s_list.Add(2, F1);

            for (int i = 0; i < 3 * T.r - 2; i++)
            {
                f_list.Add(i + 3, F);
                s_list.Add(i + 3, F1);
                F += T.P[i];
                F1 += (double)T.v[i] / (double)T.n;

                if (Math.Abs(F - F1) > max)
                    max = Math.Abs(F - F1);

                f_list.Add(i + 3, F);
                s_list.Add(i + 3, F1);
            }

            LineItem Curve = panel.AddCurve(s1, f_list, Color.Red, SymbolType.None);
            LineItem Curve1 = panel.AddCurve(s2, s_list, Color.Blue, SymbolType.None);
            Graph.AxisChange();
            Graph.Invalidate();

            return max;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int N = Convert.ToInt32(textBox1.Text);
            int N1 = Convert.ToInt32(textBox2.Text);
            double p = Convert.ToDouble(textBox3.Text);
            int k = Convert.ToInt32(textBox5.Text);
            double a = Convert.ToDouble(textBox4.Text);

            Task T = new Task(N, N1, p, k, a);     
            
            dataGridView2.Rows.Clear();
            dataGridView1.Rows.Clear();
            double norm1 = 0;
            double norm2 = 0;
            double norm3 = 0;
            double maxEP = 0;
            double maxEF = 0;
            for (int i = 0; i < 3 * N - 2; i++)
            {
                dataGridView2.Rows.Add();
                dataGridView2.Rows[i].Cells[0].Value = i + 3;
                dataGridView2.Rows[i].Cells[1].Value = T.v[i];
                dataGridView2.Rows[i].Cells[2].Value = T.v[i] / (double)N1;
                dataGridView2.Rows[i].Cells[3].Value = T.P[i];
                norm1 += T.v[i] / (double)N1;
                norm2 += T.P[i];
                if (maxEP < Math.Abs(T.P[i] - T.v[i] / (double)N1))
                    maxEP = Math.Abs(T.P[i] - T.v[i] / (double)N1);
            }

            for (int i = 1; i < k + 1; i++)
            {
                dataGridView1.Rows.Add();
                dataGridView1.Rows[i - 1].Cells[0].Value = i;
                dataGridView1.Rows[i - 1].Cells[1].Value = T.z[i];
                dataGridView1.Rows[i - 1].Cells[2].Value = T.q[i];
                dataGridView1.Rows[i - 1].Cells[3].Value = T.nj[i];
                dataGridView1.Rows[i - 1].Cells[4].Value = T.q[i] * T.n;
                norm3 += T.q[i];
            }

            label2.Text = Convert.ToString(norm1);
            label4.Text = Convert.ToString(norm2);
            label22.Text = Convert.ToString(maxEP);
            label6.Text = Convert.ToString(T.Ey);
            label8.Text = Convert.ToString(T.Yst);
            label10.Text = Convert.ToString(Math.Abs(T.Ey - T.Yst));
            label14.Text = Convert.ToString(T.S2);
            label18.Text = Convert.ToString(T.Me);
            label20.Text = Convert.ToString(T.R + 1);
            label16.Text = Convert.ToString(Math.Abs(T.Dy - T.S2));
            label12.Text = Convert.ToString(T.Dy);
            label26.Text = Convert.ToString(norm3);
            maxEF = AddGraph2(zedGraphControl1, T, "F(x)", "~F(x)");
            label28.Text = Convert.ToString(maxEF);
            label29.Text = Convert.ToString(T.R0);
            label31.Text = Convert.ToString(T.Hip);
            label32.Text = Convert.ToString(1 - T.Fp);


            GraphPane panel = zedGraphControl2.GraphPane;
            panel.CurveList.Clear();
            PointPairList f_list = new PointPairList();
            double x = 0;
            for (int i =0; i < 3000; i++)
            {
                f_list.Add(x, T.fHi2(x, k - 1));
                x = 0.01 * (double)i;
            }
            LineItem Curve = panel.AddCurve("", f_list, Color.Red, SymbolType.None);
            zedGraphControl2.AxisChange();
            zedGraphControl2.Invalidate();
        }
    }
}
