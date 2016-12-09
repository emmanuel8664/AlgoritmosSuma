using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;

namespace GeneradorDatos
{
   public class Program
    {
        //Int32  -> 0
        //Int64  -> 1
        //Float  -> 2
        //Double -> 3

        private static int[,] matrizInt32;
        private static long[,] matrizInt64;
        private static float[,] matrizFloat;
        private static double[,] matrizDouble;

        public static void inicializar(int n)
        {
            matrizInt32 = new int[n,n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    matrizInt32[i,j] = 1;
                }
            }

            matrizInt64 = new long[n, n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    matrizInt64[i, j] = 1;
                }
            }

            matrizFloat = new float[n, n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    matrizFloat[i, j] = 1;
                }
            }  
            matrizDouble = new double[n, n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    matrizDouble[i,j] = 1;
                }
            }
        }

        //Int32  -> 0
       public static double sumaAInt(int n)
        {
            int sum = 0;


            Stopwatch sw = new Stopwatch();

            sw.Start();
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    sum = sum + matrizInt32[i, j];
                }
            }

   
            sw.Stop();

           
            double respuesta = (double) (sw.ElapsedMilliseconds* 1000000) / (double) (n*n);

            return respuesta;
        }

        public static double sumaBInt(int n)
        {
            int sum = 0;

            Stopwatch sw = new Stopwatch();

            sw.Start();
            for (int j = 0; j < n; j++)
            {
                for (int i = 0; i < n; i++)
                {
                    sum = sum + matrizInt32[i, j];
                }
            }

            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);


            return respuesta;
        }

        public static double sumaCInt(int n)
        {
            int i, j;
            int sum = 0;

            Stopwatch sw = new Stopwatch();

            sw.Start();
            for (j = 0; j < n; j += 2)
            {
                for (i = 0; i < n; i += 2)
                {
                    sum += (matrizInt32[i,j] + matrizInt32[i + 1,j] + matrizInt32[i,j + 1] + matrizInt32[i + 1,j + 1]);


                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }



        //  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


        //Int64  -> 1
        public static double sumaALong(int n)
        {

            int i, j;
            long sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    sum = sum + matrizInt64[i, j];
                }
            }

            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        public static double sumaBLong(int n)
        {

            int i, j;
            long sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (j = 0; j < n; j++)
            {
                for (i = 0; i < n; i++)
                {
                    sum = sum + matrizInt64[i, j];
                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        public static double sumaCLong(int n)
        {

            int i, j;
            long sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (j = 0; j < n; j += 2)
            {
                for (i = 0; i < n; i += 2)
                {
                    sum += (matrizInt64[i, j] + matrizInt64[i + 1, j] + matrizInt64[i, j + 1] + matrizInt64[i + 1, j + 1]);


                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }



        //  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


        //Float  -> 2

        public static double sumaAFloat(int n)
        {

            int i, j;
            float sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    sum = sum + matrizFloat[i, j];
                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        public static double sumaBFloat(int n)
        {

            int i, j;
            float sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (j = 0; j < n; j++)
            {
                for (i = 0; i < n; i++)
                {
                    sum = sum + matrizFloat[i, j];
                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        public static double sumaCFloat(int n)
        {

            int i, j;
            float sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (j = 0; j < n; j += 2)
            {
                for (i = 0; i < n; i += 2)
                {
                    sum += (matrizFloat[i, j] + matrizFloat[i + 1, j] + matrizFloat[i, j + 1] + matrizFloat[i + 1, j + 1]);


                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        //  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //Double  -> 3
        public static double sumaADouble(int n)
        {

            int i, j;
            double sum = 0;
            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    sum = sum + matrizDouble[i, j];
                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        public static double sumaBDouble(int n)
        {

            int i, j;
            double sum = 0;

            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (j = 0; j < n; j++)
            {
                for (i = 0; i < n; i++)
                {
                    sum = sum + matrizDouble[i, j];
                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }

        public static double sumaCDouble(int n)
        {

            int i, j;
            double sum = 0;

            Stopwatch sw = new Stopwatch();
            sw.Start();
            for (j = 0; j < n; j += 2)
            {
                for (i = 0; i < n; i += 2)
                {
                    sum += (matrizDouble[i, j] + matrizDouble[i + 1, j] + matrizDouble[i, j + 1] + matrizDouble[i + 1, j + 1]);


                }
            }
            sw.Stop();


            double respuesta = (double)(sw.ElapsedMilliseconds * 1000000) / (double)(n * n);

            return respuesta;
        }



        
        static void Main(string[] args)
        {

            using (StreamWriter writer =
            new StreamWriter("datosCSharp.txt"))
            {
                int[] array = new int[17] { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800 };

                //REPLICAS
                for (int i = 0; i < 5; i++)
                {
                    writer.WriteLine("Replica"+i + "\n");
                    foreach (int tamanio in array)
                    {
                        inicializar(tamanio);

                        //TIPO DATO
                        //Int32  -> 0 
                        //Int64  -> 1
                        //Float  -> 2
                        //Double -> 3
                        for (int j = 0; j < 4; j++)
                        {
                            if (j == 0)
                            {
                                double tiempoSumaA = sumaAInt(tamanio);
                                double tiempoSumaB = sumaBInt(tamanio);
                                double tiempoSumaC = sumaCInt(tamanio);

                                writer.WriteLine(tiempoSumaA + "\n");
                                writer.WriteLine(tiempoSumaB + "\n");
                                writer.WriteLine(tiempoSumaC + "\n");
                            }
                            else if (j == 1)
                            {
                                double tiempoSumaA = sumaALong(tamanio);
                                double tiempoSumaB = sumaBLong(tamanio);
                                double tiempoSumaC = sumaCLong(tamanio);

                                writer.WriteLine(tiempoSumaA + "\n");
                                writer.WriteLine(tiempoSumaB + "\n");
                                writer.WriteLine(tiempoSumaC + "\n");
                            }
                            else if (j == 2)
                            {
                                double tiempoSumaA = sumaAFloat(tamanio);
                                double tiempoSumaB = sumaBFloat(tamanio);
                                double tiempoSumaC = sumaCFloat(tamanio);

                                writer.WriteLine(tiempoSumaA + "\n");
                                writer.WriteLine(tiempoSumaB + "\n");
                                writer.WriteLine(tiempoSumaC + "\n");
                            }
                            else if (j == 3)
                            {
                                double tiempoSumaA = sumaADouble(tamanio);
                                double tiempoSumaB = sumaBDouble(tamanio);
                                double tiempoSumaC = sumaCDouble(tamanio);

                                writer.WriteLine(tiempoSumaA + "\n");
                                writer.WriteLine(tiempoSumaB + "\n");
                                writer.WriteLine(tiempoSumaC + "\n");

                            }
                        }
                    }
                }
            }
            Console.WriteLine("TERMINO");
        }
    }
}
