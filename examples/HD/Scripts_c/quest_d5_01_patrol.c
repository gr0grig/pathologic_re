// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(1 != 0) {
			func_1784();
			if(var_14_object == 13710) {
				func_132(var_15_bool, "Neutral");
				var_0_object->SetMessage(512541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512542, -1, 13711); //@t
				var_0_object->AddReply(515784, -1, 16856); //@t
				return 0;
			}
			var_3_string = true;
			bool var_44_bool;
			func_2037(var_44_bool);
			if(var_44_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, int var_14_int)
	{
		if(var_14_int == 1) {
			func_1895(var_1_object);
		} else {
			int var_22_int;
			func_1086(var_13_bool, var_22_int, var_22_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_15_bool = false;
		if(var_1_object == var_14_object) {
			if(!var_2_object) //@nz
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			var_2_object = true;
			object var_18_object;
			var_14_object = var_18_object;
			func_1773(var_18_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_15_bool = false;
		if(var_1_object == var_14_object) {
			if(var_2_object != 0)
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		@RequestClearPath(var_14_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		func_942(var_14_object);
		object var_19_object;
		var_14_object = var_19_object;
		func_2023();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) { //@nz
			object var_18_object;
			var_14_object = var_18_object;
			func_1938(var_18_object);
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_14_object;
		func_1832(var_14_object);
		@RemoveActor(var_14_object);
		@Hold();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
	}

}


maintask task_5
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_15_bool;
		func_1319(var_15_bool);
		if(var_15_bool != 0) {
			object var_16_object;
			var_14_object = var_16_object;
			func_1297(var_16_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_16_bool;
		@IsPlayerActor(var_14_object, var_16_bool);
		if(var_16_bool != 0) {
			bool var_18_bool;
			func_1883(var_18_bool, "quest_d5_01", "factory_fight");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, string var_14_string)
	{
		if(var_14_string == "attack") {
			TaskCall(2);
			func_196();
			TaskReturn();
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1562(var_18_object, var_19_int, var_20_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_20_object;
	var_14_object = var_20_object;
	int var_21_int;
	var_15_int = var_21_int;
	float var_22_float;
	var_16_float = var_22_float;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	func_1630(var_22_float, var_23_cvector, var_24_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_2039(var_15_object);
}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1655(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_2031(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_2029(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_2033(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_2035(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_1915(var_80_int);
	var_24_object->SetPlayerName(var_80_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_89_object; object var_90_object;
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(1);
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_138_bool = !var_27_bool; //@nz
		if(var_138_bool == 0) goto Label_63;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_63:
	object var_139_object;
	var_18_object = var_139_object;
	func_1724();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_771(object var_0_object, bool var_4_bool, bool var_319_bool)
{
	object var_325_object; float var_327_float; cvector var_328_cvector; cvector var_329_cvector;
	@GetScene(var_325_object);
	bool var_326_bool = false;
	
	for(;;) {
		cvector var_330_cvector;
		func_1356(var_330_cvector, var_0_object);
		var_336_int = -var_330_cvector;
		@FindDirLength(var_327_float, var_336_int, var_4_bool);
		if(var_327_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_328_cvector); //@t
				@GetPFPosition(var_329_cvector);
				@WaitForAnimEnd();
				func_859(var_329_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_326_bool = true;
				bool var_341_bool;
				func_727(var_329_cvector, var_341_bool);
				var_342_bool = !var_341_bool; //@nz
				if(var_342_bool == 0) goto Label_812;
		}
		for(;;) {
			var_326_bool = var_319_bool;

		}

	Label_812:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_132(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_2037(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string; bool var_101_bool;
	var_96_string = var_100_string;
	if(var_96_string == "")
		var_101_bool = false;
	else
		var_101_bool = true;
	func_1758(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	
}


void func_520(object var_0_object, object var_1_object, bool var_348_bool, float var_349_float)
{
	string var_357_string;
	func_859(var_357_string);
	int var_354_int;
	@irand(var_354_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1904();
	@PlayAnimation("all", ("attack_begin" + (var_354_int + 1)));
	@WaitForAnimEnd();
	int var_356_int;
	func_827(var_356_int, var_357_string);
	bool var_382_bool;
	func_1494(var_382_bool, var_0_object);
	if(!var_382_bool) { //@nz
		@StopAsync();
		var_348_bool = false;
		return 8;
	}
	float var_385_float; int var_386_int;
	var_349_float = var_385_float;
	var_354_int = var_386_int;
	func_481(var_357_string, var_385_float, var_386_int);
	bool var_355_bool;
	@HasAnimation(var_355_bool, "all", ("attack_middle" + var_354_int));
	if(var_355_bool != 0) {
		func_1904();
		@PlayAnimation("all", ("attack_middle" + var_354_int));
		@WaitForAnimEnd();
		func_859(var_357_string);
		bool var_474_bool;
		func_1494(var_474_bool, var_0_object);
		if(!var_474_bool) { //@nz
			@StopAsync();
			var_348_bool = false;
			return 8;
		}
		float var_477_float; int var_478_int;
		var_349_float = var_477_float;
		func_481(var_357_string, var_477_float, var_478_int);
		var_356_int = 1;

		for(;;) {
			var_357_string = (("attack_middle" + var_478_int) + "_") + var_356_int;
			@HasAnimation(var_355_bool, "all", var_357_string);
			if(!var_355_bool) { //@nz
			} else {
				func_1904();
				@PlayAnimation("all", var_357_string);
				@WaitForAnimEnd();
				func_859(var_357_string);
				bool var_500_bool;
				func_1494(var_500_bool, var_0_object);
				if(!var_500_bool) { //@nz
					@StopAsync();
					var_348_bool = false;
					return 8;
				}
				float var_503_float; int var_504_int;
				var_349_float = var_503_float;
				var_354_int = var_504_int;
				func_481(var_357_string, var_503_float, var_504_int);
				var_356_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_354_int));
		bool var_489_bool;
		func_873(var_489_bool);
		if(var_489_bool != 0) {
			bool var_490_bool;
			func_657(var_490_bool, 0.75);
			@StopAsync();
		}
		var_348_bool = true;
		return 8;

	}
}


void func_1932(int var_113_int)
{
	int var_115_int;
	@GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
}


void func_657(bool var_490_bool, float var_491_float)
{
	float var_494_float; bool var_495_bool;
	@rand(var_494_float);
	if(var_494_float < var_491_float) {

		for(;;) {
			@IsAnimationPlaying(var_495_bool);
			if(!var_495_bool) { //@nz
			} else {
				bool var_498_bool;
				func_755(var_498_bool);
				if(var_498_bool != 0) {
					var_490_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_490_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_859(var_495_bool);
}


// @pe
void func_1938(object var_18_object)
{
	int var_19_int;
	func_1932(var_19_int);
	if(var_19_int == 1)
		@WorkWithCorpse(var_18_object);
	else
		@Barter(var_18_object);
	
}


// @pe
void func_1297(object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	TaskCall(0);
	int var_17_int;
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


void func_2039(object var_15_object)
{
	bool var_17_bool;
	@AddItem(var_17_bool, "revolver_ammo", 0, 2);
	@AddItem(var_17_bool, "alpha_pills", 0, 2);
	object var_24_object;
	var_15_object = var_24_object;
	TaskCall(4);
	func_1135(var_24_object);
	TaskReturn();
}


void func_1174(object var_31_object)
{
	cvector var_42_cvector; cvector var_43_cvector; cvector var_44_cvector; cvector var_45_cvector; string var_46_string; object var_47_object; bool var_48_bool; bool var_49_bool; float var_50_float; cvector var_51_cvector;
	if(var_31_object == null) {
		func_1265("fdie");
	} else {
		var_31_object->GetPosition(var_42_cvector);
		@GetPosition(var_43_cvector);
		@GetDirection(var_44_cvector);
		var_45_cvector = var_43_cvector - var_42_cvector;
		var_85_float = GetByIndex(var_45_cvector, 0);
		var_86_float = GetByIndex(var_44_cvector, 0);
		var_88_float = GetByIndex(var_45_cvector, 2);
		var_89_float = GetByIndex(var_44_cvector, 2);
		if(((var_85_float * var_86_float) + (var_88_float * var_89_float)) >= 0)
			var_46_string = "fdie";
		else
			var_46_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_31_object = var_47_object;
		var_96_bool = IsFuncExist(var_31_object, "GetScriptProperty", 2);
		if(var_96_bool != 0) {
			var_31_object->HasScriptProperty(var_48_bool, "Owner");
			if(var_48_bool != 0) {
				var_31_object->GetScriptProperty(var_47_object, "Owner");
				if(var_47_object == null)
					var_31_object = var_47_object;
			}
		}
		var_103_bool = IsFuncExist(var_47_object, "@GetEyesHeight", 1);
		if(var_103_bool != 0) {
			var_47_object->GetEyesHeight(var_50_float);
			var_51_cvector = [0.0, 0.0, 0.0];
			var_104_float = GetByIndex(var_51_cvector, 1);
			var_50_float = var_104_float;
			SetByIndex(var_51_cvector, 1) = var_104_float;
			@LookAsync(var_31_object, "head", var_51_cvector);
			var_49_bool = true;
		} else {
			var_49_bool = false;

		}
		string var_106_string;
		var_46_string = var_106_string;
		func_1791(var_106_string);
		@PlayAnimation("all", var_46_string);
		@WaitForAnimEnd();
		if(var_49_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_46_string);
		@RemoveEnvelope();
		var_47_object = null;
	}
	
}


void func_1562(object var_18_object, int var_19_int, float var_20_float)
{
	cvector var_30_cvector; object var_31_object; int var_32_int; bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	bool var_39_bool = false;
	bool var_40_bool = false;
	if(var_18_object != 0) {
		if(var_19_int != 4)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		if(var_19_int != 5)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		cvector var_46_cvector; cvector var_47_cvector;
		cvector var_48_cvector; object var_49_object;
		var_18_object = var_49_object;
		func_1356(var_48_cvector, var_49_object);
		var_48_cvector = var_47_cvector;
		func_1838(var_46_cvector, var_47_cvector);
		var_46_cvector = var_30_cvector;
		@CreateVectorVector(var_31_object);
		var_32_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_32_int), var_33_bool, var_34_cvector, var_35_cvector);
			if(!var_33_bool) { //@nz
				break;
			Label_1624:
				var_31_object = null;
	}
			object var_108_object;
			var_18_object = var_108_object;
			func_1518(var_108_object);
		}
		if((var_35_cvector | var_30_cvector) >= 0.70710677)
			var_31_object->add(var_34_cvector);
		var_32_int += 1;
	}
	int var_36_int;
	var_31_object->size(var_36_int);
	if(var_36_int == 0) goto Label_1624;
	int var_37_int;
	@irand(var_37_int, var_36_int);
	cvector var_38_cvector;
	var_31_object->get(var_38_cvector, var_37_int);
	object var_63_object; int var_64_int; float var_65_float; cvector var_66_cvector; cvector var_67_cvector;
	var_18_object = var_63_object;
	var_19_int = var_64_int;
	var_20_float = var_65_float;
	var_38_cvector = var_66_cvector;
	var_67_cvector = -var_30_cvector;
	func_1630(var_65_float, var_66_cvector, var_67_cvector);
}


void func_1904(void)
{
	object var_361_object;
	@GetScene(var_361_object);
	object var_363_object;
	func_1832(var_363_object);
	@BroadcastMessage("battle", var_363_object, var_361_object);
}
EMIT "Stack[-1] = 0";


void func_1951(string var_119_string)
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


void func_1915(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x78a";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


void func_1319(bool var_15_bool)
{
	var_15_bool = true;
}


void func_1832(object var_82_object)
{
	object var_84_object;
	@self(var_84_object);
	var_84_object = var_82_object;
}
EMIT "Stack[-1] = 0";


void func_684(object var_0_object, bool var_287_bool, float var_288_float)
{
	bool var_294_bool; cvector var_295_cvector; cvector var_296_cvector; cvector var_297_cvector; float var_298_float;
	
	for(;;) {
		@IsAnimationPlaying(var_294_bool);
		if(!var_294_bool) //@nz
			break;
		bool var_300_bool;
		func_755(var_300_bool);
		if(var_300_bool != 0) {
			var_287_bool = true;
			return 10;
		}
		bool var_343_bool;
		func_1494(var_343_bool, var_0_object);
		if(!var_343_bool) { //@nz
			var_287_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_295_cvector); //@t
		@GetPFPosition(var_296_cvector);
		var_297_cvector = var_295_cvector - var_296_cvector;
		var_298_float = var_297_cvector | var_297_cvector;
		if(var_298_float < (var_288_float * var_288_float)) {
			bool var_348_bool; float var_349_float;
			var_288_float = var_349_float;
			func_520(var_297_cvector, var_298_float, var_348_bool, var_349_float);
			var_287_bool = true;
			return 10;
		}
		@sync();
	}
	func_859(var_298_float);
	var_287_bool = false;
}


void func_1453(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	var_104_object->IsDead(var_106_bool);
	var_106_bool = var_103_bool;
}


void func_942(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1108(var_14_object);
}


void func_1838(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_55_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_55_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_55_float;
}


void func_816(object var_0_object, bool var_250_bool)
{
	bool var_252_bool;
	var_255_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_255_bool != 0) {
		var_0_object->IsAttacking(var_252_bool); //@t
		var_252_bool = var_250_bool;
	}
	var_250_bool = false;
}


void func_1968(void)
{
	int var_113_int;
	func_1932(var_113_int);
	if(var_113_int != 1) {
	}
	func_1951("liver");
	func_1951("kidney");
	func_1951("heart");
	func_1951("blood");
}


void func_1458(bool var_92_bool, object var_93_object)
{
	if(var_93_object == null) {
		var_92_bool = false;
		return 4;
	}
	bool var_99_bool = false;
	var_102_bool = IsFuncExist(var_93_object, "IsDead", 1);
	if(var_102_bool != 0) {
		bool var_103_bool; object var_104_object;
		var_93_object = var_104_object;
		func_1453(var_103_bool, var_104_object);
		if(var_103_bool != 0)
			var_99_bool = true;
	}
	if(var_99_bool != 0) {
		var_92_bool = false;
		return 4;
	}
	object var_96_object;
	@GetScene(var_96_object);
	if(var_96_object == null) {
		var_92_bool = false;
		return 4;
	}
	object var_97_object;
	var_93_object->GetScene(var_97_object);
	if(var_96_object != var_97_object) {
		var_92_bool = false;
		return 4;
	}
	var_92_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1848(float var_437_float, float var_438_float, float var_439_float)
{
	if(var_438_float < var_439_float)
		var_438_float = var_437_float;
	else
		var_439_float = var_437_float;
	
}


void func_827(object var_2_object, object var_5_object)
{
	int var_370_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_369_float;
	@rand(var_369_float);
	float var_376_float;
	func_877(var_376_float);
	if(var_369_float < var_376_float) {
		@irand(var_370_int, var_2_object);
		@Speak("attack" + (var_370_int + 1));
		int var_381_int;
		func_875(var_381_int);
		var_5_object = var_381_int;
	}
}


void func_1724(void)
{
	bool var_141_bool;
	@CameraSwitchToNormal(true);
	bool var_143_bool;
	func_2037(var_143_bool);
	if(var_143_bool != 0) {
	} else {
		@HasAnimationTrack(var_141_bool, "head");
		if(var_141_bool == 0) goto Label_1741;
		@UnlookAsync("head");
	}
Label_1741:
	
}


void func_446(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_55_bool; bool var_56_bool; cvector var_57_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_55_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_55_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, ("attack" + (var_2_object + 1)));
			if(!var_56_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_57_cvector, "all", "bjump");
		var_71_float = GetByIndex(var_57_cvector, 2);
		var_4_bool = -var_71_float;

	}
}


// @pe
void func_1086(object var_0_object, object var_1_object, int var_22_int)
{
	if(var_22_int != 0)
		return 0;
	bool var_25_bool;
	func_1124(var_25_bool, var_1_object);
	if(!var_25_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1342(string var_427_string, int var_428_int)
{
	if(var_428_int == 2) {
		var_427_string = "fire";
		return 0;
	EMIT "GOTO 0x54a";
	}
	if(var_428_int == 1) {
		var_427_string = "bullet";
		return 0;
	}
	var_427_string = "phys";
}


// @pe
void func_1855(float var_447_float, float var_448_float, float var_449_float, float var_450_float)
{
	if(var_448_float < var_449_float) {
		var_449_float = var_447_float;
		return 0;
	}
	if(var_448_float > var_450_float) {
		var_450_float = var_447_float;
		return 0;
	}
	var_448_float = var_447_float;
}


void func_196(void)
{
	object var_24_object;
	@FindActor(var_24_object, "player");
	if(!var_24_object) { //@nz
	}
	object var_27_object;
	object var_23_object;
	func_217(var_20_bool, var_21_float, var_22_int, var_23_object, var_27_object, var_27_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_89_object, object var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_90_object, "Neutral");
		var_0_object->SetMessage(512541); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(512542, -1, 13711); //@t
		var_0_object->AddReply(515784, -1, 16856); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_120_bool;
	func_2037(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1742(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_1866(float var_455_float)
{
	object var_457_object;
	@CreateFloatVector(var_457_object);
	var_457_object->add(var_455_float);
	if(var_455_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_457_object);
}
EMIT "Stack[-1] = 0";


void func_1356(cvector var_48_cvector, object var_49_object)
{
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	cvector var_53_cvector;
	var_49_object->GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
}


void func_1742(string var_122_string)
{
	bool var_126_bool; float var_127_float; float var_128_float;
	@lshHasAnimation(var_126_bool, var_122_string);
	if(var_126_bool != 0) {
		@lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		@lshPlayAnimation(var_127_float, var_128_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_122_string);
	}
	
}


// @pe
void func_211(float var_396_float)
{
	var_396_float = 0.3;
}


void func_1363(bool var_154_bool, object var_155_object)
{
	bool var_157_bool;
	@IsPlayerActor(var_155_object, var_157_bool);
	var_157_bool = var_154_bool;
}


void func_1108(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1494(bool var_88_bool, object var_89_object)
{
	object var_93_object;
	var_89_object = var_93_object;
	bool var_92_bool;
	func_1458(var_92_bool, var_93_object);
	if(!var_92_bool) { //@nz
		var_88_bool = false;
		return 2;
	}
	bool var_110_bool; object var_111_object;
	func_1368(var_110_bool, var_111_object, "noaccess");
	if(!var_110_bool) { //@nz
		var_88_bool = true;
		return 2;
	}
	int var_91_int;
	var_111_object->GetProperty("noaccess", var_91_int);
	var_88_bool = var_91_int == 0;
}


// @pe
void func_214(int var_403_int)
{
	var_403_int = 0;
}


void func_727(object var_0_object, bool var_302_bool)
{
	cvector var_308_cvector; cvector var_309_cvector;
	bool var_313_bool;
	func_1494(var_313_bool, var_0_object);
	if(!var_313_bool) { //@nz
		var_302_bool = false;
		return 10;
	}
	bool var_316_bool;
	float var_312_float;
	func_816(var_312_float, var_316_bool);
	if(var_316_bool != 0) {
		var_0_object->GetPFPosition(var_308_cvector); //@t
		@GetPFPosition(var_309_cvector);
		var_0_object->GetAttackDistance(var_312_float); //@t
		var_302_bool = ((var_308_cvector - var_309_cvector) | (var_308_cvector - var_309_cvector)) <= ((var_312_float + 50) * (var_312_float + 50));
		return 10;
	}
	var_302_bool = false;
}


void func_217(object var_0_object, string var_3_string, object var_5_object, object var_27_object, bool var_28_bool, float var_29_float, bool var_136_bool, bool var_228_bool)
{
	float var_41_float; cvector var_42_cvector; cvector var_43_cvector; bool var_45_bool; float var_48_float; cvector var_49_cvector; bool var_50_bool; float var_51_float;
	func_446(var_49_cvector, var_50_bool, var_51_float);
	var_5_object = 0;
	var_76_bool = IsFuncExist(var_27_object, "@GetAttackDistance", 1);
	if(var_76_bool != 0) {
		var_27_object->GetAttackDistance(var_41_float);
		var_41_float += 50;
	} else {
						var_29_float = var_41_float;
	}
	if(var_41_float >= 150)
		var_41_float = 150;
	var_3_string = false;
	var_0_object = var_27_object;
	bool var_44_bool;
	@IsPlayerActor(var_0_object, var_44_bool);
	if(var_44_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_82_object;
		func_1832(var_82_object);
		@SendPlayerEnemy(var_27_object, var_82_object);
	}
	if(var_28_bool != 0)
		var_45_bool = false;
	else
		var_45_bool = true;

	
Label_257:
	for(;;) {
		bool var_87_bool = false;
		bool var_88_bool;
		func_1494(var_88_bool, var_0_object);
		if(var_88_bool != 0) {
			if(!var_3_string) //@nz
				var_87_bool = true;
		}
		if(var_87_bool != 0) {
			func_859(var_51_float);
			var_0_object->GetPFPosition(var_42_cvector); //@t
			@GetPFPosition(var_43_cvector);
			var_48_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
			if(var_48_float >= ((400.0 + var_41_float) * (400.0 + var_41_float))) {
				bool var_130_bool; float var_132_float;
				var_41_float = var_132_float;
				TaskCall(3);
				func_879(var_138_bool, var_130_bool, var_0_object, var_132_float, 10000.0, true, false);
				TaskReturn();
				if(!var_136_bool) { //@nz
				} else {
					var_45_bool = false;
			} else {
			if(var_48_float >= (var_29_float * var_29_float)) {
				var_0_object->GetPFPosition(var_49_cvector); //@t
				@CanReachByPF(var_50_bool, var_49_cvector);
				if(!var_50_bool) { //@nz
					bool var_222_bool; float var_224_float;
					var_41_float = var_224_float;
					TaskCall(3);
					func_879(var_230_bool, var_222_bool, var_0_object, var_224_float, 10000.0, true, false);
					TaskReturn();
					if(!var_228_bool) { //@nz
						goto Label_429;
					}
					var_45_bool = false;
					goto Label_257;
				}
				if(!var_45_bool) { //@nz
					func_1644(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_859(var_51_float);
					@StopAsync();
					var_45_bool = true;
					bool var_244_bool;
					func_1494(var_244_bool, var_0_object);
					if(!var_244_bool) { //@nz
						goto Label_429;
					}
				}
				@rand(var_51_float);
				bool var_247_bool;
				var_249_bool = var_51_float < 0.25;
				if(var_249_bool != 1) {
					bool var_250_bool;
					func_816(true, var_250_bool);
					if(var_250_bool != 1)
						var_247_bool = false;
				}
				if(var_247_bool != 0) {
					@Face(var_0_object);
					func_866();
					@PlayAnimation("all", "attack_stay");
					bool var_287_bool; float var_288_float;
					func_684(var_51_float, var_287_bool, var_288_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_859(var_51_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_509_bool;
					func_816(var_51_float, var_509_bool);
					var_510_bool = !var_509_bool; //@nz
					if(var_510_bool == 0) goto Label_419;
					bool var_511_bool;
					func_1494(var_511_bool, var_0_object);
					if(!var_511_bool) { //@nz
						goto Label_429;
					}
					var_0_object->GetPFPosition(var_42_cvector); //@t
					@GetPFPosition(var_43_cvector);
					if(!(((var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector)) < (var_288_float * var_288_float))) goto Label_419;
					bool var_516_bool; float var_517_float;
					var_29_float = var_517_float;
					func_520(var_50_bool, var_51_float, var_516_bool, var_517_float);
					var_518_bool = !var_516_bool; //@nz
					if(var_518_bool == 0) goto Label_419;
					goto Label_429;
			}
				bool var_519_bool; float var_520_float;
				var_29_float = var_520_float;
				func_520(var_50_bool, var_51_float, var_519_bool, var_520_float);
				if(!var_519_bool) { //@nz
					goto Label_429;
				}
				var_45_bool = true;

			}
		Label_419:
			goto Label_428;
			}
			Label_428:
			}
		}
	Label_429:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_44_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_984(object var_0_object, object var_1_object, bool var_159_bool, object var_160_object, float var_161_float, float var_162_float, bool var_163_bool, bool var_164_bool)
{
	bool var_173_bool; object var_175_object; cvector var_176_cvector; cvector var_177_cvector; float var_179_float; object var_180_object;
	var_0_object = false;
	var_1_object = var_160_object;
	bool var_174_bool;
	var_164_bool = var_174_bool;
	
	for(;;) {
		bool var_181_bool; object var_182_object;
		var_160_object = var_182_object;
		func_1124(var_181_bool, var_182_object);
		if(!var_181_bool) { //@nz
			var_159_bool = false;
			return 16;
		}
		var_160_object->GetPosition(var_176_cvector);
		@GetPosition(var_177_cvector);
		var_179_float = (var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector);
		bool var_186_bool = false;
		if(var_162_float > 0) {
			if(var_179_float > (var_162_float * var_162_float))
				var_186_bool = true;
		}
		if(var_186_bool != 0) {
			@Stop();
			var_159_bool = false;
			return 16;
		}
		if(var_179_float > (var_161_float * var_161_float)) {
			var_160_object->GetPFPosition(var_176_cvector);
			@FindPathTo(var_180_object, var_176_cvector);
			if(var_180_object != null) {
				var_180_object = var_175_object;
				var_180_object = null;
			}
			if(var_175_object != null) {
				if(var_174_bool == 0) goto Label_1037;
				var_174_bool = false;
				@RotatePath(var_175_object, var_173_bool);
				if(!var_173_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_199_string;
						func_1131(var_199_string);
						string var_200_string;
						func_1133(var_200_string);
						@FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string);
						if(!var_173_bool) { //@nz
							if(var_0_object == 0) goto Label_1056;
							var_175_object = null;
						}
					EMIT "GOTO 0x421";

					Label_1056:
						} else {
					var_175_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_173_bool);
					if(!var_173_bool) { //@nz
						if(var_0_object != 0) {
							var_175_object = null;
							goto Label_1084;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1084;
		}
			var_180_object = null;
			goto Label_1082;

		Label_1082:
			var_175_object = null;

		}
	Label_1084:
		for(;;) {
			var_159_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_859(object var_0_object)
{
	func_1895(var_0_object);
}


void func_1883(bool var_25_bool, string var_26_string, string var_27_string)
{
	object var_29_object;
	@FindActor(var_29_object, var_26_string);
	if(var_29_object == null)
		var_25_bool = false;
	@Trigger(var_29_object, var_27_string);
	var_25_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1368(bool var_110_bool, object var_111_object, string var_112_string)
{
	var_117_bool = IsFuncExist(var_111_object, "HasProperty", 2);
	if(!var_117_bool) { //@nz
		var_110_bool = false;
		return 2;
	}
	bool var_114_bool;
	var_111_object->HasProperty(var_112_string, var_114_bool);
	var_114_bool = var_110_bool;
}


void func_1758(string var_100_string, bool var_101_bool)
{
	bool var_107_bool; float var_108_float; float var_109_float;
	@lshHasAnimation(var_107_bool, var_100_string);
	if(var_107_bool != 0) {
		@lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		@lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_100_string);
	}
	
}


void func_1630(object var_20_object, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_27_object;
	@GetScene(var_27_object);
	object var_28_object;
	@AddActorByType(var_28_object, "scripted", var_27_object, var_23_cvector, var_24_cvector, "blood_dir.xml");
	object var_31_object;
	var_20_object = var_31_object;
	func_1518(var_31_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_864(int var_464_int)
{
	var_464_int = 0;
}


void func_481(object var_0_object, float var_385_float, int var_386_int)
{
	object var_390_object; float var_391_float; float var_392_float;
	@GetVictim((var_385_float * 0.9), var_390_object);
	@ReportAttack(var_0_object);
	if(var_390_object == var_0_object) {
		float var_396_float; object var_397_object; int var_398_int;
		var_390_object = var_397_object;
		var_386_int = var_398_int;
		func_211(var_398_int);
		var_396_float = var_391_float;
		float var_399_float; object var_400_object; float var_401_float; int var_402_int;
		var_390_object = var_400_object;
		int var_403_int; object var_404_object; int var_405_int;
		var_390_object = var_404_object;
		var_386_int = var_405_int;
		func_214(var_405_int);
		var_403_int = var_402_int;
		func_1380(var_399_float, var_400_object, var_401_float, var_402_int);
		var_399_float = var_392_float;
		int var_464_int;
		func_864(var_464_int);
		@ReportHit(var_0_object, var_464_int, var_392_float, var_401_float);
		object var_465_object; float var_466_float;
		var_390_object = var_465_object;
		var_392_float = var_466_float;
		func_871();
	}
}
EMIT "Stack[-3] = 0";


void func_866(void)
{
	func_1791("attack_stay");
}


void func_1380(float var_399_float, object var_400_object, float var_401_float, int var_402_int)
{
	int var_412_int; int var_414_int;
	object var_419_object;
	var_400_object = var_419_object;
	bool var_418_bool;
	func_1368(var_418_bool, var_419_object, "health");
	if(!var_418_bool) //@nz
		var_399_float = 0.0;
	bool var_422_bool; object var_423_object;
	func_1368(var_422_bool, var_423_object, "armor");
	if(!var_422_bool) //@nz
		var_412_int = 0;
	else
		var_423_object->GetProperty("armor", var_412_int);
	string var_427_string; int var_428_int;
	var_402_int = var_428_int;
	func_1342(var_427_string, var_428_int);
	string var_413_string = "armor_" + var_427_string;
	bool var_433_bool; object var_434_object; string var_435_string;
	var_400_object = var_434_object;
	func_1368(var_433_bool, var_434_object, var_435_string);
	if(!var_433_bool) //@nz
		var_414_int = 0;
	else
		var_400_object->GetProperty(var_435_string, var_414_int);

	float var_437_float;
	func_1848(var_437_float, ((var_412_int + var_414_int) / 100.0), (float)1);
	float var_415_float;
	var_437_float = var_415_float;
	float var_416_float;
	var_400_object->GetProperty("health", var_416_float);
	float var_417_float = var_401_float * (1 - var_415_float);
	float var_447_float;
	func_1855(var_447_float, (var_416_float - var_417_float), (float)0, (float)1);
	var_400_object->SetProperty("health", var_447_float);
	bool var_453_bool; object var_454_object;
	var_400_object = var_454_object;
	func_1363(var_453_bool, var_454_object);
	if(var_453_bool != 0) {
		float var_455_float = -var_417_float;
		func_1866(var_455_float);
	}
	var_417_float = var_399_float;
	
}


// @pe
void func_1124(bool var_181_bool, object var_182_object)
{
	object var_184_object;
	var_182_object = var_184_object;
	bool var_183_bool;
	func_1494(var_183_bool, var_184_object);
	var_183_bool = var_181_bool;
}


// @pe
void func_871(void)
{
}


void func_1895(object var_123_object)
{
	bool var_125_bool;
	@IsPlayerActor(var_123_object, var_125_bool);
	if(var_125_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_873(bool var_489_bool)
{
	var_489_bool = true;
}


void func_1131(string var_199_string)
{
	var_199_string = "walk";
}


void func_875(int var_381_int)
{
	var_381_int = 1;
}


void func_1773(object var_147_object)
{
	float var_150_float;
	var_147_object->GetEyesHeight(var_150_float);
	cvector var_151_cvector = [0.0, 0.0, 0.0];
	var_152_float = GetByIndex(var_151_cvector, 1);
	var_150_float = var_152_float;
	SetByIndex(var_151_cvector, 1) = var_152_float;
	@LookAsync(var_147_object, "head", var_151_cvector);
}


void func_1133(string var_200_string)
{
	var_200_string = "run";
}


void func_1518(object var_31_object)
{
	string var_45_string;
	if(var_31_object == null)
		return 14;
	bool var_39_bool;
	@IsDead(var_39_bool);
	if(var_39_bool != 0)
		return 14;
	int var_40_int;
	@GetSecondaryAnimationType(var_40_int);
	if(var_40_int < 0)
		return 14;
	cvector var_41_cvector;
	var_31_object->GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetDirection(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_44_cvector, 0);
	var_51_float = GetByIndex(var_43_cvector, 0);
	var_53_float = GetByIndex(var_44_cvector, 2);
	var_54_float = GetByIndex(var_43_cvector, 2);
	if(((var_50_float * var_51_float) + (var_53_float * var_54_float)) >= 0)
		var_45_string = "fhit";
	else
		var_45_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_45_string + "1"), (var_45_string + "2"), -10);
	
}


// @pe
void func_1135(object var_24_object)
{
	bool var_25_bool;
	func_1883(var_25_bool, "quest_d5_01", "dead");
	object var_31_object;
	var_24_object = var_31_object;
	func_1174(var_31_object);
	@SetRTEnvelope(50, 40);
	func_1968();
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1265(string var_53_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_54_string;
	var_53_string = var_54_string;
	func_1791(var_54_string);
	@PlayAnimation("all", var_53_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_53_string);
	@RemoveEnvelope();
}


void func_1644(object var_233_object)
{
	cvector var_237_cvector;
	var_233_object->GetPosition(var_237_cvector);
	cvector var_238_cvector;
	@GetPosition(var_238_cvector);
	cvector var_239_cvector = var_237_cvector - var_238_cvector;
	var_240_float = GetByIndex(var_239_cvector, 0);
	var_241_float = GetByIndex(var_239_cvector, 2);
	@RotateAsync(var_240_float, var_241_float);
}


void func_2029(int var_77_int)
{
	var_77_int = 515572;
}


void func_877(float var_376_float)
{
	var_376_float = 0.5;
}


void func_2031(int var_76_int)
{
	var_76_int = 504031;
}


void func_879(object var_2_object, bool var_130_bool, object var_131_object, float var_132_float, float var_133_float, bool var_134_bool, bool var_135_bool)
{
	object var_143_object;
	func_1895(var_143_object);
	@SetTimer(1, 5);
	bool var_141_bool;
	@CanSee(var_141_bool, var_143_object);
	if(var_141_bool != 0) {
		var_2_object = true;
		object var_147_object;
		var_131_object = var_147_object;
		func_1773(var_147_object);
	} else {
		var_2_object = false;
	}
	bool var_154_bool; object var_155_object;
	func_1363(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		object var_158_object;
		func_1832(var_158_object);
		@SendPlayerEnemy(var_155_object, var_158_object);
	}
	bool var_159_bool; object var_160_object; float var_161_float; float var_162_float; bool var_163_bool; bool var_164_bool;
	var_131_object = var_160_object;
	var_132_float = var_161_float;
	var_133_float = var_162_float;
	var_134_bool = var_163_bool;
	var_135_bool = var_164_bool;
	bool var_142_bool;
	func_984(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool);
	var_159_bool = var_142_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_142_bool = var_130_bool;
	
}


void func_1655(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_1838(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector, true);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_69_float, var_70_float);
	bool var_71_bool;
	func_2037(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_1718;
		@LookAsyncCamera("head");
	}
Label_1718:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_1784(void)
{
	bool var_17_bool;
	func_2037(var_17_bool);
	if(var_17_bool != 0)
		@lshStopSpeech();
}


void func_2033(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png";
}


void func_2035(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png";
}


void func_755(bool var_300_bool)
{
	bool var_301_bool = false;
	bool var_302_bool;
	func_727(var_301_bool, var_302_bool);
	if(var_302_bool != 0) {
		bool var_319_bool;
		func_771(var_300_bool, var_301_bool, var_319_bool);
		if(var_319_bool != 0)
			var_301_bool = true;
	}
	if(var_301_bool != 0) {
		var_300_bool = true;
		return 0;
	}
	var_300_bool = false;
}


void func_2037(bool var_71_bool)
{
	var_71_bool = false;
}


void func_1791(string var_54_string)
{
	bool var_63_bool; int var_64_int; bool var_65_bool; int var_66_int; bool var_67_bool; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	@IsExisting3DSound(var_63_bool, var_54_string);
	if(!var_63_bool) { //@nz
		var_64_int = 0;

		for(;;) {
			@IsExisting3DSound(var_65_bool, (var_54_string + (var_64_int + 1)));
			if(!var_65_bool) { //@nz
				break;
			Label_1811:
				@irand(var_66_int, var_64_int);
				var_54_string += (var_66_int + 1);
	}
			@Is3DSoundLoaded(var_67_bool, var_54_string);
			if(var_67_bool != 0) {
				@GetEyesHeight(var_68_float);
				@GetDirection(var_69_cvector);
				var_70_cvector = var_69_cvector * 50;
				var_81_float = GetByIndex(var_70_cvector, 1);
				SetByIndex(var_70_cvector, 1) = (var_81_float + var_68_float);
				@PlayGlobalSound(var_54_string, var_70_cvector);
			}
		}
		var_64_int += 1;
	}
	var_76_bool = !var_64_int; //@nz
	if(var_76_bool == 0) goto Label_1811;
}


