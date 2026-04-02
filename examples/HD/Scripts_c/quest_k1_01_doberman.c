// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_1150();
			if(var_10_bool == 26016) {
				bool var_16_bool = false;
				bool var_17_bool;
				func_1255(var_1_object);
				if(var_17_bool != 0) {
					bool var_25_bool;
					func_1267(var_1_object);
					if(var_25_bool != 0)
						var_16_bool = true;
				}
				if(var_16_bool != 0) {
					object var_31_object; object var_32_object;
					var_31_object = var_1_object;
					var_32_object = var_0_object;
					func_1249();
					func_166(var_11_object, "Neutral");
					var_0_object->SetMessage(524677); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541777, 43984, 43983); //@t
					return 0;
				}
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(524679); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524680, -1, 26019); //@t
				var_0_object->AddReply(526801, -1, 28081); //@t
				return 0;
			}
			if(var_10_bool == 43984) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(541778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524678, 28065, 26017); //@t
				var_0_object->AddReply(541766, 43969, 43968); //@t
				return 0;
			}
			if(var_10_bool == 43969) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(541767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541768, 43971, 43970); //@t
				var_0_object->AddReply(541773, 43975, 43976); //@t
				return 0;
			}
			if(var_10_bool == 43971) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(541769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541770, 28065, 43972); //@t
				var_0_object->AddReply(541771, 43975, 43974); //@t
				return 0;
			}
			if(var_10_bool == 43975) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(541772); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541774, 28065, 43978); //@t
				return 0;
			}
			if(var_10_bool == 28065) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526786, 28067, 28066); //@t
				var_0_object->AddReply(541755, 28069, 43957); //@t
				return 0;
			}
			if(var_10_bool == 28067) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526788, 28069, 28068); //@t
				var_0_object->AddReply(541779, -1, 43985); //@t
				return 0;
			}
			if(var_10_bool == 28069) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526789); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526795, 28076, 28075); //@t
				return 0;
			}
			if(var_10_bool == 28076) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526796); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526797, 28078, 28077); //@t
				var_0_object->AddReply(541775, 28071, 43979); //@t
				return 0;
			}
			if(var_10_bool == 28078) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526799, 28080, 28079); //@t
				var_0_object->AddReply(541776, 28071, 43981); //@t
				return 0;
			}
			if(var_10_bool == 28080) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526793, 28071, 28073); //@t
				var_0_object->AddReply(526790, 28082, 28070); //@t
				return 0;
			}
			if(var_10_bool == 28082) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526803, -1, 28083); //@t
				var_0_object->AddReply(526804, -1, 28084); //@t
				return 0;
			}
			if(var_10_bool == 28071) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526792, -1, 28072); //@t
				var_0_object->AddReply(526794, -1, 28074); //@t
				return 0;
			}
			var_3_string = true;
			bool var_178_bool;
			func_1323(var_178_bool);
			if(var_178_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbd";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(3);
			func_551(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_616(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_578(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_1139(var_4_bool);
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
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_1302(var_14_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_934(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_1002(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	if(var_12_bool != 0) {
		bool var_14_bool;
		func_1213(var_14_bool, "quest_k1_01", "doberman_dead");
	}
	object var_20_object;
	var_10_object = var_20_object;
	func_1325(var_20_object);
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_1021(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_1317(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1315(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1319(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1321(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1279(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_159_bool = !var_24_bool; //@nz
		if(var_159_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_160_object;
	var_15_object = var_160_object;
	func_1090();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_1157(string var_51_string)
{
	bool var_60_bool; int var_61_int; bool var_62_bool; int var_63_int; bool var_64_bool; float var_65_float; cvector var_66_cvector; cvector var_67_cvector;
	@IsExisting3DSound(var_60_bool, var_51_string);
	if(!var_60_bool) { //@nz
		var_61_int = 0;

		for(;;) {
			@IsExisting3DSound(var_62_bool, (var_51_string + (var_61_int + 1)));
			if(!var_62_bool) { //@nz
				break;
			Label_1177:
				@irand(var_63_int, var_61_int);
				var_51_string += (var_63_int + 1);
	}
			@Is3DSoundLoaded(var_64_bool, var_51_string);
			if(var_64_bool != 0) {
				@GetEyesHeight(var_65_float);
				@GetDirection(var_66_cvector);
				var_67_cvector = var_66_cvector * 50;
				var_78_float = GetByIndex(var_67_cvector, 1);
				SetByIndex(var_67_cvector, 1) = (var_78_float + var_65_float);
				@PlayGlobalSound(var_51_string, var_67_cvector);
			}
		}
		var_61_int += 1;
	}
	var_73_bool = !var_61_int; //@nz
	if(var_73_bool == 0) goto Label_1177;
}


void func_1296(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


// @pe
void func_1302(object var_14_object)
{
	int var_15_int;
	func_1296(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1315(int var_74_int)
{
	var_74_int = 518097;
}


void func_1317(int var_73_int)
{
	var_73_int = 518096;
}


// @pe
void func_166(object var_2_object, string var_112_string)
{
	bool var_113_bool;
	func_1323(var_113_bool);
	if(!var_113_bool) //@nz
		return 0;
	if(var_112_string == var_2_object)
		return 0;
	string var_116_string; bool var_117_bool;
	var_112_string = var_116_string;
	if(var_112_string == "")
		var_117_bool = false;
	else
		var_117_bool = true;
	func_1124(var_116_string, var_117_bool);
	var_2_object = var_112_string;
	
}


void func_1319(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
}


// @pe
void func_551(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_1016(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_630();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1321(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
}


void func_934(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_875(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1198(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_996:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_890(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_996;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_1002(var_61_float, var_62_cvector, var_63_cvector);
}


void func_1323(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_1325(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(3);
	func_716(var_21_object);
	TaskReturn();
}


void func_1198(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_1208(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_1213(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1090(void)
{
	bool var_162_bool;
	@CameraSwitchToNormal(true);
	bool var_164_bool;
	func_1323(var_164_bool);
	if(var_164_bool != 0) {
	} else {
		@HasAnimationTrack(var_162_bool, "head");
		if(var_162_bool == 0) goto Label_1107;
		@UnlookAsync("head");
	}
Label_1107:
	
}


void func_578(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_882(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_709(bool var_61_bool)
{
	var_61_bool = true;
}


void func_711(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1225(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool = false;
		bool var_94_bool;
		func_1255(var_1_object);
		if(var_94_bool != 0) {
			bool var_102_bool;
			func_1267(var_1_object);
			if(var_102_bool != 0)
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			object var_108_object; object var_109_object;
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1249();
			func_166(var_87_object, "Neutral");
			var_0_object->SetMessage(524677); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(541777, 43984, 43983); //@t
		} else {
					func_166(var_87_object, "Neutral");
					var_0_object->SetMessage(524679); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524680, -1, 26019); //@t
					var_0_object->AddReply(526801, -1, 28081); //@t
		}
	}
	for(;;) {
		bool var_133_bool;
		func_1323(var_133_bool);
		if(var_133_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1108(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_165;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_165:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_843(string var_50_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_51_string;
	var_50_string = var_51_string;
	func_1157(var_51_string);
	@PlayAnimation("all", var_50_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_50_string);
	@RemoveEnvelope();
}


void func_716(object var_21_object)
{
	bool var_23_bool;
	@AddItem(var_23_bool, "lockpick", 0, 1);
	object var_27_object;
	var_21_object = var_27_object;
	func_727(var_27_object);
}


void func_1232(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_1225(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_1108(string var_135_string)
{
	bool var_139_bool; float var_140_float; float var_141_float;
	@lshHasAnimation(var_139_bool, var_135_string);
	if(var_139_bool != 0) {
		@lshGetAnimTimes(var_135_string, var_140_float, var_141_float);
		@lshPlayAnimation(var_140_float, var_141_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_135_string);
	}
	
}


// @pe
void func_727(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_752(var_28_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1249(void)
{
	@SetVariable("ook1Lisa1", 1);
}


void func_1124(string var_116_string, bool var_117_bool)
{
	bool var_123_bool; float var_124_float; float var_125_float;
	@lshHasAnimation(var_123_bool, var_116_string);
	if(var_123_bool != 0) {
		@lshGetAnimTimes(var_116_string, var_124_float, var_125_float);
		@lshPlayAnimation(var_124_float, var_125_float, var_117_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_116_string);
	}
	
}


// @pe
void func_1255(bool var_94_bool)
{
	int var_96_int;
	func_1208(var_96_int, "k1q01");
	if(var_96_int == 4)
		var_94_bool = true;
	var_94_bool = false;
}


// @pe
void func_616(object var_2_object, string var_3_string)
{
	func_711();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1002(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_890(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_875(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_752(object var_28_object)
{
	cvector var_39_cvector; cvector var_40_cvector; cvector var_41_cvector; cvector var_42_cvector; string var_43_string; object var_44_object; bool var_45_bool; bool var_46_bool; float var_47_float; cvector var_48_cvector;
	if(var_28_object == null) {
		func_843("fdie");
	} else {
		var_28_object->GetPosition(var_39_cvector);
		@GetPosition(var_40_cvector);
		@GetDirection(var_41_cvector);
		var_42_cvector = var_40_cvector - var_39_cvector;
		var_82_float = GetByIndex(var_42_cvector, 0);
		var_83_float = GetByIndex(var_41_cvector, 0);
		var_85_float = GetByIndex(var_42_cvector, 2);
		var_86_float = GetByIndex(var_41_cvector, 2);
		if(((var_82_float * var_83_float) + (var_85_float * var_86_float)) >= 0)
			var_43_string = "fdie";
		else
			var_43_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_28_object = var_44_object;
		var_93_bool = IsFuncExist(var_28_object, "GetScriptProperty", 2);
		if(var_93_bool != 0) {
			var_28_object->HasScriptProperty(var_45_bool, "Owner");
			if(var_45_bool != 0) {
				var_28_object->GetScriptProperty(var_44_object, "Owner");
				if(var_44_object == null)
					var_28_object = var_44_object;
			}
		}
		var_100_bool = IsFuncExist(var_44_object, "@GetEyesHeight", 1);
		if(var_100_bool != 0) {
			var_44_object->GetEyesHeight(var_47_float);
			var_48_cvector = [0.0, 0.0, 0.0];
			var_101_float = GetByIndex(var_48_cvector, 1);
			var_47_float = var_101_float;
			SetByIndex(var_48_cvector, 1) = var_101_float;
			@LookAsync(var_28_object, "head", var_48_cvector);
			var_46_bool = true;
		} else {
			var_46_bool = false;

		}
		string var_103_string;
		var_43_string = var_103_string;
		func_1157(var_103_string);
		@PlayAnimation("all", var_43_string);
		@WaitForAnimEnd();
		if(var_46_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_43_string);
		@RemoveEnvelope();
		var_44_object = null;
	}
	
}


void func_882(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_1267(bool var_102_bool)
{
	int var_104_int;
	func_1208(var_104_int, "ook1Lisa1");
	if(var_104_int == 0) {
		var_102_bool = true;
		return 0;
	}
	var_102_bool = false;
}


void func_1139(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_630(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_1016(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_1232(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_1016(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_677;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_1225(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_706;
				}
			} else if(var_28_int != 0) {
				goto Label_706;
			}
			}
					bool var_61_bool;
					func_709(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_701;
			}
		}
	Label_706:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_701:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_1016(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_890(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_1021(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_1198(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_1323(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_1084;
		@LookAsyncCamera("head");
	}
Label_1084:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_1150(void)
{
	bool var_13_bool;
	func_1323(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_1279(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x50e";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


