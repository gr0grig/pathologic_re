// @IMPORTS: Hold/0,ClassifyActor/2,GetOpenSide/1,Open/1,Close/0,GetProperty/2
// @STRINGS: W:locked
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x4 vars=object
// @EVENT_38: op=0x2f vars=object
// @PE: 0x43

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_int = 0; var_3_bool = 0; var_4_int = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 1) {
		var_7_bool = 0; var_8_object = Obj();
		var_0_object = var_8_object;
		func_67(var_8_object);
		var_14_bool = var_7_bool == 0; //@nz
		if(var_14_bool != 1) {
			var_5_bool = 0;
		}
	}
	if(var_5_bool != 0) {
		return 4;
	}
	ClassifyActor(var_3_bool, var_0_object);
	var_3_bool = !var_3_bool;
	GetOpenSide(var_4_int);
	var_15_bool = var_4_int == 0; //@nz
	if(var_15_bool != 0) {
		Open(var_3_bool);
	} else {
		var_17_bool = var_4_int > (int)0;
		if(var_17_bool != 0) {
			var_18_bool = var_3_bool;
			if(var_18_bool != 0) {
				Close();
			} else {
				Open(var_3_bool);
		}
			var_19_bool = var_3_bool;
			if(var_19_bool != 0) {
				Open(var_3_bool);
				goto Label_46;
			}
			Close();
		}
		goto Label_46;
	}
Label_46:
	return 4;
	
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0;
	var_3_bool = 0;
	var_3_bool = 1;
	var_4_bool = var_0_object == 0; //@nz
	if(var_4_bool != 1) {
		var_5_bool = 0; var_6_object = Obj();
		var_0_object = var_6_object;
		func_67(var_6_object);
		var_12_bool = var_5_bool == 0; //@nz
		if(var_12_bool != 1) {
			var_3_bool = 0;
		}
	}
	if(var_3_bool != 0) {
		return 2;
	}
	ClassifyActor(var_2_bool, var_0_object);
	var_13_bool = var_2_bool == 0; //@nz
	Open(var_13_bool);
	return 2;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_73(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetProperty("locked", var_9_int);
	var_7_bool = var_9_int != (int)0;
	return 2;
}


func_67(var_5_bool)
{
	var_7_bool = 0;
	func_73(var_7_bool);
	var_5_bool = !var_7_bool;
	return 0;
}


