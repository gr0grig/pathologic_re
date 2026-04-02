// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1289();
			if(var_8_bool == 21762) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1384();
			}
			if(var_8_bool == 21883) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1390();
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_1435();
				object var_83_object = var_1_object;
				func_1442(var_0_object);
			}
			if(var_8_bool == 21780) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_1390();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_1435();
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_1464();
				object var_119_object = var_1_object;
				func_1442(var_0_object);
			}
			if(var_8_bool == 21788) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_1423();
			}
			if(var_8_bool == 21793) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_1429();
			}
			if(var_7_cvector == 21761) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_1458();
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520559); //@t
				var_0_object->ClearReplies(); //@t
				bool var_152_bool = false;
				bool var_153_bool;
				func_1470(var_1_object);
				if(var_153_bool != 0) {
					bool var_161_bool;
					func_1482(var_1_object);
					if(var_161_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(520560, 21763, 21762); //@t
				bool var_170_bool = false;
				bool var_171_bool;
				func_1470(var_1_object);
				if(!var_171_bool) { //@nz
					bool var_174_bool;
					func_1494(var_1_object);
					if(var_174_bool != 0)
						var_170_bool = true;
				}
				if(var_170_bool != 0)
					var_0_object->AddReply(520583, 21789, 21788); //@t
				bool var_183_bool = false;
				bool var_184_bool;
				func_1470(var_1_object);
				if(!var_184_bool) { //@nz
					bool var_187_bool;
					func_1506(var_1_object);
					if(var_187_bool != 0)
						var_183_bool = true;
				}
				if(var_183_bool != 0)
					var_0_object->AddReply(520588, 21794, 21793); //@t
				var_0_object->AddReply(520593, -1, 21798); //@t
				return 0;
			}
			if(var_7_cvector == 21794) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520590, 21796, 21795); //@t
				return 0;
			}
			if(var_7_cvector == 21796) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520592, -1, 21797); //@t
				return 0;
			}
			if(var_7_cvector == 21789) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520585, 21791, 21790); //@t
				return 0;
			}
			if(var_7_cvector == 21791) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520587, -1, 21792); //@t
				var_0_object->AddReply(528358, 29730, 29729); //@t
				return 0;
			}
			if(var_7_cvector == 29730) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(528359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528360, -1, 29731); //@t
				return 0;
			}
			if(var_7_cvector == 21763) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520562, 21765, 21764); //@t
				var_0_object->AddReply(520582, 21769, 21787); //@t
				return 0;
			}
			if(var_7_cvector == 21765) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520563); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520564, 21767, 21766); //@t
				return 0;
			}
			if(var_7_cvector == 21767) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520565); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520566, 21769, 21768); //@t
				var_0_object->AddReply(528361, 21769, 29732); //@t
				return 0;
			}
			if(var_7_cvector == 21769) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520568, 21771, 21770); //@t
				var_0_object->AddReply(520581, 21771, 21785); //@t
				return 0;
			}
			if(var_7_cvector == 21771) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520570, 21773, 21772); //@t
				var_0_object->AddReply(520580, 21773, 21783); //@t
				return 0;
			}
			if(var_7_cvector == 21773) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520572, 21775, 21774); //@t
				var_0_object->AddReply(520579, 21775, 21781); //@t
				return 0;
			}
			if(var_7_cvector == 21775) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520573); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520574, 21777, 21776); //@t
				return 0;
			}
			if(var_7_cvector == 21777) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520576, 21779, 21778); //@t
				var_0_object->AddReply(520578, -1, 21780); //@t
				return 0;
			}
			if(var_7_cvector == 21779) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(520577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520675, -1, 21883); //@t
				return 0;
			}
			var_3_string = true;
			bool var_318_bool;
			func_1647(var_318_bool);
			if(var_318_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xea";
	
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@SetVariable("b6q01KlaraLaska", 1);
		func_707();
	}

	void OnDispose(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@SetVariable("b6q01KlaraLaska", 0);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1296(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1296(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_861();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_876();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_819();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1033(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_788(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_768(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1296(var_53_object);
					var_53_object = var_52_object;
					func_1181(var_51_bool, var_52_object);
				}
			} else {
				func_783(var_7_int);
				func_810();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_810();
		else
			func_1261("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1001();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1024(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_694(var_25_object);
			func_1261("Neutral");
			func_819();
			func_810();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_13_bool;
	func_1033(var_13_bool);
	if(!var_13_bool) goto Label_0; //@nz
}


void func_1024(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1014(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_768(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1024(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1544(bool var_44_bool, object var_45_object, int var_46_int)
{
	object var_53_object;
	func_1531(var_53_object);
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


void func_1033(bool var_9_bool)
{
	bool var_11_bool;
	@IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
}


void func_1289(void)
{
	bool var_10_bool;
	func_1647(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1296(var_39_object);
	var_39_object = var_38_object;
	func_1123(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1038(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1641(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1639(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1643(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1645(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1622(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_276_bool = !var_36_bool; //@nz
		if(var_276_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_277_object;
	var_27_object = var_277_object;
	func_1106();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1038(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1302(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1647(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1100;
		@LookAsyncCamera("head");
	}
Label_1100:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


// @pe
void func_1423(void)
{
	@SetVariable("oob6Klara2", 1);
}


void func_1296(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_783(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_788(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1006(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1429(void)
{
	@SetVariable("oob6Klara3", 1);
}


void func_1302(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_1435(void)
{
	func_1317("termitnik2@door1", false);
}


void func_1181(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1274(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1312(int var_219_int, string var_220_string)
{
	int var_222_int;
	@GetVariable(var_220_string, var_222_int);
	var_222_int = var_219_int;
}


// @pe
void func_1442(object var_84_object)
{
	object var_88_object;
	func_1572(var_88_object);
	object var_85_object;
	var_88_object = var_85_object;
	func_1589(var_85_object, "pt_map_termitnik2", (float)2);
	object var_108_object;
	func_1572(var_108_object);
	var_84_object->ShowMap(var_108_object);
}


void func_930(void)
{
	bool var_35_bool; int var_36_int; int var_37_int; bool var_38_bool;
	@WaitForAnimEnd();
	bool var_39_bool;
	func_1033(var_39_bool);
	if(!var_39_bool) //@nz
		return 12;
	int var_41_int;
	func_1367(var_41_int);
	int var_33_int;
	var_41_int = var_33_int;
	int var_34_int = 0;
	
	for(;;) {
		bool var_54_bool = false;
		if(var_34_int < 5) {
			bool var_57_bool;
			func_1033(var_57_bool);
			if(var_57_bool != 0)
				var_54_bool = true;
		}
		if(var_54_bool != 0) {
			if(!var_33_int) { //@nz
				@Sleep(3, var_35_bool);
				if(!var_35_bool) { //@nz
				} else {
			} else {
			@irand(var_36_int, var_33_int);
			@irand(var_37_int, 5);
			if(var_37_int != 0)
				var_36_int = 0;
			string var_68_string; int var_69_int;
			var_36_int = var_69_int;
			func_1360(var_68_string, var_69_int);
			@PlayAnimation("all", var_68_string);
			@WaitForAnimEnd(var_38_bool);
			var_70_bool = !var_38_bool; //@nz
			if(var_70_bool == 0) goto Label_985;
			goto Label_996;
			}
				Label_985:
					bool var_61_bool;
					func_999(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_991;
			}
		}
	Label_996:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_991:
		@ResetAAS();
		var_34_int += 1;
	}
	
}


void func_1572(object var_25_object)
{
	object var_28_object; object var_29_object;
	@GetMainOutdoorScene(var_28_object);
	if(var_28_object == null) {
		@Trace("Can't find main outdoor scene");
		var_29_object = null;
		var_29_object = var_25_object;
	}
	var_28_object->GetMap(var_29_object);
	var_29_object = var_25_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1317(string var_73_string, bool var_74_bool)
{
	object var_76_object;
	@FindActor(var_76_object, var_73_string);
	if(!var_76_object) //@nz
		@Trace(("Door " + var_73_string) + " not found");
	else
		var_76_object->SetProperty("locked", var_74_bool);
	
}
EMIT "Stack[-1] = 0";


void func_810(void)
{
	float var_23_float;
	@rand(var_23_float, 8, 16);
	@SetTimer(10, var_23_float);
}


// @pe
void func_1458(void)
{
	@SetVariable("b6q01KlaraVisit", 1);
}


void func_819(void)
{
	@KillTimer(10);
}


void func_1589(object var_85_object, string var_86_string, float var_87_float)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	if(var_95_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_93_cvector;
	cvector var_94_cvector;
	bool var_96_bool;
	var_95_object->GetLocator(var_86_string, var_96_bool, var_93_cvector, var_94_cvector);
	if(!var_96_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_86_string) + " doesnt exist");
	var_95_object->GetMap(var_85_object);
	if(var_85_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_106_float = GetByIndex(var_93_cvector, 0);
	var_107_float = GetByIndex(var_93_cvector, 2);
	var_85_object->SetMapParams(var_106_float, var_107_float, var_87_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_694(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1334(bool var_62_bool, string var_63_string, string var_64_string)
{
	object var_66_object;
	@FindActor(var_66_object, var_63_string);
	if(var_66_object == null)
		var_62_bool = false;
	@Trigger(var_66_object, var_64_string);
	var_62_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1464(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_1470(bool var_217_bool)
{
	int var_219_int;
	func_1312(var_219_int, "oob6Klara1");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


void func_1218(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1351(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1274(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_707(void)
{
	func_748(var_6_bool);
}


void func_1346(float var_36_float)
{
	float var_38_float;
	@GetGameTime(var_38_float);
	var_38_float = var_36_float;
}


void func_1351(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


// @pe
void func_1482(bool var_225_bool)
{
	int var_227_int;
	func_1312(var_227_int, "b6q01");
	if(var_227_int == 1)
		var_225_bool = true;
	var_225_bool = false;
}


void func_1360(string var_47_string, int var_48_int)
{
	string var_50_string = "idle";
	if(var_48_int != 0)
		var_50_string += var_48_int;
	var_50_string = var_47_string;
}


void func_1106(void)
{
	bool var_279_bool;
	@CameraSwitchToNormal();
	bool var_280_bool;
	func_1647(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_279_bool, "head");
		if(var_279_bool == 0) goto Label_1122;
		@UnlookAsync("head");
	}
Label_1122:
	
}


// @pe
void func_211(object var_2_object, string var_203_string)
{
	bool var_204_bool;
	func_1647(var_204_bool);
	if(!var_204_bool) //@nz
		return 0;
	if(var_203_string == var_2_object)
		return 0;
	string var_207_string; bool var_208_bool;
	var_203_string = var_207_string;
	if(var_203_string == "")
		var_208_bool = false;
	else
		var_208_bool = true;
	func_1268(var_207_string, var_208_bool);
	var_2_object = var_203_string;
	
}


void func_1622(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x665";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_1494(bool var_238_bool)
{
	int var_240_int;
	func_1312(var_240_int, "oob6Klara2");
	if(var_240_int == 0) {
		var_238_bool = true;
		return 0;
	}
	var_238_bool = false;
}


void func_1367(int var_41_int)
{
	int var_44_int; bool var_45_bool;
	var_44_int = 0;
	
	for(;;) {
		string var_47_string; int var_48_int;
		var_44_int = var_48_int;
		func_1360(var_47_string, var_48_int);
		@HasAnimation(var_45_bool, "all", var_47_string);
		if(!var_45_bool) //@nz
			break;
		var_44_int += 1;
	}
	var_44_int = var_41_int;
}


// @pe
void func_861(void)
{
	func_1001();
	func_819();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		object var_199_object; object var_200_object;
		var_199_object = var_1_object;
		var_200_object = var_0_object;
		func_1458();
		func_211(var_193_object, "Neutral");
		var_0_object->SetMessage(520559); //@t
		var_0_object->ClearReplies(); //@t
		bool var_216_bool = false;
		bool var_217_bool;
		func_1470(var_1_object);
		if(var_217_bool != 0) {
			bool var_225_bool;
			func_1482(var_1_object);
			if(var_225_bool != 0)
				var_216_bool = true;
		}
		if(var_216_bool != 0)
			var_0_object->AddReply(520560, 21763, 21762); //@t
		bool var_234_bool = false;
		bool var_235_bool;
		func_1470(var_1_object);
		if(!var_235_bool) { //@nz
			bool var_238_bool;
			func_1494(var_1_object);
			if(var_238_bool != 0)
				var_234_bool = true;
		}
		if(var_234_bool != 0)
			var_0_object->AddReply(520583, 21789, 21788); //@t
		bool var_247_bool = false;
		bool var_248_bool;
		func_1470(var_1_object);
		if(!var_248_bool) { //@nz
			bool var_251_bool;
			func_1506(var_1_object);
			if(var_251_bool != 0)
				var_247_bool = true;
		}
		if(var_247_bool != 0)
			var_0_object->AddReply(520588, 21794, 21793); //@t
		var_0_object->AddReply(520593, -1, 21798); //@t
		goto Label_181;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_181:
	bool var_263_bool;
	func_1647(var_263_bool);
	if(var_263_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1261(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_210;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_210:
		return 0;

	}
	
}


// @pe
void func_1506(bool var_251_bool)
{
	int var_253_int;
	func_1312(var_253_int, "oob6Klara3");
	if(var_253_int == 0) {
		var_251_bool = true;
		return 0;
	}
	var_251_bool = false;
}


void func_1123(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1181(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1218(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1218(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1181(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1179;
	
Label_1179:
	var_37_bool = true;
	
}


void func_999(bool var_61_bool)
{
	var_61_bool = true;
}


void func_1639(int var_180_int)
{
	var_180_int = 515540;
}


void func_1001(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1384(void)
{
	@SetVariable("oob6Klara1", 1);
}


void func_1641(int var_179_int)
{
	var_179_int = 502865;
}


void func_1643(string var_181_string)
{
	var_181_string = "ui/NPC_Klara.png";
}


void func_748(object var_0_object)
{
	bool var_9_bool;
	func_1033(var_9_bool);
	if(!var_9_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_744();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_930();
	}
}
EMIT "Return(); Pop(0)";


void func_1645(string var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png";
}


void func_1261(string var_16_string)
{
	float var_19_float; float var_20_float;
	@lshGetAnimTimes(var_16_string, var_19_float, var_20_float);
	@lshPlayAnimation(var_19_float, var_20_float, false);
}


void func_1647(bool var_75_bool)
{
	var_75_bool = true;
}


void func_1390(void)
{
	@SetVariable("b6q01", 2);
	object var_25_object;
	func_1572(var_25_object);
	object var_22_object;
	var_25_object = var_22_object;
	float var_36_float;
	func_1346(var_36_float);
	var_22_object->AddMark("b6q01KlaraGotoTermitnik2", "pt_map_termitnik2", 1, 525668, var_36_float);
	func_1518();
	bool var_62_bool;
	func_1334(var_62_bool, "quest_b6_01", "remove_klara");
	bool var_68_bool;
	func_1334(var_68_bool, "quest_b6_01", "init_termitnik");
}
EMIT "Stack[-1] = 0";


void func_876(void)
{
	@StopGroup0();
	func_819();
	func_1261("Neutral");
	func_810();
}


void func_1006(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1518(void)
{
	object var_40_object;
	@CreateDiaryEntry(var_40_object, 362, 1, 525662);
	bool var_44_bool; object var_45_object;
	var_40_object = var_45_object;
	func_1544(var_44_bool, var_45_object, 265);
}
EMIT "Stack[-1] = 0";


void func_1268(string var_207_string, bool var_208_bool)
{
	float var_213_float; float var_214_float;
	@lshGetAnimTimes(var_207_string, var_213_float, var_214_float);
	@lshPlayAnimation(var_213_float, var_214_float, var_208_bool);
}


void func_1014(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_1274(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1647(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1531(object var_53_object)
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


