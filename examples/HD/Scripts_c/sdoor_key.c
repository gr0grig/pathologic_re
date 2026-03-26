// @IMPORTS: GetProperty/2,Hold/0,PlaySound/1,Trace/1,ClassifyActor/2,GetOpenSide/1,Open/1,Close/0,SetProperty/2
// @STRINGS: W:key|A:GetItemCountOfType|W:door_closed|W:Door is locked
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_38: op=0x47 vars=object
// @PE: 0x5b,0x68

task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_string = ""; var_4_int = 0;
	var_5_bool = 0;
	func_97(var_5_bool);
	if(var_5_bool != 0) {
		GetProperty("key", var_3_string);
		@@var_0_object:GetItemCountOfType(var_4_int, var_3_string);
		var_11_int = var_4_int;
		if(var_11_int != 0) {
			var_12_bool = 0;
			func_104((bool)0);
		}
	}
	var_14_object = Obj();
	var_0_object = var_14_object;
	func_25(var_14_object);
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
		func_91(var_6_object);
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
	
Label_21:
	Hold();
	goto Label_21;
}
EMIT "Return(); Pop(0)";


func_104(var_12_bool)
{
	SetProperty("locked", var_12_bool);
	return 0;
}


func_97(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetProperty("locked", var_9_int);
	var_7_bool = var_9_int != (int)0;
	return 2;
}


func_91(var_5_bool)
{
	var_7_bool = 0;
	func_97(var_7_bool);
	var_5_bool = !var_7_bool;
	return 0;
}


func_25(var_14_object)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0;
	var_19_bool = var_14_object == 0; //@nz
	if(var_19_bool != 0) {
		return 4;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_14_object = var_21_object;
	func_91(var_21_object);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 4;
	}
	ClassifyActor(var_17_bool, var_14_object);
	var_17_bool = !var_17_bool;
	GetOpenSide(var_18_int);
	var_26_bool = var_18_int == 0; //@nz
	if(var_26_bool != 0) {
		Open(var_17_bool);
	} else {
		var_28_bool = var_18_int > (int)0;
		if(var_28_bool != 0) {
			var_29_bool = var_17_bool;
			if(var_29_bool != 0) {
				Close();
			} else {
				Open(var_17_bool);
		}
			var_30_bool = var_17_bool;
			if(var_30_bool != 0) {
				Open(var_17_bool);
				goto Label_70;
			}
			Close();
		}
		goto Label_70;
	}
Label_70:
	return 4;
	
}


