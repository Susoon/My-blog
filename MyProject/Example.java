package test;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.Date;

public class Example
{
    public static void main(String[] args)
    {
	FileOutputStream f_stream = null;

	Data data = new Data();

	try
	    {
		f_stream = new FileOutputStream("test");

		ObjecOutputStream d_steram = new ObjectOutputStream(f_stream);

		d_stream.writeObject(data);

		f_stream.close();
		d_stream.close();
	    }
	catch(FileNotFoundException e)
	    {
		e.printStackTrace();
	    }
	catch(IOException e)
	    {
		e.printStackTrace();
	    }
    }
}