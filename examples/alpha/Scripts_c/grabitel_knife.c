// @GLOBALS: 0:object:Owner,1:cvector:StartDirection,2:object:

maintask task_0
{
	void init(void)
	{
		var_4_cvector = GlobalVars[1];
		var_6_object = GlobalVars[0];
		object var_1_object;
		@CreateRigidBody(var_1_object, [0.0, 0.0, 0.0], 50, var_4_cvector, [20.0, 20.0, 20.0], var_6_object);
		var_1_object->Enable(true);
		var_8_object = GlobalVars[2];
		var_1_object = var_8_object;
		GlobalVars[2] = var_8_object;
		@Attach(var_1_object);
		@FindGeometry("knife", var_1_object);
		var_10_cvector = GlobalVars[1];
		var_1_object->SetRotation(var_10_cvector);
		var_1_object->Enable(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}

	void OnCollision(object actor, object var_1_object, cvector var_2_cvector, cvector var_3_cvector)
	{
		@Trace("Knife hit: " + var_1_object);
		var_8_object = GlobalVars[2];
		var_8_object->Enable(false);
		@SetDeathStateAndRemove();
		bool var_10_bool; object var_11_object;
		var_1_object = var_11_object;
		func_228(var_10_bool, var_11_object);
		if(!var_10_bool) //@nz
			return 2;
		float var_45_float; object var_46_object;
		var_1_object = var_46_object;
		func_107(var_45_float, var_46_object, 0.9, 0);
		float var_5_float;
		var_45_float = var_5_float;
		bool var_95_bool; object var_96_object;
		var_97_object = GlobalVars[0];
		var_97_object = var_96_object;
		func_228(var_95_bool, var_96_object);
		if(var_95_bool != 0) {
			var_98_object = GlobalVars[0];
			@ReportAttack(var_1_object, var_98_object);
			if(var_5_float != 0) {
				var_100_object = GlobalVars[0];
				@ReportHit(var_1_object, var_100_object, 1, var_5_float, 0.9);
				bool var_103_bool; object var_104_object;
				var_1_object = var_104_object;
				func_171(var_103_bool, var_104_object);
				if(var_103_bool != 0) {
					var_113_object = GlobalVars[0];
					@Trigger(var_113_object, "kill");
				}
			}
		}
	}

}


void func_192(bool var_14_bool, object var_15_object)
{
	if(var_15_object == null) {
		var_14_bool = false;
		return 4;
	}
	bool var_21_bool = false;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", 1);
	if(var_24_bool != 0) {
		bool var_25_bool; object var_26_object;
		var_15_object = var_26_object;
		func_187(var_25_bool, var_26_object);
		if(var_25_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_14_bool = false;
		return 4;
	}
	object var_18_object;
	@GetScene(var_18_object);
	if(var_18_object == null) {
		var_14_bool = false;
		return 4;
	}
	object var_19_object;
	var_15_object->GetScene(var_19_object);
	if(var_18_object != var_19_object) {
		var_14_bool = false;
		return 4;
	}
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_259(float var_88_float, float var_89_float, float var_90_float, float var_91_float)
{
	if(var_89_float < var_90_float) {
		var_90_float = var_88_float;
		return 0;
	}
	if(var_89_float > var_91_float) {
		var_91_float = var_88_float;
		return 0;
	}
	var_89_float = var_88_float;
}


void func_228(bool var_10_bool, object var_11_object)
{
	object var_15_object;
	var_11_object = var_15_object;
	bool var_14_bool;
	func_192(var_14_bool, var_15_object);
	if(!var_14_bool) { //@nz
		var_10_bool = false;
		return 2;
	}
	bool var_32_bool; object var_33_object;
	func_95(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		var_10_bool = true;
		return 2;
	}
	int var_13_int;
	var_33_object->GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == 0;
}


void func_107(float var_45_float, object var_46_object, float var_47_float, int var_48_int)
{
	int var_55_int; int var_57_int;
	object var_62_object;
	var_46_object = var_62_object;
	bool var_61_bool;
	func_95(var_61_bool, var_62_object, "health");
	if(!var_61_bool) //@nz
		var_45_float = 0.0;
	bool var_65_bool; object var_66_object;
	func_95(var_65_bool, var_66_object, "armor");
	if(!var_65_bool) //@nz
		var_55_int = 0;
	else
		var_66_object->GetProperty("armor", var_55_int);
	string var_70_string; int var_71_int;
	var_48_int = var_71_int;
	func_87(var_70_string, var_71_int);
	string var_56_string = "armor_" + var_70_string;
	bool var_74_bool; object var_75_object; string var_76_string;
	var_46_object = var_75_object;
	func_95(var_74_bool, var_75_object, var_76_string);
	if(!var_74_bool) //@nz
		var_57_int = 0;
	else
		var_46_object->GetProperty(var_76_string, var_57_int);

	float var_78_float;
	func_252(var_78_float, ((var_55_int + var_57_int) / 100.0), (float)1);
	float var_58_float;
	var_78_float = var_58_float;
	float var_59_float;
	var_46_object->GetProperty("health", var_59_float);
	float var_88_float;
	func_259(var_88_float, (var_59_float - (var_47_float * (1 - var_58_float))), (float)0, (float)1);
	var_46_object->SetProperty("health", var_88_float);
	float var_60_float = var_45_float;
	
}


void func_171(bool var_103_bool, object var_104_object)
{
	bool var_107_bool; object var_108_object;
	func_95(var_107_bool, var_108_object, "health");
	if(!var_107_bool) //@nz
		var_103_bool = false;
	float var_106_float;
	var_108_object->GetProperty("health", var_106_float);
	var_103_bool = var_106_float <= 0.0;
}


// @pe
void func_87(string var_70_string, int var_71_int)
{
	if(var_71_int == 1)
		var_70_string = "fire";
	var_70_string = "phys";
}


void func_187(bool var_25_bool, object var_26_object)
{
	bool var_28_bool;
	var_26_object->IsDead(var_28_bool);
	var_28_bool = var_25_bool;
}


// @pe
void func_252(float var_78_float, float var_79_float, float var_80_float)
{
	if(var_79_float < var_80_float)
		var_79_float = var_78_float;
	else
		var_80_float = var_78_float;
	
}


void func_95(bool var_32_bool, object var_33_object, string var_34_string)
{
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", 2);
	if(!var_39_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_36_bool;
	var_33_object->HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
}


