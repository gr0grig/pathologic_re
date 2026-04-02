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
			func_993();
			if(var_11_object == 28060) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1056();
				object var_65_object = var_1_object;
				func_1086(var_0_object);
			}
			if(var_11_object == 28061) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_1056();
				object var_101_object = var_1_object;
				func_1086(var_0_object);
			}
			if(var_11_object == 28062) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_1056();
				object var_107_object = var_1_object;
				func_1086(var_0_object);
			}
			if(var_11_object == 26008) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_1056();
			}
			if(var_10_bool == 26011) {
				bool var_115_bool = false;
				bool var_116_bool;
				func_1113(var_1_object);
				if(var_116_bool != 0) {
					bool var_122_bool;
					func_1125(var_1_object);
					if(var_122_bool != 0)
						var_115_bool = true;
				}
				if(var_115_bool != 0) {
					object var_128_object; object var_129_object;
					var_128_object = var_1_object;
					var_129_object = var_0_object;
					func_1044();
					func_220(var_11_object, "Neutral");
					var_0_object->SetMessage(524672); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526770, 28048, 28047); //@t
					var_0_object->AddReply(526776, 28048, 28053); //@t
					return 0;
				}
				bool var_156_bool = false;
				bool var_157_bool = false;
				bool var_158_bool;
				func_1137(var_1_object);
				if(var_158_bool != 0) {
					bool var_164_bool;
					func_1149(var_1_object);
					if(var_164_bool != 0)
						var_157_bool = true;
				}
				if(var_157_bool != 0) {
					bool var_170_bool;
					func_1125(var_1_object);
					if(!var_170_bool) //@nz
						var_156_bool = true;
				}
				if(var_156_bool != 0) {
					object var_173_object; object var_174_object;
					var_173_object = var_1_object;
					var_174_object = var_0_object;
					func_1050();
					func_220(var_11_object, "Neutral");
					var_0_object->SetMessage(524668); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526760, 28045, 28037); //@t
					var_0_object->AddReply(541744, 28042, 43941); //@t
					return 0;
				}
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(524670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524671, -1, 26010); //@t
				var_0_object->AddReply(541781, -1, 43987); //@t
				return 0;
			}
			if(var_10_bool == 28045) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526768); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526769, 28038, 28046); //@t
				return 0;
			}
			if(var_10_bool == 28038) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526762, 28040, 28039); //@t
				var_0_object->AddReply(541750, 28042, 43949); //@t
				return 0;
			}
			if(var_10_bool == 28040) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526764, 28042, 28041); //@t
				return 0;
			}
			if(var_10_bool == 28042) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526765); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541745, 43944, 43943); //@t
				var_0_object->AddReply(541748, 43948, 43947); //@t
				return 0;
			}
			if(var_10_bool == 43948) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(541749); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526766, 28044, 28043); //@t
				return 0;
			}
			if(var_10_bool == 28044) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524669, -1, 26008); //@t
				return 0;
			}
			if(var_10_bool == 43944) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(541746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541747, 28044, 43945); //@t
				return 0;
			}
			if(var_10_bool == 28048) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526772, 28050, 28049); //@t
				var_0_object->AddReply(526777, 28052, 28055); //@t
				return 0;
			}
			if(var_10_bool == 28050) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526774, 28052, 28051); //@t
				var_0_object->AddReply(526778, 28052, 28056); //@t
				return 0;
			}
			if(var_10_bool == 28052) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524673, 26013, 26012); //@t
				return 0;
			}
			if(var_10_bool == 26013) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(524674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524675, 28059, 26014); //@t
				var_0_object->AddReply(526782, -1, 28062); //@t
				return 0;
			}
			if(var_10_bool == 28059) {
				func_220(var_11_object, "Neutral");
				var_0_object->SetMessage(526779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526780, -1, 28060); //@t
				var_0_object->AddReply(526781, -1, 28061); //@t
				return 0;
			}
			var_3_string = true;
			bool var_295_bool;
			func_1290(var_295_bool);
			if(var_295_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf3";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(3);
			func_686(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_751(var_9_object, var_10_object);
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
			func_713(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_982(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_864(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_1284(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1282(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1286(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1288(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1265(var_77_int);
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
		var_191_bool = !var_24_bool; //@nz
		if(var_191_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_192_object;
	var_15_object = var_192_object;
	func_933();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_1282(int var_74_int)
{
	var_74_int = 515563;
}


void func_1027(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_1020(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_1284(int var_73_int)
{
	var_73_int = 503348;
}


void func_1286(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_1288(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_1161(void)
{
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 775, 1, 541529);
	bool var_47_bool; object var_48_object;
	var_43_object = var_48_object;
	func_1187(var_47_bool, var_48_object, 318);
}
EMIT "Stack[-1] = 0";


void func_1290(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_1044(void)
{
	@SetVariable("ook1Dohodyaga1", 1);
}


// @pe
void func_1149(bool var_162_bool)
{
	int var_164_int;
	func_1010(var_164_int, "ook1Dohodyaga2");
	if(var_164_int == 0) {
		var_162_bool = true;
		return 0;
	}
	var_162_bool = false;
}


void func_1174(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1050(void)
{
	@SetVariable("ook1Dohodyaga2", 1);
}


void func_1056(void)
{
	object var_19_object;
	int var_20_int;
	func_1010(var_20_int, "k1q01ooStationGotoLaska");
	if(var_20_int == 0) {
		@SetVariable("k1q01ooStationGotoLaska", 1);
		object var_28_object;
		func_1215(var_28_object);
		var_28_object = var_19_object;
		float var_39_float;
		func_1015(var_39_float);
		var_19_object->AddMark("k1q01StationGotoLaska", "pt_map_laska", 1, 524730, var_39_float);
		func_1161();
		var_19_object = null;
	}
}


void func_1187(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_1174(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SendWorldWndMessage(7);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_933(void)
{
	bool var_194_bool;
	@CameraSwitchToNormal(true);
	bool var_196_bool;
	func_1290(var_196_bool);
	if(var_196_bool != 0) {
	} else {
		@HasAnimationTrack(var_194_bool, "head");
		if(var_194_bool == 0) goto Label_950;
		@UnlookAsync("head");
	}
Label_950:
	
}


// @pe
void func_686(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_859(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_765();
	if(!false) //@nz
		@KillTimer(10);
}


void func_951(string var_138_string)
{
	bool var_142_bool; float var_143_float; float var_144_float;
	@lshHasAnimation(var_142_bool, var_138_string);
	if(var_142_bool != 0) {
		@lshGetAnimTimes(var_138_string, var_143_float, var_144_float);
		@lshPlayAnimation(var_143_float, var_144_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_138_string);
	}
	
}


// @pe
void func_1086(object var_66_object)
{
	int var_67_int;
	func_1010(var_67_int, "k1q01ooStationGotoLaska");
	if(var_67_int == 0) {
		@SetVariable("k1q01ooStationGotoLaska", 1);
		object var_73_object;
		object var_76_object;
		func_1215(var_76_object);
		var_76_object = var_73_object;
		func_1232(var_73_object, "pt_map_laska", (float)2);
		object var_96_object;
		func_1215(var_96_object);
		var_66_object->ShowMap(var_96_object);
	}
}


void func_1215(object var_28_object)
{
	object var_31_object; object var_32_object;
	@GetMainOutdoorScene(var_31_object);
	if(var_31_object == null) {
		@Trace("Can't find main outdoor scene");
		var_32_object = null;
		var_32_object = var_28_object;
	}
	var_31_object->GetMap(var_32_object);
	var_32_object = var_28_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_967(string var_116_string, bool var_117_bool)
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


void func_713(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_851(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
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
		func_1113(var_1_object);
		if(var_94_bool != 0) {
			bool var_102_bool;
			func_1125(var_1_object);
			if(var_102_bool != 0)
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			object var_108_object; object var_109_object;
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1044();
			func_220(var_87_object, "Neutral");
			var_0_object->SetMessage(524672); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526770, 28048, 28047); //@t
			var_0_object->AddReply(526776, 28048, 28053); //@t
		} else {
					bool var_154_bool = false;
					bool var_155_bool = false;
					bool var_156_bool;
					func_1137(var_1_object);
					if(var_156_bool != 0) {
						bool var_162_bool;
						func_1149(var_1_object);
						if(var_162_bool != 0)
							var_155_bool = true;
					}
					if(var_155_bool != 0) {
						bool var_168_bool;
						func_1125(var_1_object);
						if(!var_168_bool) //@nz
							var_154_bool = true;
					}
					if(var_154_bool == 0) goto Label_168;
					object var_171_object; object var_172_object;
					var_171_object = var_1_object;
					var_172_object = var_0_object;
					func_1050();
					func_220(var_87_object, "Neutral");
					var_0_object->SetMessage(524668); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526760, 28045, 28037); //@t
					var_0_object->AddReply(541744, 28042, 43941); //@t
		}
	}
Label_190:
	for(;;) {
		bool var_136_bool;
		func_1290(var_136_bool);
		if(var_136_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_951(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_219;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_219:
			return 0;

		}

	}
	
Label_168:
	func_220(var_87_object, "Neutral");
	var_0_object->SetMessage(524670); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(524671, -1, 26010); //@t
	var_0_object->AddReply(541781, -1, 43987); //@t
	goto Label_190;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_844(bool var_61_bool)
{
	var_61_bool = true;
}


void func_846(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1232(object var_73_object, string var_74_string, float var_75_float)
{
	object var_83_object;
	@GetMainOutdoorScene(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_81_cvector;
	cvector var_82_cvector;
	bool var_84_bool;
	var_83_object->GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	if(!var_84_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_74_string) + " doesnt exist");
	var_83_object->GetMap(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	var_73_object->SetMapParams(var_94_float, var_95_float, var_75_float);
}
EMIT "Stack[-2] = 0";


void func_851(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_982(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_1113(bool var_94_bool)
{
	int var_96_int;
	func_1010(var_96_int, "ook1Dohodyaga1");
	if(var_96_int == 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


void func_859(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_220(object var_2_object, string var_112_string)
{
	bool var_113_bool;
	func_1290(var_113_bool);
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
	func_967(var_116_string, var_117_bool);
	var_2_object = var_112_string;
	
}


void func_864(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_1000(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1290(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_927;
		@LookAsyncCamera("head");
	}
Label_927:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_993(void)
{
	bool var_13_bool;
	func_1290(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1125(bool var_102_bool)
{
	int var_104_int;
	func_1010(var_104_int, "k1q01DobermanDead");
	if(var_104_int != 0) {
		var_102_bool = true;
		return 0;
	}
	var_102_bool = false;
}


void func_1000(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_751(object var_2_object, string var_3_string)
{
	func_846();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1265(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x500";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_1137(bool var_156_bool)
{
	int var_158_int;
	func_1010(var_158_int, "k1q01");
	if(var_158_int == 4)
		var_156_bool = true;
	var_156_bool = false;
}


void func_1010(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_1015(float var_39_float)
{
	float var_41_float;
	@GetGameTime(var_41_float);
	var_41_float = var_39_float;
}


void func_1020(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_765(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_859(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_1027(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_859(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_812;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_1020(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_841;
				}
			} else if(var_28_int != 0) {
				goto Label_841;
			}
			}
					bool var_61_bool;
					func_844(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_836;
			}
		}
	Label_841:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_836:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


