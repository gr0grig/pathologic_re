// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		bool var_8_bool;
		@IsOverrideActive(var_8_bool);
		if(!var_8_bool) { //@nz
			object var_10_object;
			var_6_cvector = var_10_object;
			func_1450(var_10_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
	}

}


task task_2
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		func_202();
		object var_8_object;
		var_6_cvector = var_8_object;
		func_1615();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		if(var_6_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		if(var_6_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1140(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_95_object)
		{
		object var_97_object;
		var_95_object = var_97_object;
			bool var_96_bool;
		func_990(var_96_bool, var_97_object);
		if(!var_96_bool) { //@nz
			object var_125_object;
			var_95_object = var_125_object;
			func_1787(var_125_object);
		}
		func_202();
		object var_141_object;
		var_95_object = var_141_object;
		func_1811(var_141_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		object var_10_object;
		var_6_bool = var_10_object;
		object var_11_object;
		var_7_cvector = var_11_object;
		bool var_12_bool;
		var_8_cvector = var_12_bool;
		bool var_9_bool;
		func_1930(var_9_bool, var_10_object, var_11_object, var_12_bool);
		if(var_9_bool != 0) {
			object var_95_object;
			var_6_bool = var_95_object;
			func_240();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		object var_8_object;
		var_6_cvector = var_8_object;
		bool var_7_bool;
		func_1902(var_7_bool, var_8_object);
		if(var_7_bool != 0) {
			func_202();
			object var_127_object;
			var_6_cvector = var_127_object;
			func_1924(var_127_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		if(var_6_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, cvector var_5_cvector, cvector var_6_cvector)
	{
		bool var_7_bool = false;
		if(var_2_object != 0) {
			if(var_6_cvector == actor)
				var_7_bool = true;
		}
		if(var_7_bool != 0)
			func_1140(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, cvector var_5_cvector, cvector var_6_cvector)
	{
		bool var_7_bool = false;
		if(var_2_object != 0) {
			if(var_6_cvector == actor)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_95_object)
		{
		object var_97_object;
		var_95_object = var_97_object;
			bool var_96_bool;
		func_990(var_96_bool, var_97_object);
		if(!var_96_bool) //@nz
			return 0;
		object var_125_object;
		var_95_object = var_125_object;
		func_1787(var_125_object);
		if(var_95_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_95_object;
			if(var_2_object == 0) goto Label_622;
			@StopAnimation();
			@StopGroup0();
		}
	Label_622:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		object var_10_object;
		var_6_bool = var_10_object;
		object var_11_object;
		var_7_cvector = var_11_object;
		bool var_12_bool;
		var_8_cvector = var_12_bool;
		bool var_9_bool;
		func_1930(var_9_bool, var_10_object, var_11_object, var_12_bool);
		if(var_9_bool != 0) {
			object var_95_object;
			var_6_bool = var_95_object;
			func_599();
		}
	}

}


maintask task_4
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
	{
		func_1769();
	
		for(;;) {
			func_733(var_4_cvector, var_5_cvector);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		var_9_object = GlobalVars[0];
		bool var_8_bool;
		var_9_object->in(var_8_bool, var_6_object);
		if(!var_8_bool) { //@nz
			object var_11_object;
			var_6_object = var_11_object;
			func_636();
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, string var_6_string)
	{
		object var_8_object;
		if(var_6_string == "attack") {
			object var_11_object;
			func_852(var_11_object);
			var_11_object = var_8_object;
			func_817();
			object var_15_object;
			var_8_object = var_15_object;
			func_1811(var_15_object);
			var_8_object = null;
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		bool var_7_bool;
		func_1412(var_7_bool, "quest_d10_01", "soldier_fight");
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, object var_7_object, bool var_8_bool)
	{
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
	{
		func_817();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		bool var_9_bool; object var_10_object;
		func_990(var_9_bool, var_10_object);
		if(!var_9_bool) //@nz
			return 2;
		var_44_object = GlobalVars[0];
		bool var_8_bool;
		var_44_object->in(var_8_bool, var_10_object);
		if(var_8_bool != 0) {
			func_817();
			object var_46_object;
			var_6_object = var_46_object;
			TaskCall(2);
			func_178(var_47_object, var_46_object);
			TaskReturn();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		bool var_7_bool;
		func_1902(var_7_bool, var_8_object);
		if(var_7_bool != 0) {
			func_817();
			object var_126_object;
			var_6_object = var_126_object;
			func_1956(var_126_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, int var_7_int, float var_8_float, float var_9_float)
{
	object var_10_object;
	var_6_object = var_10_object;
	int var_11_int;
	var_7_int = var_11_int;
	float var_12_float;
	var_8_float = var_12_float;
	func_1058(var_10_object, var_11_int, var_12_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, int var_7_int, float var_8_float, float var_9_float, cvector var_10_cvector, cvector var_11_cvector)
{
	object var_12_object;
	var_6_object = var_12_object;
	int var_13_int;
	var_7_int = var_13_int;
	float var_14_float;
	var_8_float = var_14_float;
	cvector var_15_cvector;
	var_10_cvector = var_15_cvector;
	cvector var_16_cvector;
	var_11_cvector = var_16_cvector;
	func_1126(var_14_float, var_15_cvector, var_16_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, string var_7_string)
{
	float var_9_float;
	if(var_7_string == "health") {
		@GetProperty("health", var_9_float);
		if(var_9_float <= 0)
			@SignalDeath(var_6_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
{
	bool var_7_bool; object var_8_object;
	func_859(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		object var_11_object;
		func_1317(var_11_object);
		@ReportReputationChange(var_8_object, var_11_object, 0.0, true);
	}
	object var_16_object;
	var_6_object = var_16_object;
	func_1976(var_16_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
{
	object var_6_object;
	func_1317(var_6_object);
	@RemoveActor(var_6_object);
	@Hold();
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_6_bool;
	func_1158(var_6_bool);
	if(!var_6_bool) goto Label_0; //@nz
}


// @pe
void func_1924(object var_127_object)
{
	object var_128_object;
	var_127_object = var_128_object;
	func_1956(var_128_object);
}


void func_1412(bool var_7_bool, string var_8_string, string var_9_string)
{
	object var_11_object;
	@FindActor(var_11_object, var_8_string);
	if(var_11_object == null)
		var_7_bool = false;
	@Trigger(var_11_object, var_9_string);
	var_7_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1158(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


void func_1930(bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
{
	bool var_14_bool;
	object var_16_object;
	var_11_object = var_16_object;
	bool var_15_bool;
	func_1633(var_15_bool, var_16_object, !var_12_bool);
	if(var_15_bool != 0) {
		@CanSee(var_14_bool, var_10_object);
		bool var_83_bool = true;
		if(var_14_bool != 1) {
			float var_85_float; object var_86_object;
			var_10_object = var_86_object;
			func_844(var_85_float, var_86_object);
			var_94_bool = var_85_float <= 490000.0;
			if(var_94_bool != 1)
				var_83_bool = false;
		}
		if(var_83_bool != 0)
			var_9_bool = true;
	}
	var_9_bool = false;
}


void func_1163(string var_65_string, int var_66_int, int var_67_int)
{
	bool var_69_bool;
	int var_71_int;
	var_66_int = var_71_int;
	int var_72_int;
	var_67_int = var_72_int;
	bool var_70_bool;
	func_1355(var_70_bool, var_71_int, var_72_int);
	if(var_70_bool != 0)
		@AddItem(var_69_bool, var_65_string, 0);
}


// @pe
void func_13(object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_859(var_19_bool, var_20_object);
	if(var_19_bool != 0)
		func_1535();
	func_1511();
	object var_97_object;
	var_18_object = var_97_object;
	func_30(var_97_object);
}


void func_1424(object var_142_object)
{
	bool var_144_bool;
	@IsPlayerActor(var_142_object, var_144_bool);
	if(var_144_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_146(string var_120_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_121_string;
	var_120_string = var_121_string;
	func_1189(var_121_string);
	@PlayAnimation("all", var_120_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_120_string);
	@RemoveEnvelope();
}


// @pe
void func_1811(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_1787(var_16_object);
	object var_31_object;
	var_15_object = var_31_object;
	func_1776(var_31_object, true);
}


void func_1174(string var_45_string, int var_46_int, int var_47_int, int var_48_int)
{
	int var_51_int; bool var_52_bool;
	int var_54_int;
	var_46_int = var_54_int;
	int var_55_int;
	var_47_int = var_55_int;
	bool var_53_bool;
	func_1355(var_53_bool, var_54_int, var_55_int);
	if(var_53_bool != 0) {
		@irand(var_51_int, var_48_int);
		@AddItem(var_52_bool, var_45_string, 0, (var_51_int + 1));
	}
}


void func_1433(void)
{
	object var_148_object;
	@GetScene(var_148_object);
	object var_150_object;
	func_1317(var_150_object);
	@BroadcastMessage("battle", var_150_object, var_148_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_30(object var_97_object)
{
	object var_98_object;
	var_97_object = var_98_object;
	func_55(var_98_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1822(bool var_48_bool, object var_49_object)
{
	float var_53_float; float var_55_float;
	object var_57_object;
	var_49_object = var_57_object;
	bool var_56_bool;
	func_990(var_56_bool, var_57_object);
	if(!var_56_bool) { //@nz
		var_48_bool = false;
		return 6;
	}
	bool var_59_bool; object var_60_object;
	func_859(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		var_60_object->GetProperty("reputation", var_53_float);
		var_48_bool = var_53_float < 0.33;
		return 6;
	}
	bool var_65_bool; object var_66_object;
	func_864(var_65_bool, var_66_object, "class");
	if(!var_65_bool) { //@nz
		var_48_bool = false;
		return 6;
	}
	string var_54_string;
	var_66_object->GetProperty("class", var_54_string);
	bool var_70_bool = true;
	bool var_71_bool = true;
	var_73_bool = var_54_string == "bomber";
	if(var_73_bool != 1) {
		var_75_bool = var_54_string == "hunter";
		if(var_75_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 1) {
		var_77_bool = var_54_string == "grabitel";
		if(var_77_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 0) {
		var_48_bool = true;
		return 6;
	}
	bool var_78_bool; object var_79_object;
	func_864(var_78_bool, var_79_object, "disease");
	if(!var_78_bool) { //@nz
		var_48_bool = false;
		return 6;
	}
	bool var_82_bool = true;
	bool var_83_bool; string var_84_string;
	func_1230(var_83_bool, var_84_string);
	if(var_83_bool != 1) {
		var_123_bool = var_84_string == "dog";
		if(var_123_bool != 1)
			var_82_bool = false;
	}
	if(var_82_bool != 0) {
		var_79_object->GetProperty("disease", var_55_float);
		var_48_bool = var_55_float > 0;
		return 6;
	}
	var_48_bool = false;
}


void func_1151(float var_237_float, object var_238_object)
{
	float var_241_float;
	@GetEyesHeight(var_241_float);
	float var_242_float;
	var_238_object->GetEyesHeight(var_242_float);
	var_237_float = var_242_float - var_241_float;
}


void func_1058(object var_10_object, int var_11_int, float var_12_float)
{
	cvector var_22_cvector; object var_23_object; int var_24_int; bool var_25_bool; cvector var_26_cvector; cvector var_27_cvector;
	bool var_31_bool = false;
	bool var_32_bool = false;
	if(var_10_object != 0) {
		if(var_11_int != 4)
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		if(var_11_int != 5)
			var_31_bool = true;
	}
	if(var_31_bool != 0) {
		cvector var_38_cvector; cvector var_39_cvector;
		cvector var_40_cvector; object var_41_object;
		var_10_object = var_41_object;
		func_837(var_40_cvector, var_41_object);
		var_40_cvector = var_39_cvector;
		func_1323(var_38_cvector, var_39_cvector);
		var_38_cvector = var_22_cvector;
		@CreateVectorVector(var_23_object);
		var_24_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_24_int), var_25_bool, var_26_cvector, var_27_cvector);
			if(!var_25_bool) { //@nz
				break;
			Label_1120:
				var_23_object = null;
	}
			object var_100_object;
			var_10_object = var_100_object;
			func_1014(var_100_object);
		}
		if((var_27_cvector | var_22_cvector) >= 0.70710677)
			var_23_object->add(var_26_cvector);
		var_24_int += 1;
	}
	int var_28_int;
	var_23_object->size(var_28_int);
	if(var_28_int == 0) goto Label_1120;
	int var_29_int;
	@irand(var_29_int, var_28_int);
	cvector var_30_cvector;
	var_23_object->get(var_30_cvector, var_29_int);
	object var_55_object; int var_56_int; float var_57_float; cvector var_58_cvector; cvector var_59_cvector;
	var_10_object = var_55_object;
	var_11_int = var_56_int;
	var_12_float = var_57_float;
	var_30_cvector = var_58_cvector;
	var_59_cvector = -var_22_cvector;
	func_1126(var_57_float, var_58_cvector, var_59_cvector);
}


void func_1571(int var_38_int, string var_39_string)
{
	int var_41_int;
	@GetInvItemByName(var_41_int, var_39_string);
	var_41_int = var_38_int;
}


void func_1956(object var_126_object)
{
	var_129_object = GlobalVars[0];
	bool var_128_bool;
	var_129_object->in(var_128_bool, var_126_object);
	if(var_128_bool != 0) {
		object var_131_object;
		var_126_object = var_131_object;
		func_1776(var_131_object, true);
	}
}


void func_1189(string var_121_string)
{
	bool var_130_bool; int var_131_int; bool var_132_bool; int var_133_int; bool var_134_bool; float var_135_float; cvector var_136_cvector; cvector var_137_cvector;
	@IsExisting3DSound(var_130_bool, var_121_string);
	if(!var_130_bool) { //@nz
		var_131_int = 0;

		for(;;) {
			@IsExisting3DSound(var_132_bool, (var_121_string + (var_131_int + 1)));
			if(!var_132_bool) { //@nz
				break;
			Label_1209:
				@irand(var_133_int, var_131_int);
				var_121_string += (var_133_int + 1);
	}
			@Is3DSoundLoaded(var_134_bool, var_121_string);
			if(var_134_bool != 0) {
				@GetEyesHeight(var_135_float);
				@GetDirection(var_136_cvector);
				var_137_cvector = var_136_cvector * 50;
				var_148_float = GetByIndex(var_137_cvector, 1);
				SetByIndex(var_137_cvector, 1) = (var_148_float + var_135_float);
				@PlayGlobalSound(var_121_string, var_137_cvector);
			}
		}
		var_131_int += 1;
	}
	var_143_bool = !var_131_int; //@nz
	if(var_143_bool == 0) goto Label_1209;
}


void func_1317(object var_6_object)
{
	object var_8_object;
	@self(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_1444(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	var_79_int = var_77_int;
}


// @pe
void func_1576(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(1);
	func_13(var_18_object);
	TaskReturn();
}


// @pe
void func_1450(object var_10_object)
{
	int var_11_int;
	func_1444(var_11_int);
	if(var_11_int == 1)
		@WorkWithCorpse(var_10_object);
	else
		@Barter(var_10_object);
	
}


void func_1323(cvector var_38_cvector, cvector var_39_cvector)
{
	float var_47_float = sqrt(var_39_cvector | var_39_cvector);
	if(var_47_float < 0.000001)
		var_38_cvector = [0.0, 0.0, 0.0];
	var_38_cvector = var_39_cvector / var_47_float;
}


void func_298(object var_0_object, object var_1_object, object var_2_object, object var_133_object, bool var_134_bool)
{
	bool var_140_bool; bool var_141_bool;
	var_0_object = var_133_object;
	func_1424(var_0_object);
	func_1433();
	@Face(var_0_object);
	if(var_134_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_324:
	for(;;) {
		bool var_159_bool;
		func_990(var_159_bool, var_0_object);
		if(var_159_bool != 0) {
			@CanSee(var_141_bool, var_0_object);
			if(var_141_bool != 0) {
				func_1424(var_0_object);
				func_478(var_141_bool);
			} else {
				func_1140(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_140_bool);
				if(!var_140_bool) { //@nz
					if(var_1_object != null)
						func_473(var_140_bool, var_141_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_324;
				}
				bool var_333_bool;
				func_990(var_333_bool, var_0_object);
				if(!var_333_bool) { //@nz
				} else {
						@CanSee(var_141_bool, var_0_object);
						if(var_141_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_478(var_141_bool);
							goto Label_420;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_140_bool);
						if(!var_140_bool) { //@nz
							if(var_1_object != null)
								func_473(var_140_bool, var_141_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_324;
						}
						bool var_347_bool;
						func_990(var_347_bool, var_0_object);
						var_349_bool = !var_347_bool; //@nz
						if(var_349_bool == 0) goto Label_408;
				}
		}
		Label_430:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_408:
			var_2_object = false;
			@CanSee(var_141_bool, var_0_object);
			if(var_141_bool != 0) {
				@Face(var_0_object);
				func_478(var_141_bool);
				goto Label_420;
			}
			goto Label_430;
		}
	Label_420:
		if(var_1_object != null)
			func_473(var_140_bool, var_141_bool);
		else
			@Sleep(2);

	}
	
}


void func_817(void)
{
	@StopGroup0();
	@Stop();
}


void func_178(object var_0_object, object var_46_object)
{
	bool var_49_bool;
	@Face(var_46_object);
	
	for(;;) {
		@Sleep(0.5, var_49_bool);
		bool var_51_bool = true;
		var_52_bool = !var_49_bool; //@nz
		if(var_52_bool != 1) {
			bool var_53_bool;
			func_990(var_53_bool, var_46_object);
			var_55_bool = !var_53_bool; //@nz
			if(var_55_bool != 1)
				var_51_bool = false;
		}
		if(var_51_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1333(float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	var_22_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_822(void)
{
}


void func_55(object var_98_object)
{
	cvector var_109_cvector; cvector var_110_cvector; cvector var_111_cvector; cvector var_112_cvector; string var_113_string; object var_114_object; bool var_115_bool; bool var_116_bool; float var_117_float; cvector var_118_cvector;
	if(var_98_object == null) {
		func_146("fdie");
	} else {
		var_98_object->GetPosition(var_109_cvector);
		@GetPosition(var_110_cvector);
		@GetDirection(var_111_cvector);
		var_112_cvector = var_110_cvector - var_109_cvector;
		var_152_float = GetByIndex(var_112_cvector, 0);
		var_153_float = GetByIndex(var_111_cvector, 0);
		var_155_float = GetByIndex(var_112_cvector, 2);
		var_156_float = GetByIndex(var_111_cvector, 2);
		if(((var_152_float * var_153_float) + (var_155_float * var_156_float)) >= 0)
			var_113_string = "fdie";
		else
			var_113_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_98_object = var_114_object;
		var_163_bool = IsFuncExist(var_98_object, "GetScriptProperty", 2);
		if(var_163_bool != 0) {
			var_98_object->HasScriptProperty(var_115_bool, "Owner");
			if(var_115_bool != 0) {
				var_98_object->GetScriptProperty(var_114_object, "Owner");
				if(var_114_object == null)
					var_98_object = var_114_object;
			}
		}
		var_170_bool = IsFuncExist(var_114_object, "@GetEyesHeight", 1);
		if(var_170_bool != 0) {
			var_114_object->GetEyesHeight(var_117_float);
			var_118_cvector = [0.0, 0.0, 0.0];
			var_171_float = GetByIndex(var_118_cvector, 1);
			var_117_float = var_171_float;
			SetByIndex(var_118_cvector, 1) = var_171_float;
			@LookAsync(var_98_object, "head", var_118_cvector);
			var_116_bool = true;
		} else {
			var_116_bool = false;

		}
		string var_173_string;
		var_113_string = var_173_string;
		func_1189(var_173_string);
		@PlayAnimation("all", var_113_string);
		@WaitForAnimEnd();
		if(var_116_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_113_string);
		@RemoveEnvelope();
		var_114_object = null;
	}
	
}


// @pe
void func_823(string var_271_string, int var_272_int)
{
	if(var_272_int == 2) {
		var_271_string = "fire";
		return 0;
	EMIT "GOTO 0x343";
	}
	if(var_272_int == 1) {
		var_271_string = "bullet";
		return 0;
	}
	var_271_string = "phys";
}


// @pe
void func_1337(float var_281_float, float var_282_float, float var_283_float)
{
	if(var_282_float < var_283_float)
		var_282_float = var_281_float;
	else
		var_283_float = var_281_float;
	
}


void func_949(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	var_27_object->IsDead(var_29_bool);
	var_29_bool = var_26_bool;
}


void func_954(bool var_15_bool, object var_16_object)
{
	if(var_16_object == null) {
		var_15_bool = false;
		return 4;
	}
	bool var_22_bool = false;
	var_25_bool = IsFuncExist(var_16_object, "IsDead", 1);
	if(var_25_bool != 0) {
		bool var_26_bool; object var_27_object;
		var_16_object = var_27_object;
		func_949(var_26_bool, var_27_object);
		if(var_26_bool != 0)
			var_22_bool = true;
	}
	if(var_22_bool != 0) {
		var_15_bool = false;
		return 4;
	}
	object var_19_object;
	@GetScene(var_19_object);
	if(var_19_object == null) {
		var_15_bool = false;
		return 4;
	}
	object var_20_object;
	var_16_object->GetScene(var_20_object);
	if(var_19_object != var_20_object) {
		var_15_bool = false;
		return 4;
	}
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1463(int var_26_int, int var_27_int)
{
	if(var_26_int > var_27_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_30_int = 0;
	if(var_26_int != var_27_int) {
		@irand(var_30_int, (var_27_int - var_26_int));
	} else if(var_26_int == 0) {
		return 4;
	}
	var_30_int += var_26_int;
	if(var_30_int == 0)
		return 4;
	int var_38_int;
	func_1571(var_38_int, "Money");
	bool var_31_bool;
	@AddItem(var_31_bool, var_38_int, 0, var_30_int);
	
}


// @pe
void func_1976(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_1576(var_17_object);
}


// @pe
void func_1344(float var_291_float, float var_292_float, float var_293_float, float var_294_float)
{
	if(var_292_float < var_293_float) {
		var_293_float = var_291_float;
		return 0;
	}
	if(var_292_float > var_294_float) {
		var_294_float = var_291_float;
		return 0;
	}
	var_292_float = var_291_float;
}


void func_837(cvector var_40_cvector, object var_41_object)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_41_object->GetPosition(var_45_cvector);
	var_40_cvector = var_45_cvector - var_44_cvector;
}


void func_202(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1355(bool var_53_bool, int var_54_int, int var_55_int)
{
	int var_57_int;
	@irand(var_57_int, var_55_int);
	var_53_bool = var_57_int < var_54_int;
}


void func_844(float var_85_float, object var_86_object)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	cvector var_91_cvector;
	var_86_object->GetPosition(var_91_cvector);
	var_85_float = (var_91_cvector - var_90_cvector) | (var_91_cvector - var_90_cvector);
}


void func_718(void)
{
}


// @pe
void func_1230(bool var_83_bool, string var_84_string)
{
	var_83_bool = true;
	bool var_85_bool = true;
	bool var_86_bool = true;
	bool var_87_bool = true;
	bool var_88_bool = true;
	bool var_89_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	var_97_bool = var_84_string == "woman";
	if(var_97_bool != 1) {
		var_99_bool = var_84_string == "worker";
		if(var_99_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_101_bool = var_84_string == "butcher";
		if(var_101_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_103_bool = var_84_string == "wasted_girl";
		if(var_103_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_105_bool = var_84_string == "boy";
		if(var_105_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_107_bool = var_84_string == "vaxxabitka";
		if(var_107_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_109_bool = var_84_string == "unosha";
		if(var_109_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_111_bool = var_84_string == "wasted_male";
		if(var_111_bool != 1)
			var_89_bool = false;
	}
	if(var_89_bool != 1) {
		var_113_bool = var_84_string == "alkash";
		if(var_113_bool != 1)
			var_88_bool = false;
	}
	if(var_88_bool != 1) {
		var_115_bool = var_84_string == "dohodyaga";
		if(var_115_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 1) {
		var_117_bool = var_84_string == "vaxxabit";
		if(var_117_bool != 1)
			var_86_bool = false;
	}
	if(var_86_bool != 1) {
		var_119_bool = var_84_string == "nudegirl";
		if(var_119_bool != 1)
			var_85_bool = false;
	}
	if(var_85_bool != 1) {
		var_121_bool = var_84_string == "morlok";
		if(var_121_bool != 1)
			var_83_bool = false;
	}
}


void func_1360(object var_7_object)
{
	object var_9_object;
	@CreateObjectSet(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


void func_852(object var_11_object)
{
	object var_13_object;
	@FindActor(var_13_object, "player");
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1366(float var_204_float, cvector var_205_cvector, cvector var_206_cvector)
{
	var_207_float = GetByIndex(var_205_cvector, 0);
	var_208_float = GetByIndex(var_206_cvector, 0);
	var_210_float = GetByIndex(var_205_cvector, 2);
	var_211_float = GetByIndex(var_206_cvector, 2);
	var_204_float = (var_207_float * var_208_float) + (var_210_float * var_211_float);
}


void func_1494(string var_83_string)
{
	object var_87_object;
	@CreateInvItem(var_87_object);
	var_87_object->SetItemName(var_83_string);
	var_87_object->SetProperty("Organ", 1);
	int var_88_int;
	var_87_object->GetItemID(var_88_int);
	bool var_89_bool;
	@AddItem(var_89_bool, var_87_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_473(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_859(bool var_7_bool, object var_8_object)
{
	bool var_10_bool;
	@IsPlayerActor(var_8_object, var_10_bool);
	var_10_bool = var_7_bool;
}


void func_733(object var_0_object, object var_1_object)
{
	int var_14_int; bool var_15_bool; cvector var_16_cvector; object var_17_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_822();
		@irand(var_14_int, 10);
		@Sleep((var_14_int + 5), var_15_bool);
		if(var_15_bool != 0) {
			func_718();
		} else {
		for(;;) {
			func_822();
			@GetPFPosition(var_16_cvector);
			float var_22_float; cvector var_24_cvector;
			var_16_cvector = var_24_cvector;
			func_1333(var_22_float, var_1_object, var_24_cvector);
			if(var_22_float > 40000) {
				@FindPathTo(var_17_object, var_1_object);
				if(var_17_object != null) {
					@RotatePath(var_17_object, var_15_bool);
					if(!var_15_bool) { //@nz
					} else {
					@FollowPath(var_17_object, false, var_15_bool);
					if(!var_15_bool) { //@nz
						goto Label_814;
					}
					var_33_float = GetByIndex(var_0_object, 0);
					var_34_float = GetByIndex(var_0_object, 2);
					@Rotate(var_33_float, var_34_float, var_15_bool);
					if(!var_15_bool) { //@nz
						goto Label_814;
					}
					@WaitForAnimEnd(var_15_bool);
					if(!var_15_bool) { //@nz
						goto Label_814;
					}
					goto Label_815;
				EMIT "GOTO 0x31f";
				}
				@Sleep(1);
				var_17_object = null;
				goto Label_814;
			}
			var_38_float = GetByIndex(var_0_object, 0);
			var_39_float = GetByIndex(var_0_object, 2);
			@Rotate(var_38_float, var_39_float, var_15_bool);
			if(!var_15_bool) { //@nz
				goto Label_814;
			}
			@WaitForAnimEnd(var_15_bool);
			if(!var_15_bool) { //@nz
				goto Label_814;
			}
			goto Label_815;
			}
		Label_814:
		}
		}
	Label_815:
	}
	
}
EMIT "Return(); Pop(8)";


void func_990(bool var_11_bool, object var_12_object)
{
	object var_16_object;
	var_12_object = var_16_object;
	bool var_15_bool;
	func_954(var_15_bool, var_16_object);
	if(!var_15_bool) { //@nz
		var_11_bool = false;
		return 2;
	}
	bool var_33_bool; object var_34_object;
	func_864(var_33_bool, var_34_object, "noaccess");
	if(!var_33_bool) { //@nz
		var_11_bool = true;
		return 2;
	}
	int var_14_int;
	var_34_object->GetProperty("noaccess", var_14_int);
	var_11_bool = var_14_int == 0;
}


void func_478(object var_0_object)
{
	object var_182_object; object var_183_object; float var_188_float; object var_189_object; object var_190_object;
	func_1424(var_0_object);
	@ReportAttack(var_0_object);
	bool var_192_bool;
	func_859(var_192_bool, var_0_object);
	if(var_192_bool != 0) {
		object var_194_object;
		func_1317(var_194_object);
		@SendPlayerEnemy(var_0_object, var_194_object);
	}
	cvector var_177_cvector;
	@GetDirection(var_177_cvector);
	cvector var_195_cvector;
	func_837(var_195_cvector, var_0_object);
	cvector var_178_cvector;
	var_195_cvector = var_178_cvector;
	float var_201_float; cvector var_202_cvector; cvector var_203_cvector;
	var_178_cvector = var_203_cvector;
	func_1385(var_201_float, var_202_cvector, var_203_cvector);
	if(var_201_float < 0.99939084) {
	}
	func_1433();
	@PlayAnimation("all", "attack_begin1");
	bool var_179_bool;
	cvector var_180_cvector;
	cvector var_181_cvector;
	@GetGeometryLocator("attack", var_179_bool, var_180_cvector, var_181_cvector);
	if(var_179_bool != 0) {
		@GetScene(var_183_object);
		@AddActorByType(var_182_object, "light-dynamic", var_183_object, var_180_cvector, var_181_cvector, "soldier_fire.xml");
		var_183_object = null;
		var_182_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@Speak("shot");
	@GetDirection(var_202_cvector);
	cvector var_234_cvector;
	func_837(var_234_cvector, var_0_object);
	var_234_cvector = var_178_cvector;
	var_236_float = GetByIndex(var_178_cvector, 1);
	float var_237_float;
	func_1151(var_237_float, var_0_object);
	SetByIndex(var_178_cvector, 1) = (var_236_float + var_237_float);
	cvector var_184_cvector;
	@RandVecCone3D(var_184_cvector, var_178_cvector, 0.034906585);
	object var_185_object;
	int var_186_int;
	cvector var_187_cvector;
	@GetVictimMaterial(var_184_cvector, var_185_object, var_186_int, var_187_cvector);
	if(var_185_object != null) {
		if(var_185_object == var_0_object) {
			float var_246_float;
			func_876(var_246_float, var_0_object, 1.5, 1);
			var_246_float = var_188_float;
			@ReportHit(var_0_object, 2, var_188_float, 1.5);
		} else if(var_186_int != -1) {
			@GetScene(var_189_object);
			@AddActorByType(var_190_object, "scripted", var_189_object, var_187_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_190_object->SetScriptProperty("Material", var_186_int);
			var_190_object = null;
			var_189_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_864(bool var_33_bool, object var_34_object, string var_35_string)
{
	var_40_bool = IsFuncExist(var_34_object, "HasProperty", 2);
	if(!var_40_bool) { //@nz
		var_33_bool = false;
		return 2;
	}
	bool var_37_bool;
	var_34_object->HasProperty(var_35_string, var_37_bool);
	var_37_bool = var_33_bool;
}


// @pe
void func_1375(float var_213_float, cvector var_214_cvector)
{
	var_215_float = GetByIndex(var_214_cvector, 0);
	var_216_float = GetByIndex(var_214_cvector, 0);
	var_218_float = GetByIndex(var_214_cvector, 2);
	var_219_float = GetByIndex(var_214_cvector, 2);
	var_213_float = sqrt((var_215_float * var_216_float) + (var_218_float * var_219_float));
}


void func_1633(bool var_15_bool, object var_16_object, bool var_17_bool)
{
	bool var_20_bool; object var_21_object;
	func_864(var_20_bool, var_21_object, "class");
	if(!var_20_bool) { //@nz
		var_15_bool = false;
		return 2;
	}
	string var_19_string;
	var_21_object->GetProperty("class", var_19_string);
	bool var_31_bool = true;
	bool var_32_bool = true;
	bool var_33_bool = true;
	bool var_34_bool = true;
	bool var_35_bool = true;
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	var_42_bool = var_19_string == "patrol";
	if(var_42_bool != 1) {
		var_44_bool = var_19_string == "sanitar";
		if(var_44_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_46_bool = var_19_string == "soldier";
		if(var_46_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_48_bool = var_19_string == "woman";
		if(var_48_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_50_bool = var_19_string == "wasted_girl";
		if(var_50_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_52_bool = var_19_string == "vaxxabitka";
		if(var_52_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 1) {
		var_54_bool = var_19_string == "vaxxabit";
		if(var_54_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 1) {
		var_56_bool = var_19_string == "little_girl";
		if(var_56_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 1) {
		var_58_bool = var_19_string == "girl";
		if(var_58_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 1) {
		var_60_bool = var_19_string == "dohodyaga";
		if(var_60_bool != 1)
			var_32_bool = false;
	}
	if(var_32_bool != 1) {
		var_62_bool = var_19_string == "nudegirl";
		if(var_62_bool != 1)
			var_31_bool = false;
	}
	if(var_31_bool != 0) {
		var_15_bool = true;
		return 2;
	}
	if(var_17_bool != 0) {
		var_15_bool = false;
		return 2;
	}
	var_15_bool = true;
	bool var_64_bool = true;
	bool var_65_bool = true;
	bool var_66_bool = true;
	bool var_67_bool = true;
	bool var_68_bool = true;
	var_70_bool = var_19_string == "worker";
	if(var_70_bool != 1) {
		var_72_bool = var_19_string == "butcher";
		if(var_72_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 1) {
		var_74_bool = var_19_string == "boy";
		if(var_74_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 1) {
		var_76_bool = var_19_string == "unosha";
		if(var_76_bool != 1)
			var_66_bool = false;
	}
	if(var_66_bool != 1) {
		var_78_bool = var_19_string == "wasted_male";
		if(var_78_bool != 1)
			var_65_bool = false;
	}
	if(var_65_bool != 1) {
		var_80_bool = var_19_string == "alkash";
		if(var_80_bool != 1)
			var_64_bool = false;
	}
	if(var_64_bool != 1) {
		var_82_bool = var_19_string == "morlok";
		if(var_82_bool != 1)
			var_15_bool = false;
	}
}


void func_1126(object var_12_object, cvector var_15_cvector, cvector var_16_cvector)
{
	object var_19_object;
	@GetScene(var_19_object);
	object var_20_object;
	@AddActorByType(var_20_object, "scripted", var_19_object, var_15_cvector, var_16_cvector, "blood_dir.xml");
	object var_23_object;
	var_12_object = var_23_object;
	func_1014(var_23_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1511(void)
{
	int var_77_int;
	func_1444(var_77_int);
	if(var_77_int != 1) {
	}
	func_1494("liver");
	func_1494("kidney");
	func_1494("heart");
	func_1494("blood");
}


// @pe
void func_1385(float var_201_float, cvector var_202_cvector, cvector var_203_cvector)
{
	cvector var_205_cvector;
	var_202_cvector = var_205_cvector;
	cvector var_206_cvector;
	var_203_cvector = var_206_cvector;
	float var_204_float;
	func_1366(var_204_float, var_205_cvector, var_206_cvector);
	float var_213_float; cvector var_214_cvector;
	var_202_cvector = var_214_cvector;
	func_1375(var_213_float, var_214_cvector);
	float var_222_float; cvector var_223_cvector;
	var_203_cvector = var_223_cvector;
	func_1375(var_222_float, var_223_cvector);
	var_201_float = var_204_float / (var_213_float * var_222_float);
}


void func_1769(void)
{
	var_6_object = GlobalVars[0];
	object var_7_object;
	func_1360(var_7_object);
	var_7_object = var_6_object;
	GlobalVars[0] = var_6_object;
}


void func_876(float var_246_float, object var_247_object, float var_248_float, int var_249_int)
{
	int var_256_int; int var_258_int;
	object var_263_object;
	var_247_object = var_263_object;
	bool var_262_bool;
	func_864(var_262_bool, var_263_object, "health");
	if(!var_262_bool) //@nz
		var_246_float = 0.0;
	bool var_266_bool; object var_267_object;
	func_864(var_266_bool, var_267_object, "armor");
	if(!var_266_bool) //@nz
		var_256_int = 0;
	else
		var_267_object->GetProperty("armor", var_256_int);
	string var_271_string; int var_272_int;
	var_249_int = var_272_int;
	func_823(var_271_string, var_272_int);
	string var_257_string = "armor_" + var_271_string;
	bool var_277_bool; object var_278_object; string var_279_string;
	var_247_object = var_278_object;
	func_864(var_277_bool, var_278_object, var_279_string);
	if(!var_277_bool) //@nz
		var_258_int = 0;
	else
		var_247_object->GetProperty(var_279_string, var_258_int);

	float var_281_float;
	func_1337(var_281_float, ((var_256_int + var_258_int) / 100.0), (float)1);
	float var_259_float;
	var_281_float = var_259_float;
	float var_260_float;
	var_247_object->GetProperty("health", var_260_float);
	float var_261_float = var_248_float * (1 - var_259_float);
	float var_291_float;
	func_1344(var_291_float, (var_260_float - var_261_float), (float)0, (float)1);
	var_247_object->SetProperty("health", var_291_float);
	bool var_297_bool; object var_298_object;
	var_247_object = var_298_object;
	func_859(var_297_bool, var_298_object);
	if(var_297_bool != 0) {
		float var_299_float = -var_261_float;
		func_1402(var_299_float);
	}
	var_261_float = var_246_float;
	
}


void func_1902(bool var_7_bool, object var_8_object)
{
	bool var_11_bool; object var_12_object;
	func_990(var_11_bool, var_12_object);
	if(!var_11_bool) { //@nz
		var_7_bool = false;
		return 2;
	}
	var_46_object = GlobalVars[0];
	bool var_10_bool;
	var_46_object->in(var_10_bool, var_12_object);
	if(var_10_bool != 0) {
		var_7_bool = true;
		return 2;
	}
	bool var_48_bool; object var_49_object;
	var_8_object = var_49_object;
	func_1822(var_48_bool, var_49_object);
	var_48_bool = var_7_bool;
}


// @pe
void func_1776(object var_131_object, bool var_132_bool)
{
	object var_133_object;
	var_131_object = var_133_object;
	bool var_134_bool;
	var_132_bool = var_134_bool;
	TaskCall(3);
	func_298(var_135_object, var_136_object, var_137_bool, var_133_object, var_134_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1140(object var_318_object)
{
	cvector var_322_cvector;
	var_318_object->GetPosition(var_322_cvector);
	cvector var_323_cvector;
	@GetPosition(var_323_cvector);
	cvector var_324_cvector = var_322_cvector - var_323_cvector;
	var_325_float = GetByIndex(var_324_cvector, 0);
	var_326_float = GetByIndex(var_324_cvector, 2);
	@RotateAsync(var_325_float, var_326_float);
}


void func_1014(object var_23_object)
{
	string var_37_string;
	if(var_23_object == null)
		return 14;
	bool var_31_bool;
	@IsDead(var_31_bool);
	if(var_31_bool != 0)
		return 14;
	int var_32_int;
	@GetSecondaryAnimationType(var_32_int);
	if(var_32_int < 0)
		return 14;
	cvector var_33_cvector;
	var_23_object->GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_36_cvector = var_34_cvector - var_33_cvector;
	var_42_float = GetByIndex(var_36_cvector, 0);
	var_43_float = GetByIndex(var_35_cvector, 0);
	var_45_float = GetByIndex(var_36_cvector, 2);
	var_46_float = GetByIndex(var_35_cvector, 2);
	if(((var_42_float * var_43_float) + (var_45_float * var_46_float)) >= 0)
		var_37_string = "fhit";
	else
		var_37_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_37_string + "1"), (var_37_string + "2"), -10);
	
}


void func_1402(float var_299_float)
{
	object var_301_object;
	@CreateFloatVector(var_301_object);
	var_301_object->add(var_299_float);
	@SendWorldWndMessage(15, var_301_object);
}
EMIT "Stack[-1] = 0";


void func_1787(object var_16_object)
{
	if(var_16_object == null) {
	}
	var_20_object = GlobalVars[0];
	bool var_18_bool;
	var_20_object->in(var_18_bool, var_16_object);
	if(!var_18_bool) { //@nz
		var_22_object = GlobalVars[0];
		var_22_object->add(var_16_object);
	}
	bool var_23_bool; object var_24_object;
	func_859(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		object var_27_object;
		func_1317(var_27_object);
		@ReportReputationChange(var_24_object, var_27_object, 0.0);
	}
}


// @pe
void func_636(void)
{
	func_817();
}


void func_1535(void)
{
	@ClearSubContainer(0);
	func_1463(500, 1000);
	func_1174("rifle_ammo", 1, 3, 3);
	func_1174("rusk", 1, 3, 2);
	func_1163("bandage", 1, 6);
	func_1163("tourniquet", 1, 6);
}


