// @GLOBALS: 0:object:Owner,1:cvector:StartDirection,2:object:Target,3:object:

maintask task_0
{
	void init(void)
	{
		var_4_cvector = GlobalVars[1];
		var_6_object = GlobalVars[0];
		object var_1_object;
		@CreateRigidBody(var_1_object, [0.0, 0.0, 0.0], 50, var_4_cvector, [20.0, 20.0, 20.0], var_6_object);
		var_1_object->Enable(true);
		var_8_object = GlobalVars[3];
		var_1_object = var_8_object;
		GlobalVars[3] = var_8_object;
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
		object var_0_object;
		func_311(var_0_object);
		@RemoveActor(var_0_object);
		@sync();
	}

	void OnCollision(object actor, object var_1_object, cvector var_2_cvector, cvector var_3_cvector)
	{
		var_6_object = GlobalVars[3];
		var_6_object->Enable(false);
		object var_8_object;
		func_311(var_8_object);
		@RemoveActor(var_8_object);
		bool var_11_bool = true;
		bool var_12_bool = true;
		var_13_bool = !var_1_object; //@nz
		if(var_13_bool != 1) {
			var_16_bool = IsFuncExist(var_1_object, "GetScene", 1);
			var_17_bool = !var_16_bool; //@nz
			if(var_17_bool != 1)
				var_12_bool = false;
		}
		if(var_12_bool != 1) {
			bool var_18_bool; object var_19_object;
			var_1_object = var_19_object;
			func_287(var_18_bool, var_19_object);
			var_52_bool = !var_18_bool; //@nz
			if(var_52_bool != 1)
				var_11_bool = false;
		}
		if(var_11_bool != 0)
			return 2;
		float var_53_float; object var_54_object;
		var_1_object = var_54_object;
		func_142(var_53_float, var_54_object, 0.9, 0);
		float var_5_float;
		var_53_float = var_5_float;
		bool var_113_bool; object var_114_object;
		var_115_object = GlobalVars[0];
		var_115_object = var_114_object;
		func_287(var_113_bool, var_114_object);
		if(var_113_bool != 0) {
			var_116_object = GlobalVars[0];
			@ReportAttack(var_1_object, var_116_object);
			if(var_5_float != 0) {
				var_118_object = GlobalVars[0];
				@ReportHit(var_1_object, var_118_object, 1, var_5_float, 0.9);
				bool var_121_bool = false;
				var_122_object = GlobalVars[2];
				if(var_1_object == var_122_object) {
					bool var_124_bool; object var_125_object;
					var_1_object = var_125_object;
					func_215(var_124_bool, var_125_object);
					if(var_124_bool != 0)
						var_121_bool = true;
				}
				if(var_121_bool != 0) {
					var_141_object = GlobalVars[0];
					@Trigger(var_141_object, "kill");
				}
			}
		}
	}

}


void func_130(bool var_40_bool, object var_41_object, string var_42_string)
{
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", 2);
	if(!var_47_bool) { //@nz
		var_40_bool = false;
		return 2;
	}
	bool var_44_bool;
	var_41_object->HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
}


// @pe
void func_324(float var_98_float, float var_99_float, float var_100_float, float var_101_float)
{
	if(var_99_float < var_100_float) {
		var_100_float = var_98_float;
		return 0;
	}
	if(var_99_float > var_101_float) {
		var_101_float = var_98_float;
		return 0;
	}
	var_99_float = var_98_float;
}


void func_142(float var_53_float, object var_54_object, float var_55_float, int var_56_int)
{
	int var_63_int; int var_65_int;
	object var_70_object;
	var_54_object = var_70_object;
	bool var_69_bool;
	func_130(var_69_bool, var_70_object, "health");
	if(!var_69_bool) //@nz
		var_53_float = 0.0;
	bool var_73_bool; object var_74_object;
	func_130(var_73_bool, var_74_object, "armor");
	if(!var_73_bool) //@nz
		var_63_int = 0;
	else
		var_74_object->GetProperty("armor", var_63_int);
	string var_78_string; int var_79_int;
	var_56_int = var_79_int;
	func_111(var_78_string, var_79_int);
	string var_64_string = "armor_" + var_78_string;
	bool var_84_bool; object var_85_object; string var_86_string;
	var_54_object = var_85_object;
	func_130(var_84_bool, var_85_object, var_86_string);
	if(!var_84_bool) //@nz
		var_65_int = 0;
	else
		var_54_object->GetProperty(var_86_string, var_65_int);

	float var_88_float;
	func_317(var_88_float, ((var_63_int + var_65_int) / 100.0), (float)1);
	float var_66_float;
	var_88_float = var_66_float;
	float var_67_float;
	var_54_object->GetProperty("health", var_67_float);
	float var_68_float = var_55_float * (1 - var_66_float);
	float var_98_float;
	func_324(var_98_float, (var_67_float - var_68_float), (float)0, (float)1);
	var_54_object->SetProperty("health", var_98_float);
	bool var_104_bool; object var_105_object;
	var_54_object = var_105_object;
	func_125(var_104_bool, var_105_object);
	if(var_104_bool != 0) {
		float var_108_float = -var_68_float;
		func_335(var_108_float);
	}
	var_68_float = var_53_float;
	
}


