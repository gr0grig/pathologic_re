// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:

maintask task_0
{
	void init(object var_0_object, bool var_1_bool)
	{
		bool var_5_bool;
		func_1278();
		@SetTimer(75, 0.5);
		cvector var_4_cvector;
		@GetDirection(var_4_cvector);
	
		for(;;) {
			@Hold();

			for(;;) {
				var_31_float = GetByIndex(var_4_cvector, 0);
				var_32_float = GetByIndex(var_4_cvector, 2);
				@Rotate(var_31_float, var_32_float, var_5_bool);
				var_33_bool = !var_5_bool; //@nz
				if(var_33_bool == 0) goto Label_19;
			}

		Label_19:
		}
	}
	EMIT "Return(); Pop(4)";

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		var_2_bool = var_4_object;
		bool var_3_bool;
		func_1742(var_3_bool, var_4_object);
		if(var_3_bool != 0) {
			object var_142_object;
			var_2_bool = var_142_object;
			func_96(var_142_object, false);
		}
	}

	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		var_2_bool = var_4_object;
		bool var_3_bool;
		func_1756(var_3_bool, var_4_object);
		if(var_3_bool != 0) {
			object var_142_object;
			var_2_bool = var_142_object;
			func_96(var_142_object, false);
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		var_2_bool = var_4_object;
		bool var_3_bool;
		func_634(var_3_bool, var_4_object);
		if(var_3_bool != 0) {
			object var_37_object;
			var_2_bool = var_37_object;
			func_1527(var_37_object);
			object var_52_object;
			var_2_bool = var_52_object;
			func_96(var_52_object, true);
		}
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool)
	{
		object var_6_object;
		var_2_bool = var_6_object;
		object var_7_object;
		var_3_object = var_7_object;
		bool var_8_bool;
		var_4_bool = var_8_bool;
		bool var_5_bool;
		func_1603(var_5_bool, var_6_object, var_7_object, var_8_bool);
		if(var_5_bool != 0) {
			bool var_91_bool; object var_92_object;
			var_2_bool = var_92_object;
			func_634(var_91_bool, var_92_object);
			if(var_91_bool != 0) {
				object var_119_object;
				var_2_bool = var_119_object;
				func_1527(var_119_object);
				object var_134_object;
				var_2_bool = var_134_object;
				func_96(var_134_object, false);
			}
		}
	}

	// @pe
	void OnTimer(int iID, object var_1_object, bool var_2_bool)
	{
		if(var_2_bool == 75) {
			@ResetAAS();
		} else {
			int var_5_int;
			var_2_bool = var_5_int;
			func_1629(var_5_int);
		}
	
	}

}


task task_1
{
	// @pe
	void OnSee(object actor, bool var_1_bool, object var_2_object)
	{
		if(var_1_bool != 0)
			return 0;
		bool var_4_bool = false;
		bool var_5_bool; object var_6_object;
		var_2_object = var_6_object;
		func_1742(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			bool var_144_bool; object var_146_object;
			var_2_object = var_146_object;
			func_1770(var_144_bool, actor, var_146_object);
			if(var_144_bool != 0)
				var_4_bool = true;
		}
		if(var_4_bool != 0) {
			actor = var_2_object;
			@Face(var_2_object);
		}
	}

	// @pe
	void OnHear(object actor, bool var_1_bool, object var_2_object)
	{
		if(var_1_bool != 0)
			return 0;
		bool var_4_bool = false;
		bool var_5_bool; object var_6_object;
		var_2_object = var_6_object;
		func_1756(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			bool var_144_bool; object var_146_object;
			var_2_object = var_146_object;
			func_1770(var_144_bool, actor, var_146_object);
			if(var_144_bool != 0)
				var_4_bool = true;
		}
		if(var_4_bool != 0) {
			actor = var_2_object;
			@Face(var_2_object);
		}
	}

	// @pe
		void OnAttacked(object actor, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_91_object)
		{
		object var_92_object;
		var_91_object = var_92_object;
		func_1527(var_92_object);
		bool var_107_bool = true;
		bool var_108_bool; object var_109_object;
		var_91_object = var_109_object;
		func_634(var_108_bool, var_109_object);
		var_136_bool = !var_108_bool; //@nz
		if(var_136_bool != 1) {
			bool var_137_bool; object var_138_object;
			var_91_object = var_138_object;
			func_1729(var_137_bool, var_138_object);
			var_144_bool = !var_137_bool; //@nz
			if(var_144_bool != 1)
				var_107_bool = false;
		}
		if(var_107_bool != 0)
			return 0;
		actor = var_91_object;
		var_1_bool = true;
		@Face(var_91_object);
		}

	// @pe
	void OnPlayerDamage(object actor, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool)
	{
		object var_6_object;
		var_2_object = var_6_object;
		object var_7_object;
		var_3_object = var_7_object;
		bool var_8_bool;
		var_4_bool = var_8_bool;
		bool var_5_bool;
		func_1603(var_5_bool, var_6_object, var_7_object, var_8_bool);
		if(var_5_bool != 0) {
			object var_91_object;
			var_2_object = var_91_object;
			func_226();
		}
	}

	// @pe
	void OnTimer(object var_0_object, bool var_1_bool, int var_2_int)
	{
		if(var_2_int == 75) {
			@ResetAAS();
		} else {
			int var_5_int;
			var_2_int = var_5_int;
			func_1629(var_5_int);
		}
	
	}

}


