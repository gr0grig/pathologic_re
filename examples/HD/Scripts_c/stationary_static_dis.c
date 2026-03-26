// @IMPORTS: Hold/0,StopGroup0/0,sync/0,GetPFPolyID/1,GetScene/1,SetVisibility/1,IsLoaded/1
// @STRINGS: A:BlockPolygons|A:UnblockPolygons
// @RUN_OP: 0x1b
// @RUN_TASK: 2
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x14 vars=
// @TASK_2: vars=int params=0

task_0_event_5(var_0_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6(var_0_int)
{
	StopGroup0();
	sync();
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
Label_37:
	var_8_bool = 0;
	func_83(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	var_14_bool = 0;
	func_25(var_14_bool);
	if(var_14_bool != 0) {
		GetScene(var_2_object);
		@@var_2_object:BlockPolygons(var_0_int, (int)255);
		SetVisibility((bool)1);
		func_82();
		TaskCall(1);
		func_13();
		TaskReturn();
		SetVisibility((bool)0);
		@@var_2_object:UnblockPolygons(var_0_int, (int)255);
		var_2_object = 0;
	} else {
		TaskCall(1);
		func_13();
		TaskReturn();
	}
	goto Label_37;
	
}
EMIT "Return(); Pop(2)";


func_0()
{
	
Label_0:
	Hold();
	var_12_bool = 0;
	func_83(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool == 1) goto Label_0;
	return 0;
}


func_13()
{
	
Label_13:
	Hold();
	var_17_bool = 0;
	func_83(var_17_bool);
	if(var_17_bool == 1) goto Label_13;
	return 0;
}


func_82()
{
	return 0;
}


func_83(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_25(var_14_bool)
{
	var_14_bool = 1;
	return 0;
}


