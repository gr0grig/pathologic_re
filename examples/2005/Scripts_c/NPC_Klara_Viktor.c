// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2112();
			if(var_33_cvector == 26887) {
				func_147(var_34_cvector, "Neutral");
				var_0_object->SetMessage(525531); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525532, -1, 26888); //@t
				return 0;
			}
			var_3_string = true;
			bool var_55_bool;
			func_2206(var_55_bool);
			if(var_55_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2112();
			if(var_34_cvector == 28232) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_2214();
			}
			if(var_33_cvector == 28231) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(526939); //@t
				var_0_object->ClearReplies(); //@t
				bool var_58_bool = true;
				bool var_59_bool = false;
				bool var_60_bool;
				func_2274(var_1_object);
				if(var_60_bool != 0) {
					bool var_68_bool;
					func_2286(var_1_object);
					if(var_68_bool != 0)
						var_59_bool = true;
				}
				if(var_59_bool != 1) {
					bool var_74_bool = false;
					bool var_75_bool;
					func_2298(var_1_object);
					if(var_75_bool != 0) {
						bool var_81_bool;
						func_2286(var_1_object);
						if(var_81_bool != 0)
							var_74_bool = true;
					}
					if(var_74_bool != 1)
						var_58_bool = false;
				}
				if(var_58_bool != 0)
					var_0_object->AddReply(526940, 28233, 28232); //@t
				var_0_object->AddReply(526945, -1, 28237); //@t
				return 0;
			}
			if(var_33_cvector == 28233) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(526941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526942, 28235, 28234); //@t
				var_0_object->AddReply(527965, 29330, 29322); //@t
				return 0;
			}
			if(var_33_cvector == 29330) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527974, 29332, 29331); //@t
				return 0;
			}
			if(var_33_cvector == 29332) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527976, 29321, 29333); //@t
				return 0;
			}
			if(var_33_cvector == 28235) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(526943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526944, 29321, 28236); //@t
				return 0;
			}
			if(var_33_cvector == 29321) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527966, 29324, 29323); //@t
				return 0;
			}
			if(var_33_cvector == 29324) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527969, 29327, 29326); //@t
				var_0_object->AddReply(527968, -1, 29325); //@t
				return 0;
			}
			if(var_33_cvector == 29327) {
				func_377(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527971, -1, 29328); //@t
				return 0;
			}
			var_3_string = true;
			bool var_144_bool;
			func_2206(var_144_bool);
			if(var_144_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x190";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2112();
			if(var_34_cvector == 30380) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_2220();
			}
			if(var_33_cvector == 30373) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528940); //@t
				var_0_object->ClearReplies(); //@t
				bool var_87_bool;
				func_2310(var_1_object);
				if(var_87_bool != 0)
					var_0_object->AddReply(528943, 30377, 30376); //@t
				var_0_object->AddReply(528941, -1, 30374); //@t
				var_0_object->AddReply(528942, -1, 30375); //@t
				return 0;
			}
			if(var_33_cvector == 30377) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528945, 30379, 30378); //@t
				var_0_object->AddReply(528948, 30382, 30381); //@t
				return 0;
			}
			if(var_33_cvector == 30382) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528950, 30384, 30383); //@t
				return 0;
			}
			if(var_33_cvector == 30384) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528952, 30391, 30385); //@t
				var_0_object->AddReply(528954, 30386, 30387); //@t
				return 0;
			}
			if(var_33_cvector == 30386) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528955, 30389, 30388); //@t
				var_0_object->AddReply(528957, 30389, 30390); //@t
				return 0;
			}
			if(var_33_cvector == 30389) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528960, 30379, 30394); //@t
				return 0;
			}
			if(var_33_cvector == 30391) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528959, 30379, 30392); //@t
				return 0;
			}
			if(var_33_cvector == 30379) {
				func_766(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528947, -1, 30380); //@t
				return 0;
			}
			var_3_string = true;
			bool var_162_bool;
			func_2206(var_162_bool);
			if(var_162_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x315";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2112();
			if(var_33_cvector == 36906) {
				func_1133(var_34_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_33_cvector == 36953) {
				func_1133(var_34_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_33_cvector == 36957) {
				func_1133(var_34_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_2206(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x484";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2112();
			if(var_34_cvector == 26947) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_2208();
			}
			if(var_34_cvector == 26951) {
				object var_45_object = var_1_object;
				func_2234(var_0_object);
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_2244();
			}
			if(var_33_cvector == 26946) {
				func_1401(var_34_cvector, "Neutral");
				var_0_object->SetMessage(525599); //@t
				var_0_object->ClearReplies(); //@t
				bool var_85_bool = false;
				bool var_86_bool;
				func_2250(var_1_object);
				if(var_86_bool != 0) {
					bool var_94_bool;
					func_2262(var_1_object);
					if(var_94_bool != 0)
						var_85_bool = true;
				}
				if(var_85_bool != 0)
					var_0_object->AddReply(525600, 26948, 26947); //@t
				var_0_object->AddReply(525605, -1, 26952); //@t
				return 0;
			}
			if(var_33_cvector == 26948) {
				func_1401(var_34_cvector, "Neutral");
				var_0_object->SetMessage(525601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525602, 26950, 26949); //@t
				return 0;
			}
			if(var_33_cvector == 26950) {
				func_1401(var_34_cvector, "Neutral");
				var_0_object->SetMessage(525603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525604, -1, 26951); //@t
				return 0;
			}
			var_3_string = true;
			bool var_120_bool;
			func_2206(var_120_bool);
			if(var_120_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x590";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2112();
			if(var_33_cvector == 42554) {
				func_1675(var_34_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_2206(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6a2";
	
	}

}


maintask task_13
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector)
	{
		var_33_bool = GlobalVars[1];
		GlobalVars[1] = true;
		func_1754(var_30_bool, var_31_cvector, var_32_cvector);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector, string var_33_string)
	{
		if(var_33_string == "icot_viktor_NPC_Trigger")
			func_1793(var_33_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
		func_1782(var_30_bool, var_31_cvector, var_32_cvector);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector, object var_33_object)
	{
		bool var_35_bool;
		if(actor != 0) {
			@IsOverrideActive(var_35_bool);
			if(!var_35_bool) { //@nz
				disable OnUse;
				bool var_38_bool; object var_39_object;
				var_33_object = var_39_object;
				func_1847(var_38_bool, var_39_object);
				enable OnUse;
				object var_52_object;
				var_33_object = var_52_object;
				func_2393(var_52_object);
			}
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_38_bool;
	func_1856(var_38_bool);
	if(!var_38_bool) goto Label_0; //@nz
}


void func_1793(object var_0_object)
{
	if(!var_0_object) { //@nz
		var_0_object = true;
		@PlayAnimation("all", "stand");
		@WaitForAnimEnd();
	}
}


void func_1536(object var_0_object, int var_549_int, object var_550_object)
{
	var_0_object = var_550_object;
	bool var_560_bool; object var_561_object;
	object var_562_object;
	func_2119(var_562_object);
	var_562_object = var_561_object;
	func_1946(var_560_bool, var_561_object);
	bool var_563_bool; object var_564_object;
	var_550_object = var_564_object;
	func_1861(var_563_bool, var_564_object, 70.0);
	if(!var_563_bool) { //@nz
		var_549_int = -2;
		return 8;
	}
	object var_556_object;
	@CreateDialog(var_556_object);
	int var_567_int;
	func_2200(var_567_int);
	var_556_object->SetNPCName(var_567_int);
	int var_568_int;
	func_2198(var_568_int);
	var_556_object->SetNPCDescription(var_568_int);
	string var_569_string;
	func_2202(var_569_string);
	var_556_object->SetPhoto(var_569_string);
	string var_570_string;
	func_2204(var_570_string);
	var_556_object->SetPhoto2(var_570_string);
	int var_571_int;
	func_2376(var_571_int);
	var_556_object->SetPlayerName(var_571_int);
	bool var_557_bool;
	@IsOverrideActive(var_557_bool);
	if(var_557_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	@DoDialog(var_556_object);
	object var_573_object; object var_574_object;
	var_550_object = var_573_object;
	var_556_object = var_574_object;
	TaskCall(12);
	func_1617(var_575_object, var_576_object, var_577_string, var_578_bool, var_573_object, var_574_object);
	TaskReturn();
	bool var_559_bool;
	var_556_object->IsDialogEnd(var_559_bool);
	
	for(;;) {
		var_603_bool = !var_559_bool; //@nz
		if(var_603_bool == 0) goto Label_1606;
		@sync();
		var_556_object->IsDialogEnd(var_559_bool);
	}
	
Label_1606:
	object var_604_object;
	var_550_object = var_604_object;
	func_1929();
	@StopDialog(var_556_object);
	var_556_object->GetReturnValue(-1);
	int var_558_int = var_549_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2310(bool var_382_bool)
{
	int var_384_int;
	func_2135(var_384_int, "k9q01");
	if(var_384_int == 4)
		var_382_bool = true;
	var_382_bool = false;
}


void func_13(object var_0_object, int var_55_int, object var_56_object)
{
	var_0_object = var_56_object;
	bool var_66_bool; object var_67_object;
	object var_68_object;
	func_2119(var_68_object);
	var_68_object = var_67_object;
	func_1946(var_66_bool, var_67_object);
	bool var_161_bool; object var_162_object;
	var_56_object = var_162_object;
	func_1861(var_161_bool, var_162_object, 70.0);
	if(!var_161_bool) { //@nz
		var_55_int = -2;
		return 8;
	}
	object var_62_object;
	@CreateDialog(var_62_object);
	int var_208_int;
	func_2200(var_208_int);
	var_62_object->SetNPCName(var_208_int);
	int var_209_int;
	func_2198(var_209_int);
	var_62_object->SetNPCDescription(var_209_int);
	string var_210_string;
	func_2202(var_210_string);
	var_62_object->SetPhoto(var_210_string);
	string var_211_string;
	func_2204(var_211_string);
	var_62_object->SetPhoto2(var_211_string);
	int var_212_int;
	func_2376(var_212_int);
	var_62_object->SetPlayerName(var_212_int);
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0) {
		var_55_int = -2;
		return 8;
	}
	@DoDialog(var_62_object);
	object var_221_object; object var_222_object;
	var_56_object = var_221_object;
	var_62_object = var_222_object;
	TaskCall(2);
	func_94(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	bool var_65_bool;
	var_62_object->IsDialogEnd(var_65_bool);
	
	for(;;) {
		var_257_bool = !var_65_bool; //@nz
		if(var_257_bool == 0) goto Label_83;
		@sync();
		var_62_object->IsDialogEnd(var_65_bool);
	}
	
Label_83:
	object var_258_object;
	var_56_object = var_258_object;
	func_1929();
	@StopDialog(var_62_object);
	var_62_object->GetReturnValue(-1);
	int var_64_int = var_55_int;
}
EMIT "Stack[-4] = 0";


void func_2322(void)
{
	object var_44_object;
	@CreateDiaryEntry(var_44_object, 522, 1, 529814);
	bool var_48_bool; object var_49_object;
	var_44_object = var_49_object;
	func_2348(var_48_bool, var_49_object, 517);
}
EMIT "Stack[-1] = 0";


// @pe
void func_287(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_433_object, object var_434_object)
{
	var_0_object = var_434_object;
	var_1_object = var_433_object;
	var_3_string = false;
	if(1 != 0) {
		func_377(var_434_object, "Neutral");
		var_0_object->SetMessage(526939); //@t
		var_0_object->ClearReplies(); //@t
		bool var_449_bool = true;
		bool var_450_bool = false;
		bool var_451_bool;
		func_2274(var_1_object);
		if(var_451_bool != 0) {
			bool var_457_bool;
			func_2286(var_1_object);
			if(var_457_bool != 0)
				var_450_bool = true;
		}
		if(var_450_bool != 1) {
			bool var_463_bool = false;
			bool var_464_bool;
			func_2298(var_1_object);
			if(var_464_bool != 0) {
				bool var_470_bool;
				func_2286(var_1_object);
				if(var_470_bool != 0)
					var_463_bool = true;
			}
			if(var_463_bool != 1)
				var_449_bool = false;
		}
		if(var_449_bool != 0)
			var_0_object->AddReply(526940, 28233, 28232); //@t
		var_0_object->AddReply(526945, -1, 28237); //@t
		goto Label_347;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x123";
	}
Label_347:
	bool var_478_bool;
	func_2206(var_478_bool);
	if(var_478_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2084(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_376;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_376:
		return 0;

	}
	
}


void func_2335(object var_57_object)
{
	object var_59_object;
	@GetDiaryRoot(var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_57_object = false;
	}
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_2084(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


void func_1830(object var_52_object, string var_53_string, int var_54_int)
{
	int var_56_int;
	var_52_object->GetProperty(var_53_string, var_56_int);
	var_52_object->SetProperty(var_53_string, (var_56_int + var_54_int));
}


void func_2091(string var_232_string, bool var_233_bool)
{
	float var_238_float; float var_239_float;
	@lshGetAnimTimes(var_232_string, var_238_float, var_239_float);
	@lshPlayAnimation(var_238_float, var_239_float, var_233_bool);
}


void func_2348(bool var_48_bool, object var_49_object, int var_50_int)
{
	object var_57_object;
	func_2335(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	object var_55_object;
	var_54_object->Find(var_50_int, var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_50_int);
		var_48_bool = false;
	}
	var_55_object->AddChild(var_49_object);
	@SendWorldWndMessage(7);
	int var_56_int;
	var_49_object->GetCategory(var_56_int);
	@SetDiarySection(var_56_int);
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1837(bool var_42_bool, cvector var_43_cvector)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector = var_43_cvector - var_47_cvector;
	var_50_float = GetByIndex(var_48_cvector, 0);
	var_51_float = GetByIndex(var_48_cvector, 2);
	bool var_49_bool;
	@Rotate(var_50_float, var_51_float, var_49_bool);
	var_49_bool = var_42_bool;
}


// @pe
void func_1070(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_514_object, object var_515_object)
{
	var_0_object = var_515_object;
	var_1_object = var_514_object;
	var_3_string = false;
	if(1 != 0) {
		func_1133(var_515_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1103;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x432";
	}
Label_1103:
	bool var_539_bool;
	func_2206(var_539_bool);
	if(var_539_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2084(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1132;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1132:
		return 0;

	}
	
}


// @pe
void func_1329(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if(1 != 0) {
		func_1401(var_294_object, "Neutral");
		var_0_object->SetMessage(525599); //@t
		var_0_object->ClearReplies(); //@t
		bool var_309_bool = false;
		bool var_310_bool;
		func_2250(var_1_object);
		if(var_310_bool != 0) {
			bool var_318_bool;
			func_2262(var_1_object);
			if(var_318_bool != 0)
				var_309_bool = true;
		}
		if(var_309_bool != 0)
			var_0_object->AddReply(525600, 26948, 26947); //@t
		var_0_object->AddReply(525605, -1, 26952); //@t
		goto Label_1371;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x535";
	}
Label_1371:
	bool var_330_bool;
	func_2206(var_330_bool);
	if(var_330_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2084(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1400;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1400:
		return 0;

	}
	
}


void func_2097(bool var_100_bool, string var_101_string)
{
	bool var_103_bool;
	bool var_104_bool;
	func_2206(var_104_bool);
	if(var_104_bool != 0) {
		@lshHasSpeech(var_103_bool, var_101_string);
		if(var_103_bool != 0) {
			@lshPlaySpeech(var_101_string);
			var_100_bool = true;
		}
	}
	var_100_bool = false;
}


void func_1847(bool var_38_bool, object var_39_object)
{
	cvector var_41_cvector;
	var_39_object->GetPosition(var_41_cvector);
	bool var_42_bool; cvector var_43_cvector;
	var_41_cvector = var_43_cvector;
	func_1837(var_42_bool, var_43_cvector);
	var_42_bool = var_38_bool;
}


void func_1856(bool var_34_bool)
{
	bool var_36_bool;
	@IsLoaded(var_36_bool);
	var_36_bool = var_34_bool;
}


void func_2112(void)
{
	bool var_36_bool;
	func_2206(var_36_bool);
	if(var_36_bool != 0)
		@lshStopSpeech();
}


void func_1861(bool var_161_bool, object var_162_object, float var_163_float)
{
	cvector var_174_cvector; bool var_181_bool;
	var_162_object->GetPosition(var_174_cvector);
	float var_173_float;
	var_162_object->GetEyesHeight(var_173_float);
	var_182_float = GetByIndex(var_174_cvector, 1);
	SetByIndex(var_174_cvector, 1) = (var_182_float + var_173_float);
	cvector var_175_cvector;
	@GetPosition(var_175_cvector);
	@GetEyesHeight(var_173_float);
	var_183_float = GetByIndex(var_175_cvector, 1);
	SetByIndex(var_175_cvector, 1) = (var_183_float + var_173_float);
	cvector var_176_cvector = var_174_cvector - var_175_cvector;
	var_184_float = GetByIndex(var_176_cvector, 1);
	SetByIndex(var_176_cvector, 1) = (float)0;
	var_186_float = sqrt(var_176_cvector | var_176_cvector);
	var_176_cvector /= var_186_float;
	cvector var_177_cvector = -var_176_cvector;
	cvector var_188_cvector;
	func_2125(var_188_cvector, (var_177_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_178_cvector = ((var_176_cvector * var_163_float) + (var_188_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_180_bool;
	@IsOverrideActive(var_180_bool);
	if(var_180_bool != 0)
		var_161_bool = false;
	@StopWorld();
	@CameraTransit((var_175_cvector + var_178_cvector), var_177_cvector);
	var_201_float = GetByIndex(var_178_cvector, 0);
	var_202_float = GetByIndex(var_178_cvector, 2);
	@Rotate(var_201_float, var_202_float);
	bool var_203_bool;
	func_2206(var_203_bool);
	if(var_203_bool != 0) {
	} else {
		@HasAnimationTrack(var_181_bool, "head");
		if(var_181_bool == 0) goto Label_1923;
		@LookAsyncCamera("head");
	}
Label_1923:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_161_bool = true;
	
}


void func_2119(object var_68_object)
{
	object var_70_object;
	@self(var_70_object);
	var_70_object = var_68_object;
}
EMIT "Stack[-1] = 0";


void func_2376(int var_212_int)
{
	int var_214_int;
	@GetVariable("branch", var_214_int);
	if(var_214_int == 0) {
		var_212_int = 1;
		return 2;
	EMIT "GOTO 0x957";
	}
	if(var_214_int == 1) {
		var_212_int = 2;
		return 2;
	}
	var_212_int = 3;
}


void func_2125(cvector var_188_cvector, cvector var_189_cvector)
{
	float var_192_float = sqrt(var_189_cvector | var_189_cvector);
	if(var_192_float < 0.000001)
		var_188_cvector = [0.0, 0.0, 0.0];
	var_188_cvector = var_189_cvector / var_192_float;
}


// @pe
void func_1617(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_573_object, object var_574_object)
{
	var_0_object = var_574_object;
	var_1_object = var_573_object;
	var_3_string = false;
	if(1 != 0) {
		func_1675(var_574_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1645;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x655";
	}
Label_1645:
	bool var_595_bool;
	func_2206(var_595_bool);
	if(var_595_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2084(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1674;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1674:
		return 0;

	}
	
}


void func_2135(int var_312_int, string var_313_string)
{
	int var_315_int;
	@GetVariable(var_313_string, var_315_int);
	var_315_int = var_312_int;
}


// @pe
void func_2393(object var_52_object)
{
	var_53_bool = GlobalVars[1];
	if(!var_53_bool) { //@nz
		int var_55_int; object var_56_object;
		var_52_object = var_56_object;
		TaskCall(1);
		func_13(var_57_object, var_55_int, var_56_object);
		TaskReturn();
		var_265_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_266_bool;
	func_2192(var_266_bool, 3);
	if(var_266_bool != 0) {
		int var_269_int; object var_270_object;
		var_52_object = var_270_object;
		TaskCall(9);
		func_1248(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 0;
	}
	bool var_340_bool;
	func_2192(var_340_bool, 9);
	if(var_340_bool != 0) {
		int var_342_int; object var_343_object;
		var_52_object = var_343_object;
		TaskCall(5);
		func_617(var_344_object, var_342_int, var_343_object);
		TaskReturn();
		return 0;
	}
	bool var_407_bool;
	func_2192(var_407_bool, 10);
	if(var_407_bool != 0) {
		int var_409_int; object var_410_object;
		var_52_object = var_410_object;
		TaskCall(3);
		func_206(var_411_object, var_409_int, var_410_object);
		TaskReturn();
		return 0;
	}
	bool var_488_bool;
	func_2192(var_488_bool, 12);
	if(var_488_bool != 0) {
		int var_490_int; object var_491_object;
		var_52_object = var_491_object;
		TaskCall(7);
		func_989(var_492_object, var_490_int, var_491_object);
		TaskReturn();
		return 0;
	}
	int var_549_int; object var_550_object;
	var_52_object = var_550_object;
	TaskCall(11);
	func_1536(var_551_object, var_549_int, var_550_object);
	TaskReturn();
}


void func_2140(int var_61_int, int var_62_int)
{
	object var_64_object;
	@CreateIntVector(var_64_object);
	var_64_object->add(var_61_int);
	var_64_object->add(var_62_int);
	@SendWorldWndMessage(3, var_64_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_221_object, object var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_222_object, "Neutral");
		var_0_object->SetMessage(525531); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525532, -1, 26888); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_117:
	bool var_244_bool;
	func_2206(var_244_bool);
	if(var_244_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2084(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_146;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_146:
		return 0;

	}
	
}


void func_2152(object var_48_object, int var_49_int)
{
	int var_51_int;
	object var_52_object;
	var_48_object = var_52_object;
	int var_54_int;
	func_1830(var_52_object, "money", var_54_int);
	if(var_54_int > 0) {
		@GetInvItemByName(var_51_int, "Money");
		int var_61_int; int var_62_int;
		var_51_int = var_61_int;
		var_49_int = var_62_int;
		func_2140(var_61_int, var_62_int);
	}
}


void func_617(object var_0_object, int var_342_int, object var_343_object)
{
	var_0_object = var_343_object;
	bool var_353_bool; object var_354_object;
	object var_355_object;
	func_2119(var_355_object);
	var_355_object = var_354_object;
	func_1946(var_353_bool, var_354_object);
	bool var_356_bool; object var_357_object;
	var_343_object = var_357_object;
	func_1861(var_356_bool, var_357_object, 70.0);
	if(!var_356_bool) { //@nz
		var_342_int = -2;
		return 8;
	}
	object var_349_object;
	@CreateDialog(var_349_object);
	int var_360_int;
	func_2200(var_360_int);
	var_349_object->SetNPCName(var_360_int);
	int var_361_int;
	func_2198(var_361_int);
	var_349_object->SetNPCDescription(var_361_int);
	string var_362_string;
	func_2202(var_362_string);
	var_349_object->SetPhoto(var_362_string);
	string var_363_string;
	func_2204(var_363_string);
	var_349_object->SetPhoto2(var_363_string);
	int var_364_int;
	func_2376(var_364_int);
	var_349_object->SetPlayerName(var_364_int);
	bool var_350_bool;
	@IsOverrideActive(var_350_bool);
	if(var_350_bool != 0) {
		var_342_int = -2;
		return 8;
	}
	@DoDialog(var_349_object);
	object var_366_object; object var_367_object;
	var_343_object = var_366_object;
	var_349_object = var_367_object;
	TaskCall(6);
	func_698(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	bool var_352_bool;
	var_349_object->IsDialogEnd(var_352_bool);
	
	for(;;) {
		var_405_bool = !var_352_bool; //@nz
		if(var_405_bool == 0) goto Label_687;
		@sync();
		var_349_object->IsDialogEnd(var_352_bool);
	}
	
Label_687:
	object var_406_object;
	var_343_object = var_406_object;
	func_1929();
	@StopDialog(var_349_object);
	var_349_object->GetReturnValue(-1);
	int var_351_int = var_342_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1133(object var_2_object, string var_521_string)
{
	bool var_522_bool;
	func_2206(var_522_bool);
	if(!var_522_bool) //@nz
		return 0;
	if(var_521_string == var_2_object)
		return 0;
	string var_525_string; bool var_526_bool;
	var_521_string = var_525_string;
	if(var_521_string == "")
		var_526_bool = false;
	else
		var_526_bool = true;
	func_2091(var_525_string, var_526_bool);
	var_2_object = var_521_string;
	
}


// @pe
void func_377(object var_2_object, string var_440_string)
{
	bool var_441_bool;
	func_2206(var_441_bool);
	if(!var_441_bool) //@nz
		return 0;
	if(var_440_string == var_2_object)
		return 0;
	string var_444_string; bool var_445_bool;
	var_440_string = var_444_string;
	if(var_440_string == "")
		var_445_bool = false;
	else
		var_445_bool = true;
	func_2091(var_444_string, var_445_bool);
	var_2_object = var_440_string;
	
}


// @pe
void func_1401(object var_2_object, string var_300_string)
{
	bool var_301_bool;
	func_2206(var_301_bool);
	if(!var_301_bool) //@nz
		return 0;
	if(var_300_string == var_2_object)
		return 0;
	string var_304_string; bool var_305_bool;
	var_300_string = var_304_string;
	if(var_300_string == "")
		var_305_bool = false;
	else
		var_305_bool = true;
	func_2091(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	
}


void func_2171(bool var_66_bool, string var_67_string, string var_68_string)
{
	object var_70_object;
	@FindActor(var_70_object, var_67_string);
	if(var_70_object == null)
		var_66_bool = false;
	@Trigger(var_70_object, var_68_string);
	var_66_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2183(int var_121_int)
{
	float var_123_float;
	@GetGameTime(var_123_float);
	var_121_int = 1 + (var_123_float / 24);
}


void func_1929(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal();
	bool var_261_bool;
	func_2206(var_261_bool);
	if(var_261_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_1945;
		@UnlookAsync("head");
	}
Label_1945:
	
}


// @pe
void func_1675(object var_2_object, string var_580_string)
{
	bool var_581_bool;
	func_2206(var_581_bool);
	if(!var_581_bool) //@nz
		return 0;
	if(var_580_string == var_2_object)
		return 0;
	string var_584_string; bool var_585_bool;
	var_580_string = var_584_string;
	if(var_580_string == "")
		var_585_bool = false;
	else
		var_585_bool = true;
	func_2091(var_584_string, var_585_bool);
	var_2_object = var_580_string;
	
}


// @pe
void func_2192(bool var_266_bool, int var_267_int)
{
	int var_268_int;
	func_2183(var_268_int);
	var_266_bool = var_268_int == var_267_int;
}


// @pe
void func_147(object var_2_object, string var_228_string)
{
	bool var_229_bool;
	func_2206(var_229_bool);
	if(!var_229_bool) //@nz
		return 0;
	if(var_228_string == var_2_object)
		return 0;
	string var_232_string; bool var_233_bool;
	var_228_string = var_232_string;
	if(var_228_string == "")
		var_233_bool = false;
	else
		var_233_bool = true;
	func_2091(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	
}


void func_2198(int var_209_int)
{
	var_209_int = 515554;
}


void func_2200(int var_208_int)
{
	var_208_int = 502879;
}


void func_2202(string var_210_string)
{
	var_210_string = "ui/NPC_Viktor.png";
}


void func_1946(bool var_66_bool, object var_67_object)
{
	int var_73_int; int var_74_int;
	@GetVariable("voice_common", var_73_int);
	if(var_73_int != 0) {
		bool var_77_bool; object var_78_object;
		var_67_object = var_78_object;
		func_2004(var_77_bool, var_78_object);
		if(!var_77_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_67_object = var_109_object;
			func_2041(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_66_bool = false;
				return 4;
			}
		}
		@irand(var_74_int, 2);
		if(var_74_int != 0)
			@SetVariable("voice_common", ((var_73_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_153_bool; object var_154_object;
		var_67_object = var_154_object;
		func_2041(var_153_bool, var_154_object);
		if(!var_153_bool) { //@nz
			bool var_156_bool; object var_157_object;
			var_67_object = var_157_object;
			func_2004(var_156_bool, var_157_object);
			if(!var_156_bool) { //@nz
				var_66_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2002;
	
Label_2002:
	var_66_bool = true;
	
}


void func_2204(string var_211_string)
{
	var_211_string = "ui/NPC_Viktor_b.png";
}


void func_2206(bool var_104_bool)
{
	var_104_bool = true;
}


// @pe
void func_2208(void)
{
	@SetVariable("ook3Viktor1", 1);
}


// @pe
void func_2214(void)
{
	@SetVariable("ook10Viktor1", 1);
}


// @pe
void func_2220(void)
{
	@SetVariable("k9q01", 5);
	func_2322();
	bool var_66_bool;
	func_2171(var_66_bool, "quest_k9_01", "init_mnogogrannik");
}


// @pe
void func_698(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_366_object, object var_367_object)
{
	var_0_object = var_367_object;
	var_3_string = false;
	if(1 != 0) {
		func_766(var_367_object, "Neutral");
		var_0_object->SetMessage(528940); //@t
		var_0_object->ClearReplies(); //@t
		bool var_382_bool;
		func_2310(var_366_object);
		if(var_382_bool != 0)
			var_0_object->AddReply(528943, 30377, 30376); //@t
		var_0_object->AddReply(528941, -1, 30374); //@t
		var_0_object->AddReply(528942, -1, 30375); //@t
		goto Label_736;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2be";
	}
Label_736:
	bool var_397_bool;
	func_2206(var_397_bool);
	if(var_397_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2084(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_765;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_765:
		return 0;

	}
	
}


// @pe
void func_2234(object var_45_object)
{
	@Trace("money500 is given");
	object var_48_object;
	var_45_object = var_48_object;
	func_2152(var_48_object, 500);
}


// @pe
void func_2244(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2250(bool var_310_bool)
{
	int var_312_int;
	func_2135(var_312_int, "k3q03");
	if(var_312_int == 1000)
		var_310_bool = true;
	var_310_bool = false;
}


void func_206(object var_0_object, int var_409_int, object var_410_object)
{
	var_0_object = var_410_object;
	bool var_420_bool; object var_421_object;
	object var_422_object;
	func_2119(var_422_object);
	var_422_object = var_421_object;
	func_1946(var_420_bool, var_421_object);
	bool var_423_bool; object var_424_object;
	var_410_object = var_424_object;
	func_1861(var_423_bool, var_424_object, 70.0);
	if(!var_423_bool) { //@nz
		var_409_int = -2;
		return 8;
	}
	object var_416_object;
	@CreateDialog(var_416_object);
	int var_427_int;
	func_2200(var_427_int);
	var_416_object->SetNPCName(var_427_int);
	int var_428_int;
	func_2198(var_428_int);
	var_416_object->SetNPCDescription(var_428_int);
	string var_429_string;
	func_2202(var_429_string);
	var_416_object->SetPhoto(var_429_string);
	string var_430_string;
	func_2204(var_430_string);
	var_416_object->SetPhoto2(var_430_string);
	int var_431_int;
	func_2376(var_431_int);
	var_416_object->SetPlayerName(var_431_int);
	bool var_417_bool;
	@IsOverrideActive(var_417_bool);
	if(var_417_bool != 0) {
		var_409_int = -2;
		return 8;
	}
	@DoDialog(var_416_object);
	object var_433_object; object var_434_object;
	var_410_object = var_433_object;
	var_416_object = var_434_object;
	TaskCall(4);
	func_287(var_435_object, var_436_object, var_437_string, var_438_bool, var_433_object, var_434_object);
	TaskReturn();
	bool var_419_bool;
	var_416_object->IsDialogEnd(var_419_bool);
	
	for(;;) {
		var_486_bool = !var_419_bool; //@nz
		if(var_486_bool == 0) goto Label_276;
		@sync();
		var_416_object->IsDialogEnd(var_419_bool);
	}
	
Label_276:
	object var_487_object;
	var_410_object = var_487_object;
	func_1929();
	@StopDialog(var_416_object);
	var_416_object->GetReturnValue(-1);
	int var_418_int = var_409_int;
}
EMIT "Stack[-4] = 0";


void func_2004(bool var_77_bool, object var_78_object)
{
	string var_84_string; bool var_86_bool; int var_87_int; string var_88_string;
	var_84_string = "c";
	int var_85_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_78_object->HasProperty((var_84_string + (var_85_int + 1)), var_86_bool);
			if(!var_86_bool) { //@nz
			} else {
				var_85_int += 1;
			}
		}
		if(!var_85_int) { //@nz
			var_77_bool = false;
			return 10;
		}
		var_87_int = 0;
		if(var_85_int > 1)
			@irand(var_87_int, var_85_int);
		var_78_object->GetProperty((var_84_string + (var_87_int + 1)), var_88_string);
		bool var_100_bool; string var_101_string;
		var_88_string = var_101_string;
		func_2097(var_100_bool, var_101_string);
		var_100_bool = var_77_bool;
		return 10;

	}
}


// @pe
void func_2262(bool var_318_bool)
{
	int var_320_int;
	func_2135(var_320_int, "ook3Viktor1");
	if(var_320_int == 0) {
		var_318_bool = true;
		return 0;
	}
	var_318_bool = false;
}


void func_1754(object var_0_object, object var_1_object, object var_2_object)
{
	@GetPosition(var_1_object);
	@GetDirection(var_2_object);
	var_0_object = false;
	bool var_34_bool;
	func_1856(var_34_bool);
	if(!var_34_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
		func_1782(var_30_bool, var_31_cvector, var_32_cvector);
	}
	for(;;) {
		func_2084("Neutral");
		@lshWaitForAnimEnd();
	}
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


void func_989(object var_0_object, int var_490_int, object var_491_object)
{
	var_0_object = var_491_object;
	bool var_501_bool; object var_502_object;
	object var_503_object;
	func_2119(var_503_object);
	var_503_object = var_502_object;
	func_1946(var_501_bool, var_502_object);
	bool var_504_bool; object var_505_object;
	var_491_object = var_505_object;
	func_1861(var_504_bool, var_505_object, 70.0);
	if(!var_504_bool) { //@nz
		var_490_int = -2;
		return 8;
	}
	object var_497_object;
	@CreateDialog(var_497_object);
	int var_508_int;
	func_2200(var_508_int);
	var_497_object->SetNPCName(var_508_int);
	int var_509_int;
	func_2198(var_509_int);
	var_497_object->SetNPCDescription(var_509_int);
	string var_510_string;
	func_2202(var_510_string);
	var_497_object->SetPhoto(var_510_string);
	string var_511_string;
	func_2204(var_511_string);
	var_497_object->SetPhoto2(var_511_string);
	int var_512_int;
	func_2376(var_512_int);
	var_497_object->SetPlayerName(var_512_int);
	bool var_498_bool;
	@IsOverrideActive(var_498_bool);
	if(var_498_bool != 0) {
		var_490_int = -2;
		return 8;
	}
	@DoDialog(var_497_object);
	object var_514_object; object var_515_object;
	var_491_object = var_514_object;
	var_497_object = var_515_object;
	TaskCall(8);
	func_1070(var_516_object, var_517_object, var_518_string, var_519_bool, var_514_object, var_515_object);
	TaskReturn();
	bool var_500_bool;
	var_497_object->IsDialogEnd(var_500_bool);
	
	for(;;) {
		var_547_bool = !var_500_bool; //@nz
		if(var_547_bool == 0) goto Label_1059;
		@sync();
		var_497_object->IsDialogEnd(var_500_bool);
	}
	
Label_1059:
	object var_548_object;
	var_491_object = var_548_object;
	func_1929();
	@StopDialog(var_497_object);
	var_497_object->GetReturnValue(-1);
	int var_499_int = var_490_int;
}
EMIT "Stack[-4] = 0";


void func_1248(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	object var_282_object;
	func_2119(var_282_object);
	var_282_object = var_281_object;
	func_1946(var_280_bool, var_281_object);
	bool var_283_bool; object var_284_object;
	var_270_object = var_284_object;
	func_1861(var_283_bool, var_284_object, 70.0);
	if(!var_283_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_287_int;
	func_2200(var_287_int);
	var_276_object->SetNPCName(var_287_int);
	int var_288_int;
	func_2198(var_288_int);
	var_276_object->SetNPCDescription(var_288_int);
	string var_289_string;
	func_2202(var_289_string);
	var_276_object->SetPhoto(var_289_string);
	string var_290_string;
	func_2204(var_290_string);
	var_276_object->SetPhoto2(var_290_string);
	int var_291_int;
	func_2376(var_291_int);
	var_276_object->SetPlayerName(var_291_int);
	bool var_277_bool;
	@IsOverrideActive(var_277_bool);
	if(var_277_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	@DoDialog(var_276_object);
	object var_293_object; object var_294_object;
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(10);
	func_1329(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_338_bool = !var_279_bool; //@nz
		if(var_338_bool == 0) goto Label_1318;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_1318:
	object var_339_object;
	var_270_object = var_339_object;
	func_1929();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2274(bool var_451_bool)
{
	int var_453_int;
	func_2135(var_453_int, "k10q01");
	if(var_453_int == 1)
		var_451_bool = true;
	var_451_bool = false;
}


// @pe
void func_2286(bool var_457_bool)
{
	int var_459_int;
	func_2135(var_459_int, "ook10Viktor1");
	if(var_459_int == 0) {
		var_457_bool = true;
		return 0;
	}
	var_457_bool = false;
}


void func_1782(object var_0_object, object var_1_object, object var_2_object)
{
	@SetPosition(var_1_object);
	@SetDirection(var_2_object);
	var_0_object = false;
	@LockAnimation("all", "stand", 0);
}


void func_2041(bool var_108_bool, object var_109_object)
{
	bool var_117_bool; int var_118_int; string var_119_string;
	int var_121_int;
	func_2183(var_121_int);
	string var_115_string = ("d" + var_121_int) + "m";
	int var_116_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_109_object->HasProperty((var_115_string + (var_116_int + 1)), var_117_bool);
			if(!var_117_bool) { //@nz
			} else {
				var_116_int += 1;
			}
		}
		if(!var_116_int) { //@nz
			var_108_bool = false;
			return 10;
		}
		var_118_int = 0;
		if(var_116_int > 1)
			@irand(var_118_int, var_116_int);
		var_109_object->GetProperty((var_115_string + (var_118_int + 1)), var_119_string);
		bool var_140_bool; string var_141_string;
		var_119_string = var_141_string;
		func_2097(var_140_bool, var_141_string);
		var_140_bool = var_108_bool;
		return 10;

	}
}


// @pe
void func_2298(bool var_464_bool)
{
	int var_466_int;
	func_2135(var_466_int, "k10q01");
	if(var_466_int == 2)
		var_464_bool = true;
	var_464_bool = false;
}


// @pe
void func_766(object var_2_object, string var_373_string)
{
	bool var_374_bool;
	func_2206(var_374_bool);
	if(!var_374_bool) //@nz
		return 0;
	if(var_373_string == var_2_object)
		return 0;
	string var_377_string; bool var_378_bool;
	var_373_string = var_377_string;
	if(var_373_string == "")
		var_378_bool = false;
	else
		var_378_bool = true;
	func_2091(var_377_string, var_378_bool);
	var_2_object = var_373_string;
	
}


