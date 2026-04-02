// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2145();
			if(var_27_cvector == 31849) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2274();
			}
			if(var_26_bool == 31845) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530479); //@t
				var_0_object->ClearReplies(); //@t
				bool var_74_bool;
				func_2295(var_1_object);
				if(var_74_bool != 0)
					var_0_object->AddReply(530480, 32848, 31846); //@t
				var_0_object->AddReply(530481, -1, 31847); //@t
				return 0;
			}
			if(var_26_bool == 32848) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(531491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531493, 31848, 32850); //@t
				var_0_object->AddReply(531492, 31848, 32849); //@t
				return 0;
			}
			if(var_26_bool == 31848) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531494, 32853, 32852); //@t
				return 0;
			}
			if(var_26_bool == 32853) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(531495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530483, -1, 31849); //@t
				return 0;
			}
			var_3_string = true;
			bool var_112_bool;
			func_2243(var_112_bool);
			if(var_112_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2145();
			if(var_27_cvector == 36924) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2289();
			}
			if(var_26_bool == 36923) {
				func_442(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535248); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_2307(var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(535249, 37070, 36924); //@t
				var_0_object->AddReply(535387, -1, 37072); //@t
				var_0_object->AddReply(535388, -1, 37073); //@t
				return 0;
			}
			if(var_26_bool == 37070) {
				func_442(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535385); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535386, 37074, 37071); //@t
				return 0;
			}
			if(var_26_bool == 37074) {
				func_442(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535390, 37076, 37075); //@t
				var_0_object->AddReply(535393, -1, 37078); //@t
				return 0;
			}
			if(var_26_bool == 37076) {
				func_442(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535392, 37079, 37077); //@t
				var_0_object->AddReply(535396, -1, 37081); //@t
				var_0_object->AddReply(535397, -1, 37082); //@t
				return 0;
			}
			if(var_26_bool == 37079) {
				func_442(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535394); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535395, -1, 37080); //@t
				var_0_object->AddReply(535398, -1, 37083); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_2243(var_108_bool);
			if(var_108_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d1";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2145();
			if(var_27_cvector == 19687) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2245();
			}
			if(var_27_cvector == 19689) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_2245();
			}
			if(var_27_cvector == 19693) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_2268();
			}
			if(var_26_bool == 19678) {
				bool var_91_bool;
				func_2319(var_1_object);
				if(var_91_bool != 0) {
					object var_99_object; object var_100_object;
					var_99_object = var_1_object;
					var_100_object = var_0_object;
					func_2262();
					object var_103_object; object var_104_object;
					var_103_object = var_1_object;
					var_104_object = var_0_object;
					func_2283();
					func_814(var_27_cvector, "Azart");
					var_0_object->SetMessage(518568); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518572, 20064, 19682); //@t
					var_0_object->AddReply(518950, 20062, 20061); //@t
					return 0;
				}
				func_814(var_27_cvector, "Secret");
				var_0_object->SetMessage(518573); //@t
				var_0_object->ClearReplies(); //@t
				bool var_128_bool;
				func_2331(var_1_object);
				if(var_128_bool != 0)
					var_0_object->AddReply(518574, 19688, 19684); //@t
				bool var_137_bool = false;
				bool var_138_bool;
				func_2343(var_1_object);
				if(var_138_bool != 0) {
					bool var_144_bool;
					func_2355(var_1_object);
					if(var_144_bool != 0)
						var_137_bool = true;
				}
				if(var_137_bool != 0)
					var_0_object->AddReply(518586, 19694, 19693); //@t
				var_0_object->AddReply(518575, -1, 19685); //@t
				return 0;
			}
			if(var_26_bool == 19694) {
				func_814(var_27_cvector, "Azart");
				var_0_object->SetMessage(518587); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518588, 20052, 19695); //@t
				var_0_object->AddReply(518942, 20054, 20053); //@t
				return 0;
			}
			if(var_26_bool == 20054) {
				var_0_object->SetMessage(518943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518944, 20057, 20055); //@t
				var_0_object->AddReply(518945, -1, 20056); //@t
				return 0;
			}
			if(var_26_bool == 20057) {
				func_814(var_27_cvector, "Serious");
				var_0_object->SetMessage(518946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518947, -1, 20058); //@t
				var_0_object->AddReply(518948, -1, 20059); //@t
				return 0;
			}
			if(var_26_bool == 20052) {
				func_814(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518949, -1, 20060); //@t
				return 0;
			}
			if(var_26_bool == 19688) {
				func_814(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518582, -1, 19689); //@t
				return 0;
			}
			if(var_26_bool == 20062) {
				var_0_object->SetMessage(518951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518952, 20069, 20063); //@t
				return 0;
			}
			if(var_26_bool == 20064) {
				func_814(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518954, 20066, 20065); //@t
				return 0;
			}
			if(var_26_bool == 20066) {
				func_814(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518956, 20069, 20067); //@t
				var_0_object->AddReply(518957, -1, 20068); //@t
				return 0;
			}
			if(var_26_bool == 20069) {
				func_814(var_27_cvector, "Secret");
				var_0_object->SetMessage(518958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518959, 19686, 20071); //@t
				var_0_object->AddReply(518960, -1, 20072); //@t
				return 0;
			}
			if(var_26_bool == 19686) {
				func_814(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518580, -1, 19687); //@t
				return 0;
			}
			var_3_string = true;
			bool var_239_bool;
			func_2243(var_239_bool);
			if(var_239_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x345";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2145();
			if(var_26_bool == 22020) {
				func_1297(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520804, 29221, 22021); //@t
				var_0_object->AddReply(527876, 29224, 29223); //@t
				return 0;
			}
			if(var_26_bool == 29224) {
				func_1297(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527878, -1, 29225); //@t
				return 0;
			}
			if(var_26_bool == 29221) {
				func_1297(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527875, -1, 29222); //@t
				return 0;
			}
			var_3_string = true;
			bool var_65_bool;
			func_2243(var_65_bool);
			if(var_65_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x528";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2145();
			if(var_26_int == 42563) {
				func_1536(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2243(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x617";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1604(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1675();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1889(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1644(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1624(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2152(var_72_object);
					var_72_object = var_71_object;
					func_2037(var_70_bool, var_71_object);
				}
			} else {
				func_1639(var_26_int);
				func_1666();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1857();
		func_1675();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_1675();
		func_2117("Neutral");
		func_1666();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1666();
		else
			func_2117("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1857();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1880(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2481(var_44_object);
			func_2117("Neutral");
			func_1675();
			func_1666();
		}
	}

}


// @pe
void func_1536(object var_2_object, string var_532_string)
{
	bool var_533_bool;
	func_2243(var_533_bool);
	if(!var_533_bool) //@nz
		return 0;
	if(var_532_string == var_2_object)
		return 0;
	string var_536_string; bool var_537_bool;
	var_532_string = var_536_string;
	if(var_532_string == "")
		var_537_bool = false;
	else
		var_537_bool = true;
	func_2124(var_536_string, var_537_bool);
	var_2_object = var_532_string;
	
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_1889(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


// @pe
void func_2307(bool var_476_bool)
{
	int var_478_int;
	func_2168(var_478_int, "oob12Spi4ka1");
	if(var_478_int == 0) {
		var_476_bool = true;
		return 0;
	}
	var_476_bool = false;
}


void func_13(object var_0_object, int var_372_int, object var_373_object)
{
	var_0_object = var_373_object;
	bool var_383_bool; object var_384_object;
	object var_385_object;
	func_2152(var_385_object);
	var_385_object = var_384_object;
	func_1979(var_383_bool, var_384_object);
	bool var_386_bool; object var_387_object;
	var_373_object = var_387_object;
	func_1894(var_386_bool, var_387_object, 70.0);
	if(!var_386_bool) { //@nz
		var_372_int = -2;
		return 8;
	}
	object var_379_object;
	@CreateDialog(var_379_object);
	int var_390_int;
	func_2237(var_390_int);
	var_379_object->SetNPCName(var_390_int);
	int var_391_int;
	func_2235(var_391_int);
	var_379_object->SetNPCDescription(var_391_int);
	string var_392_string;
	func_2239(var_392_string);
	var_379_object->SetPhoto(var_392_string);
	string var_393_string;
	func_2241(var_393_string);
	var_379_object->SetPhoto2(var_393_string);
	int var_394_int;
	func_2447(var_394_int);
	var_379_object->SetPlayerName(var_394_int);
	bool var_380_bool;
	@IsOverrideActive(var_380_bool);
	if(var_380_bool != 0) {
		var_372_int = -2;
		return 8;
	}
	@DoDialog(var_379_object);
	object var_396_object; object var_397_object;
	var_373_object = var_396_object;
	var_379_object = var_397_object;
	TaskCall(2);
	func_94(var_398_object, var_399_object, var_400_string, var_401_bool, var_396_object, var_397_object);
	TaskReturn();
	bool var_382_bool;
	var_379_object->IsDialogEnd(var_382_bool);
	
	for(;;) {
		var_432_bool = !var_382_bool; //@nz
		if(var_432_bool == 0) goto Label_83;
		@sync();
		var_379_object->IsDialogEnd(var_382_bool);
	}
	
Label_83:
	object var_433_object;
	var_373_object = var_433_object;
	func_1962();
	@StopDialog(var_379_object);
	var_379_object->GetReturnValue(-1);
	int var_381_int = var_372_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2319(bool var_299_bool)
{
	int var_301_int;
	func_2168(var_301_int, "oob4Spi4ka1");
	if(var_301_int == 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


// @pe
void func_1297(object var_2_object, string var_223_string)
{
	bool var_224_bool;
	func_2243(var_224_bool);
	if(!var_224_bool) //@nz
		return 0;
	if(var_223_string == var_2_object)
		return 0;
	string var_227_string; bool var_228_bool;
	var_223_string = var_227_string;
	if(var_223_string == "")
		var_228_bool = false;
	else
		var_228_bool = true;
	func_2124(var_227_string, var_228_bool);
	var_2_object = var_223_string;
	
}


void func_2074(bool var_103_bool, object var_104_object)
{
	bool var_112_bool; int var_113_int; string var_114_string;
	int var_116_int;
	func_2196(var_116_int);
	string var_110_string = ("d" + var_116_int) + "m";
	int var_111_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_104_object->HasProperty((var_110_string + (var_111_int + 1)), var_112_bool);
			if(!var_112_bool) { //@nz
			} else {
				var_111_int += 1;
			}
		}
		if(!var_111_int) { //@nz
			var_103_bool = false;
			return 10;
		}
		var_113_int = 0;
		if(var_111_int > 1)
			@irand(var_113_int, var_111_int);
		var_104_object->GetProperty((var_110_string + (var_113_int + 1)), var_114_string);
		bool var_135_bool; string var_136_string;
		var_114_string = var_136_string;
		func_2130(var_135_bool, var_136_string);
		var_135_bool = var_103_bool;
		return 10;

	}
}


// @pe
void func_2331(bool var_340_bool)
{
	int var_342_int;
	func_2168(var_342_int, "b4q02");
	if(var_342_int == 0) {
		var_340_bool = true;
		return 0;
	}
	var_340_bool = false;
}


void func_293(object var_0_object, int var_436_int, object var_437_object)
{
	var_0_object = var_437_object;
	bool var_447_bool; object var_448_object;
	object var_449_object;
	func_2152(var_449_object);
	var_449_object = var_448_object;
	func_1979(var_447_bool, var_448_object);
	bool var_450_bool; object var_451_object;
	var_437_object = var_451_object;
	func_1894(var_450_bool, var_451_object, 70.0);
	if(!var_450_bool) { //@nz
		var_436_int = -2;
		return 8;
	}
	object var_443_object;
	@CreateDialog(var_443_object);
	int var_454_int;
	func_2237(var_454_int);
	var_443_object->SetNPCName(var_454_int);
	int var_455_int;
	func_2235(var_455_int);
	var_443_object->SetNPCDescription(var_455_int);
	string var_456_string;
	func_2239(var_456_string);
	var_443_object->SetPhoto(var_456_string);
	string var_457_string;
	func_2241(var_457_string);
	var_443_object->SetPhoto2(var_457_string);
	int var_458_int;
	func_2447(var_458_int);
	var_443_object->SetPlayerName(var_458_int);
	bool var_444_bool;
	@IsOverrideActive(var_444_bool);
	if(var_444_bool != 0) {
		var_436_int = -2;
		return 8;
	}
	@DoDialog(var_443_object);
	object var_460_object; object var_461_object;
	var_437_object = var_460_object;
	var_443_object = var_461_object;
	TaskCall(4);
	func_374(var_462_object, var_463_object, var_464_string, var_465_bool, var_460_object, var_461_object);
	TaskReturn();
	bool var_446_bool;
	var_443_object->IsDialogEnd(var_446_bool);
	
	for(;;) {
		var_499_bool = !var_446_bool; //@nz
		if(var_499_bool == 0) goto Label_363;
		@sync();
		var_443_object->IsDialogEnd(var_446_bool);
	}
	
Label_363:
	object var_500_object;
	var_437_object = var_500_object;
	func_1962();
	@StopDialog(var_443_object);
	var_443_object->GetReturnValue(-1);
	int var_445_int = var_436_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2343(bool var_350_bool)
{
	int var_352_int;
	func_2168(var_352_int, "oob4Spi4ka2");
	if(var_352_int == 0) {
		var_350_bool = true;
		return 0;
	}
	var_350_bool = false;
}


// @pe
void func_814(object var_2_object, string var_315_string)
{
	bool var_316_bool;
	func_2243(var_316_bool);
	if(!var_316_bool) //@nz
		return 0;
	if(var_315_string == var_2_object)
		return 0;
	string var_319_string; bool var_320_bool;
	var_315_string = var_319_string;
	if(var_315_string == "")
		var_320_bool = false;
	else
		var_320_bool = true;
	func_2124(var_319_string, var_320_bool);
	var_2_object = var_315_string;
	
}


// @pe
void func_2355(bool var_356_bool)
{
	int var_358_int;
	func_2168(var_358_int, "b4q02");
	if(var_358_int == 1000)
		var_356_bool = true;
	var_356_bool = false;
}


void func_2367(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 557, 2, 530536);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_2419(var_41_bool, var_42_object, 548);
}
EMIT "Stack[-1] = 0";


void func_1855(bool var_78_bool)
{
	var_78_bool = true;
}


void func_1857(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1604(object var_0_object)
{
	bool var_26_bool;
	func_1889(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1732();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1786();
	}
}
EMIT "Return(); Pop(0)";


void func_2117(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


void func_1862(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2124(string var_227_string, bool var_228_bool)
{
	float var_233_float; float var_234_float;
	@lshGetAnimTimes(var_227_string, var_233_float, var_234_float);
	@lshPlayAnimation(var_233_float, var_234_float, var_228_bool);
}


void func_2380(void)
{
	object var_35_object;
	@CreateDiaryEntry(var_35_object, 213, 2, 518576);
	bool var_39_bool; object var_40_object;
	var_35_object = var_40_object;
	func_2419(var_39_bool, var_40_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1870(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


void func_2130(bool var_95_bool, string var_96_string)
{
	bool var_98_bool;
	bool var_99_bool;
	func_2243(var_99_bool);
	if(var_99_bool != 0) {
		@lshHasSpeech(var_98_bool, var_96_string);
		if(var_98_bool != 0) {
			@lshPlaySpeech(var_96_string);
			var_95_bool = true;
		}
	}
	var_95_bool = false;
}


void func_1880(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1870(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_1624(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1880(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_2393(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 214, 2, 518577);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_2419(var_62_bool, var_63_object, 213);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_396_object, object var_397_object)
{
	var_0_object = var_397_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_397_object, "Neutral");
		var_0_object->SetMessage(530479); //@t
		var_0_object->ClearReplies(); //@t
		bool var_412_bool;
		func_2295(var_396_object);
		if(var_412_bool != 0)
			var_0_object->AddReply(530480, 32848, 31846); //@t
		var_0_object->AddReply(530481, -1, 31847); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_424_bool;
	func_2243(var_424_bool);
	if(var_424_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2117(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_1889(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_2145(void)
{
	bool var_29_bool;
	func_2243(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_1894(bool var_156_bool, object var_157_object, float var_158_float)
{
	cvector var_169_cvector; bool var_176_bool;
	var_157_object->GetPosition(var_169_cvector);
	float var_168_float;
	var_157_object->GetEyesHeight(var_168_float);
	var_177_float = GetByIndex(var_169_cvector, 1);
	SetByIndex(var_169_cvector, 1) = (var_177_float + var_168_float);
	cvector var_170_cvector;
	@GetPosition(var_170_cvector);
	@GetEyesHeight(var_168_float);
	var_178_float = GetByIndex(var_170_cvector, 1);
	SetByIndex(var_170_cvector, 1) = (var_178_float + var_168_float);
	cvector var_171_cvector = var_169_cvector - var_170_cvector;
	var_179_float = GetByIndex(var_171_cvector, 1);
	SetByIndex(var_171_cvector, 1) = (float)0;
	var_181_float = sqrt(var_171_cvector | var_171_cvector);
	var_171_cvector /= var_181_float;
	cvector var_172_cvector = -var_171_cvector;
	cvector var_183_cvector;
	func_2158(var_183_cvector, (var_172_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_173_cvector = ((var_171_cvector * var_158_float) + (var_183_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_175_bool;
	@IsOverrideActive(var_175_bool);
	if(var_175_bool != 0)
		var_156_bool = false;
	@StopWorld();
	@CameraTransit((var_170_cvector + var_173_cvector), var_172_cvector);
	var_196_float = GetByIndex(var_173_cvector, 0);
	var_197_float = GetByIndex(var_173_cvector, 2);
	@Rotate(var_196_float, var_197_float);
	bool var_198_bool;
	func_2243(var_198_bool);
	if(var_198_bool != 0) {
	} else {
		@HasAnimationTrack(var_176_bool, "head");
		if(var_176_bool == 0) goto Label_1956;
		@LookAsyncCamera("head");
	}
Label_1956:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_156_bool = true;
	
}


void func_1639(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2152(object var_63_object)
{
	object var_65_object;
	@self(var_65_object);
	var_65_object = var_63_object;
}
EMIT "Stack[-1] = 0";


void func_2406(object var_48_object)
{
	object var_50_object;
	@GetDiaryRoot(var_50_object);
	if(!var_50_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_48_object = false;
	}
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_616(object var_0_object, int var_268_int, object var_269_object)
{
	var_0_object = var_269_object;
	bool var_279_bool; object var_280_object;
	object var_281_object;
	func_2152(var_281_object);
	var_281_object = var_280_object;
	func_1979(var_279_bool, var_280_object);
	bool var_282_bool; object var_283_object;
	var_269_object = var_283_object;
	func_1894(var_282_bool, var_283_object, 70.0);
	if(!var_282_bool) { //@nz
		var_268_int = -2;
		return 8;
	}
	object var_275_object;
	@CreateDialog(var_275_object);
	int var_286_int;
	func_2237(var_286_int);
	var_275_object->SetNPCName(var_286_int);
	int var_287_int;
	func_2235(var_287_int);
	var_275_object->SetNPCDescription(var_287_int);
	string var_288_string;
	func_2239(var_288_string);
	var_275_object->SetPhoto(var_288_string);
	string var_289_string;
	func_2241(var_289_string);
	var_275_object->SetPhoto2(var_289_string);
	int var_290_int;
	func_2447(var_290_int);
	var_275_object->SetPlayerName(var_290_int);
	bool var_276_bool;
	@IsOverrideActive(var_276_bool);
	if(var_276_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	@DoDialog(var_275_object);
	object var_292_object; object var_293_object;
	var_269_object = var_292_object;
	var_275_object = var_293_object;
	TaskCall(6);
	func_697(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	bool var_278_bool;
	var_275_object->IsDialogEnd(var_278_bool);
	
	for(;;) {
		var_368_bool = !var_278_bool; //@nz
		if(var_368_bool == 0) goto Label_686;
		@sync();
		var_275_object->IsDialogEnd(var_278_bool);
	}
	
Label_686:
	object var_369_object;
	var_269_object = var_369_object;
	func_1962();
	@StopDialog(var_275_object);
	var_275_object->GetReturnValue(-1);
	int var_277_int = var_268_int;
}
EMIT "Stack[-4] = 0";


void func_1644(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1862(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2158(cvector var_183_cvector, cvector var_184_cvector)
{
	float var_187_float = sqrt(var_184_cvector | var_184_cvector);
	if(var_187_float < 0.000001)
		var_183_cvector = [0.0, 0.0, 0.0];
	var_183_cvector = var_184_cvector / var_187_float;
}


void func_2419(bool var_39_bool, object var_40_object, int var_41_int)
{
	object var_48_object;
	func_2406(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	object var_46_object;
	var_45_object->Find(var_41_int, var_46_object);
	if(!var_46_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_41_int);
		var_39_bool = false;
	}
	var_46_object->AddChild(var_40_object);
	@SendWorldWndMessage(7);
	int var_47_int;
	var_40_object->GetCategory(var_47_int);
	@SetDiarySection(var_47_int);
	var_39_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1397(object var_0_object, int var_501_int, object var_502_object)
{
	var_0_object = var_502_object;
	bool var_512_bool; object var_513_object;
	object var_514_object;
	func_2152(var_514_object);
	var_514_object = var_513_object;
	func_1979(var_512_bool, var_513_object);
	bool var_515_bool; object var_516_object;
	var_502_object = var_516_object;
	func_1894(var_515_bool, var_516_object, 70.0);
	if(!var_515_bool) { //@nz
		var_501_int = -2;
		return 8;
	}
	object var_508_object;
	@CreateDialog(var_508_object);
	int var_519_int;
	func_2237(var_519_int);
	var_508_object->SetNPCName(var_519_int);
	int var_520_int;
	func_2235(var_520_int);
	var_508_object->SetNPCDescription(var_520_int);
	string var_521_string;
	func_2239(var_521_string);
	var_508_object->SetPhoto(var_521_string);
	string var_522_string;
	func_2241(var_522_string);
	var_508_object->SetPhoto2(var_522_string);
	int var_523_int;
	func_2447(var_523_int);
	var_508_object->SetPlayerName(var_523_int);
	bool var_509_bool;
	@IsOverrideActive(var_509_bool);
	if(var_509_bool != 0) {
		var_501_int = -2;
		return 8;
	}
	@DoDialog(var_508_object);
	object var_525_object; object var_526_object;
	var_502_object = var_525_object;
	var_508_object = var_526_object;
	TaskCall(10);
	func_1478(var_527_object, var_528_object, var_529_string, var_530_bool, var_525_object, var_526_object);
	TaskReturn();
	bool var_511_bool;
	var_508_object->IsDialogEnd(var_511_bool);
	
	for(;;) {
		var_555_bool = !var_511_bool; //@nz
		if(var_555_bool == 0) goto Label_1467;
		@sync();
		var_508_object->IsDialogEnd(var_511_bool);
	}
	
Label_1467:
	object var_556_object;
	var_502_object = var_556_object;
	func_1962();
	@StopDialog(var_508_object);
	var_508_object->GetReturnValue(-1);
	int var_510_int = var_501_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_374(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_460_object, object var_461_object)
{
	var_0_object = var_461_object;
	var_3_string = false;
	if(1 != 0) {
		func_442(var_461_object, "Neutral");
		var_0_object->SetMessage(535248); //@t
		var_0_object->ClearReplies(); //@t
		bool var_476_bool;
		func_2307(var_460_object);
		if(var_476_bool != 0)
			var_0_object->AddReply(535249, 37070, 36924); //@t
		var_0_object->AddReply(535387, -1, 37072); //@t
		var_0_object->AddReply(535388, -1, 37073); //@t
		goto Label_412;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17a";
	}
Label_412:
	bool var_491_bool;
	func_2243(var_491_bool);
	if(var_491_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2117(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_441;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_441:
		return 0;

	}
	
}


void func_2168(int var_301_int, string var_302_string)
{
	int var_304_int;
	@GetVariable(var_302_string, var_304_int);
	var_304_int = var_301_int;
}


void func_2173(object var_65_object, string var_66_string)
{
	object var_69_object;
	@GetMainOutdoorScene(var_69_object);
	object var_70_object;
	@AddBlankActor(var_70_object, var_69_object, var_66_string, (var_66_string + ".bin"));
	var_70_object = var_65_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1666(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


void func_1158(object var_0_object, int var_50_int, object var_51_object)
{
	var_0_object = var_51_object;
	bool var_61_bool; object var_62_object;
	object var_63_object;
	func_2152(var_63_object);
	var_63_object = var_62_object;
	func_1979(var_61_bool, var_62_object);
	bool var_156_bool; object var_157_object;
	var_51_object = var_157_object;
	func_1894(var_156_bool, var_157_object, 70.0);
	if(!var_156_bool) { //@nz
		var_50_int = -2;
		return 8;
	}
	object var_57_object;
	@CreateDialog(var_57_object);
	int var_203_int;
	func_2237(var_203_int);
	var_57_object->SetNPCName(var_203_int);
	int var_204_int;
	func_2235(var_204_int);
	var_57_object->SetNPCDescription(var_204_int);
	string var_205_string;
	func_2239(var_205_string);
	var_57_object->SetPhoto(var_205_string);
	string var_206_string;
	func_2241(var_206_string);
	var_57_object->SetPhoto2(var_206_string);
	int var_207_int;
	func_2447(var_207_int);
	var_57_object->SetPlayerName(var_207_int);
	bool var_58_bool;
	@IsOverrideActive(var_58_bool);
	if(var_58_bool != 0) {
		var_50_int = -2;
		return 8;
	}
	@DoDialog(var_57_object);
	object var_216_object; object var_217_object;
	var_51_object = var_216_object;
	var_57_object = var_217_object;
	TaskCall(8);
	func_1239(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object);
	TaskReturn();
	bool var_60_bool;
	var_57_object->IsDialogEnd(var_60_bool);
	
	for(;;) {
		var_255_bool = !var_60_bool; //@nz
		if(var_255_bool == 0) goto Label_1228;
		@sync();
		var_57_object->IsDialogEnd(var_60_bool);
	}
	
Label_1228:
	object var_256_object;
	var_51_object = var_256_object;
	func_1962();
	@StopDialog(var_57_object);
	var_57_object->GetReturnValue(-1);
	int var_59_int = var_50_int;
}
EMIT "Stack[-4] = 0";


void func_2184(bool var_73_bool, string var_74_string, string var_75_string)
{
	object var_77_object;
	@FindActor(var_77_object, var_74_string);
	if(var_77_object == null)
		var_73_bool = false;
	@Trigger(var_77_object, var_75_string);
	var_73_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1675(void)
{
	@KillTimer(10);
}


void func_2447(int var_207_int)
{
	int var_209_int;
	@GetVariable("branch", var_209_int);
	if(var_209_int == 0) {
		var_207_int = 1;
		return 2;
	EMIT "GOTO 0x99e";
	}
	if(var_209_int == 1) {
		var_207_int = 2;
		return 2;
	}
	var_207_int = 3;
}


void func_2196(int var_116_int)
{
	float var_118_float;
	@GetGameTime(var_118_float);
	var_116_int = 1 + (var_118_float / 24);
}


// @pe
void func_2205(bool var_265_bool, int var_266_int)
{
	int var_267_int;
	func_2196(var_267_int);
	var_265_bool = var_267_int == var_266_int;
}


// @pe
void func_157(object var_2_object, string var_403_string)
{
	bool var_404_bool;
	func_2243(var_404_bool);
	if(!var_404_bool) //@nz
		return 0;
	if(var_403_string == var_2_object)
		return 0;
	string var_407_string; bool var_408_bool;
	var_403_string = var_407_string;
	if(var_403_string == "")
		var_408_bool = false;
	else
		var_408_bool = true;
	func_2124(var_407_string, var_408_bool);
	var_2_object = var_403_string;
	
}


void func_2464(object var_45_object)
{
	int var_47_int;
	@GetVariable("mt_spi4ka", var_47_int);
	if(!var_47_int) { //@nz
		int var_50_int; object var_51_object;
		var_45_object = var_51_object;
		TaskCall(7);
		func_1158(var_52_object, var_50_int, var_51_object);
		TaskReturn();
		@SetVariable("mt_spi4ka", 1);
	}
}


void func_2211(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_1962(void)
{
	bool var_258_bool;
	@CameraSwitchToNormal();
	bool var_259_bool;
	func_2243(var_259_bool);
	if(var_259_bool != 0) {
	} else {
		@HasAnimationTrack(var_258_bool, "head");
		if(var_258_bool == 0) goto Label_1978;
		@UnlookAsync("head");
	}
Label_1978:
	
}


void func_2218(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_2211(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


// @pe
void func_2481(object var_44_object)
{
	object var_45_object;
	var_44_object = var_45_object;
	func_2464(var_45_object);
	bool var_265_bool;
	func_2205(var_265_bool, 4);
	if(var_265_bool != 0) {
		int var_268_int; object var_269_object;
		var_44_object = var_269_object;
		TaskCall(5);
		func_616(var_270_object, var_268_int, var_269_object);
		TaskReturn();
		return 0;
	}
	bool var_370_bool;
	func_2205(var_370_bool, 10);
	if(var_370_bool != 0) {
		int var_372_int; object var_373_object;
		var_44_object = var_373_object;
		TaskCall(1);
		func_13(var_374_object, var_372_int, var_373_object);
		TaskReturn();
		return 0;
	}
	bool var_434_bool;
	func_2205(var_434_bool, 12);
	if(var_434_bool != 0) {
		int var_436_int; object var_437_object;
		var_44_object = var_437_object;
		TaskCall(3);
		func_293(var_438_object, var_436_int, var_437_object);
		TaskReturn();
		return 0;
	}
	int var_501_int; object var_502_object;
	var_44_object = var_502_object;
	TaskCall(9);
	func_1397(var_503_object, var_501_int, var_502_object);
	TaskReturn();
}


// @pe
void func_697(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_292_object, object var_293_object)
{
	var_0_object = var_293_object;
	var_1_object = var_292_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_299_bool;
		func_2319(var_1_object);
		if(var_299_bool != 0) {
			object var_307_object; object var_308_object;
			var_307_object = var_1_object;
			var_308_object = var_0_object;
			func_2262();
			object var_311_object; object var_312_object;
			var_311_object = var_1_object;
			var_312_object = var_0_object;
			func_2283();
			func_814(var_293_object, "Azart");
			var_0_object->SetMessage(518568); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518572, 20064, 19682); //@t
			var_0_object->AddReply(518950, 20062, 20061); //@t
		} else {
					func_814(var_293_object, "Secret");
					var_0_object->SetMessage(518573); //@t
					var_0_object->ClearReplies(); //@t
					bool var_340_bool;
					func_2331(var_1_object);
					if(var_340_bool != 0)
						var_0_object->AddReply(518574, 19688, 19684); //@t
					bool var_349_bool = false;
					bool var_350_bool;
					func_2343(var_1_object);
					if(var_350_bool != 0) {
						bool var_356_bool;
						func_2355(var_1_object);
						if(var_356_bool != 0)
							var_349_bool = true;
					}
					if(var_349_bool != 0)
						var_0_object->AddReply(518586, 19694, 19693); //@t
					var_0_object->AddReply(518575, -1, 19685); //@t
		}
	}
	for(;;) {
		bool var_330_bool;
		func_2243(var_330_bool);
		if(var_330_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2117(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_813;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_813:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2bd";


// @pe
void func_442(object var_2_object, string var_467_string)
{
	bool var_468_bool;
	func_2243(var_468_bool);
	if(!var_468_bool) //@nz
		return 0;
	if(var_467_string == var_2_object)
		return 0;
	string var_471_string; bool var_472_bool;
	var_467_string = var_471_string;
	if(var_467_string == "")
		var_472_bool = false;
	else
		var_472_bool = true;
	func_2124(var_471_string, var_472_bool);
	var_2_object = var_467_string;
	
}


void func_2235(int var_204_int)
{
	var_204_int = 515552;
}


void func_1979(bool var_61_bool, object var_62_object)
{
	int var_68_int; int var_69_int;
	@GetVariable("voice_common", var_68_int);
	if(var_68_int != 0) {
		bool var_72_bool; object var_73_object;
		var_62_object = var_73_object;
		func_2037(var_72_bool, var_73_object);
		if(!var_72_bool) { //@nz
			bool var_103_bool; object var_104_object;
			var_62_object = var_104_object;
			func_2074(var_103_bool, var_104_object);
			if(!var_103_bool) { //@nz
				var_61_bool = false;
				return 4;
			}
		}
		@irand(var_69_int, 2);
		if(var_69_int != 0)
			@SetVariable("voice_common", ((var_68_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_148_bool; object var_149_object;
		var_62_object = var_149_object;
		func_2074(var_148_bool, var_149_object);
		if(!var_148_bool) { //@nz
			bool var_151_bool; object var_152_object;
			var_62_object = var_152_object;
			func_2037(var_151_bool, var_152_object);
			if(!var_151_bool) { //@nz
				var_61_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2035;
	
Label_2035:
	var_61_bool = true;
	
}


void func_2237(int var_203_int)
{
	var_203_int = 502877;
}


void func_2239(string var_205_string)
{
	var_205_string = "ui/NPC_Spi4ka.png";
}


void func_2241(string var_206_string)
{
	var_206_string = "ui/NPC_Spi4ka_b.png";
}


void func_2243(bool var_99_bool)
{
	var_99_bool = true;
}


// @pe
void func_2245(void)
{
	func_2380();
	func_2393();
	object var_65_object;
	func_2173(var_65_object, "quest_b4_02");
	bool var_73_bool;
	func_2184(var_73_bool, "quest_b4_02", "place_boy");
}


// @pe
void func_1478(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_525_object, object var_526_object)
{
	var_0_object = var_526_object;
	var_1_object = var_525_object;
	var_3_string = false;
	if(1 != 0) {
		func_1536(var_526_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1506;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ca";
	}
Label_1506:
	bool var_547_bool;
	func_2243(var_547_bool);
	if(var_547_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2117(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1535;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1535:
		return 0;

	}
	
}


// @pe
void func_2262(void)
{
	@SetVariable("oob4Spi4ka1", 1);
}


// @pe
void func_1239(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_216_object, object var_217_object)
{
	var_0_object = var_217_object;
	var_1_object = var_216_object;
	var_3_string = false;
	if(1 != 0) {
		func_1297(var_217_object, "Neutral");
		var_0_object->SetMessage(520803); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520804, 29221, 22021); //@t
		var_0_object->AddReply(527876, 29224, 29223); //@t
		goto Label_1267;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4db";
	}
Label_1267:
	bool var_242_bool;
	func_2243(var_242_bool);
	if(var_242_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2117(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1296;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1296:
		return 0;

	}
	
}


// @pe
void func_2268(void)
{
	@SetVariable("oob4Spi4ka2", 1);
}


// @pe
void func_2274(void)
{
	@SetVariable("b10q04Spi4kaTalk", 9);
	func_2367();
}


// @pe
void func_2283(void)
{
	@SetVariable("b4Spi4kaVisit", 1);
}


// @pe
void func_2289(void)
{
	@SetVariable("oob12Spi4ka1", 1);
}


void func_2037(bool var_72_bool, object var_73_object)
{
	string var_79_string; bool var_81_bool; int var_82_int; string var_83_string;
	var_79_string = "c";
	int var_80_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_73_object->HasProperty((var_79_string + (var_80_int + 1)), var_81_bool);
			if(!var_81_bool) { //@nz
			} else {
				var_80_int += 1;
			}
		}
		if(!var_80_int) { //@nz
			var_72_bool = false;
			return 10;
		}
		var_82_int = 0;
		if(var_80_int > 1)
			@irand(var_82_int, var_80_int);
		var_73_object->GetProperty((var_79_string + (var_82_int + 1)), var_83_string);
		bool var_95_bool; string var_96_string;
		var_83_string = var_96_string;
		func_2130(var_95_bool, var_96_string);
		var_95_bool = var_72_bool;
		return 10;

	}
}


// @pe
void func_2295(bool var_412_bool)
{
	int var_414_int;
	func_2168(var_414_int, "b10q04Spi4kaTalk");
	if(var_414_int == 1)
		var_412_bool = true;
	var_412_bool = false;
}


void func_1786(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_1889(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_2218(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_1889(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_2211(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_1841;
			goto Label_1852;
			}
				Label_1841:
					bool var_78_bool;
					func_1855(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_1847;
			}
		}
	Label_1852:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1847:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


