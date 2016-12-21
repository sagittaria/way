package interfaceTutorial;

public class OperateBMW760i implements OperateCar{

	@Override
	public int turn(Direction direction, double radius, double startSpeed,
			double endSpeed) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int changeLanes(Direction direction, double startSpeed,
			double endSpeed) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int signalTurn(Direction direction, boolean signalOn) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int getRadarFront(double distanceToCar, double speedOfCar) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int getRadarRear(double distanceToCar, double speedOfCar) {
		// TODO Auto-generated method stub
		return 0;
	}

}
