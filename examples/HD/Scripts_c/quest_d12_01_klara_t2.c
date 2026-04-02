// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_1487();
			if(var_7_bool == 37334) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_1539();
			}
			if(var_7_bool == 37337) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_1524();
			}
			if(var_7_bool == 42406) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_1539();
			}
			if(var_7_bool == 42408) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_1524();
			}
			if(var_7_bool == 37342) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_1524();
			}
			if(var_7_bool == 42418) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_1555();
			}
			if(var_7_bool == 42438) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_1561();
			}
			if(var_6_int == 37331) {
				bool var_85_bool = false;
				bool var_86_bool;
				func_1585(var_1_object);
				if(!var_86_bool) { //@nz
					bool var_93_bool;
					func_1619(var_1_object);
					if(var_93_bool != 0)
						var_85_bool = true;
				}
				if(var_85_bool != 0) {
					object var_99_object; object var_100_object;
					var_99_object = var_1_object;
					var_100_object = var_0_object;
					func_1533();
					object var_103_object; object var_104_object;
					var_103_object = var_1_object;
					var_104_object = var_0_object;
					func_1567();
					func_252(var_7_bool, "Sly");
					var_0_object->SetMessage(535645); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540387, 42374, 42373); //@t
					var_0_object->AddReply(540424, 42403, 42411); //@t
					return 0;
				}
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_1567();
				func_252(var_7_bool, "Fear");
				var_0_object->SetMessage(535653); //@t
				var_0_object->ClearReplies(); //@t
				bool var_135_bool = false;
				bool var_136_bool = false;
				bool var_137_bool;
				func_1597(var_137_bool, var_1_object);
				if(var_137_bool != 0) {
					bool var_185_bool;
					func_1607(var_1_object);
					if(!var_185_bool) //@nz
						var_136_bool = true;
				}
				if(var_136_bool != 0) {
					bool var_192_bool;
					func_1585(var_1_object);
					if(!var_192_bool) //@nz
						var_135_bool = true;
				}
				if(var_135_bool != 0)
					var_0_object->AddReply(535654, 37341, 37340); //@t
				bool var_198_bool = false;
				bool var_199_bool;
				func_1655(var_1_object);
				if(var_199_bool != 0) {
					bool var_205_bool;
					func_1631(var_1_object);
					if(var_205_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_object->AddReply(540429, 42419, 42418); //@t
				bool var_214_bool = false;
				bool var_215_bool;
				func_1573(var_1_object);
				if(var_215_bool != 0) {
					bool var_221_bool;
					func_1643(var_1_object);
					if(var_221_bool != 0)
						var_214_bool = true;
				}
				if(var_214_bool != 0)
					var_0_object->AddReply(540447, 42439, 42438); //@t
				var_0_object->AddReply(540478, -1, 42473); //@t
				return 0;
			}
			if(var_6_int == 42439) {
				func_252(var_7_bool, "Smile");
				var_0_object->SetMessage(540448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540449, 42441, 42440); //@t
				var_0_object->AddReply(540461, 42455, 42454); //@t
				return 0;
			}
			if(var_6_int == 42455) {
				func_252(var_7_bool, "Grin");
				var_0_object->SetMessage(540462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540463, -1, 42456); //@t
				var_0_object->AddReply(540464, 42458, 42457); //@t
				return 0;
			}
			if(var_6_int == 42458) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(540465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540466, 42460, 42459); //@t
				var_0_object->AddReply(540473, 42460, 42466); //@t
				var_0_object->AddReply(540474, 42460, 42468); //@t
				return 0;
			}
			if(var_6_int == 42460) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(540467); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540468, -1, 42461); //@t
				var_0_object->AddReply(540469, 42463, 42462); //@t
				return 0;
			}
			if(var_6_int == 42463) {
				func_252(var_7_bool, "Grin");
				var_0_object->SetMessage(540470); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540471, -1, 42464); //@t
				var_0_object->AddReply(540472, -1, 42465); //@t
				return 0;
			}
			if(var_6_int == 42441) {
				func_252(var_7_bool, "Grin");
				var_0_object->SetMessage(540450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540451, 42443, 42442); //@t
				return 0;
			}
			if(var_6_int == 42443) {
				func_252(var_7_bool, "Grin");
				var_0_object->SetMessage(540452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540453, 42445, 42444); //@t
				return 0;
			}
			if(var_6_int == 42445) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(540454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540455, 42447, 42446); //@t
				var_0_object->AddReply(540459, 42447, 42450); //@t
				var_0_object->AddReply(540460, 42447, 42452); //@t
				return 0;
			}
			if(var_6_int == 42447) {
				func_252(var_7_bool, "Smile");
				var_0_object->SetMessage(540456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540457, -1, 42448); //@t
				var_0_object->AddReply(540458, -1, 42449); //@t
				return 0;
			}
			if(var_6_int == 42419) {
				func_252(var_7_bool, "Smile");
				var_0_object->SetMessage(540430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540431, 42421, 42420); //@t
				var_0_object->AddReply(540441, 42431, 42430); //@t
				return 0;
			}
			if(var_6_int == 42431) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540443, 42433, 42432); //@t
				return 0;
			}
			if(var_6_int == 42433) {
				func_252(var_7_bool, "Smile");
				var_0_object->SetMessage(540444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540445, 42421, 42434); //@t
				var_0_object->AddReply(540446, 42421, 42436); //@t
				return 0;
			}
			if(var_6_int == 42421) {
				func_252(var_7_bool, "Smile");
				var_0_object->SetMessage(540432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540433, 42423, 42422); //@t
				return 0;
			}
			if(var_6_int == 42423) {
				func_252(var_7_bool, "Smile");
				var_0_object->SetMessage(540434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540435, 42425, 42424); //@t
				return 0;
			}
			if(var_6_int == 42425) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540437, -1, 42426); //@t
				var_0_object->AddReply(540438, 42428, 42427); //@t
				return 0;
			}
			if(var_6_int == 42428) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540440, -1, 42429); //@t
				return 0;
			}
			if(var_6_int == 37341) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(535655); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535656, -1, 37342); //@t
				return 0;
			}
			if(var_6_int == 42374) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540389, 42376, 42375); //@t
				return 0;
			}
			if(var_6_int == 42376) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540390); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540391, 42378, 42377); //@t
				return 0;
			}
			if(var_6_int == 42378) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540393, 42380, 42379); //@t
				var_0_object->AddReply(540413, 42401, 42400); //@t
				return 0;
			}
			if(var_6_int == 42401) {
				func_252(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(540414); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540415, 42403, 42402); //@t
				var_0_object->AddReply(540423, -1, 42410); //@t
				return 0;
			}
			if(var_6_int == 42403) {
				bool var_424_bool;
				func_1597(var_424_bool, var_1_object);
				if(!var_424_bool) { //@nz
					func_252(var_7_bool, "Saveyouall");
					var_0_object->SetMessage(540416); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540417, 42405, 42404); //@t
					return 0;
				}
				bool var_432_bool;
				func_1597(var_432_bool, var_1_object);
				if(var_432_bool != 0) {
					func_252(var_7_bool, "Neutral");
					var_0_object->SetMessage(540420); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540421, -1, 42408); //@t
					var_0_object->AddReply(540422, -1, 42409); //@t
					return 0;
				}
			}
			if(var_6_int == 42405) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(540418); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540419, -1, 42406); //@t
				return 0;
			}
			if(var_6_int == 42380) {
				func_252(var_7_bool, "Sly");
				var_0_object->SetMessage(540394); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540395, 42401, 42381); //@t
				var_0_object->AddReply(540396, 37333, 42383); //@t
				return 0;
			}
			if(var_6_int == 37333) {
				bool var_461_bool;
				func_1597(var_461_bool, var_1_object);
				if(!var_461_bool) { //@nz
					func_252(var_7_bool, "Fear");
					var_0_object->SetMessage(535647); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540398, 42386, 42385); //@t
					return 0;
				}
				bool var_469_bool;
				func_1597(var_469_bool, var_1_object);
				if(var_469_bool != 0) {
					func_252(var_7_bool, "Smile");
					var_0_object->SetMessage(535650); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535651, -1, 37337); //@t
					var_0_object->AddReply(535652, -1, 37338); //@t
					return 0;
				}
			}
			if(var_6_int == 42386) {
				func_252(var_7_bool, "Fear");
				var_0_object->SetMessage(540399); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540400, 42388, 42387); //@t
				var_0_object->AddReply(540408, 42390, 42395); //@t
				return 0;
			}
			if(var_6_int == 42388) {
				func_252(var_7_bool, "Fear");
				var_0_object->SetMessage(540401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540402, 42390, 42389); //@t
				var_0_object->AddReply(540407, -1, 42394); //@t
				return 0;
			}
			if(var_6_int == 42390) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(540403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540404, 42392, 42391); //@t
				return 0;
			}
			if(var_6_int == 42392) {
				func_252(var_7_bool, "Neutral");
				var_0_object->SetMessage(540405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535648, -1, 37334); //@t
				return 0;
			}
			var_3_string = true;
			bool var_513_bool;
			func_1855(var_513_bool);
			if(var_513_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x113";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_1166();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_1214(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_1494(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_1214(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_1494(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_1216(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1849(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1847(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1851(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1853(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1740(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	bool var_79_bool; object var_80_object;
	object var_81_object;
	func_1494(var_81_object);
	var_81_object = var_80_object;
	func_1303(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_349_bool = !var_17_bool; //@nz
		if(var_349_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_350_object;
	var_8_object = var_350_object;
	func_1285();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1539(void)
{
	int var_14_int;
	func_1510(var_14_int, "d12q01_Klara");
	if(var_14_int == 0) {
		@SetVariable("d12q01_Klara", 1);
		func_1686();
	}
}


// @pe
void func_1667(bool var_255_bool)
{
	bool var_257_bool;
	func_1809(var_257_bool);
	var_257_bool = var_255_bool;
}


void func_1285(void)
{
	bool var_352_bool;
	@CameraSwitchToNormal(true);
	bool var_354_bool;
	func_1855(var_354_bool);
	if(var_354_bool != 0) {
	} else {
		@HasAnimationTrack(var_352_bool, "head");
		if(var_352_bool == 0) goto Label_1302;
		@UnlookAsync("head");
	}
Label_1302:
	
}


void func_1799(bool var_282_bool, int var_283_int)
{
	int var_285_int;
	@GetVariable(("vol_" + var_283_int), var_285_int);
	var_282_bool = (var_285_int & 16) != 0;
}


void func_1673(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 701, 1, 535684);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_1712(var_56_bool, var_57_object, 699);
}
EMIT "Stack[-1] = 0";


void func_1166(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1809(bool var_257_bool)
{
	object var_262_object; int var_265_int;
	@CreateIntVector(var_262_object);
	object var_266_object;
	var_262_object = var_266_object;
	func_1757(false, -1);
	int var_263_int;
	var_262_object->size(var_263_int);
	int var_264_int = 0;
	
	while(var_264_int < var_263_int) {
		var_262_object->get(var_265_int, var_264_int);
		bool var_281_bool = true;
		bool var_282_bool; int var_283_int;
		var_265_int = var_283_int;
		func_1799(var_282_bool, var_283_int);
		if(var_282_bool != 1) {
			bool var_291_bool; int var_292_int;
			var_265_int = var_292_int;
			func_1789(var_291_bool, var_292_int);
			if(var_291_bool != 1)
				var_281_bool = false;
		}
		if(var_281_bool != 0)
			var_257_bool = false;
		var_264_int += 1;
	}
	
	var_257_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1555(void)
{
	@SetVariable("ood12KlaraT2_2", 1);
}


void func_1686(void)
{
	object var_23_object;
	@CreateDiaryEntry(var_23_object, 707, 1, 535690);
	bool var_27_bool; object var_28_object;
	var_23_object = var_28_object;
	func_1712(var_27_bool, var_28_object, 699);
}
EMIT "Stack[-1] = 0";


void func_1303(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_1361(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_1398(var_121_bool, var_122_object);
			if(!var_121_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@irand(var_87_int, 2);
		if(var_87_int != 0)
			@SetVariable("voice_common", ((var_86_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_166_bool; object var_167_object;
		var_80_object = var_167_object;
		func_1398(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_1361(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1359;
	
Label_1359:
	var_79_bool = true;
	
}


// @pe
void func_1561(void)
{
	@SetVariable("ood12KlaraT2_3", 1);
}


// @pe
void func_1567(void)
{
	@SetVariable("d12q01KlaraVisit", 1);
}


void func_1441(string var_231_string)
{
	bool var_235_bool; float var_236_float; float var_237_float;
	@lshHasAnimation(var_235_bool, var_231_string);
	if(var_235_bool != 0) {
		@lshGetAnimTimes(var_231_string, var_236_float, var_237_float);
		@lshPlayAnimation(var_236_float, var_237_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_231_string);
	}
	
}


// @pe
void func_1533(void)
{
	@SetVariable("ood12KlaraT2_1", 1);
}


void func_1699(object var_36_object)
{
	object var_38_object;
	@GetDiaryRoot(var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_36_object = false;
	}
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1573(bool var_331_bool)
{
	int var_333_int;
	func_1510(var_333_int, "b12q01TheaterIsVisited");
	if(var_333_int != 0) {
		var_331_bool = true;
		return 0;
	}
	var_331_bool = false;
}


void func_1712(bool var_27_bool, object var_28_object, int var_29_int)
{
	object var_36_object;
	func_1699(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	object var_34_object;
	var_33_object->Find(var_29_int, var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_29_int);
		var_27_bool = false;
	}
	var_34_object->AddChild(var_28_object);
	@SendWorldWndMessage(7);
	int var_35_int;
	var_28_object->GetCategory(var_35_int);
	@SetDiarySection(var_35_int);
	var_27_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1585(bool var_182_bool)
{
	int var_184_int;
	func_1510(var_184_int, "game_final");
	if(var_184_int != 0) {
		var_182_bool = true;
		return 0;
	}
	var_182_bool = false;
}


void func_1457(string var_209_string, bool var_210_bool)
{
	bool var_216_bool; float var_217_float; float var_218_float;
	@lshHasAnimation(var_216_bool, var_209_string);
	if(var_216_bool != 0) {
		@lshGetAnimTimes(var_209_string, var_217_float, var_218_float);
		@lshPlayAnimation(var_217_float, var_218_float, var_210_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_209_string);
	}
	
}


void func_1847(int var_67_int)
{
	var_67_int = 515540;
}


void func_1849(int var_66_int)
{
	var_66_int = 502865;
}


void func_1851(string var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
}


// @pe
void func_1597(bool var_253_bool, object var_254_object)
{
	object var_256_object;
	var_254_object = var_256_object;
	func_1667(var_256_object);
	bool var_255_bool;
	if(var_255_bool != 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


void func_1853(string var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
}


void func_1855(bool var_61_bool)
{
	var_61_bool = true;
}


void func_1216(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_1500(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_1855(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_1279;
		@LookAsyncCamera("head");
	}
Label_1279:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_1214(bool var_8_bool)
{
	var_8_bool = true;
}


void func_1472(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1855(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


// @pe
void func_1607(bool var_301_bool)
{
	int var_303_int;
	func_1510(var_303_int, "d12q01KlaraInSobor");
	if(var_303_int != 0) {
		var_301_bool = true;
		return 0;
	}
	var_301_bool = false;
}


void func_1740(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x6db";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_1487(void)
{
	bool var_9_bool;
	func_1855(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool = false;
		bool var_182_bool;
		func_1585(var_1_object);
		if(!var_182_bool) { //@nz
			bool var_191_bool;
			func_1619(var_1_object);
			if(var_191_bool != 0)
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			object var_197_object; object var_198_object;
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_1533();
			object var_201_object; object var_202_object;
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_1567();
			func_252(var_175_object, "Sly");
			var_0_object->SetMessage(535645); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540387, 42374, 42373); //@t
			var_0_object->AddReply(540424, 42403, 42411); //@t
		} else {
					object var_247_object; object var_248_object;
					var_247_object = var_1_object;
					var_248_object = var_0_object;
					func_1567();
					func_252(var_175_object, "Fear");
					var_0_object->SetMessage(535653); //@t
					var_0_object->ClearReplies(); //@t
					bool var_251_bool = false;
					bool var_252_bool = false;
					bool var_253_bool;
					func_1597(var_253_bool, var_1_object);
					if(var_253_bool != 0) {
						bool var_301_bool;
						func_1607(var_1_object);
						if(!var_301_bool) //@nz
							var_252_bool = true;
					}
					if(var_252_bool != 0) {
						bool var_308_bool;
						func_1585(var_1_object);
						if(!var_308_bool) //@nz
							var_251_bool = true;
					}
					if(var_251_bool != 0)
						var_0_object->AddReply(535654, 37341, 37340); //@t
					bool var_314_bool = false;
					bool var_315_bool;
					func_1655(var_1_object);
					if(var_315_bool != 0) {
						bool var_321_bool;
						func_1631(var_1_object);
						if(var_321_bool != 0)
							var_314_bool = true;
					}
					if(var_314_bool != 0)
						var_0_object->AddReply(540429, 42419, 42418); //@t
					bool var_330_bool = false;
					bool var_331_bool;
					func_1573(var_1_object);
					if(var_331_bool != 0) {
						bool var_337_bool;
						func_1643(var_1_object);
						if(var_337_bool != 0)
							var_330_bool = true;
					}
					if(var_330_bool != 0)
						var_0_object->AddReply(540447, 42439, 42438); //@t
					var_0_object->AddReply(540478, -1, 42473); //@t
		}
	}
	for(;;) {
		bool var_229_bool;
		func_1855(var_229_bool);
		if(var_229_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1441(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_251;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_251:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1361(bool var_90_bool, object var_91_object)
{
	string var_97_string; bool var_99_bool; int var_100_int; string var_101_string;
	var_97_string = "c";
	int var_98_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_91_object->HasProperty((var_97_string + (var_98_int + 1)), var_99_bool);
			if(!var_99_bool) { //@nz
			} else {
				var_98_int += 1;
			}
		}
		if(!var_98_int) { //@nz
			var_90_bool = false;
			return 10;
		}
		var_100_int = 0;
		if(var_98_int > 1)
			@irand(var_100_int, var_98_int);
		var_91_object->GetProperty((var_97_string + (var_100_int + 1)), var_101_string);
		bool var_113_bool; string var_114_string;
		var_101_string = var_114_string;
		func_1472(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


// @pe
void func_1619(bool var_191_bool)
{
	int var_193_int;
	func_1510(var_193_int, "ood12KlaraT2_1");
	if(var_193_int == 0) {
		var_191_bool = true;
		return 0;
	}
	var_191_bool = false;
}


void func_1494(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_1500(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_1757(object var_266_object, bool var_267_bool)
{
	var_266_object->add(7);
	var_266_object->add(23);
	var_266_object->add(21);
	var_266_object->add(9);
	var_266_object->add(3);
	var_266_object->add(1);
	var_266_object->add(11);
	var_266_object->add(13);
	if(var_267_bool == false)
		var_266_object->add(25);
}


// @pe
void func_1631(bool var_321_bool)
{
	int var_323_int;
	func_1510(var_323_int, "ood12KlaraT2_2");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


void func_1510(int var_184_int, string var_185_string)
{
	int var_187_int;
	@GetVariable(var_185_string, var_187_int);
	var_187_int = var_184_int;
}


// @pe
void func_1643(bool var_337_bool)
{
	int var_339_int;
	func_1510(var_339_int, "ood12KlaraT2_3");
	if(var_339_int == 0) {
		var_337_bool = true;
		return 0;
	}
	var_337_bool = false;
}


void func_1515(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


// @pe
void func_1524(void)
{
	@SetVariable("d12q01KlaraInSobor", 1);
	func_1673();
}


void func_1398(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_1515(var_134_int);
	string var_128_string = ("d" + var_134_int) + "m";
	int var_129_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_122_object->HasProperty((var_128_string + (var_129_int + 1)), var_130_bool);
			if(!var_130_bool) { //@nz
			} else {
				var_129_int += 1;
			}
		}
		if(!var_129_int) { //@nz
			var_121_bool = false;
			return 10;
		}
		var_131_int = 0;
		if(var_129_int > 1)
			@irand(var_131_int, var_129_int);
		var_122_object->GetProperty((var_128_string + (var_131_int + 1)), var_132_string);
		bool var_153_bool; string var_154_string;
		var_132_string = var_154_string;
		func_1472(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_1655(bool var_315_bool)
{
	int var_317_int;
	func_1510(var_317_int, "d12q01ChildsAreVisited");
	if(var_317_int != 0) {
		var_315_bool = true;
		return 0;
	}
	var_315_bool = false;
}


// @pe
void func_252(object var_2_object, string var_205_string)
{
	bool var_206_bool;
	func_1855(var_206_bool);
	if(!var_206_bool) //@nz
		return 0;
	if(var_205_string == var_2_object)
		return 0;
	string var_209_string; bool var_210_bool;
	var_205_string = var_209_string;
	if(var_205_string == "")
		var_210_bool = false;
	else
		var_210_bool = true;
	func_1457(var_209_string, var_210_bool);
	var_2_object = var_205_string;
	
}


void func_1789(bool var_291_bool, int var_292_int)
{
	int var_294_int;
	@GetVariable(("vol_" + var_292_int), var_294_int);
	var_291_bool = (var_294_int & 4) != 0;
}


