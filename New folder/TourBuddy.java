import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class TourBuddy {
    public static void main(String[] args) {
        String username = "root"; // Replace with your database username
        String password = "";     // Replace with your database password
        String url = "jdbc:mysql://localhost:3306/tour_buddy"; // Update database URL and name

        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            // Load the JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Establish a connection
            conn = DriverManager.getConnection(url, username, password);
            System.out.println("Connected to the database.");

            // Create a statement
            stmt = conn.createStatement();

            // Execute a query
            String query = "SELECT * FROM Guide";
            rs = stmt.executeQuery(query);

            // Process the result set
            while (rs.next()) {
                System.out.println("Guide ID: " + rs.getInt("Guide_ID"));
                System.out.println("Name: " + rs.getString("Name"));
                System.out.println("Password: " + rs.getString("Password"));
                System.out.println("Rating: " + rs.getFloat("Rating"));
                System.out.println("Experience (Years): " + rs.getInt("Experience_Year"));
                System.out.println("Language Spoken: " + rs.getString("Language_Spoken"));
                System.out.println("Hourly Rate: " + rs.getDouble("Hourly_Rate"));
                System.out.println("Reviews Count: " + rs.getInt("Reviews_Count"));
                System.out.println("Booking ID: " + rs.getInt("Booking_ID"));
                System.out.println("--------------------------------");
            }
        } catch (ClassNotFoundException e) {
            System.err.println("JDBC Driver not found: " + e.getMessage());
        } catch (SQLException e) {
            System.err.println("SQL Exception: " + e.getMessage());
        } finally {
            // Close resources
            try {
                if (rs != null) rs.close();
                if (stmt != null) stmt.close();
                if (conn != null) conn.close();
            } catch (SQLException e) {
                System.err.println("Error closing resources: " + e.getMessage());
            }
        }
    }
}