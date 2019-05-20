using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prob_Th_Shooters
{
    public class Task
    {
        public int r;
        public int n;
        public double p;

        public int[] v; //распределение св
        public int[] y;
        public double Ey;
        public double Yst;
        public double Dy;
        public double S2;
        public double[] P;
        public double Me;
        public double R;

        public int k;
        public double h;
        public double[] z;
        public double[] q;
        public double[] nj;
        public int Hip = 0;
        public double R0;
        public double a;
        public double Fp;

        public int fact(int k)
        {
            int res = 1;
            for (int i = 2; i <= k; i++)
            {
                res *= i;
            }
            return res;
        }

        public double fHi2(double x, int r1)
        {
            double res = 1;
            if (r1 % 2 == 1)
            {
                if (x <= 0)
                {
                    res = 0;
                }
                else
                {
                    
                    int k = (r1 - 1) / 2;
                    for (int i = 1; i <= k; i++)
                        res *= x / (2 * (k - i + (1.0 / 2)));
                    res *= Math.Sqrt(x / (2 * Math.PI)) / x;
                }
            }
            else
            {
                int k = r1 / 2;
                res = Math.Pow(x, k - 1) / (fact(k - 1) * Math.Pow(2, k));
            }
            return res / Math.Exp(x / 2.0);
        }

        public double FobrHi2(double R0, int r1)
        {
            int nr = 10000;
            double res = 0;
            for (int i = 1; i <= nr; i++)
            {
                res += fHi2(R0 * (i - 1) / (double)nr, r1);
                res += fHi2(R0 * i / (double)nr, r1);
            }
            res *= R0 / (2 * nr);
            return res;
        }

        public double Fn(double z1, double z2)
        {
            double temp = 0;
            int i = 3;
            while (i < z1)
                i++;
            for (; i < z2; i++)
                temp += Probability2(i);
            return temp;
        }

        public double funcNj(double z1, double z2)
        {
            double temp = 0;
            int i = 3;
            while (i < z1)
                i++;
            for (; (i < z2) && (i < 3 * r) ; i++)
                temp += v[i - 3];
            return temp;
        }

        public void Intervals(int k)
        {

            this.k = k;
            z = new double[k + 1];
            q = new double[k + 1];
            nj = new double[k + 1];
            h = (3 * r - 2) / (double)k;
            z[0] = 2;
            q[0] = 0;
            for (int i = 1; i < k + 1; i++)
            {
                z[i] = z[i - 1] + h;
                if (i == k)
                {
                    z[i] += h;
                }
                q[i] = Fn(z[i - 1], z[i]);
                nj[i] = funcNj(z[i - 1], z[i]);
                R0 += Math.Pow((nj[i] - n * q[i]), 2) / (n * q[i]);
            }
            Fp = FobrHi2(R0, k - 1);
            if (1 - Fp > this.a)
            {
                Hip = 1;
            }

        }      

        public double Probability1(int k)
        {
            if (k != this.r)
                return p * Math.Pow(1 - p, k - 1);
            else
                return Math.Pow(1 - p, this.r - 1);
        } 

        public int max(int a, int b)
        {
            if (a > b)
                return a;
            else
                return b;
        }

        public int min(int a, int b)
        {
            if (a < b)
                return a;
            else
                return b;
        }

        public double Probability2(int m)
        {
            double temp1 = 1;
            double temp2 = 0;

            if ((3 <= m) && (m < this.r + 2))
                for (int k = 1; k <= m - 2; k++)
                {
                    temp1 = Probability1(k);
                    for (int c = 1; c <= m - k - 1; c++)
                        temp2 += temp1 * Probability1(c) * Probability1(m - k - c);
                }

            else if ((m >= this.r + 2) && (m < 2 * this.r + 2))
                for (int k = 1; k <= this.r; k++)
                {
                    temp1 = Probability1(k);
                    for (int c = max(1, m - k - this.r); c <= min(this.r, m - k - 1); c++)
                        temp2 += temp1 * Probability1(c) * Probability1(m - k - c);
                }

            else if ((m >= 2 * this.r + 2) && (m <= 3 * this.r))
                for (int k = m - 2 * this.r; k <= this.r; k++)
                {
                    temp1 = Probability1(k);
                    for (int c = m - k - this.r; c <= this.r; c++)
                        temp2 += temp1 * Probability1(c) * Probability1(m - k - c);
                }
            return temp2;
        }

        public void Experiment(double p)
        {
            int temp = 0;
            v = new int[3 * r - 2];
            P = new double[3 * r - 2];
            y = new int[n];
            Random rand = new Random();
            this.p = p;
    

            for (int i = 0; i < n; i++)
            {
                temp = Shots(rand) + Shots(rand) + Shots(rand);
                y[i] = temp;
                int j = 0;
                while (temp != j + 3)
                    j++;
                v[j]++;
                Yst += temp;
            }

            Array.Sort(y);

            Yst = Yst / (double)n;

            for (int i = 0; i < n; i++)
                S2 += Math.Pow(y[i] - Yst, 2);
            S2 = S2 / (double)n;


            for (int i = 0; i < 3 * r - 2; i++)
            {
                P[i] = Probability2(i + 3);
                Ey += (i + 3) * P[i];
            }

            for (int i = 0; i < 3 * r - 2; i++)
                Dy += (i + 3) * (i + 3) * P[i];
            Dy -= Ey * Ey;

            Me = y[n / 2];

            R = y[n - 1] - y[0];


        }

        public int Shots(Random rand)
        {
            int i = 1;
            double temp = rand.NextDouble();
            while ((temp > p) && (i < r))
            {
                temp = rand.NextDouble();
                i++;
            }
            return i;
        }

        public Task(int N, int N1, double p, int k, double a)
        {
            r = N;
            n = N1;
            this.a = a;
 
            Experiment(p);

            Intervals(k);
        }
    }
}
