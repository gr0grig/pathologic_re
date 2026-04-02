// @GLOBALS: 0:bool:

maintask task_0
{
	void init(void)
	{
		object var_1_object;
	
		for(;;) {
			object var_2_object;
			func_89(var_2_object);
			var_2_object = var_1_object;

			for(;;) {
				bool var_6_bool; object var_7_object;
				var_1_object = var_7_object;
				func_236(var_6_bool, var_7_object);
				if(var_6_bool == 0) goto Label_17;
				object var_19_object;
				var_1_object = var_19_object;
				TaskCall(1);
				func_23(var_19_object);
				TaskReturn();
			}

		Label_17:
			@Sleep(1);
			var_1_object = null;
		}
	}
	EMIT "Return(); Pop(2)";

}


task task_1
{
}


void OnTrigger(string name)
{
	bool var_2_bool;
	if(name == "cleanup") {
		var_5_bool = GlobalVars[0];
		GlobalVars[0] = true;
		@IsLoaded(var_2_bool);
		if(!var_2_bool) { //@nz
			object var_7_object;
			func_209(var_7_object);
			@RemoveActor(var_7_object);
		}
	} else if(name == "restore") {
		var_12_bool = GlobalVars[0];
		GlobalVars[0] = false;
	}
	
}


void OnUnload(void)
{
	var_0_bool = GlobalVars[0];
	if(var_0_bool != 0) {
		object var_1_object;
		func_209(var_1_object);
		@RemoveActor(var_1_object);
	}
}


void func_96(bool var_97_bool, object var_98_object)
{
	bool var_100_bool;
	@IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
}


void func_226(float var_101_float)
{
	object var_103_object;
	@CreateFloatVector(var_103_object);
	var_103_object->add(var_101_float);
	@SendWorldWndMessage(14, var_103_object);
}
EMIT "Stack[-1] = 0";


void func_101(bool var_48_bool, object var_49_object, string var_50_string)
{
	var_55_bool = IsFuncExist(var_49_object, "HasProperty", 2);
	if(!var_55_bool) { //@nz
		var_48_bool = false;
		return 2;
	}
	bool var_52_bool;
	var_49_object->HasProperty(var_50_string, var_52_bool);
	var_52_bool = var_48_bool;
}


// @pe
void func_249(bool var_36_bool, object var_37_object)
{
	object var_39_object;
	var_37_object = var_39_object;
	float var_38_float;
	func_81(var_38_float, var_39_object);
	var_36_bool = var_38_float < 40000.0;
}


void func_135(float var_41_float, object var_42_object, float var_43_float)
{
	float var_47_float;
	object var_49_object;
	var_42_object = var_49_object;
	bool var_48_bool;
	func_101(var_48_bool, var_49_object, "disease");
	if(!var_48_bool) { //@nz
		var_41_float = 0;
		return 4;
	}
	float var_46_float = 0;
	bool var_58_bool; object var_59_object;
	func_101(var_58_bool, var_59_object, "armor_disease");
	if(var_58_bool != 0) {
		var_59_object->GetProperty("armor_disease", var_46_float);
		var_46_float /= 100;
	}
	bool var_63_bool; object var_64_object;
	func_101(var_63_bool, var_64_object, "immunity");
	if(var_63_bool != 0) {
		var_64_object->GetProperty("immunity", var_47_float);
		var_46_float += var_47_float;
		bool var_67_bool; object var_68_object; float var_70_float;
		var_42_object = var_68_object;
		var_70_float = -var_43_float;
		func_113(var_67_bool, var_68_object, "immunity", var_70_float, (float)0, (float)1);
	}
	if(var_46_float >= 1) {
		var_41_float = 0.0;
		return 4;
	}
	var_43_float *= ((1 - var_46_float) / 2);
	bool var_91_bool; object var_92_object; float var_94_float;
	var_42_object = var_92_object;
	var_43_float = var_94_float;
	func_113(var_91_bool, var_92_object, "disease", var_94_float, (float)0, (float)1);
	bool var_97_bool; object var_98_object;
	var_42_object = var_98_object;
	func_96(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		float var_101_float;
		var_43_float = var_101_float;
		func_226(var_101_float);
	}
	var_43_float = var_41_float;
}


void func_204(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


// @pe
void func_236(bool var_6_bool, object var_7_object)
{
	var_6_bool = false;
	if(var_7_object != 0) {
		float var_9_float; object var_10_object;
		var_7_object = var_10_object;
		func_81(var_9_float, var_10_object);
		if(var_9_float < 360000.0)
			var_6_bool = true;
	}
}


void func_113(bool var_67_bool, object var_68_object, string var_69_string, float var_70_float, float var_71_float, float var_72_float)
{
	object var_76_object;
	var_68_object = var_76_object;
	string var_77_string;
	var_69_string = var_77_string;
	bool var_75_bool;
	func_101(var_75_bool, var_76_object, var_77_string);
	if(!var_75_bool) //@nz
		var_67_bool = false;
	float var_74_float;
	var_68_object->GetProperty(var_69_string, var_74_float);
	float var_79_float; float var_81_float; float var_82_float;
	var_71_float = var_81_float;
	var_72_float = var_82_float;
	func_215(var_79_float, (var_74_float + var_70_float), var_81_float, var_82_float);
	var_68_object->SetProperty(var_69_string, var_79_float);
	var_67_bool = true;
}


void func_81(float var_9_float, object var_10_object)
{
	cvector var_14_cvector;
	@GetPosition(var_14_cvector);
	cvector var_15_cvector;
	var_10_object->GetPosition(var_15_cvector);
	var_9_float = (var_15_cvector - var_14_cvector) | (var_15_cvector - var_14_cvector);
}


void func_209(object var_1_object)
{
	object var_3_object;
	@self(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_23(object var_19_object)
{
	float var_24_float; float var_27_float;
	@GetHeight(var_24_float);
	cvector var_25_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_28_float;
	SetByIndex(var_25_cvector, 1) = var_28_float;
	object var_26_object;
	@PlayLoopedGlobalSound(var_26_object, "attack", var_25_cvector);
	@FogLinear(1, 1);
	
	for(;;) {
		bool var_32_bool;
		func_204(var_32_bool);
		if(!var_32_bool) { //@nz
		}
		bool var_36_bool; object var_37_object;
		var_19_object = var_37_object;
		func_249(var_36_bool, var_37_object);
		if(var_36_bool != 0) {
			float var_41_float; object var_42_object;
			func_135(var_41_float, var_42_object, 0.1);
			var_41_float = var_27_float;
			@ReportHit(var_42_object, 5, var_27_float, 0.1);
		}
		@Sleep(1);
		bool var_108_bool; object var_109_object;
		var_19_object = var_109_object;
		func_236(var_108_bool, var_109_object);
		if(!var_108_bool) //@nz
			break;
	}
	@FogLinear(0, 1);
	var_26_object->FadeOut(1);
	@Sleep(1);
}
EMIT "Stack[-2] = 0";


void func_89(object var_2_object)
{
	object var_4_object;
	@FindActor(var_4_object, "player");
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_215(float var_79_float, float var_80_float, float var_81_float, float var_82_float)
{
	if(var_80_float < var_81_float) {
		var_81_float = var_79_float;
		return 0;
	}
	if(var_80_float > var_82_float) {
		var_82_float = var_79_float;
		return 0;
	}
	var_80_float = var_79_float;
}


