using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Prob_Th_Shooters
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Task
        {
            public int n;
            public int n1;
            public double[] p1;
            public double[] p2;
            public double[] p3;

            public int[] Sh1;
            public int[] Sh2;
            public int[] Sh3;

            public int[] y; //Требуемая случайная величина

            public int[] nf; 

            public void Prob()
            {
                p1 = new double[n];
                p2 = new double[n];
                p3 = new double[n];

                for (int i = 0; i < n; i++)
                {
                    p1[i] = 1.0 / Convert.ToDouble(n);
                    p2[i] = 1.0 / Convert.ToDouble(n);
                    p3[i] = 1.0 / Convert.ToDouble(n);
                }
            }

            public void Exper()
            {
                Sh1 = new int[n1];
                Sh2 = new int[n1];
                Sh3 = new int[n1];
                y = new int[n1];

                Random rand = new Random();
                for (int i = 0; i < n1; i++)
                {
                    Sh1[i] = Shot(p1, rand);
                    Sh2[i] = Shot(p2, rand);
                    Sh3[i] = Shot(p3, rand);
                    y[i] = Sh1[i] + Sh2[i] + Sh3[i];
                }
            }

            public void Frequency()
            {
                nf = new int[3 * n + 1];
                for (int i = 3; i < 3 * n + 1; i++)
                {
                    for (int j = 0; j < n1; j++)
                    {
                        if (y[j] == i)
                        {
                            nf[i] += 1;
                        }
                    }
                }
            }

            public int Shot(double[] p, Random rand)
            {
                int k = 0;
                int i = 0;
                while ((k == 0) && (i < n))
                {
                    double r = rand.NextDouble();
                    if (r < p[i])
                        k = i + 1;
                    i++;
                }
                if (i == n)
                    k = i;
                return k;
            }
     
            public Task(int N, int N1)
            {
                n = N;
                n1 = N1;
                Prob();

                Exper();

                Frequency();
                
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int N = Convert.ToInt32(textBox1.Text);
            int N1 = Convert.ToInt32(textBox2.Text);
            Task T = new Task(N, N1);

            dataGridView3.Rows.Clear();
            for (int i = 0; i < N; i++)
            {
                dataGridView3.Rows.Add();
                dataGridView3.Rows[i].Cells[0].Value = T.p1[i];
                dataGridView3.Rows[i].Cells[1].Value = T.p2[i];
                dataGridView3.Rows[i].Cells[2].Value = T.p3[i];
            }

            if (radioButton1.Checked == true)
            {
                if (checkBox1.Checked == false)
                {
                    dataGridView1.Rows.Clear();
                    for (int i = 0; i < N1; i++)
                    {
                        dataGridView1.Rows.Add();
                        dataGridView1.Rows[i].Cells[0].Value = T.y[i];
                        dataGridView1.Rows[i].Cells[1].Value = T.Sh1[i];
                        dataGridView1.Rows[i].Cells[2].Value = T.Sh2[i];
                        dataGridView1.Rows[i].Cells[3].Value = T.Sh3[i];
                    }
                }

                dataGridView2.Rows.Clear();
                double norm = 0;
                for (int i = 3; i < 3 * N + 1; i++)
                {
                    dataGridView2.Rows.Add();
                    dataGridView2.Rows[i - 3].Cells[0].Value = i;
                    dataGridView2.Rows[i - 3].Cells[1].Value = T.nf[i];
                    dataGridView2.Rows[i - 3].Cells[2].Value = Convert.ToDouble(T.nf[i]) / Convert.ToDouble(N1);
                    norm += Convert.ToDouble(T.nf[i]) / Convert.ToDouble(N1);
                }
                
                label2.Text = Convert.ToString(norm);
            }

            if (radioButton2.Checked == true)
            {
                button2.Visible = true;

            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int N = Convert.ToInt32(textBox1.Text);
            int N1 = Convert.ToInt32(textBox2.Text);
            Task T = new Task(N, N1);

            for (int i = 0; i < T.n; i++)
            {
                T.p1[i] = Convert.ToDouble(dataGridView3.Rows[i].Cells[0].Value);
                T.p2[i] = Convert.ToDouble(dataGridView3.Rows[i].Cells[1].Value);
                T.p3[i] = Convert.ToDouble(dataGridView3.Rows[i].Cells[2].Value);
            }

            T.Exper();
            T.Frequency();

            if (checkBox1.Checked == false)
            {
                dataGridView1.Rows.Clear();
                for (int i = 0; i < N1; i++)
                {
                    dataGridView1.Rows.Add();
                    dataGridView1.Rows[i].Cells[0].Value = T.y[i];
                    dataGridView1.Rows[i].Cells[1].Value = T.Sh1[i];
                    dataGridView1.Rows[i].Cells[2].Value = T.Sh2[i];
                    dataGridView1.Rows[i].Cells[3].Value = T.Sh3[i];
                }
            }

            dataGridView2.Rows.Clear();
            double norm = 0;
            for (int i = 3; i < 3 * N + 1; i++)
            {
                dataGridView2.Rows.Add();
                dataGridView2.Rows[i - 3].Cells[0].Value = i;
                dataGridView2.Rows[i - 3].Cells[1].Value = T.nf[i];
                dataGridView2.Rows[i - 3].Cells[2].Value = Convert.ToDouble(T.nf[i]) / Convert.ToDouble(N1);
                norm += Convert.ToDouble(T.nf[i]) / Convert.ToDouble(N1);
            }

            label2.Text = Convert.ToString(norm);

        }
    }
}
