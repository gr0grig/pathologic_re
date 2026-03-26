// @IMPORTS: Hold/0,SetVisibility/1,RemoveActor/1,GetPFPolyID/1,GetMainOutdoorScene/1,Trace/1,self/1
// @STRINGS: W:cleanup|W:restore|W:Blocking polygons: |A:BlockPolygons|A:UnblockPolygons|W:ERROR: Can't find PF polygon to block
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_5: op=0x10 vars=
// @EVENT_6: op=0x1a vars=
// @PE: 0x5

task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "cleanup";
	if(var_3_bool != 0) {
		var_0_bool = true;
	} else {
		var_5_bool = var_1_string == "restore";
		if(var_5_bool == 0) goto Label_15;
		var_0_bool = false;
	}
Label_15:
	return 0;
	
}


task_0_event_5(var_0_bool)
{
	var_1_bool = var_0_bool == 0; //@nz
	if(var_1_bool != 0) {
		SetVisibility((bool)1);
		var_3_bool = 0;
		func_38((bool)1);
	}
	return 0;
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_bool = 0;
		func_38((bool)0);
		var_17_object = Obj();
		func_67(var_17_object);
		RemoveActor(var_17_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_67(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_38(var_2_bool)
{
	var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_object = Obj();
	GetPFPolyID(var_5_int);
	var_8_bool = var_5_int != (int)-1;
	if(var_8_bool != 0) {
		GetMainOutdoorScene(var_6_object);
		var_9_bool = var_2_bool;
		if(var_9_bool != 0) {
			var_12_int = var_5_int & (int)1016;
			var_13_int = "Blocking polygons: " + var_12_int;
			Trace(var_13_int);
			@@var_6_object:BlockPolygons(var_5_int, (int)1016);
		} else {
			@@var_6_object:UnblockPolygons(var_5_int, (int)1016);
	}
		Trace("ERROR: Can't find PF polygon to block");
	}
	var_6_object = 0;
	goto Label_66;
	
Label_66:
	return 4;
	
}


