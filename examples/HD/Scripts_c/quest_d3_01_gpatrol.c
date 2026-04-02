// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		if(1 != 0) {
			func_2065();
			if(var_17_bool == 10025) {
				object var_22_object = var_1_object;
				func_2287(var_0_object);
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_2294();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_2301();
			}
			if(var_17_bool == 10024) {
				object var_56_object = var_1_object;
				func_2287(var_0_object);
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_2294();
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_2301();
			}
			if(var_17_bool == 10017) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_2276();
				object var_71_object = var_1_object;
				func_2307(var_0_object);
			}
			if(var_17_bool == 10018) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_2276();
				object var_115_object = var_1_object;
				func_2307(var_0_object);
			}
			if(var_16_object == 10011) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(509131); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509132, 10013, 10012); //@t
				var_0_object->AddReply(534051, -1, 35632); //@t
				return 0;
			}
			if(var_16_object == 10013) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(509133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509134, 10019, 10014); //@t
				var_0_object->AddReply(509135, 10016, 10015); //@t
				return 0;
			}
			if(var_16_object == 10016) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(509136); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509137, -1, 10017); //@t
				var_0_object->AddReply(509138, -1, 10018); //@t
				return 0;
			}
			if(var_16_object == 10019) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(509139); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509140, 10021, 10020); //@t
				return 0;
			}
			if(var_16_object == 10021) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(509141); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509142, 10023, 10022); //@t
				bool var_177_bool;
				func_2314(var_177_bool, var_1_object);
				if(var_177_bool != 0)
					var_0_object->AddReply(509144, -1, 10024); //@t
				return 0;
			}
			if(var_16_object == 10023) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(509143); //@t
				var_0_object->ClearReplies(); //@t
				bool var_192_bool;
				func_2314(var_192_bool, var_1_object);
				if(var_192_bool != 0)
					var_0_object->AddReply(509145, -1, 10025); //@t
				var_0_object->AddReply(509146, 10016, 10026); //@t
				return 0;
			}
			var_3_string = true;
			bool var_200_bool;
			func_2416(var_200_bool);
			if(var_200_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		int var_20_int; bool var_21_bool; cvector var_22_cvector; object var_23_object;
		@GetPFPosition(var_1_object);
		@GetDirection(var_0_object);
	
		for(;;) {
			func_508();
			@irand(var_20_int, 10);
			@Sleep((var_20_int + 5), var_21_bool);
			if(var_21_bool != 0) {
				func_378();
			} else {
			for(;;) {
				func_508();
				@GetPFPosition(var_22_cvector);
				float var_28_float; cvector var_30_cvector;
				var_22_cvector = var_30_cvector;
				func_2129(var_28_float, var_1_object, var_30_cvector);
				if(var_28_float > 40000) {
					@FindPathTo(var_23_object, var_1_object);
					if(var_23_object != null) {
						@RotatePath(var_23_object, var_21_bool);
						if(!var_21_bool) { //@nz
						} else {
						@FollowPath(var_23_object, false, var_21_bool);
						if(!var_21_bool) { //@nz
							goto Label_500;
						}
						var_39_float = GetByIndex(var_0_object, 0);
						var_40_float = GetByIndex(var_0_object, 2);
						@Rotate(var_39_float, var_40_float, var_21_bool);
						if(!var_21_bool) { //@nz
							goto Label_500;
						}
						@WaitForAnimEnd(var_21_bool);
						if(!var_21_bool) { //@nz
							goto Label_500;
						}
						goto Label_501;
					EMIT "GOTO 0x1e5";
					}
					@Sleep(1);
					var_23_object = null;
					goto Label_500;
				}
				var_44_float = GetByIndex(var_0_object, 0);
				var_45_float = GetByIndex(var_0_object, 2);
				@Rotate(var_44_float, var_45_float, var_21_bool);
				if(!var_21_bool) { //@nz
					goto Label_500;
				}
				@WaitForAnimEnd(var_21_bool);
				if(!var_21_bool) { //@nz
					goto Label_500;
				}
				goto Label_501;
				}
			Label_500:
			}
			}
		Label_501:
		}
	
	}
	EMIT "Return(); Pop(8)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		func_503();
		int var_17_int; object var_18_object;
		var_16_bool = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, string var_7_string, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill_player") {
			func_503();
			TaskCall(3);
			func_509();
			TaskReturn();
		} else if(var_16_bool == "talk_player") {
		}
	
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_18_bool;
		@IsPlayerActor(var_16_bool, var_18_bool);
		if(var_18_bool != 0) {
			bool var_20_bool;
			func_2244(var_20_bool, "quest_d3_01", "kill_player");
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int == 1) {
			func_2256(var_1_object);
		} else {
			int var_24_int;
			func_1399(var_15_bool, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_object) {
			if(!var_2_object) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = true;
			object var_20_object;
			var_16_object = var_20_object;
			func_2054(var_20_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_object) {
			if(var_2_object != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		@RequestClearPath(var_16_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_1255(var_16_object);
		object var_21_object;
		var_16_object = var_21_object;
		func_2470();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			object var_20_object;
			var_16_object = var_20_object;
			func_2354(var_20_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_1843(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	func_1911(var_24_float, var_25_cvector, var_26_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2418(var_17_object);
}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1936(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_2410(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_2408(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_2412(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_2414(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_2331(var_80_int);
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
	func_2005();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_509(void)
{
	object var_26_object;
	@FindActor(var_26_object, "player");
	if(!var_26_object) { //@nz
	}
	object var_29_object;
	object var_25_object;
	func_530(var_22_bool, var_23_float, var_24_int, var_25_object, var_29_object, var_29_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2307(object var_71_object)
{
	object var_74_object;
	var_71_object = var_74_object;
	bool var_73_bool;
	func_2182(var_73_bool, var_74_object, -0.3);
}


void func_2054(object var_20_object)
{
	float var_23_float;
	var_20_object->GetEyesHeight(var_23_float);
	cvector var_24_cvector = [0.0, 0.0, 0.0];
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	@LookAsync(var_20_object, "head", var_24_cvector);
}


void func_1799(object var_33_object)
{
	string var_47_string;
	if(var_33_object == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector var_43_cvector;
	var_33_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_47_string = "fhit";
	else
		var_47_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_47_string + "1"), (var_47_string + "2"), -10);
	
}


// @pe
void func_2314(bool var_177_bool, object var_178_object)
{
	object var_180_object;
	var_178_object = var_180_object;
	bool var_179_bool;
	func_2324(var_179_bool, var_180_object);
	if(var_179_bool != 0) {
		var_177_bool = true;
		return 0;
	}
	var_177_bool = false;
}


// @pe
void func_524(float var_398_float)
{
	var_398_float = 0.15;
}


// @pe
void func_527(int var_405_int)
{
	var_405_int = 0;
}


void func_1040(object var_0_object, bool var_304_bool)
{
	cvector var_310_cvector; cvector var_311_cvector;
	bool var_315_bool;
	func_1775(var_315_bool, var_0_object);
	if(!var_315_bool) { //@nz
		var_304_bool = false;
		return 10;
	}
	bool var_318_bool;
	float var_314_float;
	func_1129(var_314_float, var_318_bool);
	if(var_318_bool != 0) {
		var_0_object->GetPFPosition(var_310_cvector); //@t
		@GetPFPosition(var_311_cvector);
		var_0_object->GetAttackDistance(var_314_float); //@t
		var_304_bool = ((var_310_cvector - var_311_cvector) | (var_310_cvector - var_311_cvector)) <= ((var_314_float + 50) * (var_314_float + 50));
		return 10;
	}
	var_304_bool = false;
}


void func_2065(void)
{
	bool var_19_bool;
	func_2416(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_530(object var_0_object, string var_3_string, cvector var_5_cvector, object var_29_object, bool var_30_bool, float var_31_float, bool var_138_bool, bool var_230_bool)
{
	float var_43_float; cvector var_44_cvector; cvector var_45_cvector; bool var_47_bool; float var_50_float; cvector var_51_cvector; bool var_52_bool; float var_53_float;
	func_759(var_51_cvector, var_52_bool, var_53_float);
	var_5_cvector = 0;
	var_78_bool = IsFuncExist(var_29_object, "@GetAttackDistance", 1);
	if(var_78_bool != 0) {
		var_29_object->GetAttackDistance(var_43_float);
		var_43_float += 50;
	} else {
						var_31_float = var_43_float;
	}
	if(var_43_float >= 150)
		var_43_float = 150;
	var_3_string = false;
	var_0_object = var_29_object;
	bool var_46_bool;
	@IsPlayerActor(var_0_object, var_46_bool);
	if(var_46_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_84_object;
		func_2113(var_84_object);
		@SendPlayerEnemy(var_29_object, var_84_object);
	}
	if(var_30_bool != 0)
		var_47_bool = false;
	else
		var_47_bool = true;

	
Label_570:
	for(;;) {
		bool var_89_bool = false;
		bool var_90_bool;
		func_1775(var_90_bool, var_0_object);
		if(var_90_bool != 0) {
			if(!var_3_string) //@nz
				var_89_bool = true;
		}
		if(var_89_bool != 0) {
			func_1172(var_53_float);
			var_0_object->GetPFPosition(var_44_cvector); //@t
			@GetPFPosition(var_45_cvector);
			var_50_float = (var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector);
			if(var_50_float >= ((400.0 + var_43_float) * (400.0 + var_43_float))) {
				bool var_132_bool; float var_134_float;
				var_43_float = var_134_float;
				TaskCall(4);
				func_1192(var_140_bool, var_132_bool, var_0_object, var_134_float, 10000.0, true, false);
				TaskReturn();
				if(!var_138_bool) { //@nz
				} else {
					var_47_bool = false;
			} else {
			if(var_50_float >= (var_31_float * var_31_float)) {
				var_0_object->GetPFPosition(var_51_cvector); //@t
				@CanReachByPF(var_52_bool, var_51_cvector);
				if(!var_52_bool) { //@nz
					bool var_224_bool; float var_226_float;
					var_43_float = var_226_float;
					TaskCall(4);
					func_1192(var_232_bool, var_224_bool, var_0_object, var_226_float, 10000.0, true, false);
					TaskReturn();
					if(!var_230_bool) { //@nz
						goto Label_742;
					}
					var_47_bool = false;
					goto Label_570;
				}
				if(!var_47_bool) { //@nz
					func_1925(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1172(var_53_float);
					@StopAsync();
					var_47_bool = true;
					bool var_246_bool;
					func_1775(var_246_bool, var_0_object);
					if(!var_246_bool) { //@nz
						goto Label_742;
					}
				}
				@rand(var_53_float);
				bool var_249_bool;
				var_251_bool = var_53_float < 0.25;
				if(var_251_bool != 1) {
					bool var_252_bool;
					func_1129(true, var_252_bool);
					if(var_252_bool != 1)
						var_249_bool = false;
				}
				if(var_249_bool != 0) {
					@Face(var_0_object);
					func_1179();
					@PlayAnimation("all", "attack_stay");
					bool var_289_bool; float var_290_float;
					func_997(var_53_float, var_289_bool, var_290_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1172(var_53_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_511_bool;
					func_1129(var_53_float, var_511_bool);
					var_512_bool = !var_511_bool; //@nz
					if(var_512_bool == 0) goto Label_732;
					bool var_513_bool;
					func_1775(var_513_bool, var_0_object);
					if(!var_513_bool) { //@nz
						goto Label_742;
					}
					var_0_object->GetPFPosition(var_44_cvector); //@t
					@GetPFPosition(var_45_cvector);
					if(!(((var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector)) < (var_290_float * var_290_float))) goto Label_732;
					bool var_518_bool; float var_519_float;
					var_31_float = var_519_float;
					func_833(var_52_bool, var_53_float, var_518_bool, var_519_float);
					var_520_bool = !var_518_bool; //@nz
					if(var_520_bool == 0) goto Label_732;
					goto Label_742;
			}
				bool var_521_bool; float var_522_float;
				var_31_float = var_522_float;
				func_833(var_52_bool, var_53_float, var_521_bool, var_522_float);
				if(!var_521_bool) { //@nz
					goto Label_742;
				}
				var_47_bool = true;

			}
		Label_732:
			goto Label_741;
			}
			Label_741:
			}
		}
	Label_742:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_46_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1297(object var_0_object, object var_1_object, bool var_161_bool, object var_162_object, float var_163_float, float var_164_float, bool var_165_bool, bool var_166_bool)
{
	bool var_175_bool; object var_177_object; cvector var_178_cvector; cvector var_179_cvector; float var_181_float; object var_182_object;
	var_0_object = false;
	var_1_object = var_162_object;
	bool var_176_bool;
	var_166_bool = var_176_bool;
	
	for(;;) {
		bool var_183_bool; object var_184_object;
		var_162_object = var_184_object;
		func_1437(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			var_161_bool = false;
			return 16;
		}
		var_162_object->GetPosition(var_178_cvector);
		@GetPosition(var_179_cvector);
		var_181_float = (var_178_cvector - var_179_cvector) | (var_178_cvector - var_179_cvector);
		bool var_188_bool = false;
		if(var_164_float > 0) {
			if(var_181_float > (var_164_float * var_164_float))
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			@Stop();
			var_161_bool = false;
			return 16;
		}
		if(var_181_float > (var_163_float * var_163_float)) {
			var_162_object->GetPFPosition(var_178_cvector);
			@FindPathTo(var_182_object, var_178_cvector);
			if(var_182_object != null) {
				var_182_object = var_177_object;
				var_182_object = null;
			}
			if(var_177_object != null) {
				if(var_176_bool == 0) goto Label_1350;
				var_176_bool = false;
				@RotatePath(var_177_object, var_175_bool);
				if(!var_175_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_201_string;
						func_1444(var_201_string);
						string var_202_string;
						func_1446(var_202_string);
						@FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string);
						if(!var_175_bool) { //@nz
							if(var_0_object == 0) goto Label_1369;
							var_177_object = null;
						}
					EMIT "GOTO 0x55a";

					Label_1369:
						} else {
					var_177_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_175_bool);
					if(!var_175_bool) { //@nz
						if(var_0_object != 0) {
							var_177_object = null;
							goto Label_1397;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1397;
		}
			var_182_object = null;
			goto Label_1395;

		Label_1395:
			var_177_object = null;

		}
	Label_1397:
		for(;;) {
			var_161_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_2324(bool var_179_bool, object var_180_object)
{
	int var_182_int;
	var_180_object->GetProperty("money", var_182_int);
	var_179_bool = var_182_int >= 10000;
}


void func_2039(string var_100_string, bool var_101_bool)
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


void func_2072(string var_70_string)
{
	bool var_79_bool; int var_80_int; bool var_81_bool; int var_82_int; bool var_83_bool; float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	@IsExisting3DSound(var_79_bool, var_70_string);
	if(!var_79_bool) { //@nz
		var_80_int = 0;

		for(;;) {
			@IsExisting3DSound(var_81_bool, (var_70_string + (var_80_int + 1)));
			if(!var_81_bool) { //@nz
				break;
			Label_2092:
				@irand(var_82_int, var_80_int);
				var_70_string += (var_82_int + 1);
	}
			@Is3DSoundLoaded(var_83_bool, var_70_string);
			if(var_83_bool != 0) {
				@GetEyesHeight(var_84_float);
				@GetDirection(var_85_cvector);
				var_86_cvector = var_85_cvector * 50;
				var_97_float = GetByIndex(var_86_cvector, 1);
				SetByIndex(var_86_cvector, 1) = (var_97_float + var_84_float);
				@PlayGlobalSound(var_70_string, var_86_cvector);
			}
		}
		var_80_int += 1;
	}
	var_92_bool = !var_80_int; //@nz
	if(var_92_bool == 0) goto Label_2092;
}


// @pe
void func_1562(string var_69_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_70_string;
	var_69_string = var_70_string;
	func_2072(var_70_string);
	@PlayAnimation("all", var_69_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_69_string);
	@RemoveEnvelope();
}


void func_794(object var_0_object, float var_387_float, int var_388_int)
{
	object var_392_object; float var_393_float; float var_394_float;
	@GetVictim((var_387_float * 0.9), var_392_object);
	@ReportAttack(var_0_object);
	if(var_392_object == var_0_object) {
		float var_398_float; object var_399_object; int var_400_int;
		var_392_object = var_399_object;
		var_388_int = var_400_int;
		func_524(var_400_int);
		var_398_float = var_393_float;
		float var_401_float; object var_402_object; float var_403_float; int var_404_int;
		var_392_object = var_402_object;
		int var_405_int; object var_406_object; int var_407_int;
		var_392_object = var_406_object;
		var_388_int = var_407_int;
		func_527(var_407_int);
		var_405_int = var_404_int;
		func_1661(var_401_float, var_402_object, var_403_float, var_404_int);
		var_401_float = var_394_float;
		int var_466_int;
		func_1177(var_466_int);
		@ReportHit(var_0_object, var_466_int, var_394_float, var_403_float);
		object var_467_object; float var_468_float;
		var_392_object = var_467_object;
		var_394_float = var_468_float;
		func_1184();
	}
}
EMIT "Stack[-3] = 0";


void func_2331(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x92a";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


void func_1068(bool var_302_bool)
{
	bool var_303_bool = false;
	bool var_304_bool;
	func_1040(var_303_bool, var_304_bool);
	if(var_304_bool != 0) {
		bool var_321_bool;
		func_1084(var_302_bool, var_303_bool, var_321_bool);
		if(var_321_bool != 0)
			var_303_bool = true;
	}
	if(var_303_bool != 0) {
		var_302_bool = true;
		return 0;
	}
	var_302_bool = false;
}


void func_2348(int var_26_int)
{
	int var_28_int;
	@GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
}


// @pe
void func_2354(object var_20_object)
{
	int var_21_int;
	func_2348(var_21_int);
	if(var_21_int == 1)
		@WorkWithCorpse(var_20_object);
	else
		@Barter(var_20_object);
	
}


void func_1843(object var_20_object, int var_21_int, float var_22_float)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(var_20_object != 0) {
		if(var_21_int != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_21_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		var_20_object = var_51_object;
		func_1608(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2119(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_1905:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_1799(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_1905;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_20_object = var_65_object;
	var_21_int = var_66_int;
	var_22_float = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	func_1911(var_67_float, var_68_cvector, var_69_cvector);
}


// @pe
void func_1594(string var_429_string, int var_430_int)
{
	if(var_430_int == 2) {
		var_429_string = "fire";
		return 0;
	EMIT "GOTO 0x646";
	}
	if(var_430_int == 1) {
		var_429_string = "bullet";
		return 0;
	}
	var_429_string = "phys";
}


void func_1084(object var_0_object, bool var_4_bool, bool var_321_bool)
{
	object var_327_object; float var_329_float; cvector var_330_cvector; cvector var_331_cvector;
	@GetScene(var_327_object);
	bool var_328_bool = false;
	
	for(;;) {
		cvector var_332_cvector;
		func_1608(var_332_cvector, var_0_object);
		var_338_int = -var_332_cvector;
		@FindDirLength(var_329_float, var_338_int, var_4_bool);
		if(var_329_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_330_cvector); //@t
				@GetPFPosition(var_331_cvector);
				@WaitForAnimEnd();
				func_1172(var_331_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_328_bool = true;
				bool var_343_bool;
				func_1040(var_331_cvector, var_343_bool);
				var_344_bool = !var_343_bool; //@nz
				if(var_344_bool == 0) goto Label_1125;
		}
		for(;;) {
			var_328_bool = var_321_bool;

		}

	Label_1125:
	}
}
EMIT "Stack[-5] = 0";


void func_2367(string var_32_string)
{
	object var_36_object;
	@CreateInvItem(var_36_object);
	var_36_object->SetItemName(var_32_string);
	var_36_object->SetProperty("Organ", 1);
	int var_37_int;
	var_36_object->GetItemID(var_37_int);
	bool var_38_bool;
	@AddItem(var_38_bool, var_36_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2113(object var_84_object)
{
	object var_86_object;
	@self(var_86_object);
	var_86_object = var_84_object;
}
EMIT "Stack[-1] = 0";


void func_833(object var_0_object, object var_1_object, bool var_350_bool, float var_351_float)
{
	string var_359_string;
	func_1172(var_359_string);
	int var_356_int;
	@irand(var_356_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2265();
	@PlayAnimation("all", ("attack_begin" + (var_356_int + 1)));
	@WaitForAnimEnd();
	int var_358_int;
	func_1140(var_358_int, var_359_string);
	bool var_384_bool;
	func_1775(var_384_bool, var_0_object);
	if(!var_384_bool) { //@nz
		@StopAsync();
		var_350_bool = false;
		return 8;
	}
	float var_387_float; int var_388_int;
	var_351_float = var_387_float;
	var_356_int = var_388_int;
	func_794(var_359_string, var_387_float, var_388_int);
	bool var_357_bool;
	@HasAnimation(var_357_bool, "all", ("attack_middle" + var_356_int));
	if(var_357_bool != 0) {
		func_2265();
		@PlayAnimation("all", ("attack_middle" + var_356_int));
		@WaitForAnimEnd();
		func_1172(var_359_string);
		bool var_476_bool;
		func_1775(var_476_bool, var_0_object);
		if(!var_476_bool) { //@nz
			@StopAsync();
			var_350_bool = false;
			return 8;
		}
		float var_479_float; int var_480_int;
		var_351_float = var_479_float;
		func_794(var_359_string, var_479_float, var_480_int);
		var_358_int = 1;

		for(;;) {
			var_359_string = (("attack_middle" + var_480_int) + "_") + var_358_int;
			@HasAnimation(var_357_bool, "all", var_359_string);
			if(!var_357_bool) { //@nz
			} else {
				func_2265();
				@PlayAnimation("all", var_359_string);
				@WaitForAnimEnd();
				func_1172(var_359_string);
				bool var_502_bool;
				func_1775(var_502_bool, var_0_object);
				if(!var_502_bool) { //@nz
					@StopAsync();
					var_350_bool = false;
					return 8;
				}
				float var_505_float; int var_506_int;
				var_351_float = var_505_float;
				var_356_int = var_506_int;
				func_794(var_359_string, var_505_float, var_506_int);
				var_358_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_356_int));
		bool var_491_bool;
		func_1186(var_491_bool);
		if(var_491_bool != 0) {
			bool var_492_bool;
			func_970(var_492_bool, 0.75);
			@StopAsync();
		}
		var_350_bool = true;
		return 8;

	}
}


void func_2119(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


void func_1608(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_89_object, object var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_90_object, "Neutral");
		var_0_object->SetMessage(509131); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(509132, 10013, 10012); //@t
		var_0_object->AddReply(534051, -1, 35632); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_120_bool;
	func_2416(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2023(var_2_object);
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


void func_1615(bool var_156_bool, object var_157_object)
{
	bool var_159_bool;
	@IsPlayerActor(var_157_object, var_159_bool);
	var_159_bool = var_156_bool;
}


void func_2384(void)
{
	int var_26_int;
	func_2348(var_26_int);
	if(var_26_int != 1) {
	}
	func_2367("liver");
	func_2367("kidney");
	func_2367("heart");
	func_2367("blood");
}


void func_2129(float var_28_float, cvector var_29_cvector, cvector var_30_cvector)
{
	var_28_float = (var_30_cvector - var_29_cvector) | (var_30_cvector - var_29_cvector);
}


void func_1620(bool var_51_bool, object var_52_object, string var_53_string)
{
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", 2);
	if(!var_58_bool) { //@nz
		var_51_bool = false;
		return 2;
	}
	bool var_55_bool;
	var_52_object->HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
}


// @pe
void func_2133(float var_439_float, float var_440_float, float var_441_float)
{
	if(var_440_float < var_441_float)
		var_440_float = var_439_float;
	else
		var_441_float = var_439_float;
	
}


// @pe
void func_2140(float var_449_float, float var_450_float, float var_451_float, float var_452_float)
{
	if(var_450_float < var_451_float) {
		var_451_float = var_449_float;
		return 0;
	}
	if(var_450_float > var_452_float) {
		var_452_float = var_449_float;
		return 0;
	}
	var_450_float = var_449_float;
}


void func_1632(bool var_84_bool, object var_85_object, string var_86_string, float var_87_float, float var_88_float, float var_89_float)
{
	object var_93_object;
	var_85_object = var_93_object;
	string var_94_string;
	var_86_string = var_94_string;
	bool var_92_bool;
	func_1620(var_92_bool, var_93_object, var_94_string);
	if(!var_92_bool) //@nz
		var_84_bool = false;
	float var_91_float;
	var_85_object->GetProperty(var_86_string, var_91_float);
	float var_102_float; float var_104_float; float var_105_float;
	var_88_float = var_104_float;
	var_89_float = var_105_float;
	func_2140(var_102_float, (var_91_float + var_87_float), var_104_float, var_105_float);
	var_85_object->SetProperty(var_86_string, var_102_float);
	var_84_bool = true;
}


void func_2151(int var_37_int, int var_38_int)
{
	object var_40_object;
	@CreateIntVector(var_40_object);
	var_40_object->add(var_37_int);
	var_40_object->add(var_38_int);
	@SendWorldWndMessage(3, var_40_object);
}
EMIT "Stack[-1] = 0";


void func_2408(int var_77_int)
{
	var_77_int = 515572;
}


void func_1129(object var_0_object, bool var_252_bool)
{
	bool var_254_bool;
	var_257_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_257_bool != 0) {
		var_0_object->IsAttacking(var_254_bool); //@t
		var_254_bool = var_252_bool;
	}
	var_252_bool = false;
}


void func_2410(int var_76_int)
{
	var_76_int = 504031;
}


void func_2412(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png";
}


void func_2414(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png";
}


void func_2416(bool var_71_bool)
{
	var_71_bool = false;
}


void func_2418(object var_17_object)
{
	bool var_19_bool;
	@AddItem(var_19_bool, "revolver_ammo", 0, 2);
	@AddItem(var_19_bool, "alpha_pills", 0, 2);
	func_2384();
	object var_46_object;
	var_17_object = var_46_object;
	TaskCall(5);
	func_1448(var_46_object);
	TaskReturn();
}


void func_2163(object var_24_object, int var_25_int)
{
	int var_27_int;
	object var_28_object;
	var_24_object = var_28_object;
	int var_30_int;
	func_1654(var_28_object, "money", var_30_int);
	if(var_30_int > 0) {
		@GetInvItemByName(var_27_int, "Money");
		int var_37_int; int var_38_int;
		var_27_int = var_37_int;
		var_25_int = var_38_int;
		func_2151(var_37_int, var_38_int);
	}
}


void func_1140(object var_2_object, cvector var_5_cvector)
{
	int var_372_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_cvector != 0) {
		if((var_5_cvector + -1) > 0)
			return 4;
	}
	float var_371_float;
	@rand(var_371_float);
	float var_378_float;
	func_1190(var_378_float);
	if(var_371_float < var_378_float) {
		@irand(var_372_int, var_2_object);
		@Speak("attack" + (var_372_int + 1));
		int var_383_int;
		func_1188(var_383_int);
		var_5_cvector = var_383_int;
	}
}


void func_1654(object var_28_object, string var_29_string, int var_30_int)
{
	int var_32_int;
	var_28_object->GetProperty(var_29_string, var_32_int);
	var_28_object->SetProperty(var_29_string, (var_32_int + var_30_int));
}


void func_1911(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_1799(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1399(object var_0_object, object var_1_object, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1437(var_27_bool, var_1_object);
	if(!var_27_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_378(void)
{
}


void func_1661(float var_401_float, object var_402_object, float var_403_float, int var_404_int)
{
	int var_414_int; int var_416_int;
	object var_421_object;
	var_402_object = var_421_object;
	bool var_420_bool;
	func_1620(var_420_bool, var_421_object, "health");
	if(!var_420_bool) //@nz
		var_401_float = 0.0;
	bool var_424_bool; object var_425_object;
	func_1620(var_424_bool, var_425_object, "armor");
	if(!var_424_bool) //@nz
		var_414_int = 0;
	else
		var_425_object->GetProperty("armor", var_414_int);
	string var_429_string; int var_430_int;
	var_404_int = var_430_int;
	func_1594(var_429_string, var_430_int);
	string var_415_string = "armor_" + var_429_string;
	bool var_435_bool; object var_436_object; string var_437_string;
	var_402_object = var_436_object;
	func_1620(var_435_bool, var_436_object, var_437_string);
	if(!var_435_bool) //@nz
		var_416_int = 0;
	else
		var_402_object->GetProperty(var_437_string, var_416_int);

	float var_439_float;
	func_2133(var_439_float, ((var_414_int + var_416_int) / 100.0), (float)1);
	float var_417_float;
	var_439_float = var_417_float;
	float var_418_float;
	var_402_object->GetProperty("health", var_418_float);
	float var_419_float = var_403_float * (1 - var_417_float);
	float var_449_float;
	func_2140(var_449_float, (var_418_float - var_419_float), (float)0, (float)1);
	var_402_object->SetProperty("health", var_449_float);
	bool var_455_bool; object var_456_object;
	var_402_object = var_456_object;
	func_1615(var_455_bool, var_456_object);
	if(var_455_bool != 0) {
		float var_457_float = -var_419_float;
		func_2217(var_457_float);
	}
	var_419_float = var_401_float;
	
}


// @pe
void func_132(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_2416(var_97_bool);
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
	func_2039(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	
}


void func_1925(object var_235_object)
{
	cvector var_239_cvector;
	var_235_object->GetPosition(var_239_cvector);
	cvector var_240_cvector;
	@GetPosition(var_240_cvector);
	cvector var_241_cvector = var_239_cvector - var_240_cvector;
	var_242_float = GetByIndex(var_241_cvector, 0);
	var_243_float = GetByIndex(var_241_cvector, 2);
	@RotateAsync(var_242_float, var_243_float);
}


// @pe
void func_2182(bool var_73_bool, object var_74_object, float var_75_float)
{
	if(!var_74_object) { //@nz
		var_73_bool = false;
		return 0;
	}
	if(var_75_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_75_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_80_float;
		var_75_float = var_80_float;
		func_2234(var_80_float);
		bool var_84_bool; object var_85_object; float var_87_float;
		var_74_object = var_85_object;
		var_75_float = var_87_float;
		func_1632(var_84_bool, var_85_object, "reputation", var_87_float, (float)0, (float)1);
		var_73_bool = true;
		return 0;

	}
	
	var_73_bool = false;
}


void func_1421(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1936(bool var_28_bool, object var_29_object, float var_30_float)
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
	func_2119(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2416(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_1999;
		@LookAsyncCamera("head");
	}
Label_1999:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_1172(object var_0_object)
{
	func_2256(var_0_object);
}


void func_1177(int var_466_int)
{
	var_466_int = 0;
}


void func_1179(void)
{
	func_2072("attack_stay");
}


// @pe
void func_1437(bool var_27_bool, object var_28_object)
{
	object var_30_object;
	var_28_object = var_30_object;
	bool var_29_bool;
	func_1775(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
}


// @pe
void func_1184(void)
{
}


void func_1186(bool var_491_bool)
{
	var_491_bool = true;
}


void func_1188(int var_383_int)
{
	var_383_int = 1;
}


void func_1444(string var_201_string)
{
	var_201_string = "walk";
}


void func_1190(float var_378_float)
{
	var_378_float = 0.5;
}


void func_1446(string var_202_string)
{
	var_202_string = "run";
}


void func_1192(object var_2_object, bool var_132_bool, object var_133_object, float var_134_float, float var_135_float, bool var_136_bool, bool var_137_bool)
{
	object var_145_object;
	func_2256(var_145_object);
	@SetTimer(1, 5);
	bool var_143_bool;
	@CanSee(var_143_bool, var_145_object);
	if(var_143_bool != 0) {
		var_2_object = true;
		object var_149_object;
		var_133_object = var_149_object;
		func_2054(var_149_object);
	} else {
		var_2_object = false;
	}
	bool var_156_bool; object var_157_object;
	func_1615(var_156_bool, var_157_object);
	if(var_156_bool != 0) {
		object var_160_object;
		func_2113(var_160_object);
		@SendPlayerEnemy(var_157_object, var_160_object);
	}
	bool var_161_bool; object var_162_object; float var_163_float; float var_164_float; bool var_165_bool; bool var_166_bool;
	var_133_object = var_162_object;
	var_134_float = var_163_float;
	var_135_float = var_164_float;
	var_136_bool = var_165_bool;
	var_137_bool = var_166_bool;
	bool var_144_bool;
	func_1297(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool);
	var_161_bool = var_144_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_144_bool = var_132_bool;
	
}


void func_2217(float var_457_float)
{
	object var_459_object;
	@CreateFloatVector(var_459_object);
	var_459_object->add(var_457_float);
	if(var_457_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_459_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1448(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	func_1471(var_47_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2234(float var_80_float)
{
	object var_82_object;
	@CreateFloatVector(var_82_object);
	var_82_object->add(var_80_float);
	@SendWorldWndMessage(16, var_82_object);
}
EMIT "Stack[-1] = 0";


void func_1471(object var_47_object)
{
	cvector var_58_cvector; cvector var_59_cvector; cvector var_60_cvector; cvector var_61_cvector; string var_62_string; object var_63_object; bool var_64_bool; bool var_65_bool; float var_66_float; cvector var_67_cvector;
	if(var_47_object == null) {
		func_1562("fdie");
	} else {
		var_47_object->GetPosition(var_58_cvector);
		@GetPosition(var_59_cvector);
		@GetDirection(var_60_cvector);
		var_61_cvector = var_59_cvector - var_58_cvector;
		var_101_float = GetByIndex(var_61_cvector, 0);
		var_102_float = GetByIndex(var_60_cvector, 0);
		var_104_float = GetByIndex(var_61_cvector, 2);
		var_105_float = GetByIndex(var_60_cvector, 2);
		if(((var_101_float * var_102_float) + (var_104_float * var_105_float)) >= 0)
			var_62_string = "fdie";
		else
			var_62_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_47_object = var_63_object;
		var_112_bool = IsFuncExist(var_47_object, "GetScriptProperty", 2);
		if(var_112_bool != 0) {
			var_47_object->HasScriptProperty(var_64_bool, "Owner");
			if(var_64_bool != 0) {
				var_47_object->GetScriptProperty(var_63_object, "Owner");
				if(var_63_object == null)
					var_47_object = var_63_object;
			}
		}
		var_119_bool = IsFuncExist(var_63_object, "@GetEyesHeight", 1);
		if(var_119_bool != 0) {
			var_63_object->GetEyesHeight(var_66_float);
			var_67_cvector = [0.0, 0.0, 0.0];
			var_120_float = GetByIndex(var_67_cvector, 1);
			var_66_float = var_120_float;
			SetByIndex(var_67_cvector, 1) = var_120_float;
			@LookAsync(var_47_object, "head", var_67_cvector);
			var_65_bool = true;
		} else {
			var_65_bool = false;

		}
		string var_122_string;
		var_62_string = var_122_string;
		func_2072(var_122_string);
		@PlayAnimation("all", var_62_string);
		@WaitForAnimEnd();
		if(var_65_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_62_string);
		@RemoveEnvelope();
		var_63_object = null;
	}
	
}


void func_2244(bool var_20_bool, string var_21_string, string var_22_string)
{
	object var_24_object;
	@FindActor(var_24_object, var_21_string);
	if(var_24_object == null)
		var_20_bool = false;
	@Trigger(var_24_object, var_22_string);
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1734(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_970(bool var_492_bool, float var_493_float)
{
	float var_496_float; bool var_497_bool;
	@rand(var_496_float);
	if(var_496_float < var_493_float) {

		for(;;) {
			@IsAnimationPlaying(var_497_bool);
			if(!var_497_bool) { //@nz
			} else {
				bool var_500_bool;
				func_1068(var_500_bool);
				if(var_500_bool != 0) {
					var_492_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_492_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1172(var_497_bool);
}


void func_1739(bool var_33_bool, object var_34_object)
{
	if(var_34_object == null) {
		var_33_bool = false;
		return 4;
	}
	bool var_40_bool = false;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", 1);
	if(var_43_bool != 0) {
		bool var_44_bool; object var_45_object;
		var_34_object = var_45_object;
		func_1734(var_44_bool, var_45_object);
		if(var_44_bool != 0)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		var_33_bool = false;
		return 4;
	}
	object var_37_object;
	@GetScene(var_37_object);
	if(var_37_object == null) {
		var_33_bool = false;
		return 4;
	}
	object var_38_object;
	var_34_object->GetScene(var_38_object);
	if(var_37_object != var_38_object) {
		var_33_bool = false;
		return 4;
	}
	var_33_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2256(object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	if(var_21_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2005(void)
{
	bool var_141_bool;
	@CameraSwitchToNormal(true);
	bool var_143_bool;
	func_2416(var_143_bool);
	if(var_143_bool != 0) {
	} else {
		@HasAnimationTrack(var_141_bool, "head");
		if(var_141_bool == 0) goto Label_2022;
		@UnlookAsync("head");
	}
Label_2022:
	
}


void func_2265(void)
{
	object var_363_object;
	@GetScene(var_363_object);
	object var_365_object;
	func_2113(var_365_object);
	@BroadcastMessage("battle", var_365_object, var_363_object);
}
EMIT "Stack[-1] = 0";


void func_503(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_2276(void)
{
	@SetVariable("d3q01", 8);
	bool var_68_bool;
	func_2244(var_68_bool, "quest_d3_01", "gpatrol_attack");
}


void func_997(object var_0_object, bool var_289_bool, float var_290_float)
{
	bool var_296_bool; cvector var_297_cvector; cvector var_298_cvector; cvector var_299_cvector; float var_300_float;
	
	for(;;) {
		@IsAnimationPlaying(var_296_bool);
		if(!var_296_bool) //@nz
			break;
		bool var_302_bool;
		func_1068(var_302_bool);
		if(var_302_bool != 0) {
			var_289_bool = true;
			return 10;
		}
		bool var_345_bool;
		func_1775(var_345_bool, var_0_object);
		if(!var_345_bool) { //@nz
			var_289_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_297_cvector); //@t
		@GetPFPosition(var_298_cvector);
		var_299_cvector = var_297_cvector - var_298_cvector;
		var_300_float = var_299_cvector | var_299_cvector;
		if(var_300_float < (var_290_float * var_290_float)) {
			bool var_350_bool; float var_351_float;
			var_290_float = var_351_float;
			func_833(var_299_cvector, var_300_float, var_350_bool, var_351_float);
			var_289_bool = true;
			return 10;
		}
		@sync();
	}
	func_1172(var_300_float);
	var_289_bool = false;
}


void func_1255(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1421(var_16_object);
}


void func_2023(string var_122_string)
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
void func_2287(object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	func_2163(var_24_object, -10000);
}


void func_1775(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_1739(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_1620(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


// @pe
void func_2294(void)
{
	bool var_44_bool;
	func_2244(var_44_bool, "quest_d3_01", "gpatrol_talk");
}


void func_759(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_57_bool; bool var_58_bool; cvector var_59_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_57_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_57_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, ("attack" + (var_2_object + 1)));
			if(!var_58_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_59_cvector, "all", "bjump");
		var_73_float = GetByIndex(var_59_cvector, 2);
		var_4_bool = -var_73_float;

	}
}


void func_508(void)
{
}


// @pe
void func_2301(void)
{
	@TriggerWorld("playsound", "givemoney");
}


