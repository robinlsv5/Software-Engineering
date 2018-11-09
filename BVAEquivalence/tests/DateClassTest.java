import org.junit.Test;

import java.util.Calendar;
import java.util.Date;

import static org.junit.Assert.*;

public class DateClassTest
{

    @Test
    public void getDate()
    {
        Calendar cal = Calendar.getInstance();
        DateClass dc = new DateClass(cal.getTime());

        String string = dc.getDate();
        assertEquals("09/11/2018", string);
    }

    @Test
    public void incrementDays()
    {
        Calendar cal = Calendar.getInstance();
        DateClass dc = new DateClass(cal.getTime());

        dc.incrementDays(3);
        String string = dc.getDate();
        assertEquals("12/11/2018", string);
    }
}