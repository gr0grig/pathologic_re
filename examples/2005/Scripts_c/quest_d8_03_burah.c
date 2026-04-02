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
			func_1661();
			if(var_8_bool == 14668) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1784();
				object var_48_object = var_1_object;
				func_1805(var_0_object);
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_1766();
			}
			if(var_8_bool == 14696) {
				object var_78_object = var_1_object;
				func_1825(var_0_object);
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_1766();
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_1796();
			}
			if(var_8_bool == 14692) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_1816();
			}
			if(var_8_bool == 37696) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_1816();
			}
			if(var_8_bool == 14669) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_1836();
			}
			if(var_8_bool == 37705) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_1772();
			}
			if(var_8_bool == 40564) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_1778();
			}
			if(var_7_cvector == 14659) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513423); //@t
				var_0_object->ClearReplies(); //@t
				bool var_149_bool;
				func_1890(var_1_object);
				if(var_149_bool != 0)
					var_0_object->AddReply(513424, 14661, 14660); //@t
				bool var_160_bool = false;
				bool var_161_bool;
				func_1902(var_1_object);
				if(var_161_bool != 0) {
					bool var_167_bool;
					func_1914(var_1_object);
					if(var_167_bool != 0)
						var_160_bool = true;
				}
				if(var_160_bool != 0)
					var_0_object->AddReply(513447, 37690, 14683); //@t
				bool var_176_bool;
				func_1926(var_1_object);
				if(var_176_bool != 0)
					var_0_object->AddReply(513433, 14670, 14669); //@t
				bool var_185_bool = false;
				bool var_186_bool;
				func_1842(var_1_object);
				if(var_186_bool != 0) {
					bool var_192_bool;
					func_1854(var_1_object);
					if(var_192_bool != 0)
						var_185_bool = true;
				}
				if(var_185_bool != 0)
					var_0_object->AddReply(535977, 37706, 37705); //@t
				bool var_201_bool = false;
				bool var_202_bool;
				func_1866(var_1_object);
				if(var_202_bool != 0) {
					bool var_208_bool;
					func_1878(var_1_object);
					if(var_208_bool != 0)
						var_201_bool = true;
				}
				if(var_201_bool != 0)
					var_0_object->AddReply(538666, 40565, 40564); //@t
				var_0_object->AddReply(513460, -1, 14697); //@t
				var_0_object->AddReply(535944, -1, 37665); //@t
				return 0;
			}
			if(var_7_cvector == 40565) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(538667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538668, 40568, 40566); //@t
				var_0_object->AddReply(538669, -1, 40567); //@t
				return 0;
			}
			if(var_7_cvector == 40568) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(538670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538671, 40570, 40569); //@t
				var_0_object->AddReply(538675, -1, 40573); //@t
				return 0;
			}
			if(var_7_cvector == 40570) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(538672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538673, 40574, 40571); //@t
				var_0_object->AddReply(538674, -1, 40572); //@t
				return 0;
			}
			if(var_7_cvector == 40574) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(538676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538677, -1, 40575); //@t
				var_0_object->AddReply(538678, -1, 40576); //@t
				return 0;
			}
			if(var_7_cvector == 37706) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535979, -1, 37707); //@t
				var_0_object->AddReply(535980, 37709, 37708); //@t
				return 0;
			}
			if(var_7_cvector == 37709) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535982, 37711, 37710); //@t
				return 0;
			}
			if(var_7_cvector == 37711) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535984, -1, 37712); //@t
				var_0_object->AddReply(535985, -1, 37713); //@t
				return 0;
			}
			if(var_7_cvector == 14670) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513435, 14672, 14671); //@t
				var_0_object->AddReply(535970, -1, 37697); //@t
				return 0;
			}
			if(var_7_cvector == 14672) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513437, 14674, 14673); //@t
				var_0_object->AddReply(535971, 37699, 37698); //@t
				return 0;
			}
			if(var_7_cvector == 37699) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535973, 37701, 37700); //@t
				return 0;
			}
			if(var_7_cvector == 37701) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535975, 14674, 37702); //@t
				return 0;
			}
			if(var_7_cvector == 14674) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513494, 14736, 14735); //@t
				var_0_object->AddReply(513491, 14732, 14731); //@t
				return 0;
			}
			if(var_7_cvector == 14732) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513493, 14678, 14733); //@t
				return 0;
			}
			if(var_7_cvector == 14736) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513439, 14676, 14675); //@t
				var_0_object->AddReply(535976, -1, 37704); //@t
				return 0;
			}
			if(var_7_cvector == 14676) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513441, 14678, 14677); //@t
				return 0;
			}
			if(var_7_cvector == 14678) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513444, 14681, 14680); //@t
				return 0;
			}
			if(var_7_cvector == 14681) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513446, -1, 14682); //@t
				return 0;
			}
			if(var_7_cvector == 37690) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535965, 14684, 37691); //@t
				var_0_object->AddReply(535966, 37693, 37692); //@t
				return 0;
			}
			if(var_7_cvector == 37693) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535968, 14684, 37694); //@t
				var_0_object->AddReply(535969, -1, 37696); //@t
				return 0;
			}
			if(var_7_cvector == 14684) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513449, 14686, 14685); //@t
				var_0_object->AddReply(513451, 14688, 14687); //@t
				return 0;
			}
			if(var_7_cvector == 14688) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513453, 14690, 14689); //@t
				return 0;
			}
			if(var_7_cvector == 14690) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513455, 14694, 14691); //@t
				var_0_object->AddReply(513456, -1, 14692); //@t
				return 0;
			}
			if(var_7_cvector == 14686) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513457, 14694, 14693); //@t
				return 0;
			}
			if(var_7_cvector == 14694) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513459, -1, 14696); //@t
				return 0;
			}
			if(var_7_cvector == 14661) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513426, 14663, 14662); //@t
				return 0;
			}
			if(var_7_cvector == 14663) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535957, 37683, 37682); //@t
				return 0;
			}
			if(var_7_cvector == 37683) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513428, 14665, 14664); //@t
				var_0_object->AddReply(535959, 37685, 37684); //@t
				return 0;
			}
			if(var_7_cvector == 37685) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(535960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535962, 14665, 37687); //@t
				var_0_object->AddReply(535963, -1, 37689); //@t
				return 0;
			}
			if(var_7_cvector == 14665) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513430, 14667, 14666); //@t
				var_0_object->AddReply(535961, -1, 37686); //@t
				return 0;
			}
			if(var_7_cvector == 14667) {
				func_229(var_8_bool, "Neutral");
				var_0_object->SetMessage(513431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513432, -1, 14668); //@t
				return 0;
			}
			var_3_string = true;
			bool var_484_bool;
			func_2056(var_484_bool);
			if(var_484_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfc";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1120(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1668(var_13_object);
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
			func_1668(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1233();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_1248();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_1191();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1405(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_1160(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_1140(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1668(var_53_object);
					var_53_object = var_52_object;
					func_1553(var_51_bool, var_52_object);
				}
			} else {
				func_1155(var_7_int);
				func_1182();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_1182();
		else
			func_1633("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1373();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1396(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_1071(var_25_object);
			func_1633("Neutral");
			func_1191();
			func_1182();
		}
	}

}


void func_2048(int var_180_int)
{
	var_180_int = 515592;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1405(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_2050(int var_179_int)
{
	var_179_int = 511961;
}


void func_2052(string var_181_string)
{
	var_181_string = "ui/NPC_Burah.png";
}


// @pe
void func_1796(void)
{
	@SetVariable("d8q03", 1000);
	func_1964();
}


void func_2054(string var_182_string)
{
	var_182_string = "ui/NPC_Burah_b.png";
}


void func_2056(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_1805(object var_48_object)
{
	@Trace("burah gives blood");
	object var_51_object;
	var_48_object = var_51_object;
	func_1720(var_51_object, "d8q03_blood", 1);
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1668(var_39_object);
	var_39_object = var_38_object;
	func_1495(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1410(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_2050(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_2048(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_2052(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_2054(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_2031(var_183_int);
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
		var_299_bool = !var_36_bool; //@nz
		if(var_299_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_300_object;
	var_27_object = var_300_object;
	func_1478();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1553(bool var_48_bool, object var_49_object)
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
		func_1646(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1302(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1405(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1749(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1405(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1742(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1357;
			goto Label_1368;
			}
				Label_1357:
					bool var_59_bool;
					func_1371(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1363;
			}
		}
	Label_1368:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1363:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


// @pe
void func_1816(void)
{
	@SetVariable("d8q03", -1);
	func_1977();
}


// @pe
void func_1825(object var_78_object)
{
	@Trace("burah gives serum");
	object var_81_object;
	var_78_object = var_81_object;
	func_1720(var_81_object, "burah_serum", 1);
}


// @pe
void func_1836(void)
{
	@SetVariable("ood8Burah1", 1);
}


// @pe
void func_1071(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_1842(bool var_249_bool)
{
	int var_251_int;
	func_1684(var_251_int, "d8q04");
	if(var_251_int == 1)
		var_249_bool = true;
	var_249_bool = false;
}


void func_1590(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1733(var_92_int);
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
		func_1646(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_1854(bool var_255_bool)
{
	int var_257_int;
	func_1684(var_257_int, "ood8Burah2");
	if(var_257_int == 0) {
		var_255_bool = true;
		return 0;
	}
	var_255_bool = false;
}


// @pe
void func_1866(bool var_265_bool)
{
	int var_267_int;
	func_1684(var_267_int, "d8BurahLetter");
	if(var_267_int != 0) {
		var_265_bool = true;
		return 0;
	}
	var_265_bool = false;
}


// @pe
void func_1878(bool var_271_bool)
{
	int var_273_int;
	func_1684(var_273_int, "ood8Burah3");
	if(var_273_int == 0) {
		var_271_bool = true;
		return 0;
	}
	var_271_bool = false;
}


void func_1371(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1373(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		func_229(var_193_object, "Neutral");
		var_0_object->SetMessage(513423); //@t
		var_0_object->ClearReplies(); //@t
		bool var_212_bool;
		func_1890(var_1_object);
		if(var_212_bool != 0)
			var_0_object->AddReply(513424, 14661, 14660); //@t
		bool var_223_bool = false;
		bool var_224_bool;
		func_1902(var_1_object);
		if(var_224_bool != 0) {
			bool var_230_bool;
			func_1914(var_1_object);
			if(var_230_bool != 0)
				var_223_bool = true;
		}
		if(var_223_bool != 0)
			var_0_object->AddReply(513447, 37690, 14683); //@t
		bool var_239_bool;
		func_1926(var_1_object);
		if(var_239_bool != 0)
			var_0_object->AddReply(513433, 14670, 14669); //@t
		bool var_248_bool = false;
		bool var_249_bool;
		func_1842(var_1_object);
		if(var_249_bool != 0) {
			bool var_255_bool;
			func_1854(var_1_object);
			if(var_255_bool != 0)
				var_248_bool = true;
		}
		if(var_248_bool != 0)
			var_0_object->AddReply(535977, 37706, 37705); //@t
		bool var_264_bool = false;
		bool var_265_bool;
		func_1866(var_1_object);
		if(var_265_bool != 0) {
			bool var_271_bool;
			func_1878(var_1_object);
			if(var_271_bool != 0)
				var_264_bool = true;
		}
		if(var_264_bool != 0)
			var_0_object->AddReply(538666, 40565, 40564); //@t
		var_0_object->AddReply(513460, -1, 14697); //@t
		var_0_object->AddReply(535944, -1, 37665); //@t
		goto Label_199;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_199:
	bool var_286_bool;
	func_2056(var_286_bool);
	if(var_286_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_228;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_228:
		return 0;

	}
	
}


void func_1120(object var_0_object)
{
	bool var_7_bool;
	func_1405(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1116();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1302();
	}
}
EMIT "Return(); Pop(0)";


void func_1633(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


// @pe
void func_1890(bool var_212_bool)
{
	int var_214_int;
	func_1684(var_214_int, "d8q03");
	if(var_214_int == 0) {
		var_212_bool = true;
		return 0;
	}
	var_212_bool = false;
}


void func_1378(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1640(string var_203_string, bool var_204_bool)
{
	float var_209_float; float var_210_float;
	@lshGetAnimTimes(var_203_string, var_209_float, var_210_float);
	@lshPlayAnimation(var_209_float, var_210_float, var_204_bool);
}


void func_1386(bool var_15_bool, cvector var_16_cvector)
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
void func_1902(bool var_224_bool)
{
	int var_226_int;
	func_1684(var_226_int, "microscope_d8q03_blood");
	if(var_226_int == 1)
		var_224_bool = true;
	var_224_bool = false;
}


void func_1646(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_2056(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1396(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1386(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1140(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1396(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1914(bool var_230_bool)
{
	int var_232_int;
	func_1684(var_232_int, "d8q03");
	if(var_232_int == 1)
		var_230_bool = true;
	var_230_bool = false;
}


void func_1405(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1661(void)
{
	bool var_10_bool;
	func_2056(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1410(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1674(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2056(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1472;
		@LookAsyncCamera("head");
	}
Label_1472:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1155(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1668(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1926(bool var_239_bool)
{
	int var_241_int;
	func_1684(var_241_int, "ood8Burah1");
	if(var_241_int == 0) {
		var_239_bool = true;
		return 0;
	}
	var_239_bool = false;
}


void func_1160(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1378(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1674(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1938(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 124, 2, 513763);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_2003(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1684(int var_214_int, string var_215_string)
{
	int var_217_int;
	@GetVariable(var_215_string, var_217_int);
	var_217_int = var_214_int;
}


void func_1689(int var_67_int, int var_68_int)
{
	object var_70_object;
	@CreateIntVector(var_70_object);
	var_70_object->add(var_67_int);
	var_70_object->add(var_68_int);
	@SendWorldWndMessage(3, var_70_object);
}
EMIT "Stack[-1] = 0";


void func_1182(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1951(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 770, 2, 540199);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_2003(var_45_bool, var_46_object, 124);
}
EMIT "Stack[-1] = 0";


void func_1701(object var_56_object, object var_57_object, int var_58_int)
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
		func_1689(var_67_int, var_68_int);
	}
	
}


void func_1191(void)
{
	@KillTimer(10);
}


void func_1964(void)
{
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 125, 2, 513764);
	bool var_95_bool; object var_96_object;
	var_91_object = var_96_object;
	func_2003(var_95_bool, var_96_object, 124);
}
EMIT "Stack[-1] = 0";


void func_1720(object var_51_object, string var_52_string, int var_53_int)
{
	object var_55_object;
	@CreateInvItem(var_55_object);
	var_55_object->SetItemName(var_52_string);
	object var_56_object; object var_57_object; int var_58_int;
	var_51_object = var_56_object;
	var_55_object = var_57_object;
	var_53_int = var_58_int;
	func_1701(var_56_object, var_57_object, var_58_int);
}
EMIT "Stack[-1] = 0";


void func_1977(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 126, 2, 513765);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_2003(var_109_bool, var_110_object, 124);
}
EMIT "Stack[-1] = 0";


void func_1733(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1478(void)
{
	bool var_302_bool;
	@CameraSwitchToNormal();
	bool var_303_bool;
	func_2056(var_303_bool);
	if(var_303_bool != 0) {
	} else {
		@HasAnimationTrack(var_302_bool, "head");
		if(var_302_bool == 0) goto Label_1494;
		@UnlookAsync("head");
	}
Label_1494:
	
}


void func_1990(object var_31_object)
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


void func_1742(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


// @pe
void func_1233(void)
{
	func_1373();
	func_1191();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_2003(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1990(var_31_object);
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


void func_1749(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1742(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1495(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1553(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1590(var_79_bool, var_80_object);
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
		func_1590(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1553(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1551;
	
Label_1551:
	var_37_bool = true;
	
}


void func_1248(void)
{
	@StopGroup0();
	func_1191();
	func_1633("Neutral");
	func_1182();
}


// @pe
void func_229(object var_2_object, string var_199_string)
{
	bool var_200_bool;
	func_2056(var_200_bool);
	if(!var_200_bool) //@nz
		return 0;
	if(var_199_string == var_2_object)
		return 0;
	string var_203_string; bool var_204_bool;
	var_199_string = var_203_string;
	if(var_199_string == "")
		var_204_bool = false;
	else
		var_204_bool = true;
	func_1640(var_203_string, var_204_bool);
	var_2_object = var_199_string;
	
}


// @pe
void func_1766(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1772(void)
{
	@SetVariable("ood8Burah2", 1);
}


void func_2031(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x7fe";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_1778(void)
{
	@SetVariable("ood8Burah3", 1);
}


// @pe
void func_1784(void)
{
	@SetVariable("d8q03", 1);
	func_1938();
	func_1951();
}


