import org.junit.Test;

import static org.junit.Assert.*;

public class TriangleTest {

    @Test
    public void typeTriangle()
    {
        Triangle triangle = new Triangle();

        String tempTriangle = triangle.typeTriangle(1, 2, 0);
        assertSame("Invalid dimensions!", tempTriangle);

        tempTriangle = triangle.typeTriangle(3, 3, 3);
        assertSame("Equilateral triangle", tempTriangle);

        tempTriangle = triangle.typeTriangle(7, 3, 3);
        assertSame("Isosceles triangle", tempTriangle);

        tempTriangle = triangle.typeTriangle(1, 2, 3);
        assertSame("Scalene triangle", tempTriangle);
    }
}