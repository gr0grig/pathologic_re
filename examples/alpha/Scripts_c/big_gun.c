// @IMPORTS: GetPFPolyID/1,Trace/1,GetMainOutdoorScene/1,Hold/0,SetVisibility/1,StopGroup0/0
// @STRINGS: W:Gun blocking polygon: |A:BlockPolygons
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x15 vars=

task_0_event_5()
{
	SetVisibility((bool)1);
	StopGroup0();
	return 0;
}


main()
{
	var_0_int = 0; var_1_object = Obj(); var_2_int = 0; var_3_object = Obj();
	GetPFPolyID(var_2_int);
	var_5_bool = var_2_int != (int)-1;
	if(var_5_bool != 0) {
		var_8_int = var_2_int & (int)248;
		var_9_int = "Gun blocking polygon: " + var_8_int;
		Trace(var_9_int);
		GetMainOutdoorScene(var_3_object);
		@@var_3_object:BlockPolygons(var_2_int, (int)248);
		var_3_object = 0;
	}
	Hold();
	return 4;
}


