// @IMPORTS: GetGameTime/1,AddActor/4,Hold/0,sync/0,self/1,CreateObjectVector/1,RemoveActor/1
// @STRINGS: W:d8q01_well_block|A:size|A:get|A:clear
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars=object,bool params=0
// @EVENT_5: op=0x0 vars=
// @EVENT_6: op=0x1c vars=
// @PE: 0x15,0x1c

task_0_event_5(var_0_object, var_1_bool)
{
	var_2_float = 0; var_3_object = Obj(); var_4_float = 0; var_5_object = Obj();
	var_6_bool = var_1_bool == 0; //@nz
	if(var_6_bool != 0) {
		GetGameTime(var_4_float);
		var_8_bool = var_4_float >= (int)168;
		if(var_8_bool != 0) {
			var_1_bool = true;
			var_10_object = Obj();
			func_44(var_10_object);
			AddActor(var_5_object, "d8q01_well_block", var_10_object, CVector(0.0, 0.0, 0.0));
			var_5_object = 0;
		}
	}
	func_21();
	return 4;
}


task_0_event_6(var_0_object, var_1_bool)
{
	func_39(var_1_bool);
	sync();
	return 0;
}


main(var_0_object, var_1_bool)
{
	func_34(var_1_bool);
	
Label_24:
	Hold();
	goto Label_24;
}
EMIT "Return(); Pop(0)";


func_34(var_0_object)
{
	var_2_object = Obj();
	func_50(var_2_object);
	var_0_object = var_2_object;
	return 0;
}


func_39(var_0_object)
{
	var_2_object = Obj();
	var_2_object = var_0_object;
	func_56(var_2_object);
	return 0;
}


func_44(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_50(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	CreateObjectVector(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_56(var_2_object)
{
	var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_object = Obj();
	var_9_object = var_2_object;
	if(var_9_object != 0) {
		@@var_2_object:size(var_6_int);
		var_7_int = 0;

	Label_62:
		var_10_bool = var_7_int < var_6_int;
		if(var_10_bool != 0) {
			@@var_2_object:get(var_8_object, var_7_int);
			var_11_object = var_8_object;
			if(var_11_object != 0) {
				RemoveActor(var_8_object);
			}
			var_8_object = 0;
			var_7_int = var_7_int + (int)1;
			goto Label_62;
		}
		@@var_2_object:clear();
	}
	return 6;
}


