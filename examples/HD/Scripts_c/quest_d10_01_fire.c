// @IMPORTS: GetScene/1,AddScriptedActor/5,Hold/0,FindParticleSystem/2,Trace/1,StopGroup0/0,sync/0,RemoveActor/1,IsLoaded/1,self/1
// @STRINGS: W:trigger_d10q01_fire|W:trigger_fire_damage.bin|W:Can't find fire particle system|A:AddSource|A:Enable|W:cleanup|W:restore
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object params=0
// @EVENT_6: op=0x43 vars=
// @EVENT_5: op=0x49 vars=
// @EVENT_32: op=0x4e vars=
// @EVENT_26: op=0x53 vars=string
// @PE: 0x43

task_0_event_6(var_0_bool, var_1_object)
{
	func_111();
	Hold();
	return 0;
}


task_0_event_5(var_0_bool, var_1_object)
{
	StopGroup0();
	sync();
	return 0;
}


task_0_event_32(var_0_bool, var_1_object)
{
	var_2_object = var_1_object;
	if(var_2_object != 0) {
		RemoveActor(var_1_object);
	}
	return 0;
}


task_0_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0;
	var_6_bool = var_2_string == "cleanup";
	if(var_6_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_4_bool);
		var_7_bool = 0;
		var_7_bool = 0;
		var_8_bool = var_4_bool == 0; //@nz
		if(var_8_bool != 0) {
			var_9_bool = 0;
			func_127(var_9_bool);
			if(var_9_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_10_object = Obj();
			func_134(var_10_object);
			RemoveActor(var_10_object);
		}
	} else {
		var_14_bool = var_2_string == "restore";
		if(var_14_bool == 0) goto Label_110;
		var_0_bool = false;
	}
Label_110:
	return 2;
	
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_object = Obj(); var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_cvector = CVector(0,0,0);
	GetScene(var_8_object);
	AddScriptedActor(var_1_object, "trigger_d10q01_fire", "trigger_fire_damage.bin", var_8_object, CVector(0.0, 0.0, 0.0));
	var_17_bool = 0;
	func_129(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		Hold();
	}
	FindParticleSystem("fire", var_9_object);
	var_22_bool = var_9_object == 0; //@ne
	if(var_22_bool != 0) {
		Trace("Can't find fire particle system");
		return 12;
	}
	var_10_float = 60.0;
	var_11_float = -var_10_float;
	
Label_26:
	var_24_bool = var_11_float < var_10_float;
	if(var_24_bool != 0) {
		var_12_float = -var_10_float;

	Label_29:
		var_25_bool = var_12_float < var_10_float;
		if(var_25_bool != 0) {
			var_26_float = var_11_float * var_11_float;
			var_27_float = var_12_float * var_12_float;
			var_28_int = var_26_float + var_27_float;
			var_29_float = var_10_float * var_10_float;
			var_30_bool = var_28_int > var_29_float;
			if(var_30_bool != 0) {
			} else {
				var_33_float = GetByIndex(var_13_cvector, 0);
				var_11_float = var_33_float;
				SetByIndex(var_13_cvector, 0) = var_33_float;
				var_34_float = GetByIndex(var_13_cvector, 1);
				SetByIndex(var_13_cvector, 1) = (float)0;
				var_35_float = GetByIndex(var_13_cvector, 2);
				var_12_float = var_35_float;
				SetByIndex(var_13_cvector, 2) = var_35_float;
				@@var_9_object:AddSource(var_13_cvector, CVector(0.0, 1.0, 0.0), (float)0.0);
		}
			var_39_float = var_10_float / (int)10;
			var_11_float = var_11_float + var_39_float;
			goto Label_26;
	}
		@@var_9_object:Enable();

	Label_61:
		Hold();
		goto Label_61;
	}
	var_32_float = var_10_float / (int)10;
	var_12_float = var_12_float + var_32_float;
	goto Label_29;
	
}
EMIT "Return(); Pop(12)";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";


func_129(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
	return 2;
}


func_127(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_134(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_111()
{
	var_2_bool = 0;
	var_2_bool = 0;
	var_3_bool = var_0_bool;
	if(var_3_bool != 0) {
		var_4_bool = 0;
		func_127(var_4_bool);
		if(var_4_bool != 0) {
			var_2_bool = 1;
		}
	}
	if(var_2_bool != 0) {
		var_5_object = Obj();
		func_134(var_5_object);
		RemoveActor(var_5_object);
	}
	return 0;
}


