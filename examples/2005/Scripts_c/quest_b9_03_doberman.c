// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		if(1 != 0) {
			func_2153();
			if(var_21_bool == 31699) {
				object var_26_object = var_1_object;
				func_2307(var_0_object);
			}
			if(var_21_bool == 31700) {
				object var_105_object = var_1_object;
				func_2361(var_0_object);
			}
			if(var_20_object == 31696) {
				bool var_128_bool;
				func_2404(var_1_object);
				if(var_128_bool != 0) {
					object var_136_object; object var_137_object;
					var_136_object = var_1_object;
					var_137_object = var_0_object;
					func_2355();
					func_157(var_21_bool, "Neutral");
					var_0_object->SetMessage(530309); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530310, 31698, 31697); //@t
					var_0_object->AddReply(531024, -1, 32353); //@t
					return 0;
				}
				func_157(var_21_bool, "Neutral");
				var_0_object->SetMessage(530314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530315, -1, 31702); //@t
				return 0;
			}
			if(var_20_object == 31698) {
				func_157(var_21_bool, "Neutral");
				var_0_object->SetMessage(530311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531025, 32355, 32354); //@t
				var_0_object->AddReply(531027, -1, 32356); //@t
				return 0;
			}
			if(var_20_object == 32355) {
				func_157(var_21_bool, "Neutral");
				var_0_object->SetMessage(531026); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530312, -1, 31699); //@t
				var_0_object->AddReply(530313, -1, 31700); //@t
				return 0;
			}
			var_3_string = true;
			bool var_184_bool;
			func_2629(var_184_bool);
			if(var_184_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		@SensePlayerOnly(true);
		func_356((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_500(var_19_object, var_20_bool);
		object var_24_object;
		var_20_bool = var_24_object;
		func_2681(var_24_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_1747(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			bool var_25_bool;
			func_2270(var_25_bool, "quest_b9_03", "doberman_attack");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(var_20_bool == "attack") {
			func_500(var_19_object, var_20_bool);
			TaskCall(3);
			func_600();
			TaskReturn();
		} else {
			string var_526_string;
			var_20_bool = var_526_string;
			func_401(var_526_string);
		}
	
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_500(var_18_object, var_19_bool);
		bool var_23_bool = false;
		if(var_5_int != 0) {
			bool var_25_bool;
			func_433(var_25_bool);
			if(var_25_bool != 0)
				var_23_bool = true;
		}
		if(var_23_bool != 0) {
			object var_26_object;
			func_2216(var_26_object);
			@RemoveActor(var_26_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(var_20_bool == 10) {
			bool var_23_bool;
			func_462(var_18_bool, var_19_object, var_20_bool, var_23_bool);
			if(var_23_bool != 0) {
				if(!var_2_object) { //@nz
					func_2142(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_3
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_2216(var_20_object);
		@RemoveActor(var_20_object);
	}

}


task task_4
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_2216(var_20_object);
		@RemoveActor(var_20_object);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, int var_20_int)
	{
		if(var_20_int == 1) {
			func_2287(var_1_object);
		} else {
			int var_28_int;
			func_1499(var_19_bool, var_28_int, var_28_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
	{
		bool var_21_bool = false;
		if(var_1_object == var_20_object) {
			if(!var_2_object) //@nz
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			var_2_object = true;
			object var_24_object;
			var_20_object = var_24_object;
			func_2142(var_24_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
	{
		bool var_21_bool = false;
		if(var_1_object == var_20_object) {
			if(var_2_object != 0)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
	{
		@RequestClearPath(var_20_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
	{
		func_1355(var_20_object);
		object var_25_object;
		var_20_object = var_25_object;
		func_2675();
	}

}


task task_5
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_2216(var_20_object);
		@RemoveActor(var_20_object);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
	{
		bool var_22_bool;
		@IsOverrideActive(var_22_bool);
		if(!var_22_bool) { //@nz
			object var_24_object;
			var_20_object = var_24_object;
			func_2520(var_24_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object, string var_21_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
{
	object var_24_object;
	var_20_object = var_24_object;
	int var_25_int;
	var_21_int = var_25_int;
	float var_26_float;
	var_22_float = var_26_float;
	func_1946(var_24_object, var_25_int, var_26_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_26_object;
	var_20_object = var_26_object;
	int var_27_int;
	var_21_int = var_27_int;
	float var_28_float;
	var_22_float = var_28_float;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	cvector var_30_cvector;
	var_25_cvector = var_30_cvector;
	func_2014(var_28_float, var_29_cvector, var_30_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object, string var_21_string)
{
	float var_23_float;
	if(var_21_string == "health") {
		@GetProperty("health", var_23_float);
		if(var_23_float <= 0)
			@SignalDeath(var_20_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool, object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_2631(var_21_object);
}


void func_0(object var_0_object, int var_25_int, object var_26_object)
{
	var_0_object = var_26_object;
	bool var_36_bool; object var_37_object;
	var_26_object = var_37_object;
	func_2044(var_36_bool, var_37_object, 70.0);
	if(!var_36_bool) { //@nz
		var_25_int = -2;
		return 8;
	}
	object var_32_object;
	@CreateDialog(var_32_object);
	int var_83_int;
	func_2623(var_83_int);
	var_32_object->SetNPCName(var_83_int);
	int var_84_int;
	func_2621(var_84_int);
	var_32_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_2625(var_85_string);
	var_32_object->SetPhoto(var_85_string);
	string var_86_string;
	func_2627(var_86_string);
	var_32_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_2574(var_87_int);
	var_32_object->SetPlayerName(var_87_int);
	bool var_33_bool;
	@IsOverrideActive(var_33_bool);
	if(var_33_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	@DoDialog(var_32_object);
	object var_96_object; object var_97_object;
	var_26_object = var_96_object;
	var_32_object = var_97_object;
	TaskCall(1);
	func_74(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	bool var_35_bool;
	var_32_object->IsDialogEnd(var_35_bool);
	
	for(;;) {
		var_152_bool = !var_35_bool; //@nz
		if(var_152_bool == 0) goto Label_63;
		@sync();
		var_32_object->IsDialogEnd(var_35_bool);
	}
	
Label_63:
	object var_153_object;
	var_26_object = var_153_object;
	func_2112();
	@StopDialog(var_32_object);
	var_32_object->GetReturnValue(-1);
	int var_34_int = var_25_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1537(bool var_31_bool, object var_32_object)
{
	object var_34_object;
	var_32_object = var_34_object;
	bool var_33_bool;
	func_1878(var_33_bool, var_34_object);
	var_33_bool = var_31_bool;
}


void func_514(void)
{
	int var_48_int; int var_49_int; bool var_50_bool; float var_51_float; bool var_52_bool;
	@WaitForAnimEnd();
	bool var_53_bool;
	func_2039(var_53_bool);
	if(!var_53_bool) //@nz
		return 14;
	int var_55_int;
	func_2604(var_55_int);
	int var_46_int;
	var_55_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_68_bool = false;
		if(var_47_int < 5) {
			bool var_71_bool;
			func_2039(var_71_bool);
			if(var_71_bool != 0)
				var_68_bool = true;
		}
		if(var_68_bool != 0) {
			@irand(var_48_int, 3);
			if(var_48_int == 0) {
				if(var_46_int == 0) goto Label_561;
				@irand(var_49_int, var_46_int);
				string var_77_string; int var_78_int;
				var_49_int = var_78_int;
				func_2597(var_77_string, var_78_int);
				@PlayAnimation("all", var_77_string);
				@WaitForAnimEnd(var_50_bool);
				if(!var_50_bool) { //@nz
				} else {
			} else {
			if(var_48_int == 1) {
				@rand(var_51_float, 4);
				@Sleep((var_51_float + 1), var_52_bool);
				if(!var_52_bool) { //@nz
					goto Label_590;
				}
			} else if(var_47_int != 0) {
				goto Label_590;
			}
			}
					bool var_80_bool;
					func_593(var_80_bool);
					var_81_bool = !var_80_bool; //@nz
					if(var_81_bool == 0) goto Label_585;
			}
		}
	Label_590:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_585:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_1280(bool var_493_bool)
{
	var_493_bool = true;
}


void func_1282(int var_389_int)
{
	var_389_int = 1;
}


void func_2307(object var_27_object)
{
	object var_30_object;
	func_2470(var_30_object);
	object var_29_object;
	var_30_object = var_29_object;
	float var_41_float;
	func_2282(var_41_float);
	var_29_object->AddMark("b9q03DobermanGotoFollower", "pt_b9q03_follower", 0, 530343, var_41_float);
	func_2416();
	bool var_67_bool;
	func_2270(var_67_bool, "quest_b9_03", "place_follower");
	bool var_73_bool;
	func_2270(var_73_bool, "quest_b9_03", "init_bonefires");
	bool var_76_bool;
	func_2270(var_76_bool, "quest_b9_03", "doberman_attack");
	object var_79_object;
	object var_82_object;
	func_2470(var_82_object);
	var_82_object = var_79_object;
	func_2487(var_79_object, "pt_b9q03_follower", (float)2);
	object var_102_object;
	func_2470(var_102_object);
	var_27_object->ShowMap(var_102_object);
}
EMIT "Stack[-1] = 0";


void func_1284(float var_384_float)
{
	var_384_float = 0.5;
}


void func_1544(string var_207_string)
{
	var_207_string = "walk";
}


void func_1546(string var_208_string)
{
	var_208_string = "run";
}


// @pe
void func_1548(object var_28_object)
{
	func_2160("samopal_ammo", 1, 1, 4);
	func_2550();
	object var_65_object;
	var_28_object = var_65_object;
	func_1570(var_65_object);
}


void func_1292(object var_2_object, bool var_138_bool, object var_139_object, float var_140_float, float var_141_float, bool var_142_bool, bool var_143_bool)
{
	object var_151_object;
	func_2287(var_151_object);
	@SetTimer(1, 5);
	bool var_149_bool;
	@CanSee(var_149_bool, var_151_object);
	if(var_149_bool != 0) {
		var_2_object = true;
		object var_155_object;
		var_139_object = var_155_object;
		func_2142(var_155_object);
	} else {
		var_2_object = false;
	}
	bool var_162_bool; object var_163_object;
	func_1747(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		object var_166_object;
		func_2216(var_166_object);
		@SendPlayerEnemy(var_163_object, var_166_object);
	}
	bool var_167_bool; object var_168_object; float var_169_float; float var_170_float; bool var_171_bool; bool var_172_bool;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	bool var_150_bool;
	func_1397(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_150_bool = var_138_bool;
	
}


void func_2574(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0xa1d";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


void func_2039(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_2591(int var_45_int)
{
	int var_47_int;
	@GetVariable("branch", var_47_int);
	var_47_int = var_45_int;
}


// @pe
void func_1570(object var_65_object)
{
	object var_66_object;
	var_65_object = var_66_object;
	func_1595(var_66_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2597(string var_61_string, int var_62_int)
{
	string var_64_string = "idle";
	if(var_62_int != 0)
		var_64_string += var_62_int;
	var_64_string = var_61_string;
}


void func_1064(bool var_494_bool, float var_495_float)
{
	float var_498_float; bool var_499_bool;
	@rand(var_498_float);
	if(var_498_float < var_495_float) {

		for(;;) {
			@IsAnimationPlaying(var_499_bool);
			if(!var_499_bool) { //@nz
			} else {
				bool var_502_bool;
				func_1162(var_502_bool);
				if(var_502_bool != 0) {
					var_494_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_494_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1266(var_499_bool);
}


void func_2604(int var_55_int)
{
	int var_58_int; bool var_59_bool;
	var_58_int = 0;
	
	for(;;) {
		string var_61_string; int var_62_int;
		var_58_int = var_62_int;
		func_2597(var_61_string, var_62_int);
		@HasAnimation(var_59_bool, "all", var_61_string);
		if(!var_59_bool) //@nz
			break;
		var_58_int += 1;
	}
	var_58_int = var_55_int;
}


void func_1837(bool var_48_bool, object var_49_object)
{
	bool var_51_bool;
	var_49_object->IsDead(var_51_bool);
	var_51_bool = var_48_bool;
}


void func_1842(bool var_37_bool, object var_38_object)
{
	if(var_38_object == null) {
		var_37_bool = false;
		return 4;
	}
	bool var_44_bool = false;
	var_47_bool = IsFuncExist(var_38_object, "IsDead", 1);
	if(var_47_bool != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1837(var_48_bool, var_49_object);
		if(var_48_bool != 0)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		var_37_bool = false;
		return 4;
	}
	object var_41_object;
	@GetScene(var_41_object);
	if(var_41_object == null) {
		var_37_bool = false;
		return 4;
	}
	object var_42_object;
	var_38_object->GetScene(var_42_object);
	if(var_41_object != var_42_object) {
		var_37_bool = false;
		return 4;
	}
	var_37_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2355(void)
{
	@SetVariable("oob9DobermanSpi4ka1_1", 1);
}


void func_2361(object var_106_object)
{
	object var_109_object;
	func_2470(var_109_object);
	object var_108_object;
	var_109_object = var_108_object;
	float var_114_float;
	func_2282(var_114_float);
	var_108_object->AddMark("b9q03DobermanGotoFollower", "pt_b9q03_follower", 0, 530343, var_114_float);
	func_2416();
	bool var_115_bool;
	func_2270(var_115_bool, "quest_b9_03", "place_follower");
	bool var_118_bool;
	func_2270(var_118_bool, "quest_b9_03", "init_bonefires");
	object var_121_object;
	object var_124_object;
	func_2470(var_124_object);
	var_124_object = var_121_object;
	func_2487(var_121_object, "pt_b9q03_follower", (float)2);
	object var_125_object;
	func_2470(var_125_object);
	var_106_object->ShowMap(var_125_object);
}
EMIT "Stack[-1] = 0";


void func_1595(object var_66_object)
{
	cvector var_77_cvector; cvector var_78_cvector; cvector var_79_cvector; cvector var_80_cvector; string var_81_string; object var_82_object; bool var_83_bool; bool var_84_bool; float var_85_float; cvector var_86_cvector;
	if(var_66_object == null) {
		func_1686("fdie");
	} else {
		var_66_object->GetPosition(var_77_cvector);
		@GetPosition(var_78_cvector);
		@GetDirection(var_79_cvector);
		var_80_cvector = var_78_cvector - var_77_cvector;
		var_120_float = GetByIndex(var_80_cvector, 0);
		var_121_float = GetByIndex(var_79_cvector, 0);
		var_123_float = GetByIndex(var_80_cvector, 2);
		var_124_float = GetByIndex(var_79_cvector, 2);
		if(((var_120_float * var_121_float) + (var_123_float * var_124_float)) >= 0)
			var_81_string = "fdie";
		else
			var_81_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_66_object = var_82_object;
		var_131_bool = IsFuncExist(var_66_object, "GetScriptProperty", 2);
		if(var_131_bool != 0) {
			var_66_object->HasScriptProperty(var_83_bool, "Owner");
			if(var_83_bool != 0) {
				var_66_object->GetScriptProperty(var_82_object, "Owner");
				if(var_82_object == null)
					var_66_object = var_82_object;
			}
		}
		var_138_bool = IsFuncExist(var_82_object, "@GetEyesHeight", 1);
		if(var_138_bool != 0) {
			var_82_object->GetEyesHeight(var_85_float);
			var_86_cvector = [0.0, 0.0, 0.0];
			var_139_float = GetByIndex(var_86_cvector, 1);
			var_85_float = var_139_float;
			SetByIndex(var_86_cvector, 1) = var_139_float;
			@LookAsync(var_66_object, "head", var_86_cvector);
			var_84_bool = true;
		} else {
			var_84_bool = false;

		}
		string var_141_string;
		var_81_string = var_141_string;
		func_2175(var_141_string);
		@PlayAnimation("all", var_81_string);
		@WaitForAnimEnd();
		if(var_84_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_81_string);
		@RemoveEnvelope();
		var_82_object = null;
	}
	
}


void func_2621(int var_84_int)
{
	var_84_int = 518097;
}


void func_2623(int var_83_int)
{
	var_83_int = 518096;
}


void func_2112(void)
{
	bool var_155_bool;
	@CameraSwitchToNormal();
	bool var_156_bool;
	func_2629(var_156_bool);
	if(var_156_bool != 0) {
	} else {
		@HasAnimationTrack(var_155_bool, "head");
		if(var_155_bool == 0) goto Label_2128;
		@UnlookAsync("head");
	}
Label_2128:
	
}


void func_2625(string var_85_string)
{
	var_85_string = "ui/NPC_Citizen2.png";
}


void func_2627(string var_86_string)
{
	var_86_string = "ui/NPC_Citizen2_b.png";
}


void func_1091(object var_0_object, bool var_295_bool, float var_296_float)
{
	bool var_302_bool; cvector var_303_cvector; cvector var_304_cvector; cvector var_305_cvector; float var_306_float;
	
	for(;;) {
		@IsAnimationPlaying(var_302_bool);
		if(!var_302_bool) //@nz
			break;
		bool var_308_bool;
		func_1162(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = true;
			return 10;
		}
		bool var_351_bool;
		func_1878(var_351_bool, var_0_object);
		if(!var_351_bool) { //@nz
			var_295_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_303_cvector); //@t
		@GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		if(var_306_float < (var_296_float * var_296_float)) {
			bool var_356_bool; float var_357_float;
			var_296_float = var_357_float;
			func_927(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = true;
			return 10;
		}
		@sync();
	}
	func_1266(var_306_float);
	var_295_bool = false;
}


void func_2629(bool var_78_bool)
{
	var_78_bool = false;
}


// @pe
void func_2631(object var_21_object)
{
	bool var_22_bool;
	func_2270(var_22_bool, "quest_b9_03", "doberman_dead");
	object var_28_object;
	var_21_object = var_28_object;
	TaskCall(5);
	func_1548(var_28_object);
	TaskReturn();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_96_object, object var_97_object)
{
	var_0_object = var_97_object;
	var_1_object = var_96_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_103_bool;
		func_2404(var_1_object);
		if(var_103_bool != 0) {
			object var_111_object; object var_112_object;
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_2355();
			func_157(var_97_object, "Neutral");
			var_0_object->SetMessage(530309); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530310, 31698, 31697); //@t
			var_0_object->AddReply(531024, -1, 32353); //@t
		} else {
					func_157(var_97_object, "Neutral");
					var_0_object->SetMessage(530314); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530315, -1, 31702); //@t
		}
	}
	for(;;) {
		bool var_134_bool;
		func_2629(var_134_bool);
		if(var_134_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2129(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_1355(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1521(var_20_object);
}


void func_2129(string var_136_string)
{
	float var_139_float; float var_140_float;
	@lshGetAnimTimes(var_136_string, var_139_float, var_140_float);
	@lshPlayAnimation(var_139_float, var_140_float, false);
}


void func_593(bool var_80_bool)
{
	var_80_bool = true;
}


void func_595(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_853(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_63_bool; bool var_64_bool; cvector var_65_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_63_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_63_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_64_bool, ("attack" + (var_2_object + 1)));
			if(!var_64_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_65_cvector, "all", "bjump");
		var_79_float = GetByIndex(var_65_cvector, 2);
		var_4_bool = -var_79_float;

	}
}


void func_1878(bool var_33_bool, object var_34_object)
{
	object var_38_object;
	var_34_object = var_38_object;
	bool var_37_bool;
	func_1842(var_37_bool, var_38_object);
	if(!var_37_bool) { //@nz
		var_33_bool = false;
		return 2;
	}
	bool var_55_bool; object var_56_object;
	func_1752(var_55_bool, var_56_object, "noaccess");
	if(!var_55_bool) { //@nz
		var_33_bool = true;
		return 2;
	}
	int var_36_int;
	var_56_object->GetProperty("noaccess", var_36_int);
	var_33_bool = var_36_int == 0;
}


void func_2136(string var_119_string, bool var_120_bool)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_119_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, var_120_bool);
}


void func_600(void)
{
	object var_33_object;
	@FindActor(var_33_object, "player");
	object var_35_object;
	object var_32_object;
	func_624(var_29_bool, var_30_float, var_31_int, var_32_object, var_35_object, var_35_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_2142(object var_24_object)
{
	float var_27_float;
	var_24_object->GetEyesHeight(var_27_float);
	cvector var_28_cvector = [0.0, 0.0, 0.0];
	var_29_float = GetByIndex(var_28_cvector, 1);
	var_27_float = var_29_float;
	SetByIndex(var_28_cvector, 1) = var_29_float;
	@LookAsync(var_24_object, "head", var_28_cvector);
}


// @pe
void func_612(float var_404_float)
{
	var_404_float = 0.1;
}


// @pe
void func_2404(bool var_103_bool)
{
	int var_105_int;
	func_2255(var_105_int, "oob9DobermanSpi4ka1_1");
	if(var_105_int == 0) {
		var_103_bool = true;
		return 0;
	}
	var_103_bool = false;
}


void func_356(float var_21_float, float var_22_float)
{
	
Label_357:
	for(;;) {
		bool var_25_bool;
		func_2039(var_25_bool);
		var_28_bool = !var_25_bool; //@nz
		if(var_28_bool == 0) goto Label_365;
		@Hold();
	}
	
Label_365:
	float var_24_float;
	@rand(var_24_float, 3);
	@Sleep(var_24_float + 3);
	float var_32_float; float var_33_float;
	float var_23_float;
	func_435(var_19_bool, var_32_float, var_33_float, var_23_float, var_24_float, var_32_float, var_33_float);
	@sync();
	goto Label_357;
}
EMIT "Return(); Pop(2)";


// @pe
void func_615(int var_411_int)
{
	var_411_int = 0;
}


void func_2153(void)
{
	bool var_23_bool;
	func_2629(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


void func_1134(object var_0_object, bool var_310_bool)
{
	cvector var_316_cvector; cvector var_317_cvector;
	bool var_321_bool;
	func_1878(var_321_bool, var_0_object);
	if(!var_321_bool) { //@nz
		var_310_bool = false;
		return 10;
	}
	bool var_324_bool;
	float var_320_float;
	func_1223(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		var_0_object->GetPFPosition(var_316_cvector); //@t
		@GetPFPosition(var_317_cvector);
		var_0_object->GetAttackDistance(var_320_float); //@t
		var_310_bool = ((var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector)) <= ((var_320_float + 50) * (var_320_float + 50));
		return 10;
	}
	var_310_bool = false;
}


void func_1902(object var_37_object)
{
	string var_51_string;
	if(var_37_object == null)
		return 14;
	bool var_45_bool;
	@IsDead(var_45_bool);
	if(var_45_bool != 0)
		return 14;
	int var_46_int;
	@GetSecondaryAnimationType(var_46_int);
	if(var_46_int < 0)
		return 14;
	cvector var_47_cvector;
	var_37_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	@GetDirection(var_49_cvector);
	cvector var_50_cvector = var_48_cvector - var_47_cvector;
	var_56_float = GetByIndex(var_50_cvector, 0);
	var_57_float = GetByIndex(var_49_cvector, 0);
	var_59_float = GetByIndex(var_50_cvector, 2);
	var_60_float = GetByIndex(var_49_cvector, 2);
	if(((var_56_float * var_57_float) + (var_59_float * var_60_float)) >= 0)
		var_51_string = "fhit";
	else
		var_51_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_51_string + "1"), (var_51_string + "2"), -10);
	
}


void func_624(object var_0_object, string var_3_string, int var_5_int, object var_35_object, bool var_36_bool, float var_37_float, bool var_144_bool, bool var_236_bool)
{
	float var_49_float; cvector var_50_cvector; cvector var_51_cvector; bool var_53_bool; float var_56_float; cvector var_57_cvector; bool var_58_bool; float var_59_float;
	func_853(var_57_cvector, var_58_bool, var_59_float);
	var_5_int = 0;
	var_84_bool = IsFuncExist(var_35_object, "@GetAttackDistance", 1);
	if(var_84_bool != 0) {
		var_35_object->GetAttackDistance(var_49_float);
		var_49_float += 50;
	} else {
						var_37_float = var_49_float;
	}
	if(var_49_float >= 150)
		var_49_float = 150;
	var_3_string = false;
	var_0_object = var_35_object;
	bool var_52_bool;
	@IsPlayerActor(var_0_object, var_52_bool);
	if(var_52_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_90_object;
		func_2216(var_90_object);
		@SendPlayerEnemy(var_35_object, var_90_object);
	}
	if(var_36_bool != 0)
		var_53_bool = false;
	else
		var_53_bool = true;

	
Label_664:
	for(;;) {
		bool var_95_bool = false;
		bool var_96_bool;
		func_1878(var_96_bool, var_0_object);
		if(var_96_bool != 0) {
			if(!var_3_string) //@nz
				var_95_bool = true;
		}
		if(var_95_bool != 0) {
			func_1266(var_59_float);
			var_0_object->GetPFPosition(var_50_cvector); //@t
			@GetPFPosition(var_51_cvector);
			var_56_float = (var_50_cvector - var_51_cvector) | (var_50_cvector - var_51_cvector);
			if(var_56_float >= ((400.0 + var_49_float) * (400.0 + var_49_float))) {
				bool var_138_bool; float var_140_float;
				var_49_float = var_140_float;
				TaskCall(4);
				func_1292(var_146_bool, var_138_bool, var_0_object, var_140_float, 3000.0, true, false);
				TaskReturn();
				if(!var_144_bool) { //@nz
				} else {
					var_53_bool = false;
			} else {
			if(var_56_float >= (var_37_float * var_37_float)) {
				var_0_object->GetPFPosition(var_57_cvector); //@t
				@CanReachByPF(var_58_bool, var_57_cvector);
				if(!var_58_bool) { //@nz
					bool var_230_bool; float var_232_float;
					var_49_float = var_232_float;
					TaskCall(4);
					func_1292(var_238_bool, var_230_bool, var_0_object, var_232_float, 3000.0, true, false);
					TaskReturn();
					if(!var_236_bool) { //@nz
						goto Label_836;
					}
					var_53_bool = false;
					goto Label_664;
				}
				if(!var_53_bool) { //@nz
					func_2028(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1266(var_59_float);
					@StopAsync();
					var_53_bool = true;
					bool var_252_bool;
					func_1878(var_252_bool, var_0_object);
					if(!var_252_bool) { //@nz
						goto Label_836;
					}
				}
				@rand(var_59_float);
				bool var_255_bool;
				var_257_bool = var_59_float < 0.25;
				if(var_257_bool != 1) {
					bool var_258_bool;
					func_1223(true, var_258_bool);
					if(var_258_bool != 1)
						var_255_bool = false;
				}
				if(var_255_bool != 0) {
					@Face(var_0_object);
					func_1273();
					@PlayAnimation("all", "attack_stay");
					bool var_295_bool; float var_296_float;
					func_1091(var_59_float, var_295_bool, var_296_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1266(var_59_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_513_bool;
					func_1223(var_59_float, var_513_bool);
					var_514_bool = !var_513_bool; //@nz
					if(var_514_bool == 0) goto Label_826;
					bool var_515_bool;
					func_1878(var_515_bool, var_0_object);
					if(!var_515_bool) { //@nz
						goto Label_836;
					}
					var_0_object->GetPFPosition(var_50_cvector); //@t
					@GetPFPosition(var_51_cvector);
					if(!(((var_50_cvector - var_51_cvector) | (var_50_cvector - var_51_cvector)) < (var_296_float * var_296_float))) goto Label_826;
					bool var_520_bool; float var_521_float;
					var_37_float = var_521_float;
					func_927(var_58_bool, var_59_float, var_520_bool, var_521_float);
					var_522_bool = !var_520_bool; //@nz
					if(var_522_bool == 0) goto Label_826;
					goto Label_836;
			}
				bool var_523_bool; float var_524_float;
				var_37_float = var_524_float;
				func_927(var_58_bool, var_59_float, var_523_bool, var_524_float);
				if(!var_523_bool) { //@nz
					goto Label_836;
				}
				var_53_bool = true;

			}
		Label_826:
			goto Label_835;
			}
			Label_835:
			}
		}
	Label_836:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_52_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2160(string var_29_string, int var_30_int, int var_31_int, int var_32_int)
{
	int var_35_int; bool var_36_bool;
	int var_38_int;
	var_30_int = var_38_int;
	int var_39_int;
	var_31_int = var_39_int;
	bool var_37_bool;
	func_2250(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		@irand(var_35_int, var_32_int);
		@AddItem(var_36_bool, var_29_string, 0, (var_35_int + 1));
	}
}


void func_2416(void)
{
	object var_45_object;
	@CreateDiaryEntry(var_45_object, 542, 2, 530354);
	bool var_49_bool; object var_50_object;
	var_45_object = var_50_object;
	func_2442(var_49_bool, var_50_object, 532);
}
EMIT "Stack[-1] = 0";


void func_1397(object var_0_object, object var_1_object, bool var_167_bool, object var_168_object, float var_169_float, float var_170_float, bool var_171_bool, bool var_172_bool)
{
	bool var_181_bool; object var_183_object; cvector var_184_cvector; cvector var_185_cvector; float var_187_float; object var_188_object;
	var_0_object = false;
	var_1_object = var_168_object;
	bool var_182_bool;
	var_172_bool = var_182_bool;
	
	for(;;) {
		bool var_189_bool; object var_190_object;
		var_168_object = var_190_object;
		func_1537(var_189_bool, var_190_object);
		if(!var_189_bool) { //@nz
			var_167_bool = false;
			return 16;
		}
		var_168_object->GetPosition(var_184_cvector);
		@GetPosition(var_185_cvector);
		var_187_float = (var_184_cvector - var_185_cvector) | (var_184_cvector - var_185_cvector);
		bool var_194_bool = false;
		if(var_170_float > 0) {
			if(var_187_float > (var_170_float * var_170_float))
				var_194_bool = true;
		}
		if(var_194_bool != 0) {
			@Stop();
			var_167_bool = false;
			return 16;
		}
		if(var_187_float > (var_169_float * var_169_float)) {
			var_168_object->GetPFPosition(var_184_cvector);
			@FindPathTo(var_188_object, var_184_cvector);
			if(var_188_object != null) {
				var_188_object = var_183_object;
				var_188_object = null;
			}
			if(var_183_object != null) {
				if(var_182_bool == 0) goto Label_1450;
				var_182_bool = false;
				@RotatePath(var_183_object, var_181_bool);
				if(!var_181_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_207_string;
						func_1544(var_207_string);
						string var_208_string;
						func_1546(var_208_string);
						@FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
						if(!var_181_bool) { //@nz
							if(var_0_object == 0) goto Label_1469;
							var_183_object = null;
						}
					EMIT "GOTO 0x5be";

					Label_1469:
						} else {
					var_183_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_181_bool);
					if(!var_181_bool) { //@nz
						if(var_0_object != 0) {
							var_183_object = null;
							goto Label_1497;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1497;
		}
			var_188_object = null;
			goto Label_1495;

		Label_1495:
			var_183_object = null;

		}
	Label_1497:
		for(;;) {
			var_167_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_888(object var_0_object, float var_393_float, int var_394_int)
{
	object var_398_object; float var_399_float; float var_400_float;
	@GetVictim((var_393_float * 0.9), var_398_object);
	@ReportAttack(var_0_object);
	if(var_398_object == var_0_object) {
		float var_404_float; object var_405_object; int var_406_int;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_612(var_406_int);
		var_404_float = var_399_float;
		float var_407_float; object var_408_object; float var_409_float; int var_410_int;
		var_398_object = var_408_object;
		int var_411_int; object var_412_object; int var_413_int;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_615(var_413_int);
		var_411_int = var_410_int;
		func_1764(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		int var_468_int;
		func_1271(var_468_int);
		@ReportHit(var_0_object, var_468_int, var_400_float, var_409_float);
		object var_469_object; float var_470_float;
		var_398_object = var_469_object;
		var_400_float = var_470_float;
		func_1278();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2681(object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	TaskCall(0);
	int var_25_int;
	func_0(var_27_object, var_25_int, var_26_object);
	TaskReturn();
}


void func_381(int var_5_int)
{
	var_5_int = true;
	bool var_530_bool;
	@IsLoaded(var_530_bool);
	bool var_531_bool = false;
	if(!var_530_bool) { //@nz
		bool var_533_bool;
		func_433(var_533_bool);
		if(var_533_bool != 0)
			var_531_bool = true;
	}
	if(var_531_bool != 0) {
		object var_534_object;
		func_2216(var_534_object);
		@RemoveActor(var_534_object);
	}
}


void func_2429(object var_58_object)
{
	object var_60_object;
	@GetDiaryRoot(var_60_object);
	if(!var_60_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_58_object = false;
	}
	var_60_object = var_58_object;
}
EMIT "Stack[-1] = 0";


void func_2175(string var_89_string)
{
	bool var_98_bool; int var_99_int; bool var_100_bool; int var_101_int; bool var_102_bool; float var_103_float; cvector var_104_cvector; cvector var_105_cvector;
	@IsExisting3DSound(var_98_bool, var_89_string);
	if(!var_98_bool) { //@nz
		var_99_int = 0;

		for(;;) {
			@IsExisting3DSound(var_100_bool, (var_89_string + (var_99_int + 1)));
			if(!var_100_bool) { //@nz
				break;
			Label_2195:
				@irand(var_101_int, var_99_int);
				var_89_string += (var_101_int + 1);
	}
			@Is3DSoundLoaded(var_102_bool, var_89_string);
			if(var_102_bool != 0) {
				@GetEyesHeight(var_103_float);
				@GetDirection(var_104_cvector);
				var_105_cvector = var_104_cvector * 50;
				var_116_float = GetByIndex(var_105_cvector, 1);
				SetByIndex(var_105_cvector, 1) = (var_116_float + var_103_float);
				@PlayGlobalSound(var_89_string, var_105_cvector);
			}
		}
		var_99_int += 1;
	}
	var_111_bool = !var_99_int; //@nz
	if(var_111_bool == 0) goto Label_2195;
}


void func_1162(bool var_308_bool)
{
	bool var_309_bool = false;
	bool var_310_bool;
	func_1134(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		bool var_327_bool;
		func_1178(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_308_bool = true;
		return 0;
	}
	var_308_bool = false;
}


void func_2442(bool var_49_bool, object var_50_object, int var_51_int)
{
	object var_58_object;
	func_2429(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	object var_56_object;
	var_55_object->Find(var_51_int, var_56_object);
	if(!var_56_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_51_int);
		var_49_bool = false;
	}
	var_56_object->AddChild(var_50_object);
	@SendWorldWndMessage(7);
	int var_57_int;
	var_50_object->GetCategory(var_57_int);
	@SetDiarySection(var_57_int);
	var_49_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_401(string var_526_string)
{
	if(var_526_string == "cleanup")
		func_381(var_526_string);
}


// @pe
void func_1686(string var_88_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_89_string;
	var_88_string = var_89_string;
	func_2175(var_89_string);
	@PlayAnimation("all", var_88_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_88_string);
	@RemoveEnvelope();
}


void func_1178(object var_0_object, bool var_4_bool, bool var_327_bool)
{
	object var_333_object; float var_335_float; cvector var_336_cvector; cvector var_337_cvector;
	@GetScene(var_333_object);
	bool var_334_bool = false;
	
	for(;;) {
		cvector var_338_cvector;
		func_1732(var_338_cvector, var_0_object);
		var_344_int = -var_338_cvector;
		@FindDirLength(var_335_float, var_344_int, var_4_bool);
		if(var_335_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_336_cvector); //@t
				@GetPFPosition(var_337_cvector);
				@WaitForAnimEnd();
				func_1266(var_337_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_334_bool = true;
				bool var_349_bool;
				func_1134(var_337_cvector, var_349_bool);
				var_350_bool = !var_349_bool; //@nz
				if(var_350_bool == 0) goto Label_1219;
		}
		for(;;) {
			var_334_bool = var_327_bool;

		}

	Label_1219:
	}
}
EMIT "Stack[-5] = 0";


void func_1946(object var_24_object, int var_25_int, float var_26_float)
{
	cvector var_36_cvector; object var_37_object; int var_38_int; bool var_39_bool; cvector var_40_cvector; cvector var_41_cvector;
	bool var_45_bool = false;
	bool var_46_bool = false;
	if(var_24_object != 0) {
		if(var_25_int != 4)
			var_46_bool = true;
	}
	if(var_46_bool != 0) {
		if(var_25_int != 5)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		cvector var_52_cvector; cvector var_53_cvector;
		cvector var_54_cvector; object var_55_object;
		var_24_object = var_55_object;
		func_1732(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_2222(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		@CreateVectorVector(var_37_object);
		var_38_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_38_int), var_39_bool, var_40_cvector, var_41_cvector);
			if(!var_39_bool) { //@nz
				break;
			Label_2008:
				var_37_object = null;
	}
			object var_114_object;
			var_24_object = var_114_object;
			func_1902(var_114_object);
		}
		if((var_41_cvector | var_36_cvector) >= 0.70710677)
			var_37_object->add(var_40_cvector);
		var_38_int += 1;
	}
	int var_42_int;
	var_37_object->size(var_42_int);
	if(var_42_int == 0) goto Label_2008;
	int var_43_int;
	@irand(var_43_int, var_42_int);
	cvector var_44_cvector;
	var_37_object->get(var_44_cvector, var_43_int);
	object var_69_object; int var_70_int; float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_24_object = var_69_object;
	var_25_int = var_70_int;
	var_26_float = var_71_float;
	var_44_cvector = var_72_cvector;
	var_73_cvector = -var_36_cvector;
	func_2014(var_71_float, var_72_cvector, var_73_cvector);
}


// @pe
void func_157(object var_2_object, string var_115_string)
{
	bool var_116_bool;
	func_2629(var_116_bool);
	if(!var_116_bool) //@nz
		return 0;
	if(var_115_string == var_2_object)
		return 0;
	string var_119_string; bool var_120_bool;
	var_115_string = var_119_string;
	if(var_115_string == "")
		var_120_bool = false;
	else
		var_120_bool = true;
	func_2136(var_119_string, var_120_bool);
	var_2_object = var_115_string;
	
}


void func_927(object var_0_object, object var_1_object, bool var_356_bool, float var_357_float)
{
	string var_365_string;
	func_1266(var_365_string);
	int var_362_int;
	@irand(var_362_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2296();
	@PlayAnimation("all", ("attack_begin" + (var_362_int + 1)));
	@WaitForAnimEnd();
	int var_364_int;
	func_1234(var_364_int, var_365_string);
	bool var_390_bool;
	func_1878(var_390_bool, var_0_object);
	if(!var_390_bool) { //@nz
		@StopAsync();
		var_356_bool = false;
		return 8;
	}
	float var_393_float; int var_394_int;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_888(var_365_string, var_393_float, var_394_int);
	bool var_363_bool;
	@HasAnimation(var_363_bool, "all", ("attack_middle" + var_362_int));
	if(var_363_bool != 0) {
		func_2296();
		@PlayAnimation("all", ("attack_middle" + var_362_int));
		@WaitForAnimEnd();
		func_1266(var_365_string);
		bool var_478_bool;
		func_1878(var_478_bool, var_0_object);
		if(!var_478_bool) { //@nz
			@StopAsync();
			var_356_bool = false;
			return 8;
		}
		float var_481_float; int var_482_int;
		var_357_float = var_481_float;
		func_888(var_365_string, var_481_float, var_482_int);
		var_364_int = 1;

		for(;;) {
			var_365_string = (("attack_middle" + var_482_int) + "_") + var_364_int;
			@HasAnimation(var_363_bool, "all", var_365_string);
			if(!var_363_bool) { //@nz
			} else {
				func_2296();
				@PlayAnimation("all", var_365_string);
				@WaitForAnimEnd();
				func_1266(var_365_string);
				bool var_504_bool;
				func_1878(var_504_bool, var_0_object);
				if(!var_504_bool) { //@nz
					@StopAsync();
					var_356_bool = false;
					return 8;
				}
				float var_507_float; int var_508_int;
				var_357_float = var_507_float;
				var_362_int = var_508_int;
				func_888(var_365_string, var_507_float, var_508_int);
				var_364_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_362_int));
		bool var_493_bool;
		func_1280(var_493_bool);
		if(var_493_bool != 0) {
			bool var_494_bool;
			func_1064(var_494_bool, 0.75);
			@StopAsync();
		}
		var_356_bool = true;
		return 8;

	}
}


void func_2470(object var_30_object)
{
	object var_33_object; object var_34_object;
	@GetMainOutdoorScene(var_33_object);
	if(var_33_object == null) {
		@Trace("Can't find main outdoor scene");
		var_34_object = null;
		var_34_object = var_30_object;
	}
	var_33_object->GetMap(var_34_object);
	var_34_object = var_30_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2216(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_2222(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_61_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_61_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_61_float;
}


void func_433(bool var_25_bool)
{
	var_25_bool = true;
}


// @pe
void func_435(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_32_float, float var_33_float)
{
	bool var_34_bool;
	func_2039(var_34_bool);
	if(!var_34_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_32_float;
	var_1_object = var_33_float;
	@SetTimer(10, 1.0);
	func_514();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1718(string var_435_string, int var_436_int)
{
	if(var_436_int == 2) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x6c2";
	}
	if(var_436_int == 1) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
}


void func_2487(object var_79_object, string var_80_string, float var_81_float)
{
	object var_89_object;
	@GetMainOutdoorScene(var_89_object);
	if(var_89_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_87_cvector;
	cvector var_88_cvector;
	bool var_90_bool;
	var_89_object->GetLocator(var_80_string, var_90_bool, var_87_cvector, var_88_cvector);
	if(!var_90_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_80_string) + " doesnt exist");
	var_89_object->GetMap(var_79_object);
	if(var_79_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_100_float = GetByIndex(var_87_cvector, 0);
	var_101_float = GetByIndex(var_87_cvector, 2);
	var_79_object->SetMapParams(var_100_float, var_101_float, var_81_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_2232(float var_445_float, float var_446_float, float var_447_float)
{
	if(var_446_float < var_447_float)
		var_446_float = var_445_float;
	else
		var_447_float = var_445_float;
	
}


// @pe
void func_2239(float var_455_float, float var_456_float, float var_457_float, float var_458_float)
{
	if(var_456_float < var_457_float) {
		var_457_float = var_455_float;
		return 0;
	}
	if(var_456_float > var_458_float) {
		var_458_float = var_455_float;
		return 0;
	}
	var_456_float = var_455_float;
}


void func_1732(cvector var_54_cvector, object var_55_object)
{
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	cvector var_59_cvector;
	var_55_object->GetPosition(var_59_cvector);
	var_54_cvector = var_59_cvector - var_58_cvector;
}


void func_1223(object var_0_object, bool var_258_bool)
{
	bool var_260_bool;
	var_263_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_263_bool != 0) {
		var_0_object->IsAttacking(var_260_bool); //@t
		var_260_bool = var_258_bool;
	}
	var_258_bool = false;
}


void func_2250(bool var_37_bool, int var_38_int, int var_39_int)
{
	int var_41_int;
	@irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
}


void func_1739(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


void func_462(object var_0_object, object var_1_object, bool var_4_bool, bool var_23_bool)
{
	if(var_4_bool == null)
		var_23_bool = false;
	float var_27_float;
	func_1739(var_27_float, var_4_bool);
	float var_25_float = sqrt(var_27_float);
	if(var_2_object != 0)
		var_25_float -= var_1_object;
	var_23_bool = var_25_float < var_0_object;
}


void func_2255(int var_105_int, string var_106_string)
{
	int var_108_int;
	@GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
}


void func_1234(object var_2_object, int var_5_int)
{
	int var_378_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_377_float;
	@rand(var_377_float);
	float var_384_float;
	func_1284(var_384_float);
	if(var_377_float < var_384_float) {
		@irand(var_378_int, var_2_object);
		@Speak("attack" + (var_378_int + 1));
		int var_389_int;
		func_1282(var_389_int);
		var_5_int = var_389_int;
	}
}


void func_1747(bool var_162_bool, object var_163_object)
{
	bool var_165_bool;
	@IsPlayerActor(var_163_object, var_165_bool);
	var_165_bool = var_162_bool;
}


void func_2260(float var_463_float)
{
	object var_465_object;
	@CreateFloatVector(var_465_object);
	var_465_object->add(var_463_float);
	@SendWorldWndMessage(15, var_465_object);
}
EMIT "Stack[-1] = 0";


void func_1752(bool var_55_bool, object var_56_object, string var_57_string)
{
	var_62_bool = IsFuncExist(var_56_object, "HasProperty", 2);
	if(!var_62_bool) { //@nz
		var_55_bool = false;
		return 2;
	}
	bool var_59_bool;
	var_56_object->HasProperty(var_57_string, var_59_bool);
	var_59_bool = var_55_bool;
}


// @pe
void func_2520(object var_24_object)
{
	int var_25_int;
	func_2591(var_25_int);
	if(var_25_int == 1)
		@WorkWithCorpse(var_24_object);
	else
		@Barter(var_24_object);
	
}


// @pe
void func_1499(object var_0_object, object var_1_object, int var_28_int)
{
	if(var_28_int != 0)
		return 0;
	bool var_31_bool;
	func_1537(var_31_bool, var_1_object);
	if(!var_31_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2270(bool var_22_bool, string var_23_string, string var_24_string)
{
	object var_26_object;
	@FindActor(var_26_object, var_23_string);
	if(var_26_object == null)
		var_22_bool = false;
	@Trigger(var_26_object, var_24_string);
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2014(object var_26_object, cvector var_29_cvector, cvector var_30_cvector)
{
	object var_33_object;
	@GetScene(var_33_object);
	object var_34_object;
	@AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	object var_37_object;
	var_26_object = var_37_object;
	func_1902(var_37_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1764(float var_407_float, object var_408_object, float var_409_float, int var_410_int)
{
	int var_420_int; int var_422_int;
	object var_427_object;
	var_408_object = var_427_object;
	bool var_426_bool;
	func_1752(var_426_bool, var_427_object, "health");
	if(!var_426_bool) //@nz
		var_407_float = 0.0;
	bool var_430_bool; object var_431_object;
	func_1752(var_430_bool, var_431_object, "armor");
	if(!var_430_bool) //@nz
		var_420_int = 0;
	else
		var_431_object->GetProperty("armor", var_420_int);
	string var_435_string; int var_436_int;
	var_410_int = var_436_int;
	func_1718(var_435_string, var_436_int);
	string var_421_string = "armor_" + var_435_string;
	bool var_441_bool; object var_442_object; string var_443_string;
	var_408_object = var_442_object;
	func_1752(var_441_bool, var_442_object, var_443_string);
	if(!var_441_bool) //@nz
		var_422_int = 0;
	else
		var_408_object->GetProperty(var_443_string, var_422_int);

	float var_445_float;
	func_2232(var_445_float, ((var_420_int + var_422_int) / 100.0), (float)1);
	float var_423_float;
	var_445_float = var_423_float;
	float var_424_float;
	var_408_object->GetProperty("health", var_424_float);
	float var_425_float = var_409_float * (1 - var_423_float);
	float var_455_float;
	func_2239(var_455_float, (var_424_float - var_425_float), (float)0, (float)1);
	var_408_object->SetProperty("health", var_455_float);
	bool var_461_bool; object var_462_object;
	var_408_object = var_462_object;
	func_1747(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		float var_463_float = -var_425_float;
		func_2260(var_463_float);
	}
	var_425_float = var_407_float;
	
}


void func_2533(string var_51_string)
{
	object var_55_object;
	@CreateInvItem(var_55_object);
	var_55_object->SetItemName(var_51_string);
	var_55_object->SetProperty("Organ", 1);
	int var_56_int;
	var_55_object->GetItemID(var_56_int);
	bool var_57_bool;
	@AddItem(var_57_bool, var_55_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2282(float var_41_float)
{
	float var_43_float;
	@GetGameTime(var_43_float);
	var_43_float = var_41_float;
}


void func_2028(object var_241_object)
{
	cvector var_245_cvector;
	var_241_object->GetPosition(var_245_cvector);
	cvector var_246_cvector;
	@GetPosition(var_246_cvector);
	cvector var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	@RotateAsync(var_248_float, var_249_float);
}


void func_2287(object var_23_object)
{
	bool var_25_bool;
	@IsPlayerActor(var_23_object, var_25_bool);
	if(var_25_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1521(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1266(object var_0_object)
{
	func_2287(var_0_object);
}


// @pe
void func_500(object var_2_object, string var_3_string)
{
	func_595();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_2550(void)
{
	int var_45_int;
	func_2591(var_45_int);
	if(var_45_int != 1) {
	}
	func_2533("liver");
	func_2533("kidney");
	func_2533("heart");
	func_2533("blood");
}


void func_1271(int var_468_int)
{
	var_468_int = 0;
}


void func_2296(void)
{
	object var_369_object;
	@GetScene(var_369_object);
	object var_371_object;
	func_2216(var_371_object);
	@BroadcastMessage("battle", var_371_object, var_369_object);
}
EMIT "Stack[-1] = 0";


void func_1273(void)
{
	func_2175("attack_stay");
}


void func_2044(bool var_36_bool, object var_37_object, float var_38_float)
{
	cvector var_49_cvector; bool var_56_bool;
	var_37_object->GetPosition(var_49_cvector);
	float var_48_float;
	var_37_object->GetEyesHeight(var_48_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_48_float);
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	@GetEyesHeight(var_48_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_48_float);
	cvector var_51_cvector = var_49_cvector - var_50_cvector;
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (float)0;
	var_61_float = sqrt(var_51_cvector | var_51_cvector);
	var_51_cvector /= var_61_float;
	cvector var_52_cvector = -var_51_cvector;
	cvector var_63_cvector;
	func_2222(var_63_cvector, (var_52_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_53_cvector = ((var_51_cvector * var_38_float) + (var_63_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0)
		var_36_bool = false;
	@StopWorld();
	@CameraTransit((var_50_cvector + var_53_cvector), var_52_cvector);
	var_76_float = GetByIndex(var_53_cvector, 0);
	var_77_float = GetByIndex(var_53_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_2629(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_56_bool, "head");
		if(var_56_bool == 0) goto Label_2106;
		@LookAsyncCamera("head");
	}
Label_2106:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_36_bool = true;
	
}


// @pe
void func_1278(void)
{
}


