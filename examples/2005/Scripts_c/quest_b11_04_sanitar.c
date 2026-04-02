// @GLOBALS: 0:float:,1:bool:,2:object:,3:object:

maintask task_0
{
	void init(void)
	{
		func_160();
		@PlayAnimation("all", "attack_on");
		bool var_1_bool;
		@WaitForAnimEnd(var_1_bool);
		func_280(true);
	
		for(;;) {
			@PlayAnimation("all", "cattack");
			@WaitForAnimEnd(var_1_bool);
		}
	}
	EMIT "Return(); Pop(2)";

}


void OnTimer(int iID)
{
	object var_10_object; bool var_11_bool; float var_12_float; float var_13_float; float var_14_float;
	if(iID != 70)
		return 14;
	var_17_object = GlobalVars[2];
	if(var_17_object == null)
		return 14;
	var_19_object = GlobalVars[2];
	object var_8_object;
	float var_9_float;
	var_19_object->Intersect(var_8_object, var_9_float);
	var_20_object = GlobalVars[2];
	var_21_bool = GlobalVars[1];
	if(var_21_bool != 0) {
		float var_22_float; float var_23_float; float var_24_float;
		var_9_float = var_23_float;
		var_25_float = GlobalVars[0];
		var_25_float = var_24_float;
		func_132(var_22_float, var_23_float, var_24_float);
	} else {
					var_114_float = 0.05;
	}
	var_20_object->SetLength(var_22_float);
	
	for(;;) {
		var_8_object->Next(var_11_bool, var_10_object);
		if(var_11_bool != 0) {
			bool var_28_bool = false;
			if(var_10_object != null) {
				object var_30_object;
				func_126(var_30_object);
				if(var_10_object != var_30_object)
					var_28_bool = true;
			}
			if(var_28_bool != 0) {
				float var_34_float; object var_35_object;
				var_10_object = var_35_object;
				func_53(var_34_float, var_35_object, 0.1, 2);
				var_34_float = var_12_float;
				bool var_99_bool; object var_100_object;
				var_10_object = var_100_object;
				func_41(var_99_bool, var_100_object, "disease");
				if(var_99_bool != 0) {
					var_10_object->GetProperty("disease", var_13_float);
					if(var_13_float <= 0.02)
						var_13_float = 0;
					else
						var_13_float -= 0.02;
				return 14;

				}
				var_10_object->SetProperty("disease", var_13_float);
			}
			bool var_106_bool; object var_107_object;
			var_10_object = var_107_object;
			func_41(var_106_bool, var_107_object, "fire");
			if(var_106_bool != 0) {
				var_10_object->GetProperty("fire", var_14_float);
				var_10_object->SetProperty("fire", (var_14_float + 0.1));
			}
		}
	}
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-7] = 0";


