// @IMPORTS: Hold/0,StopGroup0/0,GetPFPolyID/1,GetScene/1,SetVisibility/1,IsLoaded/1
// @STRINGS: A:BlockPolygons|A:UnblockPolygons
// @RUN_OP: 0xe
// @RUN_TASK: 2
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x9 vars=
// @TASK_2: vars=int params=0

task_0_event_5(var_0_int)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_int)
{
	StopGroup0();
	return 0;
}


main(var_0_int)
{
	var_1_object = Obj(); var_2_object = Obj();
	GetPFPolyID(var_0_int);
	var_4_bool = var_0_int != (int)-1;
	if(var_4_bool != 0) {
		var_6_float = var_0_int / (int)4;
		var_0_int = var_6_float % (int)256;
	}
Label_24:
	var_8_bool = 0;
	func_70(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	var_12_bool = 0;
	func_12(var_12_bool);
	if(var_12_bool != 0) {
		GetScene(var_2_object);
		@@var_2_object:BlockPolygons(var_0_int, (int)255);
		SetVisibility((bool)1);
		func_69();
		TaskCall(1);
		func_6();
		TaskReturn();
		SetVisibility((bool)0);
		@@var_2_object:UnblockPolygons(var_0_int, (int)255);
		var_2_object = 0;
	} else {
		TaskCall(1);
		func_6();
		TaskReturn();
	}
	goto Label_24;
	
}
EMIT "Return(); Pop(2)";


func_0()
{
	Hold();
	return 0;
}


func_69()
{
	return 0;
}


func_70(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_6()
{
	Hold();
	return 0;
}


func_12(var_12_bool)
{
	var_12_bool = 1;
	return 0;
}