task task_2
{
	void OnUse(object actor, bool var_1_bool, object var_2_object)
	{
		bool var_4_bool;
		@IsOverrideActive(var_4_bool);
		if(!var_4_bool) { //@nz
			object var_6_object;
			var_2_object = var_6_object;
			func_1006(var_6_object);
		}
	}

	// @pe
	void OnHit(object actor, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, bool var_1_bool, object var_2_object, string var_3_string)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, object var_2_object)
	{
	}

}


// @pe
void OnHit(object actor, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float)
{
	object var_6_object;
	var_2_object = var_6_object;
	int var_7_int;
	var_3_int = var_7_int;
	float var_8_float;
	var_4_float = var_8_float;
	func_702(var_6_object, var_7_int, var_8_float);
}


// @pe
void OnHit2(object actor, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float, cvector var_6_cvector, cvector var_7_cvector)
{
	object var_8_object;
	var_2_object = var_8_object;
	int var_9_int;
	var_3_int = var_9_int;
	float var_10_float;
	var_4_float = var_10_float;
	cvector var_11_cvector;
	var_6_cvector = var_11_cvector;
	cvector var_12_cvector;
	var_7_cvector = var_12_cvector;
	func_770(var_10_float, var_11_cvector, var_12_cvector);
}


void OnPropertyChange(object var_0_object, bool var_1_bool, object var_2_object, string var_3_string)
{
	float var_5_float;
	if(var_3_string == "health") {
		@GetProperty("health", var_5_float);
		if(var_5_float <= 0)
			@SignalDeath(var_2_object);
	}
}


// @pe
void OnDeath(object actor, bool var_1_bool, object var_2_object)
{
	object var_3_object;
	var_2_object = var_3_object;
	func_1551(var_3_object);
}


