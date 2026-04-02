// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1662();
			if(var_8_bool == 14668) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1797();
				object var_48_object = var_1_object;
				func_1819(var_0_object);
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_1779();
			}
			if(var_8_bool == 14696) {
				object var_78_object = var_1_object;
				func_1839(var_0_object);
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_1779();
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_1809();
			}
			if(var_8_bool == 14692) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_1830();
			}
			if(var_8_bool == 37696) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_1830();
			}
			if(var_8_bool == 14669) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_1850();
			}
			if(var_8_bool == 37705) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_1785();
			}
			if(var_8_bool == 40564) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_1791();
			}
			if(var_7_cvector == 14659) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513423); //@t
				var_0_object->ClearReplies(); //@t
				bool var_158_bool;
				func_1904(var_1_object);
				if(var_158_bool != 0)
					var_0_object->AddReply(513424, 14661, 14660); //@t
				bool var_169_bool = false;
				bool var_170_bool;
				func_1916(var_1_object);
				if(var_170_bool != 0) {
					bool var_176_bool;
					func_1928(var_1_object);
					if(var_176_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0)
					var_0_object->AddReply(513447, 37690, 14683); //@t
				bool var_185_bool;
				func_1940(var_1_object);
				if(var_185_bool != 0)
					var_0_object->AddReply(513433, 14670, 14669); //@t
				bool var_194_bool = false;
				bool var_195_bool;
				func_1856(var_1_object);
				if(var_195_bool != 0) {
					bool var_201_bool;
					func_1868(var_1_object);
					if(var_201_bool != 0)
						var_194_bool = true;
				}
				if(var_194_bool != 0)
					var_0_object->AddReply(535977, 37706, 37705); //@t
				bool var_210_bool = false;
				bool var_211_bool;
				func_1880(var_1_object);
				if(var_211_bool != 0) {
					bool var_217_bool;
					func_1892(var_1_object);
					if(var_217_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_object->AddReply(538666, 40565, 40564); //@t
				var_0_object->AddReply(513460, -1, 14697); //@t
				var_0_object->AddReply(535944, -1, 37665); //@t
				return 0;
			}
			if(var_7_cvector == 40565) {
				func_216(var_8_bool, "Doubt");
				var_0_object->SetMessage(538667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538668, 40568, 40566); //@t
				var_0_object->AddReply(538669, -1, 40567); //@t
				return 0;
			}
			if(var_7_cvector == 40568) {
				func_216(var_8_bool, "Smile");
				var_0_object->SetMessage(538670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538671, 40570, 40569); //@t
				var_0_object->AddReply(538675, -1, 40573); //@t
				return 0;
			}
			if(var_7_cvector == 40570) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(538672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538673, 40574, 40571); //@t
				var_0_object->AddReply(538674, -1, 40572); //@t
				return 0;
			}
			if(var_7_cvector == 40574) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(538676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538677, -1, 40575); //@t
				var_0_object->AddReply(538678, -1, 40576); //@t
				return 0;
			}
			if(var_7_cvector == 37706) {
				func_216(var_8_bool, "Agression");
				var_0_object->SetMessage(535978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535979, -1, 37707); //@t
				var_0_object->AddReply(535980, 37709, 37708); //@t
				return 0;
			}
			if(var_7_cvector == 37709) {
				func_216(var_8_bool, "Agression");
				var_0_object->SetMessage(535981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535982, 37711, 37710); //@t
				return 0;
			}
			if(var_7_cvector == 37711) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(535983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535984, -1, 37712); //@t
				var_0_object->AddReply(535985, -1, 37713); //@t
				return 0;
			}
			if(var_7_cvector == 14670) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513435, 14672, 14671); //@t
				var_0_object->AddReply(535970, -1, 37697); //@t
				return 0;
			}
			if(var_7_cvector == 14672) {
				func_216(var_8_bool, "Doubt");
				var_0_object->SetMessage(513436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513437, 14674, 14673); //@t
				var_0_object->AddReply(535971, 37699, 37698); //@t
				return 0;
			}
			if(var_7_cvector == 37699) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(535972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535973, 37701, 37700); //@t
				return 0;
			}
			if(var_7_cvector == 37701) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(535974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535975, 14674, 37702); //@t
				return 0;
			}
			if(var_7_cvector == 14674) {
				func_216(var_8_bool, "Agression");
				var_0_object->SetMessage(513438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513494, 14736, 14735); //@t
				var_0_object->AddReply(513491, 14732, 14731); //@t
				return 0;
			}
			if(var_7_cvector == 14732) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513493, 14678, 14733); //@t
				return 0;
			}
			if(var_7_cvector == 14736) {
				func_216(var_8_bool, "Agression");
				var_0_object->SetMessage(513495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513439, 14676, 14675); //@t
				var_0_object->AddReply(535976, -1, 37704); //@t
				return 0;
			}
			if(var_7_cvector == 14676) {
				func_216(var_8_bool, "Doubt");
				var_0_object->SetMessage(513440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513441, 14678, 14677); //@t
				return 0;
			}
			if(var_7_cvector == 14678) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513444, 14681, 14680); //@t
				return 0;
			}
			if(var_7_cvector == 14681) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513446, -1, 14682); //@t
				return 0;
			}
			if(var_7_cvector == 37690) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(535964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535965, 14684, 37691); //@t
				var_0_object->AddReply(535966, 37693, 37692); //@t
				return 0;
			}
			if(var_7_cvector == 37693) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(535967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535968, 14684, 37694); //@t
				var_0_object->AddReply(535969, -1, 37696); //@t
				return 0;
			}
			if(var_7_cvector == 14684) {
				func_216(var_8_bool, "Smile");
				var_0_object->SetMessage(513448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513449, 14686, 14685); //@t
				var_0_object->AddReply(513451, 14688, 14687); //@t
				return 0;
			}
			if(var_7_cvector == 14688) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513453, 14690, 14689); //@t
				return 0;
			}
			if(var_7_cvector == 14690) {
				func_216(var_8_bool, "Agression");
				var_0_object->SetMessage(513454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513455, 14694, 14691); //@t
				var_0_object->AddReply(513456, -1, 14692); //@t
				return 0;
			}
			if(var_7_cvector == 14686) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513457, 14694, 14693); //@t
				return 0;
			}
			if(var_7_cvector == 14694) {
				func_216(var_8_bool, "Smile");
				var_0_object->SetMessage(513458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513459, -1, 14696); //@t
				return 0;
			}
			if(var_7_cvector == 14661) {
				func_216(var_8_bool, "Smile");
				var_0_object->SetMessage(513425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513426, 14663, 14662); //@t
				return 0;
			}
			if(var_7_cvector == 14663) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(513427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535957, 37683, 37682); //@t
				return 0;
			}
			if(var_7_cvector == 37683) {
				func_216(var_8_bool, "Sorrow");
				var_0_object->SetMessage(535958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513428, 14665, 14664); //@t
				var_0_object->AddReply(535959, 37685, 37684); //@t
				return 0;
			}
			if(var_7_cvector == 37685) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(535960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535962, 14665, 37687); //@t
				var_0_object->AddReply(535963, -1, 37689); //@t
				return 0;
			}
			if(var_7_cvector == 14665) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513430, 14667, 14666); //@t
				var_0_object->AddReply(535961, -1, 37686); //@t
				return 0;
			}
			if(var_7_cvector == 14667) {
				func_216(var_8_bool, "Neutral");
				var_0_object->SetMessage(513431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513432, -1, 14668); //@t
				return 0;
			}
			var_3_string = true;
			bool var_493_bool;
			func_2070(var_493_bool);
			if(var_493_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xef";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1107(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1669(var_13_object);
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
			func_1669(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1214();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1229();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_1172();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1386(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_1141(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_1121(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1669(var_53_object);
					var_53_object = var_52_object;
					func_1536(var_51_bool, var_52_object);
				}
			} else {
				func_1136(var_7_int);
				func_1163();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_1163();
		else
			func_1616("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1354();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1377(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_1058(var_25_object);
			func_1616("Neutral");
			func_1172();
			func_1163();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_1391(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_2064(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_2062(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_2066(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_2068(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_2045(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1669(var_100_object);
	var_100_object = var_99_object;
	func_1478(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_310_bool = !var_36_bool; //@nz
		if(var_310_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_311_object;
	var_27_object = var_311_object;
	func_1460();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1536(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_1647(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_1283(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_1386(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1762(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_1386(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1755(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_1338;
			goto Label_1349;
			}
				Label_1338:
					bool var_45_bool;
					func_1352(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_1344;
			}
		}
	Label_1349:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1344:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


// @pe
void func_1797(void)
{
	@SetVariable("d8q03", 1);
	func_1952();
	func_1965();
}


void func_2062(int var_86_int)
{
	var_86_int = 515592;
}


void func_2064(int var_85_int)
{
	var_85_int = 511961;
}


// @pe
void func_1809(void)
{
	func_1978();
	bool var_96_bool;
	func_1734(var_96_bool, "quest_d8_03", "completed");
}


void func_2066(string var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
}


void func_2068(string var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
}


void func_2070(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1819(object var_48_object)
{
	@Trace("burah gives blood");
	object var_51_object;
	var_48_object = var_51_object;
	func_1721(var_51_object, "d8q03_blood", 1);
}


// @pe
void func_1058(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1573(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1746(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_1647(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


// @pe
void func_1830(void)
{
	@SetVariable("d8q03", -1);
	func_1991();
}


// @pe
void func_1839(object var_78_object)
{
	@Trace("burah gives serum");
	object var_81_object;
	var_78_object = var_81_object;
	func_1721(var_81_object, "burah_serum", 1);
}


// @pe
void func_1850(void)
{
	@SetVariable("ood8Burah1", 1);
}


// @pe
void func_1856(bool var_255_bool)
{
	int var_257_int;
	func_1685(var_257_int, "d8q04");
	if(var_257_int == 1)
		var_255_bool = true;
	var_255_bool = false;
}


void func_1352(bool var_45_bool)
{
	var_45_bool = true;
}


void func_1354(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1868(bool var_261_bool)
{
	int var_263_int;
	func_1685(var_263_int, "ood8Burah2");
	if(var_263_int == 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


void func_1359(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1616(string var_294_string)
{
	bool var_298_bool; float var_299_float; float var_300_float;
	@lshHasAnimation(var_298_bool, var_294_string);
	if(var_298_bool != 0) {
		@lshGetAnimTimes(var_294_string, var_299_float, var_300_float);
		@lshPlayAnimation(var_299_float, var_300_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_294_string);
	}
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		func_216(var_194_object, "Neutral");
		var_0_object->SetMessage(513423); //@t
		var_0_object->ClearReplies(); //@t
		bool var_218_bool;
		func_1904(var_1_object);
		if(var_218_bool != 0)
			var_0_object->AddReply(513424, 14661, 14660); //@t
		bool var_229_bool = false;
		bool var_230_bool;
		func_1916(var_1_object);
		if(var_230_bool != 0) {
			bool var_236_bool;
			func_1928(var_1_object);
			if(var_236_bool != 0)
				var_229_bool = true;
		}
		if(var_229_bool != 0)
			var_0_object->AddReply(513447, 37690, 14683); //@t
		bool var_245_bool;
		func_1940(var_1_object);
		if(var_245_bool != 0)
			var_0_object->AddReply(513433, 14670, 14669); //@t
		bool var_254_bool = false;
		bool var_255_bool;
		func_1856(var_1_object);
		if(var_255_bool != 0) {
			bool var_261_bool;
			func_1868(var_1_object);
			if(var_261_bool != 0)
				var_254_bool = true;
		}
		if(var_254_bool != 0)
			var_0_object->AddReply(535977, 37706, 37705); //@t
		bool var_270_bool = false;
		bool var_271_bool;
		func_1880(var_1_object);
		if(var_271_bool != 0) {
			bool var_277_bool;
			func_1892(var_1_object);
			if(var_277_bool != 0)
				var_270_bool = true;
		}
		if(var_270_bool != 0)
			var_0_object->AddReply(538666, 40565, 40564); //@t
		var_0_object->AddReply(513460, -1, 14697); //@t
		var_0_object->AddReply(535944, -1, 37665); //@t
		goto Label_186;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_186:
	bool var_292_bool;
	func_2070(var_292_bool);
	if(var_292_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1616(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_215;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_215:
		return 0;

	}
	
}


void func_1107(object var_0_object)
{
	bool var_7_bool;
	func_1386(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1283();
	}
}
EMIT "Return(); Pop(0)";


void func_1367(bool var_15_bool, cvector var_16_cvector)
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


// @pe
void func_1880(bool var_271_bool)
{
	int var_273_int;
	func_1685(var_273_int, "d8BurahLetter");
	if(var_273_int != 0) {
		var_271_bool = true;
		return 0;
	}
	var_271_bool = false;
}


void func_1632(string var_204_string, bool var_205_bool)
{
	bool var_211_bool; float var_212_float; float var_213_float;
	@lshHasAnimation(var_211_bool, var_204_string);
	if(var_211_bool != 0) {
		@lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		@lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_204_string);
	}
	
}


void func_1377(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1367(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1121(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1377(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1892(bool var_277_bool)
{
	int var_279_int;
	func_1685(var_279_int, "ood8Burah3");
	if(var_279_int == 0) {
		var_277_bool = true;
		return 0;
	}
	var_277_bool = false;
}


void func_1386(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1391(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1675(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_2070(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1454;
		@LookAsyncCamera("head");
	}
Label_1454:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


// @pe
void func_1904(bool var_218_bool)
{
	int var_220_int;
	func_1685(var_220_int, "d8q03");
	if(var_220_int == 0) {
		var_218_bool = true;
		return 0;
	}
	var_218_bool = false;
}


void func_1136(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1647(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_2070(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1141(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1359(var_22_float, var_23_object);
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
void func_1916(bool var_230_bool)
{
	int var_232_int;
	func_1685(var_232_int, "microscope_d8q03_blood");
	if(var_232_int == 1)
		var_230_bool = true;
	var_230_bool = false;
}


void func_1662(void)
{
	bool var_10_bool;
	func_2070(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1669(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1928(bool var_236_bool)
{
	int var_238_int;
	func_1685(var_238_int, "d8q03");
	if(var_238_int == 1)
		var_236_bool = true;
	var_236_bool = false;
}


void func_1163(void)
{
	float var_322_float;
	@rand(var_322_float, 8, 16);
	@SetTimer(10, var_322_float);
}


void func_1675(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1940(bool var_245_bool)
{
	int var_247_int;
	func_1685(var_247_int, "ood8Burah1");
	if(var_247_int == 0) {
		var_245_bool = true;
		return 0;
	}
	var_245_bool = false;
}


void func_1172(void)
{
	@KillTimer(10);
}


void func_1685(int var_220_int, string var_221_string)
{
	int var_223_int;
	@GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
}


void func_1690(int var_67_int, int var_68_int)
{
	object var_70_object;
	@CreateIntVector(var_70_object);
	var_70_object->add(var_67_int);
	var_70_object->add(var_68_int);
	@SendWorldWndMessage(3, var_70_object);
}
EMIT "Stack[-1] = 0";


void func_1952(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 124, 2, 513763);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_2017(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1702(object var_56_object, object var_57_object, int var_58_int)
{
	int var_62_int;
	var_57_object->GetItemID(var_62_int);
	int var_63_int;
	@GetInvItemProperty(var_63_int, var_62_int, "Category");
	bool var_64_bool;
	var_56_object->AddItem(var_64_bool, var_57_object, var_63_int, var_58_int);
	if(!var_64_bool) { //@nz
		var_56_object->DropItems(var_57_object, var_58_int);
	} else {
		int var_67_int; int var_68_int;
		var_62_int = var_67_int;
		var_58_int = var_68_int;
		func_1690(var_67_int, var_68_int);
	}
	
}


void func_1965(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 770, 2, 540199);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_2017(var_45_bool, var_46_object, 124);
}
EMIT "Stack[-1] = 0";


void func_1460(void)
{
	bool var_313_bool;
	@CameraSwitchToNormal(true);
	bool var_315_bool;
	func_2070(var_315_bool);
	if(var_315_bool != 0) {
	} else {
		@HasAnimationTrack(var_313_bool, "head");
		if(var_313_bool == 0) goto Label_1477;
		@UnlookAsync("head");
	}
Label_1477:
	
}


void func_1721(object var_51_object, string var_52_string, int var_53_int)
{
	object var_55_object;
	@CreateInvItem(var_55_object);
	var_55_object->SetItemName(var_52_string);
	object var_56_object; object var_57_object; int var_58_int;
	var_51_object = var_56_object;
	var_55_object = var_57_object;
	var_53_int = var_58_int;
	func_1702(var_56_object, var_57_object, var_58_int);
}
EMIT "Stack[-1] = 0";


void func_1978(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 125, 2, 513764);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_2017(var_93_bool, var_94_object, 124);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1214(void)
{
	func_1354();
	func_1172();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1478(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1536(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1573(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_1573(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1536(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1534;
	
Label_1534:
	var_98_bool = true;
	
}


void func_1734(bool var_96_bool, string var_97_string, string var_98_string)
{
	object var_100_object;
	@FindActor(var_100_object, var_97_string);
	if(var_100_object == null)
		var_96_bool = false;
	@Trigger(var_100_object, var_98_string);
	var_96_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1991(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 126, 2, 513765);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_2017(var_113_bool, var_114_object, 124);
}
EMIT "Stack[-1] = 0";


void func_1229(void)
{
	@StopGroup0();
	func_1172();
	func_1616("Neutral");
	func_1163();
}


void func_1746(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_2004(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_216(object var_2_object, string var_200_string)
{
	bool var_201_bool;
	func_2070(var_201_bool);
	if(!var_201_bool) //@nz
		return 0;
	if(var_200_string == var_2_object)
		return 0;
	string var_204_string; bool var_205_bool;
	var_200_string = var_204_string;
	if(var_200_string == "")
		var_205_bool = false;
	else
		var_205_bool = true;
	func_1632(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	
}


void func_1755(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_2017(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_2004(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1762(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1755(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


// @pe
void func_1779(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1785(void)
{
	@SetVariable("ood8Burah2", 1);
}


void func_2045(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x80c";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1791(void)
{
	@SetVariable("ood8Burah3", 1);
}