void func_160(void)
{
	float var_5_float;
	@GetAttackDistance(var_5_float);
	var_8_float = GlobalVars[0];
	GlobalVars[0] = (var_5_float / 600.0);
	object var_6_object;
	@GetScene(var_6_object);
	object var_7_object;
	@AddActorByType(var_7_object, "flame", var_6_object, [0.0, 0.0, 0.0]);
	object var_12_object;
	func_126(var_12_object);
	var_7_object->Attach(var_12_object, "flame");
	var_16_bool = GlobalVars[1];
	GlobalVars[1] = false;
	var_7_object->SetLength(0.05);
	var_18_object = GlobalVars[2];
	var_7_object = var_18_object;
	GlobalVars[2] = var_18_object;
	@SetTimer(70, 0.1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_132(float var_22_float, float var_23_float, float var_24_float)
{
	if(var_23_float < var_24_float)
		var_23_float = var_22_float;
	else
		var_24_float = var_22_float;
	
}


void func_36(bool var_90_bool, object var_91_object)
{
	bool var_93_bool;
	@IsPlayerActor(var_91_object, var_93_bool);
	var_93_bool = var_90_bool;
}


void func_41(bool var_50_bool, object var_51_object, string var_52_string)
{
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", 2);
	if(!var_57_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_54_bool;
	var_51_object->HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
}


// @pe
void func_139(float var_84_float, float var_85_float, float var_86_float, float var_87_float)
{
	if(var_85_float < var_86_float) {
		var_86_float = var_84_float;
		return 0;
	}
	if(var_85_float > var_87_float) {
		var_87_float = var_84_float;
		return 0;
	}
	var_85_float = var_84_float;
}


void func_53(float var_34_float, object var_35_object, float var_36_float, int var_37_int)
{
	int var_44_int; int var_46_int;
	object var_51_object;
	var_35_object = var_51_object;
	bool var_50_bool;
	func_41(var_50_bool, var_51_object, "health");
	if(!var_50_bool) //@nz
		var_34_float = 0.0;
	bool var_60_bool; object var_61_object;
	func_41(var_60_bool, var_61_object, "armor");
	if(!var_60_bool) //@nz
		var_44_int = 0;
	else
		var_61_object->GetProperty("armor", var_44_int);
	string var_65_string; int var_66_int;
	var_37_int = var_66_int;
	func_22(var_65_string, var_66_int);
	string var_45_string = "armor_" + var_65_string;
	bool var_71_bool; object var_72_object; string var_73_string;
	var_35_object = var_72_object;
	func_41(var_71_bool, var_72_object, var_73_string);
	if(!var_71_bool) //@nz
		var_46_int = 0;
	else
		var_35_object->GetProperty(var_73_string, var_46_int);

	float var_75_float;
	func_132(var_75_float, ((var_44_int + var_46_int) / 100.0), (float)1);
	float var_47_float;
	var_75_float = var_47_float;
	float var_48_float;
	var_35_object->GetProperty("health", var_48_float);
	float var_49_float = var_36_float * (1 - var_47_float);
	float var_84_float;
	func_139(var_84_float, (var_48_float - var_49_float), (float)0, (float)1);
	var_35_object->SetProperty("health", var_84_float);
	bool var_90_bool; object var_91_object;
	var_35_object = var_91_object;
	func_36(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		float var_94_float = -var_49_float;
		func_150(var_94_float);
	}
	var_49_float = var_34_float;
	
}


// @pe
void func_22(string var_65_string, int var_66_int)
{
	if(var_66_int == 2) {
		var_65_string = "fire";
		return 0;
	EMIT "GOTO 0x22";
	}
	if(var_66_int == 1) {
		var_65_string = "bullet";
		return 0;
	}
	var_65_string = "phys";
}


void func_150(float var_94_float)
{
	object var_96_object;
	@CreateFloatVector(var_96_object);
	var_96_object->add(var_94_float);
	@SendWorldWndMessage(15, var_96_object);
}
EMIT "Stack[-1] = 0";


void func_280(bool var_23_bool)
{
	float var_29_float; object var_31_object; cvector var_32_cvector; float var_33_float;
	if(var_23_bool != 0) {
		var_35_float = GlobalVars[0];
		var_35_float = var_29_float;
	} else {
				var_29_float = 0.05;
	}
	var_36_object = GlobalVars[2];
	float var_30_float;
	var_36_object->GetLength(var_30_float);
	if(var_29_float < var_30_float)
		var_29_float = var_30_float;
	var_38_object = GlobalVars[2];
	var_38_object->SetLength(var_30_float);
	var_39_bool = GlobalVars[1];
	if(var_39_bool != var_23_bool) {
		if(var_23_bool != 0) {
			var_42_object = GlobalVars[3];
			if(var_42_object == null) {
				var_32_cvector = [0.0, 0.0, 0.0];
				@GetHeight(var_33_float);
				var_44_float = GetByIndex(var_32_cvector, 1);
				var_33_float = var_44_float;
				SetByIndex(var_32_cvector, 1) = var_44_float;
				@PlayLoopedGlobalSound(var_31_object, "flame_loop", var_32_cvector, 0, 200);
				var_48_object = GlobalVars[3];
				var_31_object = var_48_object;
				GlobalVars[3] = var_48_object;
				var_31_object = null;
			}
			var_49_object = GlobalVars[3];
			var_49_object->FadeIn(2);
		} else {
			var_52_object = GlobalVars[3];
			if(!(var_52_object != null)) goto Label_332;
			var_54_object = GlobalVars[3];
			var_54_object->FadeOut(2);

		}
	Label_332:
		var_51_bool = GlobalVars[1];
		var_23_bool = var_51_bool;
		GlobalVars[1] = var_51_bool;
	}
	
}


void func_126(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