void func_770(object var_8_object, cvector var_11_cvector, cvector var_12_cvector)
{
	object var_15_object;
	@GetScene(var_15_object);
	object var_16_object;
	@AddActorByType(var_16_object, "scripted", var_15_object, var_11_cvector, var_12_cvector, "blood_dir.xml");
	object var_19_object;
	var_8_object = var_19_object;
	func_658(var_19_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1527(object var_92_object)
{
	if(var_92_object == null) {
	}
	var_96_object = GlobalVars[4];
	bool var_94_bool;
	var_96_object->in(var_94_bool, var_92_object);
	if(!var_94_bool) { //@nz
		var_98_object = GlobalVars[4];
		var_98_object->add(var_92_object);
	}
	bool var_99_bool; object var_100_object;
	func_503(var_99_bool, var_100_object);
	if(var_99_bool != 0) {
		object var_103_object;
		func_927(var_103_object);
		@ReportReputationChange(var_100_object, var_103_object, -0.07);
	}
}


// @pe
void func_1796(bool var_7_bool, object var_8_object)
{
	object var_10_object;
	var_8_object = var_10_object;
	bool var_9_bool;
	func_1425(var_9_bool, var_10_object);
	var_9_bool = var_7_bool;
}


void func_520(float var_57_float, object var_58_object, float var_59_float, int var_60_int)
{
	int var_67_int; int var_69_int;
	object var_74_object;
	var_58_object = var_74_object;
	bool var_73_bool;
	func_508(var_73_bool, var_74_object, "health");
	if(!var_73_bool) //@nz
		var_57_float = 0.0;
	bool var_77_bool; object var_78_object;
	func_508(var_77_bool, var_78_object, "armor");
	if(!var_77_bool) //@nz
		var_67_int = 0;
	else
		var_78_object->GetProperty("armor", var_67_int);
	string var_82_string; int var_83_int;
	var_60_int = var_83_int;
	func_474(var_82_string, var_83_int);
	string var_68_string = "armor_" + var_82_string;
	bool var_88_bool; object var_89_object; string var_90_string;
	var_58_object = var_89_object;
	func_508(var_88_bool, var_89_object, var_90_string);
	if(!var_88_bool) //@nz
		var_69_int = 0;
	else
		var_58_object->GetProperty(var_90_string, var_69_int);

	float var_92_float;
	func_943(var_92_float, ((var_67_int + var_69_int) / 100.0), (float)1);
	float var_70_float;
	var_92_float = var_70_float;
	float var_71_float;
	var_58_object->GetProperty("health", var_71_float);
	float var_72_float = var_59_float * (1 - var_70_float);
	float var_101_float;
	func_950(var_101_float, (var_71_float - var_72_float), (float)0, (float)1);
	var_58_object->SetProperty("health", var_101_float);
	bool var_107_bool; object var_108_object;
	var_58_object = var_108_object;
	func_503(var_107_bool, var_108_object);
	if(var_107_bool != 0) {
		float var_111_float = -var_72_float;
		func_972(var_111_float);
	}
	var_72_float = var_57_float;
	
}


// @pe
void func_1551(object var_3_object)
{
	object var_4_object;
	func_927(var_4_object);
	@ReportReputationChange(var_3_object, var_4_object, -0.13, true);
	object var_9_object;
	var_3_object = var_9_object;
	TaskCall(2);
	func_278(var_9_object);
	TaskReturn();
}


void func_784(string var_81_string, int var_82_int, int var_83_int, int var_84_int)
{
	int var_87_int; bool var_88_bool;
	int var_90_int;
	var_82_int = var_90_int;
	int var_91_int;
	var_83_int = var_91_int;
	bool var_89_bool;
	func_961(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0) {
		@irand(var_87_int, var_84_int);
		@AddItem(var_88_bool, var_81_string, 0, (var_87_int + 1));
	}
}


void func_1425(bool var_9_bool, object var_10_object)
{
	float var_17_float; float var_18_float; float var_20_float;
	bool var_21_bool; object var_22_object;
	func_634(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_9_bool = false;
		return 10;
	}
	var_56_object = GlobalVars[4];
	bool var_16_bool;
	var_56_object->in(var_16_bool, var_22_object);
	if(var_16_bool != 0) {
		var_9_bool = true;
		return 10;
	}
	bool var_58_bool; object var_59_object;
	var_10_object = var_59_object;
	func_503(var_58_bool, var_59_object);
	if(var_58_bool != 0) {
		var_10_object->GetProperty("reputation", var_17_float);
		if(var_17_float < 0.33) {
			var_9_bool = true;
			return 10;
		}
		var_10_object->GetProperty("disease", var_18_float);
		var_9_bool = var_18_float > 0.33;
		return 10;
	}
	bool var_67_bool; object var_68_object;
	func_508(var_67_bool, var_68_object, "class");
	if(!var_67_bool) { //@nz
		var_9_bool = false;
		return 10;
	}
	string var_19_string;
	var_68_object->GetProperty("class", var_19_string);
	bool var_72_bool = true;
	bool var_73_bool = true;
	bool var_74_bool = true;
	var_76_bool = var_19_string == "bomber";
	if(var_76_bool != 1) {
		var_78_bool = var_19_string == "hunter";
		if(var_78_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 1) {
		var_80_bool = var_19_string == "grabitel";
		if(var_80_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_82_bool = var_19_string == "rat_big";
		if(var_82_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 0) {
		var_9_bool = true;
		return 10;
	}
	bool var_83_bool; object var_84_object;
	func_508(var_83_bool, var_84_object, "disease");
	if(!var_83_bool) { //@nz
		var_9_bool = false;
		return 10;
	}
	bool var_87_bool = true;
	bool var_88_bool; string var_89_string;
	func_840(var_88_bool, var_89_string);
	if(var_88_bool != 1) {
		var_128_bool = var_89_string == "dog";
		if(var_128_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 0) {
		var_84_object->GetProperty("disease", var_20_float);
		var_9_bool = var_20_float > 0;
		return 10;
	}
	var_9_bool = false;
}


void func_658(object var_19_object)
{
	string var_33_string;
	if(var_19_object == null)
		return 14;
	bool var_27_bool;
	@IsDead(var_27_bool);
	if(var_27_bool != 0)
		return 14;
	int var_28_int;
	@GetSecondaryAnimationType(var_28_int);
	if(var_28_int < 0)
		return 14;
	cvector var_29_cvector;
	var_19_object->GetPosition(var_29_cvector);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetDirection(var_31_cvector);
	cvector var_32_cvector = var_30_cvector - var_29_cvector;
	var_38_float = GetByIndex(var_32_cvector, 0);
	var_39_float = GetByIndex(var_31_cvector, 0);
	var_41_float = GetByIndex(var_32_cvector, 2);
	var_42_float = GetByIndex(var_31_cvector, 2);
	if(((var_38_float * var_39_float) + (var_41_float * var_42_float)) >= 0)
		var_33_string = "fhit";
	else
		var_33_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_33_string + "1"), (var_33_string + "2"), -10);
	
}


void func_278(object var_9_object)
{
	object var_11_object;
	@KillTimer(75);
	bool var_13_bool; object var_14_object;
	var_9_object = var_14_object;
	func_503(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		@GetScene(var_11_object);
		object var_17_object;
		func_927(var_17_object);
		var_11_object->RemoveStationaryActor(var_17_object);
		var_11_object = null;
	}
	object var_18_object;
	var_9_object = var_18_object;
	func_300(var_18_object);
}


void func_1050(string var_119_string)
{
	object var_123_object;
	@CreateInvItem(var_123_object);
	var_123_object->SetItemName(var_119_string);
	var_123_object->SetProperty("Organ", 1);
	int var_124_int;
	var_123_object->GetItemID(var_124_int);
	bool var_125_bool;
	@AddItem(var_125_bool, var_123_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1278(void)
{
	var_12_object = GlobalVars[4];
	object var_13_object;
	func_966(var_13_object);
	var_13_object = var_12_object;
	GlobalVars[4] = var_12_object;
	float var_9_float;
	@GetAttackDistance(var_9_float);
	var_16_float = GlobalVars[2];
	GlobalVars[2] = (var_9_float / 600.0);
	object var_10_object;
	@GetScene(var_10_object);
	object var_11_object;
	@AddActorByType(var_11_object, "flame", var_10_object, [0.0, 0.0, 0.0]);
	object var_20_object;
	func_927(var_20_object);
	var_11_object->Attach(var_20_object, "flame");
	var_24_bool = GlobalVars[3];
	GlobalVars[3] = false;
	var_11_object->SetLength(0.05);
	var_26_object = GlobalVars[0];
	var_11_object = var_26_object;
	GlobalVars[0] = var_26_object;
	@SetTimer(70, 0.1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_927(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_799(string var_157_string)
{
	bool var_166_bool; int var_167_int; bool var_168_bool; int var_169_int; bool var_170_bool; float var_171_float; cvector var_172_cvector; cvector var_173_cvector;
	@IsExisting3DSound(var_166_bool, var_157_string);
	if(!var_166_bool) { //@nz
		var_167_int = 0;

		for(;;) {
			@IsExisting3DSound(var_168_bool, (var_157_string + (var_167_int + 1)));
			if(!var_168_bool) { //@nz
				break;
			Label_819:
				@irand(var_169_int, var_167_int);
				var_157_string += (var_169_int + 1);
	}
			@Is3DSoundLoaded(var_170_bool, var_157_string);
			if(var_170_bool != 0) {
				@GetEyesHeight(var_171_float);
				@GetDirection(var_172_cvector);
				var_173_cvector = var_172_cvector * 50;
				var_184_float = GetByIndex(var_173_cvector, 1);
				SetByIndex(var_173_cvector, 1) = (var_184_float + var_171_float);
				@PlayGlobalSound(var_157_string, var_173_cvector);
			}
		}
		var_167_int += 1;
	}
	var_179_bool = !var_167_int; //@nz
	if(var_179_bool == 0) goto Label_819;
}


void func_933(cvector var_34_cvector, cvector var_35_cvector)
{
	float var_43_float = sqrt(var_35_cvector | var_35_cvector);
	if(var_43_float < 0.000001)
		var_34_cvector = [0.0, 0.0, 0.0];
	var_34_cvector = var_35_cvector / var_43_float;
}


void func_1319(bool var_22_bool)
{
	float var_28_float; object var_30_object; cvector var_31_cvector; float var_32_float;
	if(var_22_bool != 0) {
		var_34_float = GlobalVars[2];
		var_34_float = var_28_float;
	} else {
				var_28_float = 0.05;
	}
	var_35_object = GlobalVars[0];
	float var_29_float;
	var_35_object->GetLength(var_29_float);
	if(var_28_float < var_29_float)
		var_28_float = var_29_float;
	var_37_object = GlobalVars[0];
	var_37_object->SetLength(var_29_float);
	var_38_bool = GlobalVars[3];
	if(var_38_bool != var_22_bool) {
		if(var_22_bool != 0) {
			var_41_object = GlobalVars[1];
			if(var_41_object == null) {
				var_31_cvector = [0.0, 0.0, 0.0];
				@GetHeight(var_32_float);
				var_43_float = GetByIndex(var_31_cvector, 1);
				var_32_float = var_43_float;
				SetByIndex(var_31_cvector, 1) = var_43_float;
				@PlayLoopedGlobalSound(var_30_object, "flame_loop", var_31_cvector, 0, 200);
				var_47_object = GlobalVars[1];
				var_30_object = var_47_object;
				GlobalVars[1] = var_47_object;
				var_30_object = null;
			}
			var_48_object = GlobalVars[1];
			var_48_object->FadeIn(2);
		} else {
			var_51_object = GlobalVars[1];
			if(!(var_51_object != null)) goto Label_1371;
			var_53_object = GlobalVars[1];
			var_53_object->FadeOut(2);

		}
	Label_1371:
		var_50_bool = GlobalVars[3];
		var_22_bool = var_50_bool;
		GlobalVars[3] = var_50_bool;
	}
	
}


void func_1067(void)
{
	int var_113_int;
	func_1000(var_113_int);
	if(var_113_int != 1) {
	}
	func_1050("liver");
	func_1050("kidney");
	func_1050("heart");
	func_1050("blood");
}


void func_300(object var_18_object)
{
	@KillTimer(70);
	func_1319(false);
	var_55_object = GlobalVars[0];
	@RemoveActor(var_55_object);
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		func_1091();
	func_1067();
	object var_133_object;
	var_18_object = var_133_object;
	func_326(var_133_object);
}


// @pe
void func_943(float var_29_float, float var_30_float, float var_31_float)
{
	if(var_30_float < var_31_float)
		var_30_float = var_29_float;
	else
		var_31_float = var_29_float;
	
}


// @pe
void func_950(float var_101_float, float var_102_float, float var_103_float, float var_104_float)
{
	if(var_102_float < var_103_float) {
		var_103_float = var_101_float;
		return 0;
	}
	if(var_102_float > var_104_float) {
		var_104_float = var_101_float;
		return 0;
	}
	var_102_float = var_101_float;
}


// @pe
void func_442(string var_156_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_157_string;
	var_156_string = var_157_string;
	func_799(var_157_string);
	@PlayAnimation("all", var_156_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_156_string);
	@RemoveEnvelope();
}


void func_702(object var_6_object, int var_7_int, float var_8_float)
{
	cvector var_18_cvector; object var_19_object; int var_20_int; bool var_21_bool; cvector var_22_cvector; cvector var_23_cvector;
	bool var_27_bool = false;
	bool var_28_bool = false;
	if(var_6_object != 0) {
		if(var_7_int != 4)
			var_28_bool = true;
	}
	if(var_28_bool != 0) {
		if(var_7_int != 5)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		cvector var_34_cvector; cvector var_35_cvector;
		cvector var_36_cvector; object var_37_object;
		var_6_object = var_37_object;
		func_488(var_36_cvector, var_37_object);
		var_36_cvector = var_35_cvector;
		func_933(var_34_cvector, var_35_cvector);
		var_34_cvector = var_18_cvector;
		@CreateVectorVector(var_19_object);
		var_20_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_20_int), var_21_bool, var_22_cvector, var_23_cvector);
			if(!var_21_bool) { //@nz
				break;
			Label_764:
				var_19_object = null;
	}
			object var_96_object;
			var_6_object = var_96_object;
			func_658(var_96_object);
		}
		if((var_23_cvector | var_18_cvector) >= 0.70710677)
			var_19_object->add(var_22_cvector);
		var_20_int += 1;
	}
	int var_24_int;
	var_19_object->size(var_24_int);
	if(var_24_int == 0) goto Label_764;
	int var_25_int;
	@irand(var_25_int, var_24_int);
	cvector var_26_cvector;
	var_19_object->get(var_26_cvector, var_25_int);
	object var_51_object; int var_52_int; float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
	var_6_object = var_51_object;
	var_7_int = var_52_int;
	var_8_float = var_53_float;
	var_26_cvector = var_54_cvector;
	var_55_cvector = -var_18_cvector;
	func_770(var_53_float, var_54_cvector, var_55_cvector);
}


// @pe
void func_1729(bool var_137_bool, object var_138_object)
{
	var_137_bool = false;
	if(var_138_object != null) {
		float var_140_float; object var_141_object;
		var_138_object = var_141_object;
		func_495(var_140_float, var_141_object);
		if(var_140_float <= 302500.0)
			var_137_bool = true;
	}
}


void func_961(bool var_89_bool, int var_90_int, int var_91_int)
{
	int var_93_int;
	@irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
}


void func_1603(bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool)
{
	bool var_10_bool;
	object var_12_object;
	var_7_object = var_12_object;
	bool var_11_bool;
	func_1142(var_11_bool, var_12_object, !var_8_bool);
	if(var_11_bool != 0) {
		@CanSee(var_10_bool, var_6_object);
		bool var_79_bool = true;
		if(var_10_bool != 1) {
			float var_81_float; object var_82_object;
			var_6_object = var_82_object;
			func_495(var_81_float, var_82_object);
			var_90_bool = var_81_float <= 490000.0;
			if(var_90_bool != 1)
				var_79_bool = false;
		}
		if(var_79_bool != 0)
			var_5_bool = true;
	}
	var_5_bool = false;
}


void func_1091(void)
{
	@ClearSubContainer(0);
	func_1019(600, 1500);
	func_784("rusk", 1, 3, 2);
	func_784("alpha_pills", 1, 3, 5);
	func_784("beta_pills", 1, 6, 4);
	func_784("gamma_pills", 1, 12, 3);
	int var_109_int;
	func_1137(var_109_int, "ognemet_ammo");
	bool var_60_bool;
	@AddItem(var_60_bool, var_109_int, 0, 1);
}


// @pe
void func_326(object var_133_object)
{
	object var_134_object;
	var_133_object = var_134_object;
	func_351(var_134_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_966(object var_13_object)
{
	object var_15_object;
	@CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_840(bool var_88_bool, string var_89_string)
{
	var_88_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	bool var_98_bool = true;
	bool var_99_bool = true;
	bool var_100_bool = true;
	var_102_bool = var_89_string == "woman";
	if(var_102_bool != 1) {
		var_104_bool = var_89_string == "worker";
		if(var_104_bool != 1)
			var_100_bool = false;
	}
	if(var_100_bool != 1) {
		var_106_bool = var_89_string == "butcher";
		if(var_106_bool != 1)
			var_99_bool = false;
	}
	if(var_99_bool != 1) {
		var_108_bool = var_89_string == "wasted_girl";
		if(var_108_bool != 1)
			var_98_bool = false;
	}
	if(var_98_bool != 1) {
		var_110_bool = var_89_string == "boy";
		if(var_110_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_112_bool = var_89_string == "vaxxabitka";
		if(var_112_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_114_bool = var_89_string == "unosha";
		if(var_114_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_116_bool = var_89_string == "wasted_male";
		if(var_116_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_118_bool = var_89_string == "alkash";
		if(var_118_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_120_bool = var_89_string == "dohodyaga";
		if(var_120_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_122_bool = var_89_string == "vaxxabit";
		if(var_122_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_124_bool = var_89_string == "nudegirl";
		if(var_124_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_126_bool = var_89_string == "morlok";
		if(var_126_bool != 1)
			var_88_bool = false;
	}
}


void func_972(float var_111_float)
{
	object var_113_object;
	@CreateFloatVector(var_113_object);
	var_113_object->add(var_111_float);
	if(var_111_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_113_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1742(bool var_5_bool, object var_6_object)
{
	var_5_bool = false;
	bool var_7_bool; object var_8_object;
	var_6_object = var_8_object;
	func_1796(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		bool var_131_bool; object var_132_object;
		var_6_object = var_132_object;
		func_1729(var_131_bool, var_132_object);
		if(var_131_bool != 0)
			var_5_bool = true;
	}
}


void func_593(bool var_123_bool, object var_124_object)
{
	bool var_126_bool;
	var_124_object->IsDead(var_126_bool);
	var_126_bool = var_123_bool;
}


void func_598(bool var_112_bool, object var_113_object)
{
	if(var_113_object == null) {
		var_112_bool = false;
		return 4;
	}
	bool var_119_bool = false;
	var_122_bool = IsFuncExist(var_113_object, "IsDead", 1);
	if(var_122_bool != 0) {
		bool var_123_bool; object var_124_object;
		var_113_object = var_124_object;
		func_593(var_123_bool, var_124_object);
		if(var_123_bool != 0)
			var_119_bool = true;
	}
	if(var_119_bool != 0) {
		var_112_bool = false;
		return 4;
	}
	object var_116_object;
	@GetScene(var_116_object);
	if(var_116_object == null) {
		var_112_bool = false;
		return 4;
	}
	object var_117_object;
	var_113_object->GetScene(var_117_object);
	if(var_116_object != var_117_object) {
		var_112_bool = false;
		return 4;
	}
	var_112_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_474(string var_82_string, int var_83_int)
{
	if(var_83_int == 2) {
		var_82_string = "fire";
		return 0;
	EMIT "GOTO 0x1e6";
	}
	if(var_83_int == 1) {
		var_82_string = "bullet";
		return 0;
	}
	var_82_string = "phys";
}


// @pe
void func_1756(bool var_5_bool, object var_6_object)
{
	var_5_bool = false;
	bool var_7_bool; object var_8_object;
	var_6_object = var_8_object;
	func_1796(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		bool var_131_bool; object var_132_object;
		var_6_object = var_132_object;
		func_1729(var_131_bool, var_132_object);
		if(var_131_bool != 0)
			var_5_bool = true;
	}
}


void func_1629(int var_5_int)
{
	object var_16_object; bool var_17_bool; string var_18_string; float var_19_float; float var_20_float; float var_21_float;
	if(var_5_int != 70)
		return 16;
	var_24_object = GlobalVars[0];
	if(var_24_object == null)
		return 16;
	var_26_object = GlobalVars[0];
	object var_14_object;
	float var_15_float;
	var_26_object->Intersect(var_14_object, var_15_float);
	var_27_object = GlobalVars[0];
	var_28_bool = GlobalVars[3];
	if(var_28_bool != 0) {
		float var_29_float; float var_30_float; float var_31_float;
		var_15_float = var_30_float;
		var_32_float = GlobalVars[2];
		var_32_float = var_31_float;
		func_943(var_29_float, var_30_float, var_31_float);
	} else {
						var_135_float = 0.05;
	}
	var_27_object->SetLength(var_29_float);
	func_989();
	
	for(;;) {
		var_14_object->Next(var_17_bool, var_16_object);
		if(var_17_bool != 0) {
			bool var_41_bool = false;
			if(var_16_object != null) {
				object var_43_object;
				func_927(var_43_object);
				if(var_16_object != var_43_object)
					var_41_bool = true;
			}
			if(var_41_bool != 0) {
				bool var_45_bool; object var_46_object;
				func_508(var_45_bool, var_46_object, "class");
				if(var_45_bool != 0)
					var_46_object->GetProperty("class", var_18_string);
				if(var_18_string != "sanitar") {
					float var_57_float; object var_58_object;
					var_16_object = var_58_object;
					func_520(var_57_float, var_58_object, 0.1, 2);
					var_57_float = var_19_float;
					bool var_120_bool; object var_121_object;
					var_16_object = var_121_object;
					func_508(var_120_bool, var_121_object, "disease");
					if(var_120_bool != 0) {
						var_16_object->GetProperty("disease", var_20_float);
						if(var_20_float <= 0.1)
							var_20_float = 0;
						else
							var_20_float -= 0.1;
					return 16;

					}
					var_16_object->SetProperty("disease", var_20_float);
				}
				bool var_127_bool; object var_128_object;
				var_16_object = var_128_object;
				func_508(var_127_bool, var_128_object, "fire");
				if(var_127_bool != 0) {
					var_16_object->GetProperty("fire", var_21_float);
					var_16_object->SetProperty("fire", (var_21_float + 0.1));
				}
			}
		}
	}
	
}
EMIT "Stack[-6] = 0";
EMIT "Stack[-8] = 0";


void func_989(void)
{
	object var_35_object;
	@GetScene(var_35_object);
	object var_37_object;
	func_927(var_37_object);
	@BroadcastMessage("battle", var_37_object, var_35_object);
}
EMIT "Stack[-1] = 0";


void func_351(object var_134_object)
{
	cvector var_145_cvector; cvector var_146_cvector; cvector var_147_cvector; cvector var_148_cvector; string var_149_string; object var_150_object; bool var_151_bool; bool var_152_bool; float var_153_float; cvector var_154_cvector;
	if(var_134_object == null) {
		func_442("fdie");
	} else {
		var_134_object->GetPosition(var_145_cvector);
		@GetPosition(var_146_cvector);
		@GetDirection(var_147_cvector);
		var_148_cvector = var_146_cvector - var_145_cvector;
		var_188_float = GetByIndex(var_148_cvector, 0);
		var_189_float = GetByIndex(var_147_cvector, 0);
		var_191_float = GetByIndex(var_148_cvector, 2);
		var_192_float = GetByIndex(var_147_cvector, 2);
		if(((var_188_float * var_189_float) + (var_191_float * var_192_float)) >= 0)
			var_149_string = "fdie";
		else
			var_149_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_134_object = var_150_object;
		var_199_bool = IsFuncExist(var_134_object, "GetScriptProperty", 2);
		if(var_199_bool != 0) {
			var_134_object->HasScriptProperty(var_151_bool, "Owner");
			if(var_151_bool != 0) {
				var_134_object->GetScriptProperty(var_150_object, "Owner");
				if(var_150_object == null)
					var_134_object = var_150_object;
			}
		}
		var_206_bool = IsFuncExist(var_150_object, "@GetEyesHeight", 1);
		if(var_206_bool != 0) {
			var_150_object->GetEyesHeight(var_153_float);
			var_154_cvector = [0.0, 0.0, 0.0];
			var_207_float = GetByIndex(var_154_cvector, 1);
			var_153_float = var_207_float;
			SetByIndex(var_154_cvector, 1) = var_207_float;
			@LookAsync(var_134_object, "head", var_154_cvector);
			var_152_bool = true;
		} else {
			var_152_bool = false;

		}
		string var_209_string;
		var_149_string = var_209_string;
		func_799(var_209_string);
		@PlayAnimation("all", var_149_string);
		@WaitForAnimEnd();
		if(var_152_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_149_string);
		@RemoveEnvelope();
		var_150_object = null;
	}
	
}


// @pe
void func_96(object var_134_object, bool var_135_bool)
{
	@StopGroup0();
	object var_136_object; bool var_137_bool;
	var_134_object = var_136_object;
	var_135_bool = var_137_bool;
	TaskCall(1);
	func_107(var_138_object, var_139_bool, var_136_object, var_137_bool);
	TaskReturn();
}


void func_1375(cvector var_296_cvector)
{
	cvector var_302_cvector; bool var_306_bool;
	@GetPosition(var_302_cvector);
	float var_303_float;
	@GetHeight(var_303_float);
	var_307_float = GetByIndex(var_302_cvector, 1);
	SetByIndex(var_302_cvector, 1) = (var_307_float + (var_303_float / 2));
	cvector var_304_cvector = var_296_cvector - var_302_cvector;
	float var_305_float = sqrt(var_304_cvector | var_304_cvector);
	if(var_305_float < 50) {
		var_306_bool = false;
	} else {
			var_317_float = GetByIndex(var_304_cvector, 1);
			var_306_bool = (var_317_float / var_305_float) < -0.14285715;
	}
	if(var_306_bool != 0)
		var_315_string = "cattack";
	else
		var_316_string = "attack";

	@PlayAnimation("all", var_315_string);
	
}


void func_488(cvector var_36_cvector, object var_37_object)
{
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	var_37_object->GetPosition(var_41_cvector);
	var_36_cvector = var_41_cvector - var_40_cvector;
}


void func_1000(int var_113_int)
{
	int var_115_int;
	@GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
}


// @pe
void func_1770(bool var_144_bool, object var_145_object, object var_146_object)
{
	if(var_146_object == null)
		var_144_bool = false;
	var_144_bool = true;
	bool var_148_bool; object var_149_object;
	var_145_object = var_149_object;
	func_1796(var_148_bool, var_149_object);
	var_150_bool = !var_148_bool; //@nz
	if(var_150_bool != 1) {
		float var_151_float; object var_152_object;
		var_146_object = var_152_object;
		func_495(var_151_float, var_152_object);
		float var_153_float; object var_154_object;
		var_145_object = var_154_object;
		func_495(var_153_float, var_154_object);
		var_157_bool = var_151_float < (var_153_float - 25);
		if(var_157_bool != 1)
			var_144_bool = false;
	}
}


// @pe
void func_107(object var_0_object, object var_1_object, object var_136_object, bool var_137_bool)
{
	var_0_object = var_136_object;
	@Face(var_0_object);
	
Label_112:
	func_1319(true);
	@SetAttackState(true);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	
	for(;;) {
		bool var_176_bool = false;
		bool var_177_bool = true;
		var_178_bool = var_0_object == null; //@ne
		if(var_178_bool != 1) {
			var_179_bool = !var_137_bool; //@nz
			if(var_179_bool != 1)
				var_177_bool = false;
		}
		if(var_177_bool != 0) {
			bool var_180_bool = true;
			bool var_181_bool;
			func_1796(var_181_bool, var_0_object);
			var_271_bool = !var_181_bool; //@nz
			if(var_271_bool != 1) {
				bool var_272_bool;
				func_1729(var_272_bool, var_0_object);
				var_279_bool = !var_272_bool; //@nz
				if(var_279_bool != 1)
					var_180_bool = false;
			}
			if(var_180_bool != 0)
				var_176_bool = true;
		}
		if(var_176_bool != 0)
			break;
		func_1406(var_0_object);
		@WaitForAnimEnd();
	}
	@SetAttackState(false);
	func_1319(false);
	@StopAsync();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	var_284_bool = Obj() != null; //@nn
	if(var_284_bool == 1) goto Label_112;
}


// @pe
void func_1006(object var_6_object)
{
	int var_7_int;
	func_1000(var_7_int);
	if(var_7_int == 1)
		@WorkWithCorpse(var_6_object);
	else
		@Barter(var_6_object);
	
}


void func_495(float var_81_float, object var_82_object)
{
	cvector var_86_cvector;
	@GetPosition(var_86_cvector);
	cvector var_87_cvector;
	var_82_object->GetPosition(var_87_cvector);
	var_81_float = (var_87_cvector - var_86_cvector) | (var_87_cvector - var_86_cvector);
}


void func_1137(int var_74_int, string var_75_string)
{
	int var_77_int;
	@GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
}


void func_1142(bool var_11_bool, object var_12_object, bool var_13_bool)
{
	bool var_16_bool; object var_17_object;
	func_508(var_16_bool, var_17_object, "class");
	if(!var_16_bool) { //@nz
		var_11_bool = false;
		return 2;
	}
	string var_15_string;
	var_17_object->GetProperty("class", var_15_string);
	bool var_27_bool = true;
	bool var_28_bool = true;
	bool var_29_bool = true;
	bool var_30_bool = true;
	bool var_31_bool = true;
	bool var_32_bool = true;
	bool var_33_bool = true;
	bool var_34_bool = true;
	bool var_35_bool = true;
	bool var_36_bool = true;
	var_38_bool = var_15_string == "patrol";
	if(var_38_bool != 1) {
		var_40_bool = var_15_string == "sanitar";
		if(var_40_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 1) {
		var_42_bool = var_15_string == "soldier";
		if(var_42_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 1) {
		var_44_bool = var_15_string == "woman";
		if(var_44_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 1) {
		var_46_bool = var_15_string == "wasted_girl";
		if(var_46_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 1) {
		var_48_bool = var_15_string == "vaxxabitka";
		if(var_48_bool != 1)
			var_32_bool = false;
	}
	if(var_32_bool != 1) {
		var_50_bool = var_15_string == "vaxxabit";
		if(var_50_bool != 1)
			var_31_bool = false;
	}
	if(var_31_bool != 1) {
		var_52_bool = var_15_string == "little_girl";
		if(var_52_bool != 1)
			var_30_bool = false;
	}
	if(var_30_bool != 1) {
		var_54_bool = var_15_string == "girl";
		if(var_54_bool != 1)
			var_29_bool = false;
	}
	if(var_29_bool != 1) {
		var_56_bool = var_15_string == "dohodyaga";
		if(var_56_bool != 1)
			var_28_bool = false;
	}
	if(var_28_bool != 1) {
		var_58_bool = var_15_string == "nudegirl";
		if(var_58_bool != 1)
			var_27_bool = false;
	}
	if(var_27_bool != 0) {
		var_11_bool = true;
		return 2;
	}
	if(var_13_bool != 0) {
		var_11_bool = false;
		return 2;
	}
	var_11_bool = true;
	bool var_60_bool = true;
	bool var_61_bool = true;
	bool var_62_bool = true;
	bool var_63_bool = true;
	bool var_64_bool = true;
	var_66_bool = var_15_string == "worker";
	if(var_66_bool != 1) {
		var_68_bool = var_15_string == "butcher";
		if(var_68_bool != 1)
			var_64_bool = false;
	}
	if(var_64_bool != 1) {
		var_70_bool = var_15_string == "boy";
		if(var_70_bool != 1)
			var_63_bool = false;
	}
	if(var_63_bool != 1) {
		var_72_bool = var_15_string == "unosha";
		if(var_72_bool != 1)
			var_62_bool = false;
	}
	if(var_62_bool != 1) {
		var_74_bool = var_15_string == "wasted_male";
		if(var_74_bool != 1)
			var_61_bool = false;
	}
	if(var_61_bool != 1) {
		var_76_bool = var_15_string == "alkash";
		if(var_76_bool != 1)
			var_60_bool = false;
	}
	if(var_60_bool != 1) {
		var_78_bool = var_15_string == "morlok";
		if(var_78_bool != 1)
			var_11_bool = false;
	}
}


void func_503(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
}


void func_634(bool var_108_bool, object var_109_object)
{
	object var_113_object;
	var_109_object = var_113_object;
	bool var_112_bool;
	func_598(var_112_bool, var_113_object);
	if(!var_112_bool) { //@nz
		var_108_bool = false;
		return 2;
	}
	bool var_130_bool; object var_131_object;
	func_508(var_130_bool, var_131_object, "noaccess");
	if(!var_130_bool) { //@nz
		var_108_bool = true;
		return 2;
	}
	int var_111_int;
	var_131_object->GetProperty("noaccess", var_111_int);
	var_108_bool = var_111_int == 0;
}


void func_1019(int var_62_int, int var_63_int)
{
	if(var_62_int > var_63_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_66_int = 0;
	if(var_62_int != var_63_int) {
		@irand(var_66_int, (var_63_int - var_62_int));
	} else if(var_62_int == 0) {
		return 4;
	}
	var_66_int += var_62_int;
	if(var_66_int == 0)
		return 4;
	int var_74_int;
	func_1137(var_74_int, "Money");
	bool var_67_bool;
	@AddItem(var_67_bool, var_74_int, 0, var_66_int);
	
}


void func_508(bool var_45_bool, object var_46_object, string var_47_string)
{
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", 2);
	if(!var_52_bool) { //@nz
		var_45_bool = false;
		return 2;
	}
	bool var_49_bool;
	var_46_object->HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
}


void func_1406(object var_285_object)
{
	cvector var_288_cvector; float var_289_float;
	var_285_object->GetPosition(var_288_cvector);
	var_292_bool = IsFuncExist(var_285_object, "@GetHeight", 1);
	if(var_292_bool != 0) {
		var_285_object->GetHeight(var_289_float);
		var_293_float = GetByIndex(var_288_cvector, 1);
		SetByIndex(var_288_cvector, 1) = (var_293_float + (var_289_float / 2));
	}
	cvector var_296_cvector;
	var_288_cvector = var_296_cvector;
	func_1375(var_296_cvector);
}


