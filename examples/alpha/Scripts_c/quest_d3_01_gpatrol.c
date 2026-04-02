// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, bool var_14_bool, object var_15_object)
	{
		if(1 != 0) {
			func_1576();
			if(var_15_object == 10025) {
				object var_20_object = var_1_object;
				func_1638(var_0_object);
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_1646();
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_1653();
			}
			if(var_15_object == 10024) {
				object var_42_object = var_1_object;
				func_1638(var_0_object);
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_1646();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1653();
			}
			if(var_15_object == 10017) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1627();
			}
			if(var_15_object == 10018) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_1627();
			}
			if(var_14_bool == 10011) {
				func_116(var_15_object, "Neutral");
				var_0_object->SetMessage(9131); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9132, 10013, 10012); //@t
				return 0;
			}
			if(var_14_bool == 10013) {
				func_116(var_15_object, "Neutral");
				var_0_object->SetMessage(9133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9134, 10019, 10014); //@t
				var_0_object->AddReply(9135, 10016, 10015); //@t
				return 0;
			}
			if(var_14_bool == 10016) {
				func_116(var_15_object, "Neutral");
				var_0_object->SetMessage(9136); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9137, -1, 10017); //@t
				var_0_object->AddReply(9138, -1, 10018); //@t
				return 0;
			}
			if(var_14_bool == 10019) {
				func_116(var_15_object, "Neutral");
				var_0_object->SetMessage(9139); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9140, 10021, 10020); //@t
				return 0;
			}
			if(var_14_bool == 10021) {
				func_116(var_15_object, "Neutral");
				var_0_object->SetMessage(9141); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9142, 10023, 10022); //@t
				bool var_116_bool;
				func_1659(var_116_bool, var_1_object);
				if(var_116_bool != 0)
					var_0_object->AddReply(9144, -1, 10024); //@t
				return 0;
			}
			if(var_14_bool == 10023) {
				func_116(var_15_object, "Neutral");
				var_0_object->SetMessage(9143); //@t
				var_0_object->ClearReplies(); //@t
				bool var_131_bool;
				func_1659(var_131_bool, var_1_object);
				if(var_131_bool != 0)
					var_0_object->AddReply(9145, -1, 10025); //@t
				var_0_object->AddReply(9146, 10016, 10026); //@t
				return 0;
			}
			var_3_string = true;
			bool var_139_bool;
			func_1697(var_139_bool);
			if(var_139_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x85";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		int var_18_int; bool var_19_bool; cvector var_20_cvector; object var_21_object;
		@GetPFPosition(var_1_object);
		@GetDirection(var_0_object);
	
		for(;;) {
			@irand(var_18_int, 60);
			@Sleep((var_18_int + 30), var_19_bool);
			if(var_19_bool != 0) {
				func_341();
			} else {
			for(;;) {
				@GetPFPosition(var_20_cvector);
				float var_26_float; cvector var_28_cvector;
				var_20_cvector = var_28_cvector;
				func_1593(var_26_float, var_1_object, var_28_cvector);
				if(var_26_float > 40000) {
					@FindPathTo(var_21_object, var_1_object);
					if(var_21_object != null) {
						@RotatePath(var_21_object, var_19_bool);
						if(!var_19_bool) { //@nz
						} else {
						@FollowPath(var_21_object, false, var_19_bool);
						if(!var_19_bool) { //@nz
							goto Label_457;
						}
						var_37_float = GetByIndex(var_0_object, 0);
						var_38_float = GetByIndex(var_0_object, 2);
						@Rotate(var_37_float, var_38_float, var_19_bool);
						if(!var_19_bool) { //@nz
							goto Label_457;
						}
						@WaitForAnimEnd(var_19_bool);
						if(!var_19_bool) { //@nz
							goto Label_457;
						}
						goto Label_458;
					EMIT "GOTO 0x1ba";
					}
					@Sleep(1);
					var_21_object = null;
					goto Label_457;
				}
				var_42_float = GetByIndex(var_0_object, 0);
				var_43_float = GetByIndex(var_0_object, 2);
				@Rotate(var_42_float, var_43_float, var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_457;
				}
				@WaitForAnimEnd(var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_457;
				}
				goto Label_458;
				}
			Label_457:
			}
			}
		Label_458:
		}
	
	}
	EMIT "Return(); Pop(8)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int, bool var_13_bool, object var_14_object)
	{
		func_460();
		int var_15_int; object var_16_object;
		var_14_object = var_16_object;
		TaskCall(0);
		func_0(var_17_object, var_15_int, var_16_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, string var_7_string, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int, bool var_13_bool, object var_14_object)
	{
		if(var_14_object == "kill_player") {
			func_460();
			TaskCall(3);
			func_465();
			TaskReturn();
		} else if(var_14_object == "talk_player") {
		}
	
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int, bool var_13_bool, object var_14_object)
	{
		bool var_16_bool;
		@IsPlayerActor(var_14_object, var_16_bool);
		if(var_16_bool != 0) {
			bool var_18_bool;
			func_1615(var_18_bool, "quest_d3_01", "kill_player");
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, int var_14_int)
	{
		if(var_14_int != 0)
			return 0;
		bool var_17_bool;
		func_1117(var_17_bool, var_1_object);
		if(!var_17_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object)
	{
		@RequestClearPath(var_14_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object)
	{
		func_1101(var_14_object);
		object var_16_object;
		var_14_object = var_16_object;
		func_1738();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) //@nz
			@WorkWithCorpse(var_14_object);
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, string var_15_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1420(var_19_int, var_20_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_1699(var_15_object);
}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_1498(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_67_int;
	func_1693(var_67_int);
	var_22_object->SetNPCName(var_67_int);
	string var_68_string;
	func_1695(var_68_string);
	var_22_object->SetPhoto(var_68_string);
	int var_69_int;
	func_1676(var_69_int);
	var_22_object->SetPlayerName(var_69_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_78_object; object var_79_object;
	var_16_object = var_78_object;
	var_22_object = var_79_object;
	TaskCall(1);
	func_63(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_112_bool = !var_25_bool; //@nz
		if(var_112_bool == 0) goto Label_52;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_52:
	object var_113_object;
	var_16_object = var_113_object;
	func_1554();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_1284(object var_22_object, string var_23_string, int var_24_int)
{
	int var_26_int;
	var_22_object->GetProperty(var_23_string, var_26_int);
	var_22_object->SetProperty(var_23_string, (var_26_int + var_24_int));
}


void func_1669(bool var_118_bool, object var_119_object)
{
	int var_121_int;
	var_119_object->GetProperty("money", var_121_int);
	var_118_bool = var_121_int >= 10000;
}


void func_1291(float var_279_float, object var_280_object, float var_281_float, int var_282_int)
{
	int var_292_int; int var_294_int;
	object var_299_object;
	var_280_object = var_299_object;
	bool var_298_bool;
	func_1272(var_298_bool, var_299_object, "health");
	if(!var_298_bool) //@nz
		var_279_float = 0.0;
	bool var_302_bool; object var_303_object;
	func_1272(var_302_bool, var_303_object, "armor");
	if(!var_302_bool) //@nz
		var_292_int = 0;
	else
		var_303_object->GetProperty("armor", var_292_int);
	string var_307_string; int var_308_int;
	var_282_int = var_308_int;
	func_1264(var_307_string, var_308_int);
	string var_293_string = "armor_" + var_307_string;
	bool var_311_bool; object var_312_object; string var_313_string;
	var_280_object = var_312_object;
	func_1272(var_311_bool, var_312_object, var_313_string);
	if(!var_311_bool) //@nz
		var_294_int = 0;
	else
		var_280_object->GetProperty(var_313_string, var_294_int);

	float var_315_float;
	func_1597(var_315_float, ((var_292_int + var_294_int) / 100.0), (float)1);
	float var_295_float;
	var_315_float = var_295_float;
	float var_296_float;
	var_280_object->GetProperty("health", var_296_float);
	float var_325_float;
	func_1604(var_325_float, (var_296_float - (var_281_float * (1 - var_295_float))), (float)0, (float)1);
	var_280_object->SetProperty("health", var_325_float);
	float var_297_float = var_279_float;
	
}


void func_1676(int var_69_int)
{
	int var_71_int;
	@GetVariable("player", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 200001;
		return 2;
	EMIT "GOTO 0x69b";
	}
	if(var_71_int == 1) {
		var_69_int = 200002;
		return 2;
	}
	var_69_int = 200003;
}


void func_907(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_226_cvector;
	var_0_object->GetPFPosition(var_226_cvector); //@t
	cvector var_227_cvector;
	@GetPFPosition(var_227_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1420(object var_18_object, int var_19_int)
{
	object var_31_object; object var_32_object; cvector var_33_cvector; float var_34_float; string var_40_string;
	bool var_41_bool = false;
	if(var_19_int != 4) {
		if(var_19_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		@GetScene(var_31_object);
		@GetPosition(var_33_cvector);
		@GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		SetByIndex(var_33_cvector, 1) = (var_46_float + (var_34_float / 2));
		@AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_32_object = null;
		var_31_object = null;
	}
	if(var_18_object == null)
		return 20;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 20;
	cvector var_36_cvector;
	var_18_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


// @pe
void func_1554(void)
{
	@CameraSwitchToNormal();
}


void func_1558(string var_89_string)
{
	@Trace("playing " + var_89_string);
	float var_92_float;
	float var_93_float;
	@lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	@lshPlayAnimation(var_92_float, var_93_float);
	@Trace("start: " + var_92_float);
	@Trace("end: " + var_93_float);
}


void func_1693(int var_67_int)
{
	var_67_int = 4031;
}


void func_926(object var_0_object, bool var_185_bool)
{
	bool var_187_bool;
	var_190_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_190_bool != 0) {
		var_0_object->IsAttacking(var_187_bool); //@t
		var_187_bool = var_185_bool;
	}
	var_185_bool = false;
}


void func_1695(string var_68_string)
{
	var_68_string = "ui/NPC_Black.png";
}


void func_1697(bool var_86_bool)
{
	var_86_bool = false;
}


void func_1699(object var_15_object)
{
	bool var_17_bool;
	@AddItem(var_17_bool, "revolver_ammo", 0, 2);
	@AddItem(var_17_bool, "alpha_pills", 0, 2);
	object var_24_object;
	var_15_object = var_24_object;
	TaskCall(5);
	func_1128(var_24_object);
	TaskReturn();
}


void func_1576(void)
{
	bool var_17_bool;
	func_1697(var_17_bool);
	if(var_17_bool != 0)
		@lshStopSpeech();
}


void func_937(object var_2_object, bool var_4_bool)
{
	int var_250_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_4_bool != 0) {
		if((var_4_bool + -1) > 0)
			return 4;
	}
	float var_249_float;
	@rand(var_249_float);
	float var_256_float;
	func_975(var_256_float);
	if(var_249_float < var_256_float) {
		@irand(var_250_int, var_2_object);
		@Speak("attack" + (var_250_int + 1));
		int var_261_int;
		func_973(var_261_int);
		var_4_bool = var_261_int;
	}
}


void func_810(bool var_351_bool, float var_352_float)
{
	float var_355_float; bool var_356_bool;
	@rand(var_355_float);
	if(var_355_float < var_352_float) {

		for(;;) {
			@IsAnimationPlaying(var_356_bool);
			if(!var_356_bool) { //@nz
			} else {
				bool var_359_bool;
				func_874(var_356_bool, var_359_bool);
				if(var_359_bool != 0) {
					var_351_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_351_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1583(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_55_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_55_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_55_float;
}


void func_691(object var_0_object, float var_265_float, int var_266_int)
{
	object var_270_object; float var_271_float; float var_272_float;
	@GetVictim((var_265_float * 0.9), var_270_object);
	@ReportAttack(var_0_object);
	if(var_270_object == var_0_object) {
		float var_276_float; object var_277_object; int var_278_int;
		var_270_object = var_277_object;
		var_266_int = var_278_int;
		func_480(var_278_int);
		var_276_float = var_271_float;
		float var_279_float; object var_280_object; float var_281_float; int var_282_int;
		var_270_object = var_280_object;
		int var_283_int; object var_284_object; int var_285_int;
		var_270_object = var_284_object;
		var_266_int = var_285_int;
		func_483(var_285_int);
		var_283_int = var_282_int;
		func_1291(var_279_float, var_280_object, var_281_float, var_282_int);
		var_279_float = var_272_float;
		int var_332_int;
		func_969(var_332_int);
		@ReportHit(var_0_object, var_332_int, var_272_float, var_281_float);
		object var_333_object; float var_334_float;
		var_270_object = var_333_object;
		var_272_float = var_334_float;
		func_971();
	}
}
EMIT "Stack[-3] = 0";


void func_1593(float var_26_float, cvector var_27_cvector, cvector var_28_cvector)
{
	var_26_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


// @pe
void func_1597(float var_315_float, float var_316_float, float var_317_float)
{
	if(var_316_float < var_317_float)
		var_316_float = var_315_float;
	else
		var_317_float = var_315_float;
	
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		func_116(var_79_object, "Neutral");
		var_0_object->SetMessage(9131); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9132, 10013, 10012); //@t
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	bool var_104_bool;
	func_1697(var_104_bool);
	if(var_104_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1558(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_115;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_115:
		return 0;

	}
	
}


void func_834(object var_0_object, bool var_193_bool, float var_194_float)
{
	bool var_200_bool; cvector var_201_cvector; cvector var_202_cvector; cvector var_203_cvector; float var_204_float;
	
	for(;;) {
		@IsAnimationPlaying(var_200_bool);
		if(!var_200_bool) //@nz
			break;
		bool var_206_bool;
		func_874(var_204_float, var_206_bool);
		if(var_206_bool != 0) {
			var_193_bool = true;
			return 10;
		}
		bool var_231_bool;
		func_1396(var_231_bool, var_0_object);
		if(!var_231_bool) { //@nz
			var_193_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_201_cvector); //@t
		@GetPFPosition(var_202_cvector);
		var_203_cvector = var_201_cvector - var_202_cvector;
		var_204_float = var_203_cvector | var_203_cvector;
		if(var_204_float < (var_194_float * var_194_float)) {
			bool var_236_bool; float var_237_float;
			var_194_float = var_237_float;
			func_730(var_203_cvector, var_204_float, var_236_bool, var_237_float);
			var_193_bool = true;
			return 10;
		}
		@sync();
	}
	var_193_bool = false;
}


// @pe
void func_1604(float var_325_float, float var_326_float, float var_327_float, float var_328_float)
{
	if(var_326_float < var_327_float) {
		var_327_float = var_325_float;
		return 0;
	}
	if(var_326_float > var_328_float) {
		var_328_float = var_325_float;
		return 0;
	}
	var_326_float = var_325_float;
}


void func_969(int var_332_int)
{
	var_332_int = 0;
}


void func_1355(bool var_34_bool, object var_35_object)
{
	bool var_37_bool;
	var_35_object->IsDead(var_37_bool);
	var_37_bool = var_34_bool;
}


// @pe
void func_971(void)
{
}


void func_460(void)
{
	@StopGroup0();
	@Stop();
}


void func_973(int var_261_int)
{
	var_261_int = 1;
}


void func_1101(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1615(bool var_18_bool, string var_19_string, string var_20_string)
{
	object var_22_object;
	@FindActor(var_22_object, var_19_string);
	if(var_22_object == null)
		var_18_bool = false;
	@Trigger(var_22_object, var_20_string);
	var_18_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1487(object var_171_object)
{
	cvector var_175_cvector;
	var_171_object->GetPosition(var_175_cvector);
	cvector var_176_cvector;
	@GetPosition(var_176_cvector);
	cvector var_177_cvector = var_175_cvector - var_176_cvector;
	var_178_float = GetByIndex(var_177_cvector, 0);
	var_179_float = GetByIndex(var_177_cvector, 2);
	@RotateAsync(var_178_float, var_179_float);
}


void func_465(void)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	if(!var_23_object) { //@nz
	}
	object var_26_object;
	object var_22_object;
	func_486(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_26_object, var_26_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_977(object var_0_object, object var_1_object, bool var_109_bool, object var_110_object, float var_111_float, float var_112_float, bool var_113_bool, bool var_114_bool)
{
	bool var_125_bool; object var_127_object; cvector var_128_cvector; cvector var_129_cvector; float var_131_float; object var_132_object;
	var_0_object = false;
	var_1_object = var_110_object;
	bool var_126_bool;
	var_114_bool = var_126_bool;
	
	for(;;) {
		bool var_133_bool; object var_134_object;
		var_110_object = var_134_object;
		func_1117(var_133_bool, var_134_object);
		if(!var_133_bool) { //@nz
			var_109_bool = false;
			return 16;
		}
		var_110_object->GetPosition(var_128_cvector);
		@GetPosition(var_129_cvector);
		var_131_float = (var_128_cvector - var_129_cvector) | (var_128_cvector - var_129_cvector);
		bool var_138_bool = false;
		if(var_112_float > 0) {
			if(var_131_float > (var_112_float * var_112_float))
				var_138_bool = true;
		}
		if(var_138_bool != 0) {
			@Stop();
			var_109_bool = false;
			return 16;
		}
		if(var_131_float > (var_111_float * var_111_float)) {
			var_110_object->GetPFPosition(var_128_cvector);
			@FindPathTo(var_132_object, var_128_cvector);
			if(var_132_object != null) {
				var_132_object = var_127_object;
				var_132_object = null;
			}
			if(var_127_object != null) {
				if(var_126_bool == 0) goto Label_1030;
				var_126_bool = false;
				@RotatePath(var_127_object, var_125_bool);
				if(!var_125_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_151_string;
						func_1124(var_151_string);
						string var_152_string;
						func_1126(var_152_string);
						@FollowPath(var_127_object, var_113_bool, var_125_bool, var_151_string, var_152_string);
						if(!var_125_bool) { //@nz
							if(var_0_object == 0) goto Label_1049;
							var_127_object = null;
						}
					EMIT "GOTO 0x41a";

					Label_1049:
						} else {
					var_127_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_125_bool);
					if(!var_125_bool) { //@nz
						if(var_0_object != 0) {
							var_127_object = null;
							goto Label_1077;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1077;
		}
			var_132_object = null;
			goto Label_1075;

		Label_1075:
			var_127_object = null;

		}
	Label_1077:
		for(;;) {
			var_109_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_975(float var_256_float)
{
	var_256_float = 0.5;
}


// @pe
void func_1236(string var_47_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_47_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_47_string);
	@RemoveEnvelope();
}


void func_341(void)
{
}


void func_1360(bool var_23_bool, object var_24_object)
{
	if(var_24_object == null) {
		var_23_bool = false;
		return 4;
	}
	bool var_30_bool = false;
	var_33_bool = IsFuncExist(var_24_object, "IsDead", 1);
	if(var_33_bool != 0) {
		bool var_34_bool; object var_35_object;
		var_24_object = var_35_object;
		func_1355(var_34_bool, var_35_object);
		if(var_34_bool != 0)
			var_30_bool = true;
	}
	if(var_30_bool != 0) {
		var_23_bool = false;
		return 4;
	}
	object var_27_object;
	@GetScene(var_27_object);
	if(var_27_object == null) {
		var_23_bool = false;
		return 4;
	}
	object var_28_object;
	var_24_object->GetScene(var_28_object);
	if(var_27_object != var_28_object) {
		var_23_bool = false;
		return 4;
	}
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1498(bool var_26_bool, object var_27_object)
{
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	float var_36_float;
	var_27_object->GetEyesHeight(var_36_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_36_float);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	@GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_45_float + var_36_float);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_48_float = sqrt(var_39_cvector | var_39_cvector);
	var_39_cvector /= var_48_float;
	cvector var_40_cvector = -var_39_cvector;
	cvector var_51_cvector;
	func_1583(var_51_cvector, (var_40_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_41_cvector = ((var_39_cvector * 70) + (var_51_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_38_cvector + var_41_cvector), var_40_cvector);
	var_64_float = GetByIndex(var_41_cvector, 0);
	var_65_float = GetByIndex(var_41_cvector, 2);
	@Rotate(var_64_float, var_65_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
}


// @pe
void func_1627(void)
{
	@SetVariable("d3q01", 8);
	bool var_54_bool;
	func_1615(var_54_bool, "quest_d3_01", "gpatrol_attack");
}


void func_730(object var_0_object, object var_1_object, bool var_236_bool, float var_237_float)
{
	int var_240_int;
	@irand(var_240_int, var_1_object);
	var_240_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_240_int));
	@WaitForAnimEnd();
	bool var_241_bool;
	func_937(var_240_int, var_241_bool);
	bool var_262_bool;
	func_1396(var_262_bool, var_0_object);
	if(!var_262_bool) { //@nz
		@StopAsync();
		var_236_bool = false;
		return 4;
	}
	float var_265_float; int var_266_int;
	var_237_float = var_265_float;
	var_240_int = var_266_int;
	func_691(var_241_bool, var_265_float, var_266_int);
	@HasAnimation(var_241_bool, "all", ("attack_middle" + var_240_int));
	if(var_241_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_240_int));
		@WaitForAnimEnd();
		bool var_342_bool;
		func_1396(var_342_bool, var_0_object);
		if(!var_342_bool) { //@nz
			@StopAsync();
			var_236_bool = false;
			return 4;
		}
		float var_345_float; int var_346_int;
		var_237_float = var_345_float;
		var_240_int = var_346_int;
		func_691(var_241_bool, var_345_float, var_346_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_240_int));
	bool var_351_bool;
	func_810(var_351_bool, 0.75);
	@StopAsync();
	var_236_bool = true;
}


// @pe
void func_1117(bool var_17_bool, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1396(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
}


// @pe
void func_480(float var_276_float)
{
	var_276_float = 0.15;
}


// @pe
void func_483(int var_283_int)
{
	var_283_int = 0;
}


void func_1124(string var_151_string)
{
	var_151_string = "walk";
}


// @pe
void func_1638(object var_20_object)
{
	object var_22_object;
	var_20_object = var_22_object;
	func_1284(var_22_object, "money", -10000);
}


void func_486(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_26_object, bool var_27_bool, float var_28_float, bool var_115_bool)
{
	bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector; cvector var_43_cvector; bool var_44_bool; bool var_45_bool; float var_47_float; float var_48_float;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_39_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_39_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_40_bool, ("attack" + (var_2_object + 1)));
			if(!var_40_bool) { //@nz
			} else {
									var_2_object += 1;
			}
			var_4_bool = 0;
			var_62_bool = IsFuncExist(var_26_object, "@GetAttackDistance", 1);
			if(var_62_bool != 0) {
				var_26_object->GetAttackDistance(var_41_float);
				var_41_float += 50;
			} else {
								var_28_float = var_41_float;

			}
			if(var_41_float >= 150)
				var_41_float = 150;
			var_3_string = false;
			var_0_object = var_26_object;
			@IsPlayerActor(var_0_object, var_44_bool);
			if(var_27_bool != 0)
				var_45_bool = false;
			else
				var_45_bool = true;

			for(;;) {
				bool var_67_bool = false;
				bool var_68_bool;
				func_1396(var_68_bool, var_0_object);
				if(var_68_bool != 0) {
					if(!var_3_string) //@nz
						var_67_bool = true;
				}
				if(var_67_bool != 0) {
					var_0_object->GetPFPosition(var_42_cvector); //@t
					@GetPFPosition(var_43_cvector);
					var_47_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
					if(var_47_float >= ((400.0 + var_41_float) * (400.0 + var_41_float))) {
						bool var_109_bool; float var_111_float;
						var_41_float = var_111_float;
						TaskCall(4);
						func_977(var_115_bool, var_116_object, var_109_bool, var_0_object, var_111_float, 10000.0, true, false);
						TaskReturn();
						if(!var_115_bool) { //@nz
						} else {
							var_45_bool = false;
					} else {
					if(var_47_float >= (var_28_float * var_28_float)) {
						if(!var_45_bool) { //@nz
							func_1487(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_45_bool = true;
						}
						@rand(var_48_float);
						bool var_182_bool;
						var_184_bool = var_48_float < 0.6;
						if(var_184_bool != 1) {
							bool var_185_bool;
							func_926(true, var_185_bool);
							if(var_185_bool != 1)
								var_182_bool = false;
						}
						if(var_182_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_193_bool; float var_194_float;
							func_834(var_48_float, var_193_bool, var_194_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_363_bool;
							func_926(var_48_float, var_363_bool);
							var_364_bool = !var_363_bool; //@nz
							if(var_364_bool == 0) goto Label_664;
							bool var_365_bool;
							func_1396(var_365_bool, var_0_object);
							if(!var_365_bool) { //@nz
								goto Label_674;
							}
							var_0_object->GetPFPosition(var_42_cvector); //@t
							@GetPFPosition(var_43_cvector);
							var_47_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
							if(!(var_47_float < (var_194_float * var_194_float))) goto Label_664;
							bool var_370_bool; float var_371_float;
							var_28_float = var_371_float;
							func_730(var_47_float, var_48_float, var_370_bool, var_371_float);
							var_372_bool = !var_370_bool; //@nz
							if(var_372_bool == 0) goto Label_664;
							goto Label_674;
					}
						bool var_373_bool; float var_374_float;
						var_28_float = var_374_float;
						func_730(var_47_float, var_48_float, var_373_bool, var_374_float);
						if(!var_373_bool) { //@nz
							goto Label_674;
						}
						var_45_bool = true;

					}
				Label_664:
					goto Label_673;
					}
					Label_673:
					}
				}
			Label_674:
				@WaitForAnimEnd();
				if(var_3_string != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_44_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_1126(string var_152_string)
{
	var_152_string = "run";
}


// @pe
void func_1128(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_1149(var_25_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_874(object var_0_object, bool var_206_bool)
{
	cvector var_212_cvector; cvector var_213_cvector;
	bool var_217_bool;
	func_1396(var_217_bool, var_0_object);
	if(!var_217_bool) { //@nz
		var_206_bool = false;
		return 10;
	}
	bool var_220_bool;
	float var_216_float;
	func_926(var_216_float, var_220_bool);
	if(var_220_bool != 0) {
		var_0_object->GetPFPosition(var_212_cvector); //@t
		@GetPFPosition(var_213_cvector);
		var_0_object->GetAttackDistance(var_216_float); //@t
		var_216_float += 50;
		if(((var_212_cvector - var_213_cvector) | (var_212_cvector - var_213_cvector)) <= (var_216_float * var_216_float)) {
			func_907(var_216_float);
			var_206_bool = true;
			return 10;
		}
	}
	var_206_bool = false;
}


// @pe
void func_1646(void)
{
	bool var_30_bool;
	func_1615(var_30_bool, "quest_d3_01", "gpatrol_talk");
}


// @pe
void func_1264(string var_307_string, int var_308_int)
{
	if(var_308_int == 1)
		var_307_string = "fire";
	var_307_string = "phys";
}


// @pe
void func_116(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_1697(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_object)
		return 0;
	string var_89_string;
	func_1558(var_89_string);
	var_2_object = var_89_string;
}


// @pe
void func_1653(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1396(bool var_19_bool, object var_20_object)
{
	object var_24_object;
	var_20_object = var_24_object;
	bool var_23_bool;
	func_1360(var_23_bool, var_24_object);
	if(!var_23_bool) { //@nz
		var_19_bool = false;
		return 2;
	}
	bool var_41_bool; object var_42_object;
	func_1272(var_41_bool, var_42_object, "noaccess");
	if(!var_41_bool) { //@nz
		var_19_bool = true;
		return 2;
	}
	int var_22_int;
	var_42_object->GetProperty("noaccess", var_22_int);
	var_19_bool = var_22_int == 0;
}


void func_1272(bool var_41_bool, object var_42_object, string var_43_string)
{
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", 2);
	if(!var_48_bool) { //@nz
		var_41_bool = false;
		return 2;
	}
	bool var_45_bool;
	var_42_object->HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
}


// @pe
void func_1659(bool var_116_bool, object var_117_object)
{
	object var_119_object;
	var_117_object = var_119_object;
	bool var_118_bool;
	func_1669(var_118_bool, var_119_object);
	if(var_118_bool != 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


void func_1149(object var_25_object)
{
	cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; cvector var_39_cvector; string var_40_string; object var_41_object; bool var_42_bool; bool var_43_bool; float var_44_float; cvector var_45_cvector;
	if(var_25_object == null) {
		func_1236("fdie");
	} else {
		var_25_object->GetPosition(var_36_cvector);
		@GetPosition(var_37_cvector);
		@GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_50_float = GetByIndex(var_39_cvector, 0);
		var_51_float = GetByIndex(var_38_cvector, 0);
		var_53_float = GetByIndex(var_39_cvector, 2);
		var_54_float = GetByIndex(var_38_cvector, 2);
		if(((var_50_float * var_51_float) + (var_53_float * var_54_float)) >= 0)
			var_40_string = "fdie";
		else
			var_40_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_25_object = var_41_object;
		var_61_bool = IsFuncExist(var_25_object, "GetScriptProperty", 2);
		if(var_61_bool != 0) {
			var_25_object->HasScriptProperty(var_42_bool, "Owner");
			if(var_42_bool != 0) {
				var_25_object->GetScriptProperty(var_41_object, "Owner");
				if(var_41_object == null)
					var_25_object = var_41_object;
			}
		}
		var_68_bool = IsFuncExist(var_41_object, "@GetEyesHeight", 1);
		if(var_68_bool != 0) {
			var_41_object->GetEyesHeight(var_44_float);
			var_45_cvector = [0.0, 0.0, 0.0];
			var_69_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_69_float;
			SetByIndex(var_45_cvector, 1) = var_69_float;
			@LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = true;
		} else {
			var_43_bool = false;

		}
		@PlayAnimation("all", var_40_string);
		@WaitForAnimEnd();
		if(var_43_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_40_string);
		@RemoveEnvelope();
		var_41_object = null;
	}
	
}


