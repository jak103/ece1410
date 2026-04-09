public class Main {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        System.out.println("Hello class!");

        for (int i = 0; i < 5; i++) {
            System.out.println("Hello " + i);
        }

        int whileCount = 0;
        String input = "";
        while (input.compareTo("exit") != 0) {
            whileCount++;
            input = System.console().readLine();
            System.out.println("You entered: " + input + " (length: " + input.length() + ")");
        }

        if (whileCount > 3) {
            System.out.print("Took you awhile to figure that out...");
        }

        switch (whileCount) {
            case 1:
                System.out.println("You only entered one value.");
                break;
            case 2:
                System.out.println("You entered two values.");
                break;
            case 3:
                System.out.println("You entered three values.");
                break;
            default:
                break;
        }


            Car car1 = new Car("Toyota", "Camry", 2020);

            System.out.println("Car make: " + car1.getMake());
            System.out.println("Car model: " + car1.getModel());
            System.out.println("Car year: " + car1.getYear());
            System.out.println("Car number of wheels: " + car1.getNumberOfWheels());


        Vehicle v1 = car1;

        System.out.println("Vehicle make: " + v1.getMake());
        System.out.println("Vehicle model: " + v1.getModel());
        System.out.println("Vehicle year: " + v1.getYear());
        //System.out.println("Vehicle number of wheels: " + v1.getNumberOfWheels());

        AutoCloseable ac1 = car1;

        try{
            ac1.close();
        } catch (Exception e) {
            System.out.println("An error occurred while closing the car resources: " + e.getMessage());
        }
    }
}