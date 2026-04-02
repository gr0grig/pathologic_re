maintask task_0
{
	void init(void)
	{
		int var_2_int; object var_3_object;
		@GetPFPolyID(var_2_int);
		if(var_2_int != -1) {
			@Trace("Gun blocking polygon: " + (var_2_int & 1016));
			@GetMainOutdoorScene(var_3_object);
			var_3_object->BlockPolygons(var_2_int, 1016);
			var_3_object = null;
		}
		@Hold();
	}

	void OnLoad(void)
	{
		@SetVisibility(true);
		@StopGroup0();
	}

}