void func_335(float var_108_float)
{
	object var_110_object;
	@CreateFloatVector(var_110_object);
	var_110_object->add(var_108_float);
	@SendWorldWndMessage(15, var_110_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_111(string var_78_string, int var_79_int)
{
	if(var_79_int == 2) {
		var_78_string = "fire";
		return 0;
	EMIT "GOTO 0x7b";
	}
	if(var_79_int == 1) {
		var_78_string = "bullet";
		return 0;
	}
	var_78_string = "phys";
}


void func_125(bool var_104_bool, object var_105_object)
{
	bool var_107_bool;
	@IsPlayerActor(var_105_object, var_107_bool);
	var_107_bool = var_104_bool;
}


void func_246(bool var_33_bool, object var_34_object)
{
	bool var_36_bool;
	var_34_object->IsDead(var_36_bool);
	var_36_bool = var_33_bool;
}


void func_311(object var_8_object)
{
	object var_10_object;
	@self(var_10_object);
	var_10_object = var_8_object;
}
EMIT "Stack[-1] = 0";


void func_345(bool var_135_bool)
{
	bool var_137_bool;
	@GetVariable("god_mode", var_137_bool);
	var_137_bool = var_135_bool;
}


void func_215(bool var_124_bool, object var_125_object)
{
	object var_129_object;
	var_125_object = var_129_object;
	bool var_128_bool;
	func_130(var_128_bool, var_129_object, "health");
	if(!var_128_bool) { //@nz
		var_124_bool = false;
		return 2;
	}
	bool var_132_bool = false;
	bool var_133_bool; object var_134_object;
	func_125(var_133_bool, var_134_object);
	if(var_133_bool != 0) {
		bool var_135_bool;
		func_345(var_135_bool);
		if(var_135_bool != 0)
			var_132_bool = true;
	}
	if(var_132_bool != 0) {
		var_124_bool = false;
		return 2;
	}
	float var_127_float;
	var_134_object->GetProperty("health", var_127_float);
	var_124_bool = var_127_float <= 0.0;
}


void func_251(bool var_22_bool, object var_23_object)
{
	if(var_23_object == null) {
		var_22_bool = false;
		return 4;
	}
	bool var_29_bool = false;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", 1);
	if(var_32_bool != 0) {
		bool var_33_bool; object var_34_object;
		var_23_object = var_34_object;
		func_246(var_33_bool, var_34_object);
		if(var_33_bool != 0)
			var_29_bool = true;
	}
	if(var_29_bool != 0) {
		var_22_bool = false;
		return 4;
	}
	object var_26_object;
	@GetScene(var_26_object);
	if(var_26_object == null) {
		var_22_bool = false;
		return 4;
	}
	object var_27_object;
	var_23_object->GetScene(var_27_object);
	if(var_26_object != var_27_object) {
		var_22_bool = false;
		return 4;
	}
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_317(float var_88_float, float var_89_float, float var_90_float)
{
	if(var_89_float < var_90_float)
		var_89_float = var_88_float;
	else
		var_90_float = var_88_float;
	
}


void func_287(bool var_18_bool, object var_19_object)
{
	object var_23_object;
	var_19_object = var_23_object;
	bool var_22_bool;
	func_251(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_18_bool = false;
		return 2;
	}
	bool var_40_bool; object var_41_object;
	func_130(var_40_bool, var_41_object, "noaccess");
	if(!var_40_bool) { //@nz
		var_18_bool = true;
		return 2;
	}
	int var_21_int;
	var_41_object->GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == 0;
}


