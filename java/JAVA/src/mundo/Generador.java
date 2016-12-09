package mundo;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Generador {

	public final static int int32 = 0;
	public final static int int64 = 1;
	public final static int FLOAT = 2;
	public final static int DOUBLE = 3;

	public final static int REPLICAS = 5;
	
	private int[][] matrizInt32;
    private long[][] matrizInt64;
    private float[][] matrizFloat;
    private double[][] matrizDouble;
	
    
	public double sumaAInt32(int[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		int sum = 0;

		long inicio = System.nanoTime();
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaBInt32(int[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		int sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j++)
		{
			for(int i = 0; i < N; i++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaCInt32(int[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		int sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j+=2)
		{
			for(int i = 0; i < N; i+=2)
			{
				sum += a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	
	public double sumaAInt64(long [][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		long sum = 0;

		long inicio = System.nanoTime();
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaBInt64(long[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		long sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j++)
		{
			for(int i = 0; i < N; i++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaCInt64(long[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		long sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j+=2)
		{
			for(int i = 0; i < N; i+=2)
			{
				sum += a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	
	public double sumaAfloat(float [][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		float sum = 0;

		long inicio = System.nanoTime();
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaBfloat(float[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		float sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j++)
		{
			for(int i = 0; i < N; i++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaCfloat(float[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		float sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j+=2)
		{
			for(int i = 0; i < N; i+=2)
			{
				sum += a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	public double sumaADouble(double [][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		double sum = 0;

		long inicio = System.nanoTime();
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaBDouble(double[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		double sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j++)
		{
			for(int i = 0; i < N; i++)
			{
				sum += a[i][j];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	
	public double sumaCDouble(double[][] a)
	{
		double tiempo = 0;
		
		int N = a.length;
		double sum = 0;

		long inicio = System.nanoTime();
		for(int j = 0; j < N; j+=2)
		{
			for(int i = 0; i < N; i+=2)
			{
				sum += a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			}
		}
		long fin = System.nanoTime();

		tiempo = (double) (fin - inicio) / Math.pow(N, 2);
		
		return tiempo;
	}
	

	public void inicializar(int tamanio)
    {
	   matrizInt32 = new int[tamanio][tamanio];
       for(int i = 0; i < tamanio; i++)
       {
    	   for(int j = 0; j < tamanio; j++)
    	   {
    		   matrizInt32[i][j] = 1;
    	   }
       }
       
       matrizInt64 = new long[tamanio][tamanio];
       for(int i = 0; i < tamanio; i++)
       {
    	   for(int j = 0; j < tamanio; j++)
    	   {
    		   matrizInt64[i][j] = 1;
    	   }
       }
       
       matrizFloat = new float[tamanio][tamanio];
       for(int i = 0; i < tamanio; i++)
       {
    	   for(int j = 0; j < tamanio; j++)
    	   {
    		   matrizFloat[i][j] = 1;
    	   }
       }
       
       matrizDouble = new double[tamanio][tamanio];
       for(int i = 0; i < tamanio; i++)
       {
    	   for(int j = 0; j < tamanio; j++)
    	   {
    		   matrizDouble[i][j] = 1;
    	   }
       }
		
    }
	
	public void ejecutar() throws IOException
	{
		
		String ruta = "archivo.txt";
        File archivo = new File(ruta);
        BufferedWriter bw = new BufferedWriter(new FileWriter(archivo));

        
        int[] array = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800 };
       
        
        //REPLICAS
        for(int i = 0; i < REPLICAS; i++)
        {
           bw.write("Replica " + i);
           bw.newLine();
           //TAMAÑO ARREGLO
           for (int k = 0; k < array.length; k++)
           {
              inicializar(array[k]);
              
              //TIPO DE DATO
              for (int j = 0; j < 4; j++)
              {
                    if (j == 0)
                    {
                    	double tiempoSumaA = sumaAInt32(matrizInt32);
                        double tiempoSumaB = sumaBInt32(matrizInt32);
                        double tiempoSumaC = sumaCInt32(matrizInt32);
                           
                        bw.write(tiempoSumaA + "");
                        bw.newLine();
                        bw.write(tiempoSumaB + "");
                        bw.newLine();
                        bw.write(tiempoSumaC + "");
                        bw.newLine();

                    }
                    else if (j == 1)
                    {
                    	double tiempoSumaA = sumaAInt64(matrizInt64);
                        double tiempoSumaB = sumaBInt64(matrizInt64);
                        double tiempoSumaC = sumaCInt64(matrizInt64);
                           
                        bw.write(tiempoSumaA + "");
                        bw.newLine();
                        bw.write(tiempoSumaB + "");
                        bw.newLine();
                        bw.write(tiempoSumaC + "");
                        bw.newLine();

                    }
                    else if (j == 2)
                    {
                    	double tiempoSumaA = sumaAfloat(matrizFloat);
                        double tiempoSumaB = sumaBfloat(matrizFloat);
                        double tiempoSumaC = sumaCfloat(matrizFloat);
                           
                        bw.write(tiempoSumaA + "");
                        bw.newLine();
                        bw.write(tiempoSumaB + "");
                        bw.newLine();
                        bw.write(tiempoSumaC + "");
                        bw.newLine();

                    }
                    else if (j == 3)
                    {
                    	double tiempoSumaA = sumaADouble(matrizDouble);
                        double tiempoSumaB = sumaBDouble(matrizDouble);
                        double tiempoSumaC = sumaCDouble(matrizDouble);
                           
                        bw.write(tiempoSumaA + "");
                        bw.newLine();
                        bw.write(tiempoSumaB + "");
                        bw.newLine();
                        bw.write(tiempoSumaC + "");
                        bw.newLine();
                    }

                }

            }

        }
        

		bw.close();
		
		
	}

	public static void main(String[] args) 
	{		
		Generador g = new Generador();
		try
		{
			g.ejecutar();
		} 
		catch (IOException e) 
		{
			System.out.println("Error con el archivo");
			e.printStackTrace();
		}
		
		System.out.println("TERMINO");
	}

}
