// @IMPORTS: Hold/0,PlayAnimation/2,WaitForAnimEnd/0,GetScene/1,AddActor/5,StopAnimation/0,RemoveActor/1,StopGroup0/0,IsLoaded/1,self/1
// @STRINGS: W:all|W:ill|W:b10q04_bull_envelope|W:cleanup|W:restore
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_6: op=0x22 vars=
// @EVENT_5: op=0x2e vars=
// @EVENT_26: op=0x31 vars=string
// @STANDALONE_EVENT_32: op=0x50 vars=

task_0_event_6(var_0_bool)
{
	StopAnimation();
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_74(var_2_object);
		RemoveActor(var_2_object);
	}
	Hold();
	return 0;
}


task_0_event_5(var_0_bool)
{
	StopGroup0();
	return 0;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = var_3_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_74(var_7_object);
			RemoveActor(var_7_object);
		}
	} else {
		var_11_bool = var_1_string == "restore";
		if(var_11_bool == 0) goto Label_68;
		var_0_bool = false;
	}
Label_68:
	return 2;
	
}


event_32(var_0_bool)
{
	var_1_object = GlobalVars[0];
	if(var_1_object != 0) {
		var_2_object = GlobalVars[0];
		RemoveActor(var_2_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_bool = 0;
	func_69(var_1_bool);
	var_4_bool = var_1_bool == 0; //@nz
	if(var_4_bool != 0) {
		Hold();
	}
	func_20();
	
Label_10:
	if((bool)1 != 0) {
		PlayAnimation("all", "ill");
		WaitForAnimEnd();
		goto Label_10;
	}
	return 0;
}


func_74(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj();
	self(var_9_object);
	var_9_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_20()
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj();
	GetScene(var_7_object);
	AddActor(var_8_object, "b10q04_bull_envelope", var_7_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_12_object = GlobalVars[0];
	var_8_object = var_12_object;
	GlobalVars[0] = var_12_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_69(var_1_bool)
{
	var_2_bool = 0; var_3_bool = 0;
	IsLoaded(var_3_bool);
	var_3_bool = var_1_bool;
	return 2;
}


