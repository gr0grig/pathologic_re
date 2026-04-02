// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_979();
			if(var_6_int == 23190) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_1059();
				object var_25_object; object var_26_object;
				var_25_object = var_1_object;
				var_26_object = var_0_object;
				func_1084();
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_1050();
			}
			if(var_6_int == 23187) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_1059();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_1084();
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1050();
			}
			if(var_5_int == 23182) {
				bool var_72_bool = false;
				bool var_73_bool;
				func_1095(var_1_object);
				if(!var_73_bool) { //@nz
					bool var_82_bool;
					func_1107(var_1_object);
					if(var_82_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					object var_88_object; object var_89_object;
					var_88_object = var_1_object;
					var_89_object = var_0_object;
					func_1078();
					func_215(var_6_int, "Tiredness");
					var_0_object->SetMessage(522012); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523423, 24645, 24644); //@t
					return 0;
				}
				bool var_113_bool;
				func_1095(var_1_object);
				if(!var_113_bool) { //@nz
					func_215(var_6_int, "Neutral");
					var_0_object->SetMessage(522016); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522017, -1, 23187); //@t
					var_0_object->AddReply(522018, -1, 23188); //@t
					return 0;
				}
				func_215(var_6_int, "Neutral");
				var_0_object->SetMessage(522014); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523455, -1, 24681); //@t
				bool var_129_bool;
				func_1119(var_1_object);
				if(var_129_bool != 0)
					var_0_object->AddReply(522015, -1, 23185); //@t
				bool var_138_bool;
				func_1119(var_1_object);
				if(var_138_bool != 0)
					var_0_object->AddReply(523456, -1, 24682); //@t
				return 0;
			}
			if(var_5_int == 24645) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523425, 24647, 24646); //@t
				var_0_object->AddReply(523435, 24659, 24656); //@t
				var_0_object->AddReply(523444, 24669, 24668); //@t
				return 0;
			}
			if(var_5_int == 24669) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523446, 24671, 24670); //@t
				var_0_object->AddReply(541844, 24674, 44062); //@t
				return 0;
			}
			if(var_5_int == 24674) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523459, 24686, 24685); //@t
				return 0;
			}
			if(var_5_int == 24686) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523460); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523450, 24663, 24675); //@t
				return 0;
			}
			if(var_5_int == 24671) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523457, 24684, 24683); //@t
				return 0;
			}
			if(var_5_int == 24684) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523461, 24688, 24687); //@t
				return 0;
			}
			if(var_5_int == 24688) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523448, 24663, 24672); //@t
				return 0;
			}
			if(var_5_int == 24659) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523439, 24651, 24660); //@t
				var_0_object->AddReply(523440, 24663, 24662); //@t
				return 0;
			}
			if(var_5_int == 24663) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523442, 24651, 24664); //@t
				var_0_object->AddReply(523443, 24651, 24666); //@t
				return 0;
			}
			if(var_5_int == 24647) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523427, 24649, 24648); //@t
				return 0;
			}
			if(var_5_int == 24649) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523429, 24651, 24650); //@t
				return 0;
			}
			if(var_5_int == 24651) {
				func_215(var_6_int, "Tiredness");
				var_0_object->SetMessage(523430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522020, -1, 23190); //@t
				var_0_object->AddReply(523434, -1, 24655); //@t
				return 0;
			}
			var_3_string = true;
			bool var_245_bool;
			func_1048(var_245_bool);
			if(var_245_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xee";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		bool var_5_bool;
		func_703(var_5_bool);
		if(!var_5_bool) //@nz
			@Hold();
		for(;;) {
			func_933("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		@StopGroup0();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		bool var_7_bool;
		@IsOverrideActive(var_7_bool);
		if(!var_7_bool) { //@nz
			disable OnUse;
			bool var_9_bool; object var_10_object;
			var_5_object = var_10_object;
			func_694(var_9_bool, var_10_object);
			enable OnUse;
			object var_23_object;
			var_5_object = var_23_object;
			func_637(var_23_object);
		}
	}

}


void func_0(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_708(var_35_bool, var_36_object, 70.0);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_83_int;
	func_1042(var_83_int);
	var_31_object->SetNPCName(var_83_int);
	int var_84_int;
	func_1040(var_84_int);
	var_31_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_1044(var_85_string);
	var_31_object->SetPhoto(var_85_string);
	string var_86_string;
	func_1046(var_86_string);
	var_31_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1185(var_87_int);
	var_31_object->SetPlayerName(var_87_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	bool var_96_bool; object var_97_object;
	object var_98_object;
	func_986(var_98_object);
	var_98_object = var_97_object;
	func_795(var_96_bool, var_97_object);
	object var_191_object; object var_192_object;
	var_25_object = var_191_object;
	var_31_object = var_192_object;
	TaskCall(1);
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_287_bool = !var_34_bool; //@nz
		if(var_287_bool == 0) goto Label_70;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_70:
	object var_288_object;
	var_25_object = var_288_object;
	func_777();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_1157(bool var_44_bool, object var_45_object, int var_46_int)
{
	object var_53_object;
	func_1144(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	object var_51_object;
	var_50_object->Find(var_46_int, var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_46_int);
		var_44_bool = false;
	}
	var_51_object->AddChild(var_45_object);
	@SendWorldWndMessage(7);
	int var_52_int;
	var_45_object->GetCategory(var_52_int);
	@SetDiarySection(var_52_int);
	var_44_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1031(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	var_151_int = 1 + (var_153_float / 24);
}


void func_777(void)
{
	bool var_290_bool;
	@CameraSwitchToNormal(true);
	bool var_292_bool;
	func_1048(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		@HasAnimationTrack(var_290_bool, "head");
		if(var_290_bool == 0) goto Label_794;
		@UnlookAsync("head");
	}
Label_794:
	
}


void func_1040(int var_84_int)
{
	var_84_int = 515541;
}


void func_1042(int var_83_int)
{
	var_83_int = 502866;
}


void func_1044(string var_85_string)
{
	var_85_string = "ui/NPC_Lara.png";
}


void func_1046(string var_86_string)
{
	var_86_string = "ui/NPC_Lara_b.png";
}


void func_1048(bool var_78_bool)
{
	var_78_bool = true;
}


// @pe
void func_1050(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_1131();
}


void func_795(bool var_96_bool, object var_97_object)
{
	int var_103_int; int var_104_int;
	@GetVariable("voice_common", var_103_int);
	if(var_103_int != 0) {
		bool var_107_bool; object var_108_object;
		var_97_object = var_108_object;
		func_853(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			bool var_138_bool; object var_139_object;
			var_97_object = var_139_object;
			func_890(var_138_bool, var_139_object);
			if(!var_138_bool) { //@nz
				var_96_bool = false;
				return 4;
			}
		}
		@irand(var_104_int, 2);
		if(var_104_int != 0)
			@SetVariable("voice_common", ((var_103_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_183_bool; object var_184_object;
		var_97_object = var_184_object;
		func_890(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			bool var_186_bool; object var_187_object;
			var_97_object = var_187_object;
			func_853(var_186_bool, var_187_object);
			if(!var_186_bool) { //@nz
				var_96_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_851;
	
Label_851:
	var_96_bool = true;
	
}


void func_1185(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x4b0";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


// @pe
void func_1059(void)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillLara", 1);
	bool var_17_bool;
	func_1019(var_17_bool, "volonteers_burah", "disease", "lara");
	@Trace("Lara is diseased");
}


void func_933(string var_9_string)
{
	bool var_13_bool; float var_14_float; float var_15_float;
	@lshHasAnimation(var_13_bool, var_9_string);
	if(var_13_bool != 0) {
		@lshGetAnimTimes(var_9_string, var_14_float, var_15_float);
		@lshPlayAnimation(var_14_float, var_15_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_9_string);
	}
	
}


void func_684(bool var_13_bool, cvector var_14_cvector)
{
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	cvector var_19_cvector = var_14_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	bool var_20_bool;
	@Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_13_bool;
}


void func_949(string var_222_string, bool var_223_bool)
{
	bool var_229_bool; float var_230_float; float var_231_float;
	@lshHasAnimation(var_229_bool, var_222_string);
	if(var_229_bool != 0) {
		@lshGetAnimTimes(var_222_string, var_230_float, var_231_float);
		@lshPlayAnimation(var_230_float, var_231_float, var_223_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_222_string);
	}
	
}


// @pe
void func_1078(void)
{
	@SetVariable("oob11Lara1", 1);
}


void func_694(bool var_9_bool, object var_10_object)
{
	cvector var_12_cvector;
	var_10_object->GetPosition(var_12_cvector);
	bool var_13_bool; cvector var_14_cvector;
	var_12_cvector = var_14_cvector;
	func_684(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
}


// @pe
void func_1084(void)
{
	@SetVariable("b11q01", 2);
	bool var_29_bool;
	func_1007(var_29_bool, "quest_b11_01", "open_well_exit");
}


void func_703(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


void func_708(bool var_35_bool, object var_36_object, float var_37_float)
{
	cvector var_48_cvector; bool var_55_bool;
	var_36_object->GetPosition(var_48_cvector);
	float var_47_float;
	var_36_object->GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (var_56_float + var_47_float);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	@GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_47_float);
	cvector var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_60_float = sqrt(var_50_cvector | var_50_cvector);
	var_50_cvector /= var_60_float;
	cvector var_51_cvector = -var_50_cvector;
	cvector var_62_cvector;
	func_992(var_62_cvector, (var_51_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_52_cvector = ((var_50_cvector * var_37_float) + (var_62_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_49_cvector + var_52_cvector), var_51_cvector, true);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_1048(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_55_bool, "head");
		if(var_55_bool == 0) goto Label_771;
		@LookAsyncCamera("head");
	}
Label_771:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
	
}


void func_964(bool var_130_bool, string var_131_string)
{
	bool var_133_bool;
	bool var_134_bool;
	func_1048(var_134_bool);
	if(var_134_bool != 0) {
		@lshHasSpeech(var_133_bool, var_131_string);
		if(var_133_bool != 0) {
			@lshPlaySpeech(var_131_string);
			var_130_bool = true;
		}
	}
	var_130_bool = false;
}


// @pe
void func_1095(bool var_199_bool)
{
	int var_201_int;
	func_1002(var_201_int, "b11q01VictimChoosed");
	if(var_201_int != 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_191_object, object var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_198_bool = false;
		bool var_199_bool;
		func_1095(var_1_object);
		if(!var_199_bool) { //@nz
			bool var_208_bool;
			func_1107(var_1_object);
			if(var_208_bool != 0)
				var_198_bool = true;
		}
		if(var_198_bool != 0) {
			object var_214_object; object var_215_object;
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_1078();
			func_215(var_192_object, "Tiredness");
			var_0_object->SetMessage(522012); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523423, 24645, 24644); //@t
		} else {
					bool var_257_bool;
					func_1095(var_1_object);
					var_259_bool = !var_257_bool; //@nz
					if(var_259_bool == 0) goto Label_148;
					func_215(var_192_object, "Neutral");
					var_0_object->SetMessage(522016); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522017, -1, 23187); //@t
					var_0_object->AddReply(522018, -1, 23188); //@t
		}
	}
Label_185:
	for(;;) {
		bool var_239_bool;
		func_1048(var_239_bool);
		if(var_239_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_933(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_214;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_214:
			return 0;

		}

	}
	
Label_148:
	func_215(var_192_object, "Neutral");
	var_0_object->SetMessage(522014); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(523455, -1, 24681); //@t
	bool var_273_bool;
	func_1119(var_1_object);
	if(var_273_bool != 0)
		var_0_object->AddReply(522015, -1, 23185); //@t
	bool var_282_bool;
	func_1119(var_1_object);
	if(var_282_bool != 0)
		var_0_object->AddReply(523456, -1, 24682); //@t
	goto Label_185;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1107(bool var_208_bool)
{
	int var_210_int;
	func_1002(var_210_int, "oob11Lara1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_979(void)
{
	bool var_8_bool;
	func_1048(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_853(bool var_107_bool, object var_108_object)
{
	string var_114_string; bool var_116_bool; int var_117_int; string var_118_string;
	var_114_string = "c";
	int var_115_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_108_object->HasProperty((var_114_string + (var_115_int + 1)), var_116_bool);
			if(!var_116_bool) { //@nz
			} else {
				var_115_int += 1;
			}
		}
		if(!var_115_int) { //@nz
			var_107_bool = false;
			return 10;
		}
		var_117_int = 0;
		if(var_115_int > 1)
			@irand(var_117_int, var_115_int);
		var_108_object->GetProperty((var_114_string + (var_117_int + 1)), var_118_string);
		bool var_130_bool; string var_131_string;
		var_118_string = var_131_string;
		func_964(var_130_bool, var_131_string);
		var_130_bool = var_107_bool;
		return 10;

	}
}


// @pe
void func_215(object var_2_object, string var_218_string)
{
	bool var_219_bool;
	func_1048(var_219_bool);
	if(!var_219_bool) //@nz
		return 0;
	if(var_218_string == var_2_object)
		return 0;
	string var_222_string; bool var_223_bool;
	var_218_string = var_222_string;
	if(var_218_string == "")
		var_223_bool = false;
	else
		var_223_bool = true;
	func_949(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	
}


void func_986(object var_98_object)
{
	object var_100_object;
	@self(var_100_object);
	var_100_object = var_98_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1119(bool var_273_bool)
{
	int var_275_int;
	func_1002(var_275_int, "b11q01KillLara");
	if(var_275_int != 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


void func_992(cvector var_62_cvector, cvector var_63_cvector)
{
	float var_66_float = sqrt(var_63_cvector | var_63_cvector);
	if(var_66_float < 0.000001)
		var_62_cvector = [0.0, 0.0, 0.0];
	var_62_cvector = var_63_cvector / var_66_float;
}


void func_1002(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1131(void)
{
	object var_40_object;
	@CreateDiaryEntry(var_40_object, 315, 1, 522057);
	bool var_44_bool; object var_45_object;
	var_40_object = var_45_object;
	func_1157(var_44_bool, var_45_object, 313);
}
EMIT "Stack[-1] = 0";


void func_1007(bool var_29_bool, string var_30_string, string var_31_string)
{
	object var_33_object;
	@FindActor(var_33_object, var_30_string);
	if(var_33_object == null)
		var_29_bool = false;
	@Trigger(var_33_object, var_31_string);
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1144(object var_53_object)
{
	object var_55_object;
	@GetDiaryRoot(var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_53_object = false;
	}
	var_55_object = var_53_object;
}
EMIT "Stack[-1] = 0";


void func_890(bool var_138_bool, object var_139_object)
{
	bool var_147_bool; int var_148_int; string var_149_string;
	int var_151_int;
	func_1031(var_151_int);
	string var_145_string = ("d" + var_151_int) + "m";
	int var_146_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_139_object->HasProperty((var_145_string + (var_146_int + 1)), var_147_bool);
			if(!var_147_bool) { //@nz
			} else {
				var_146_int += 1;
			}
		}
		if(!var_146_int) { //@nz
			var_138_bool = false;
			return 10;
		}
		var_148_int = 0;
		if(var_146_int > 1)
			@irand(var_148_int, var_146_int);
		var_139_object->GetProperty((var_145_string + (var_148_int + 1)), var_149_string);
		bool var_170_bool; string var_171_string;
		var_149_string = var_171_string;
		func_964(var_170_bool, var_171_string);
		var_170_bool = var_138_bool;
		return 10;

	}
}


void func_1019(bool var_17_bool, string var_18_string, string var_19_string, string var_20_string)
{
	object var_22_object;
	@FindActor(var_22_object, var_18_string);
	if(var_22_object == null)
		var_17_bool = false;
	@Trigger(var_22_object, var_19_string, var_20_string);
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_637(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(0);
	int var_24_int;
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
}


