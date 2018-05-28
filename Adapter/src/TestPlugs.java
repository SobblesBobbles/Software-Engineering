
/*
 * Test different brands of plugs.
 */
public final class TestPlugs{

	public static void main (String args[]){
		testGermanToUKAdapter();
		testUKToGermanAdapter();
		
	}


	/*	
	 *	Test Method for testing GermanToUK Adapter.
	 */
	public static void testGermanToUKAdapter(){
		/* create a germany plug connector (brand: zest) */
		GermanPlugConnector plug = new ZestPlug();
		/* create a UK socket */
		UKElectricalSocket socket = new UKElectricalSocket();
		/* create an adapter */
		UKPlugConnector ukAdapter = new GermanToUKPlugConnectorAdapter(plug);
		/* use this adapter in a UK socket */
		socket.plugIn(ukAdapter);
	}

	
	public static void testUKToGermanAdapter(){
		
		GermanElectricalSocket germanSocket = new GermanElectricalSocket();
		
		UKPlugConnector Dyson = new Dyson();
		
		GermanPlugConnector G_to_UK = new UKToGermanPlugConnectorAdapter(Dyson);
		
		germanSocket.plugIn(G_to_UK);
		
		
		
	}
}
