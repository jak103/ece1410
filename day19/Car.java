public class Car extends Vehicle implements AutoCloseable {
    public Car(String make, String model, int year) {
        super(make, model, year);
    }

    int getNumberOfWheels() {
        return 4;
    }

    @Override
    public void close() {
        System.out.println("Car resources should be closed by now.");
    }

    public void move() {
        System.out.println("The car is moving.");
    }
}