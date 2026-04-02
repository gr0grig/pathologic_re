// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_37_cvector == 35688) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5141();
				object var_85_object = var_1_object;
				func_5463(var_0_object);
			}
			if(var_37_cvector == 38195) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_5141();
				object var_115_object = var_1_object;
				func_5463(var_0_object);
			}
			if(var_36_bool == 35685) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(534092); //@t
				var_0_object->ClearReplies(); //@t
				bool var_132_bool;
				func_5497(var_1_object);
				if(var_132_bool != 0)
					var_0_object->AddReply(534093, 38177, 35686); //@t
				var_0_object->AddReply(536401, -1, 38180); //@t
				var_0_object->AddReply(536402, -1, 38181); //@t
				return 0;
			}
			if(var_36_bool == 38177) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536399, 38179, 38178); //@t
				var_0_object->AddReply(536408, 38190, 38187); //@t
				return 0;
			}
			if(var_36_bool == 38190) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536412, 38192, 38191); //@t
				return 0;
			}
			if(var_36_bool == 38192) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536414, 38189, 38193); //@t
				return 0;
			}
			if(var_36_bool == 38179) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536409, 38189, 38188); //@t
				var_0_object->AddReply(536415, -1, 38195); //@t
				return 0;
			}
			if(var_36_bool == 38189) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536403, 38183, 38182); //@t
				return 0;
			}
			if(var_36_bool == 38183) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536405, 38185, 38184); //@t
				return 0;
			}
			if(var_36_bool == 38185) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536406); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536407, 35687, 38186); //@t
				return 0;
			}
			if(var_36_bool == 35687) {
				func_162(var_37_cvector, "Neutral");
				var_0_object->SetMessage(534094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534095, -1, 35688); //@t
				return 0;
			}
			var_3_string = true;
			bool var_211_bool;
			func_5126(var_211_bool);
			if(var_211_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_36_bool == 36971) {
				func_560(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_36_bool == 36973) {
				func_560(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_36_bool == 36975) {
				func_560(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_5126(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x247";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_37_cvector == 9647) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5230();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_5204();
				object var_97_object = var_1_object;
				func_5254(var_0_object);
			}
			if(var_37_cvector == 9649) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_5230();
			}
			if(var_37_cvector == 9639) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_5230();
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_5204();
				object var_133_object = var_1_object;
				func_5254(var_0_object);
			}
			if(var_37_cvector == 9594) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_5230();
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_5204();
				object var_141_object = var_1_object;
				func_5254(var_0_object);
			}
			if(var_37_cvector == 9963) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_5286();
				object var_161_object = var_1_object;
				func_5134(var_0_object);
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_5198();
				object var_183_object = var_1_object;
				func_5187(var_0_object);
			}
			if(var_37_cvector == 12332) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_5204();
				object var_211_object = var_1_object;
				func_5254(var_0_object);
			}
			if(var_37_cvector == 9684) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_5236();
			}
			if(var_37_cvector == 9672) {
				object var_221_object; object var_222_object;
				var_221_object = var_1_object;
				var_222_object = var_0_object;
				func_5242();
			}
			if(var_37_cvector == 9678) {
				object var_227_object; object var_228_object;
				var_227_object = var_1_object;
				var_228_object = var_0_object;
				func_5242();
			}
			if(var_37_cvector == 9679) {
				object var_231_object; object var_232_object;
				var_231_object = var_1_object;
				var_232_object = var_0_object;
				func_5242();
			}
			if(var_37_cvector == 9667) {
				object var_235_object; object var_236_object;
				var_235_object = var_1_object;
				var_236_object = var_0_object;
				func_5242();
			}
			if(var_37_cvector == 9644) {
				object var_239_object; object var_240_object;
				var_239_object = var_1_object;
				var_240_object = var_0_object;
				func_5248();
			}
			if(var_37_cvector == 9641) {
				object var_245_object; object var_246_object;
				var_245_object = var_1_object;
				var_246_object = var_0_object;
				func_5248();
			}
			if(var_36_bool == 9574) {
				bool var_249_bool = false;
				bool var_250_bool;
				func_5545(var_1_object);
				if(var_250_bool != 0) {
					bool var_258_bool;
					func_5557(var_1_object);
					if(var_258_bool != 0)
						var_249_bool = true;
				}
				if(var_249_bool != 0) {
					object var_264_object; object var_265_object;
					var_264_object = var_1_object;
					var_265_object = var_0_object;
					func_5479();
					func_983(var_37_cvector, "Neutral");
					var_0_object->SetMessage(508737); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(508777, 9633, 9624); //@t
					var_0_object->AddReply(508781, 9629, 9628); //@t
					return 0;
				}
				bool var_287_bool = false;
				bool var_288_bool = false;
				bool var_289_bool;
				func_5617(var_289_bool, var_1_object);
				if(var_289_bool != 0) {
					bool var_298_bool;
					func_5605(var_1_object);
					if(!var_298_bool) //@nz
						var_288_bool = true;
				}
				if(var_288_bool != 0) {
					bool var_305_bool;
					func_5509(var_1_object);
					if(!var_305_bool) //@nz
						var_287_bool = true;
				}
				if(var_287_bool != 0) {
					func_983(var_37_cvector, "Neutral");
					var_0_object->SetMessage(536148); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(536149, 37916, 37914); //@t
					var_0_object->AddReply(536150, 37916, 37915); //@t
					return 0;
				}
				bool var_320_bool = false;
				bool var_321_bool;
				func_5617(var_321_bool, var_1_object);
				if(var_321_bool != 0) {
					bool var_323_bool;
					func_5605(var_1_object);
					if(!var_323_bool) //@nz
						var_320_bool = true;
				}
				if(var_320_bool != 0) {
					func_983(var_37_cvector, "Neutral");
					var_0_object->SetMessage(509078); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509079, 9958, 9957); //@t
					return 0;
				}
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508778); //@t
				var_0_object->ClearReplies(); //@t
				bool var_333_bool;
				func_5545(var_1_object);
				if(var_333_bool != 0)
					var_0_object->AddReply(511141, 12331, 12330); //@t
				bool var_338_bool;
				func_5569(var_1_object);
				if(var_338_bool != 0)
					var_0_object->AddReply(508779, 9681, 9626); //@t
				bool var_347_bool;
				func_5581(var_1_object);
				if(var_347_bool != 0)
					var_0_object->AddReply(508780, 9669, 9627); //@t
				bool var_356_bool = false;
				bool var_357_bool = false;
				bool var_358_bool;
				func_5593(var_1_object);
				if(var_358_bool != 0) {
					bool var_364_bool;
					func_5545(var_1_object);
					if(!var_364_bool) //@nz
						var_357_bool = true;
				}
				if(var_357_bool != 0) {
					bool var_367_bool;
					func_5605(var_1_object);
					if(!var_367_bool) //@nz
						var_356_bool = true;
				}
				if(var_356_bool != 0)
					var_0_object->AddReply(508802, 9651, 9650); //@t
				var_0_object->AddReply(511140, -1, 12329); //@t
				return 0;
			}
			if(var_36_bool == 9651) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508804, 9640, 9652); //@t
				return 0;
			}
			if(var_36_bool == 9640) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508795, 9643, 9642); //@t
				var_0_object->AddReply(508794, -1, 9641); //@t
				return 0;
			}
			if(var_36_bool == 9643) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508796); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508797, -1, 9644); //@t
				return 0;
			}
			if(var_36_bool == 9669) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508819, 9666, 9670); //@t
				bool var_407_bool;
				func_5605(var_1_object);
				if(var_407_bool != 0)
					var_0_object->AddReply(536147, 9616, 37912); //@t
				return 0;
			}
			if(var_36_bool == 9616) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508770, 9621, 9617); //@t
				var_0_object->AddReply(508771, 9619, 9618); //@t
				return 0;
			}
			if(var_36_bool == 9619) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508772); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508773, 9621, 9620); //@t
				var_0_object->AddReply(508814, -1, 9663); //@t
				return 0;
			}
			if(var_36_bool == 9621) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508774); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508775, 9623, 9622); //@t
				var_0_object->AddReply(510448, 9623, 11518); //@t
				return 0;
			}
			if(var_36_bool == 9623) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508739, 9577, 9576); //@t
				var_0_object->AddReply(508764, 9577, 9608); //@t
				var_0_object->AddReply(508765, 9611, 9610); //@t
				return 0;
			}
			if(var_36_bool == 9611) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508767, 9587, 9612); //@t
				var_0_object->AddReply(508768, 9587, 9614); //@t
				return 0;
			}
			if(var_36_bool == 9577) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508740); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508746, 9587, 9586); //@t
				return 0;
			}
			if(var_36_bool == 9587) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508747); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508748, 9589, 9588); //@t
				var_0_object->AddReply(508762, 9589, 9604); //@t
				var_0_object->AddReply(508763, 9589, 9606); //@t
				return 0;
			}
			if(var_36_bool == 9589) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508749); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508761, -1, 9603); //@t
				var_0_object->AddReply(536153, -1, 37918); //@t
				return 0;
			}
			if(var_36_bool == 9666) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508817, 9671, 9668); //@t
				var_0_object->AddReply(508816, -1, 9667); //@t
				return 0;
			}
			if(var_36_bool == 9671) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508821, -1, 9672); //@t
				var_0_object->AddReply(508822, 9674, 9673); //@t
				return 0;
			}
			if(var_36_bool == 9674) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508824, 9677, 9675); //@t
				return 0;
			}
			if(var_36_bool == 9677) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508827, -1, 9678); //@t
				var_0_object->AddReply(508828, -1, 9679); //@t
				return 0;
			}
			if(var_36_bool == 9681) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508830, 9683, 9682); //@t
				return 0;
			}
			if(var_36_bool == 9683) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508832, -1, 9684); //@t
				return 0;
			}
			if(var_36_bool == 12331) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511143, -1, 12332); //@t
				return 0;
			}
			if(var_36_bool == 9958) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509080); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509081, 11530, 9959); //@t
				var_0_object->AddReply(536146, 10799, 37906); //@t
				return 0;
			}
			if(var_36_bool == 10799) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509806, 10801, 10800); //@t
				return 0;
			}
			if(var_36_bool == 10801) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509808, 10803, 10802); //@t
				var_0_object->AddReply(509821, 10803, 10816); //@t
				return 0;
			}
			if(var_36_bool == 10803) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509810, 10805, 10804); //@t
				var_0_object->AddReply(509814, 10809, 10808); //@t
				var_0_object->AddReply(509820, 10809, 10814); //@t
				return 0;
			}
			if(var_36_bool == 10809) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509816, 10811, 10810); //@t
				return 0;
			}
			if(var_36_bool == 10811) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509818, 11530, 10812); //@t
				var_0_object->AddReply(509819, 11530, 10813); //@t
				return 0;
			}
			if(var_36_bool == 10805) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509812, 11530, 10806); //@t
				var_0_object->AddReply(509813, 11530, 10807); //@t
				return 0;
			}
			if(var_36_bool == 11530) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510458, 11532, 11531); //@t
				return 0;
			}
			if(var_36_bool == 11532) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510460, 11534, 11533); //@t
				return 0;
			}
			if(var_36_bool == 11534) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510462, 9960, 11535); //@t
				return 0;
			}
			if(var_36_bool == 9960) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509083, 9962, 9961); //@t
				return 0;
			}
			if(var_36_bool == 9962) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509085, -1, 9963); //@t
				return 0;
			}
			if(var_36_bool == 37916) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(536151); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536152, -1, 37917); //@t
				return 0;
			}
			if(var_36_bool == 9629) {
				object var_664_object; object var_665_object;
				var_664_object = var_1_object;
				var_665_object = var_0_object;
				func_5296();
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508783, 9631, 9630); //@t
				var_0_object->AddReply(510447, 9631, 11516); //@t
				return 0;
			}
			if(var_36_bool == 9631) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508785, 9591, 9632); //@t
				return 0;
			}
			if(var_36_bool == 9633) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508786); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508787, 9591, 9634); //@t
				return 0;
			}
			if(var_36_bool == 9591) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508752, 9657, 9592); //@t
				var_0_object->AddReply(508757, 9598, 9597); //@t
				return 0;
			}
			if(var_36_bool == 9598) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508758); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508759, 9593, 9599); //@t
				var_0_object->AddReply(508760, 9593, 9601); //@t
				return 0;
			}
			if(var_36_bool == 9657) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508809, 9659, 9658); //@t
				var_0_object->AddReply(510449, 11521, 11520); //@t
				return 0;
			}
			if(var_36_bool == 11521) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510451, 11523, 11522); //@t
				return 0;
			}
			if(var_36_bool == 11523) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510453, 9659, 11524); //@t
				return 0;
			}
			if(var_36_bool == 9659) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508810); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508811, 9661, 9660); //@t
				var_0_object->AddReply(510454, 11527, 11526); //@t
				return 0;
			}
			if(var_36_bool == 11527) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510456, 9593, 11528); //@t
				return 0;
			}
			if(var_36_bool == 9661) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508813, 9593, 9662); //@t
				return 0;
			}
			if(var_36_bool == 9593) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508790, 9638, 9637); //@t
				var_0_object->AddReply(508754, -1, 9594); //@t
				return 0;
			}
			if(var_36_bool == 9638) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508798, 9646, 9645); //@t
				var_0_object->AddReply(508792, -1, 9639); //@t
				return 0;
			}
			if(var_36_bool == 9646) {
				func_983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(508799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508800, -1, 9647); //@t
				var_0_object->AddReply(508801, -1, 9649); //@t
				return 0;
			}
			var_3_string = true;
			bool var_788_bool;
			func_5126(var_788_bool);
			if(var_788_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3ee";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_37_cvector == 11563) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5308();
				object var_98_object = var_1_object;
				func_5270(var_0_object);
			}
			if(var_37_cvector == 11566) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_5308();
				object var_128_object = var_1_object;
				func_5270(var_0_object);
			}
			if(var_37_cvector == 11569) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_5302();
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_5308();
				object var_138_object = var_1_object;
				func_5270(var_0_object);
			}
			if(var_37_cvector == 11599) {
				object var_142_object = var_1_object;
				func_5349(var_0_object);
			}
			if(var_37_cvector == 11600) {
				object var_189_object = var_1_object;
				func_5349(var_0_object);
			}
			if(var_37_cvector == 11601) {
				object var_193_object = var_1_object;
				func_5349(var_0_object);
			}
			if(var_37_cvector == 11583) {
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_5491();
			}
			if(var_37_cvector == 11570) {
				object var_203_object; object var_204_object;
				var_203_object = var_1_object;
				var_204_object = var_0_object;
				func_5308();
				object var_205_object = var_1_object;
				func_5270(var_0_object);
			}
			if(var_36_bool == 12720) {
				bool var_209_bool;
				func_5628(var_1_object);
				if(var_209_bool != 0) {
					object var_217_object; object var_218_object;
					var_217_object = var_1_object;
					var_218_object = var_0_object;
					func_5485();
					object var_221_object; object var_222_object;
					var_221_object = var_1_object;
					var_222_object = var_0_object;
					func_5302();
					func_2604(var_37_cvector, "Neutral");
					var_0_object->SetMessage(511527); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511528, 12722, 12721); //@t
					var_0_object->AddReply(515598, 16625, 16624); //@t
					return 0;
				}
				bool var_242_bool = false;
				bool var_243_bool = false;
				bool var_244_bool;
				func_5652(var_1_object);
				if(var_244_bool != 0) {
					bool var_250_bool;
					func_5640(var_1_object);
					if(var_250_bool != 0)
						var_243_bool = true;
				}
				if(var_243_bool != 0) {
					bool var_256_bool;
					func_5664(var_256_bool, var_1_object);
					if(var_256_bool != 0)
						var_242_bool = true;
				}
				if(var_242_bool != 0) {
					object var_265_object; object var_266_object;
					var_265_object = var_1_object;
					var_266_object = var_0_object;
					func_5343();
					func_2604(var_37_cvector, "Neutral");
					var_0_object->SetMessage(510510); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(510511, 11594, 11593); //@t
					var_0_object->AddReply(510521, 11594, 11604); //@t
					return 0;
				}
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510500); //@t
				var_0_object->ClearReplies(); //@t
				bool var_279_bool;
				func_5711(var_1_object);
				if(var_279_bool != 0)
					var_0_object->AddReply(510509, 16679, 11591); //@t
				bool var_298_bool = false;
				bool var_299_bool;
				func_5699(var_1_object);
				if(var_299_bool != 0) {
					bool var_305_bool;
					func_5711(var_1_object);
					if(var_305_bool != 0)
						var_298_bool = true;
				}
				if(var_298_bool != 0)
					var_0_object->AddReply(510501, 11584, 11583); //@t
				bool var_310_bool;
				func_5687(var_1_object);
				if(var_310_bool != 0)
					var_0_object->AddReply(515653, 16690, 16689); //@t
				var_0_object->AddReply(515647, -1, 16682); //@t
				return 0;
			}
			if(var_36_bool == 16690) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510492, -1, 11570); //@t
				return 0;
			}
			if(var_36_bool == 11584) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510504, -1, 11586); //@t
				var_0_object->AddReply(510505, 11588, 11587); //@t
				return 0;
			}
			if(var_36_bool == 11588) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510508, -1, 11590); //@t
				var_0_object->AddReply(510507, -1, 11589); //@t
				return 0;
			}
			if(var_36_bool == 16679) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515645, -1, 16680); //@t
				return 0;
			}
			if(var_36_bool == 11594) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510513, 11596, 11595); //@t
				var_0_object->AddReply(510520, 11598, 11602); //@t
				return 0;
			}
			if(var_36_bool == 11596) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510515, 11598, 11597); //@t
				var_0_object->AddReply(515650, 11598, 16685); //@t
				return 0;
			}
			if(var_36_bool == 11598) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511550, 12745, 12744); //@t
				var_0_object->AddReply(510519, -1, 11601); //@t
				return 0;
			}
			if(var_36_bool == 12745) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511552, 12747, 12746); //@t
				return 0;
			}
			if(var_36_bool == 12747) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511554, 12749, 12748); //@t
				var_0_object->AddReply(510518, -1, 11600); //@t
				return 0;
			}
			if(var_36_bool == 12749) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510517, -1, 11599); //@t
				return 0;
			}
			if(var_36_bool == 16625) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515600, 16627, 16626); //@t
				return 0;
			}
			if(var_36_bool == 16627) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515602, 12722, 16628); //@t
				return 0;
			}
			if(var_36_bool == 12722) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511530, 11554, 12723); //@t
				var_0_object->AddReply(515603, 16631, 16630); //@t
				return 0;
			}
			if(var_36_bool == 16631) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515604); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515605, 16633, 16632); //@t
				return 0;
			}
			if(var_36_bool == 16633) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515607, 11554, 16634); //@t
				var_0_object->AddReply(515608, 11554, 16636); //@t
				return 0;
			}
			if(var_36_bool == 11554) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510477, 11556, 11555); //@t
				return 0;
			}
			if(var_36_bool == 11556) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510479, 11558, 11557); //@t
				var_0_object->AddReply(515610, 16640, 16639); //@t
				return 0;
			}
			if(var_36_bool == 16640) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515614, 16644, 16643); //@t
				var_0_object->AddReply(515612, 16642, 16641); //@t
				return 0;
			}
			if(var_36_bool == 16642) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515616, 16644, 16645); //@t
				return 0;
			}
			if(var_36_bool == 16644) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515618, 11558, 16648); //@t
				var_0_object->AddReply(515617, -1, 16647); //@t
				return 0;
			}
			if(var_36_bool == 11558) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515623, 16655, 16654); //@t
				var_0_object->AddReply(515628, 16661, 16660); //@t
				return 0;
			}
			if(var_36_bool == 16661) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515630, 16655, 16662); //@t
				return 0;
			}
			if(var_36_bool == 16655) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510481, 11560, 11559); //@t
				var_0_object->AddReply(515626, 16665, 16657); //@t
				return 0;
			}
			if(var_36_bool == 16665) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515633, 11560, 16666); //@t
				return 0;
			}
			if(var_36_bool == 11560) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510483, 11562, 11561); //@t
				var_0_object->AddReply(510494, 16650, 11572); //@t
				var_0_object->AddReply(515627, 16650, 16658); //@t
				return 0;
			}
			if(var_36_bool == 16650) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515620, 16652, 16651); //@t
				return 0;
			}
			if(var_36_bool == 16652) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510489, 11568, 11567); //@t
				return 0;
			}
			if(var_36_bool == 11568) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510491, -1, 11569); //@t
				var_0_object->AddReply(515655, -1, 16691); //@t
				return 0;
			}
			if(var_36_bool == 11562) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515635, 16670, 16669); //@t
				var_0_object->AddReply(515641, 16676, 16675); //@t
				var_0_object->AddReply(510486, 11565, 11564); //@t
				return 0;
			}
			if(var_36_bool == 11565) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(510487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510488, -1, 11566); //@t
				var_0_object->AddReply(515643, -1, 16678); //@t
				return 0;
			}
			if(var_36_bool == 16676) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515642); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515637, 16672, 16671); //@t
				return 0;
			}
			if(var_36_bool == 16672) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515640, 16670, 16674); //@t
				var_0_object->AddReply(515639, -1, 16673); //@t
				return 0;
			}
			if(var_36_bool == 16670) {
				func_2604(var_37_cvector, "Neutral");
				var_0_object->SetMessage(515636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510485, -1, 11563); //@t
				return 0;
			}
			var_3_string = true;
			bool var_613_bool;
			func_5126(var_613_bool);
			if(var_613_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa43";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_37_cvector == 12312) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5175();
			}
			if(var_37_cvector == 12313) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_5181();
			}
			if(var_37_cvector == 12315) {
				object var_54_object = var_1_object;
				func_5164(var_0_object);
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_5198();
			}
			if(var_36_bool == 12311) {
				func_3727(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511122); //@t
				var_0_object->ClearReplies(); //@t
				bool var_97_bool;
				func_5521(var_1_object);
				if(var_97_bool != 0)
					var_0_object->AddReply(511123, 12316, 12312); //@t
				bool var_108_bool;
				func_5533(var_1_object);
				if(var_108_bool != 0)
					var_0_object->AddReply(511124, 12314, 12313); //@t
				var_0_object->AddReply(536267, -1, 38051); //@t
				var_0_object->AddReply(536268, -1, 38052); //@t
				return 0;
			}
			if(var_36_bool == 12314) {
				func_3727(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511126, -1, 12315); //@t
				return 0;
			}
			if(var_36_bool == 12316) {
				func_3727(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511128, 12318, 12317); //@t
				return 0;
			}
			if(var_36_bool == 12318) {
				func_3727(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511130, 12320, 12319); //@t
				return 0;
			}
			if(var_36_bool == 12320) {
				func_3727(var_37_cvector, "Neutral");
				var_0_object->SetMessage(511131); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511132, -1, 12321); //@t
				return 0;
			}
			var_3_string = true;
			bool var_151_bool;
			func_5126(var_151_bool);
			if(var_151_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xea6";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_37_cvector == 13243) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5439();
				object var_50_object = var_1_object;
				func_5452(var_0_object);
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_5128();
				object var_78_object = var_1_object;
				func_5187(var_0_object);
			}
			if(var_36_bool == 13238) {
				bool var_86_bool;
				func_5675(var_1_object);
				if(!var_86_bool) { //@nz
					func_4067(var_37_cvector, "Neutral");
					var_0_object->SetMessage(512020); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512021, 13240, 13239); //@t
					return 0;
				}
				func_4067(var_37_cvector, "Neutral");
				var_0_object->SetMessage(513723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513724, -1, 14990); //@t
				return 0;
			}
			if(var_36_bool == 13240) {
				func_4067(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512023, 13242, 13241); //@t
				return 0;
			}
			if(var_36_bool == 13242) {
				func_4067(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512024); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512025, -1, 13243); //@t
				return 0;
			}
			var_3_string = true;
			bool var_130_bool;
			func_5126(var_130_bool);
			if(var_130_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xffa";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4954();
			if(var_36_int == 42551) {
				func_4345(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_5126(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1110";
	
	}

}


maintask task_15
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_4413(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_4484();
			bool var_40_bool = false;
			bool var_41_bool;
			func_4698(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_4453(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_4433(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_4961(var_82_object);
					var_82_object = var_81_object;
					func_4846(var_80_bool, var_81_object);
				}
			} else {
				func_4448(var_36_int);
				func_4475();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_4666();
		func_4484();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_4484();
		func_4926("Neutral");
		func_4475();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_4475();
		else
			func_4926("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_4666();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_4689(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_5944(var_54_object);
			func_4926("Neutral");
			func_4484();
			func_4475();
		}
	}

}


void func_5120(int var_211_int)
{
	var_211_int = 502876;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_40_bool;
	func_4698(var_40_bool);
	if(!var_40_bool) goto Label_0; //@nz
}


void func_5122(string var_213_string)
{
	var_213_string = "ui/NPC_Rubin.png";
}


void func_5124(string var_214_string)
{
	var_214_string = "ui/NPC_Rubin_b.png";
}


void func_5126(bool var_112_bool)
{
	var_112_bool = true;
}


void func_5894(object var_100_object, string var_101_string, float var_102_float)
{
	object var_110_object;
	@GetMainOutdoorScene(var_110_object);
	if(var_110_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_108_cvector;
	cvector var_109_cvector;
	bool var_111_bool;
	var_110_object->GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	if(!var_111_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_101_string) + " doesnt exist");
	var_110_object->GetMap(var_100_object);
	if(var_100_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	var_100_object->SetMapParams(var_121_float, var_122_float, var_102_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5640(bool var_533_bool)
{
	int var_535_int;
	func_4977(var_535_int, "d5q01");
	if(var_535_int == 7)
		var_533_bool = true;
	var_533_bool = false;
}


// @pe
void func_5128(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_13(object var_0_object, int var_672_int, object var_673_object)
{
	var_0_object = var_673_object;
	bool var_683_bool; object var_684_object;
	object var_685_object;
	func_4961(var_685_object);
	var_685_object = var_684_object;
	func_4788(var_683_bool, var_684_object);
	bool var_686_bool; object var_687_object;
	var_673_object = var_687_object;
	func_4703(var_686_bool, var_687_object, 70.0);
	if(!var_686_bool) { //@nz
		var_672_int = -2;
		return 8;
	}
	object var_679_object;
	@CreateDialog(var_679_object);
	int var_690_int;
	func_5120(var_690_int);
	var_679_object->SetNPCName(var_690_int);
	int var_691_int;
	func_5118(var_691_int);
	var_679_object->SetNPCDescription(var_691_int);
	string var_692_string;
	func_5122(var_692_string);
	var_679_object->SetPhoto(var_692_string);
	string var_693_string;
	func_5124(var_693_string);
	var_679_object->SetPhoto2(var_693_string);
	int var_694_int;
	func_5927(var_694_int);
	var_679_object->SetPlayerName(var_694_int);
	bool var_680_bool;
	@IsOverrideActive(var_680_bool);
	if(var_680_bool != 0) {
		var_672_int = -2;
		return 8;
	}
	@DoDialog(var_679_object);
	object var_696_object; object var_697_object;
	var_673_object = var_696_object;
	var_679_object = var_697_object;
	TaskCall(2);
	func_94(var_698_object, var_699_object, var_700_string, var_701_bool, var_696_object, var_697_object);
	TaskReturn();
	bool var_682_bool;
	var_679_object->IsDialogEnd(var_682_bool);
	
	for(;;) {
		var_735_bool = !var_682_bool; //@nz
		if(var_735_bool == 0) goto Label_83;
		@sync();
		var_679_object->IsDialogEnd(var_682_bool);
	}
	
Label_83:
	object var_736_object;
	var_673_object = var_736_object;
	func_4771();
	@StopDialog(var_679_object);
	var_679_object->GetReturnValue(-1);
	int var_681_int = var_672_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5134(object var_161_object)
{
	object var_164_object;
	var_161_object = var_164_object;
	bool var_163_bool;
	func_5045(var_163_bool, var_164_object, "d3q01_blood");
}


void func_4883(bool var_116_bool, object var_117_object)
{
	bool var_125_bool; int var_126_int; string var_127_string;
	int var_129_int;
	func_5079(var_129_int);
	string var_123_string = ("d" + var_129_int) + "m";
	int var_124_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_117_object->HasProperty((var_123_string + (var_124_int + 1)), var_125_bool);
			if(!var_125_bool) { //@nz
			} else {
				var_124_int += 1;
			}
		}
		if(!var_124_int) { //@nz
			var_116_bool = false;
			return 10;
		}
		var_126_int = 0;
		if(var_124_int > 1)
			@irand(var_126_int, var_124_int);
		var_117_object->GetProperty((var_123_string + (var_126_int + 1)), var_127_string);
		bool var_143_bool; string var_144_string;
		var_127_string = var_144_string;
		func_4939(var_143_bool, var_144_string);
		var_143_bool = var_116_bool;
		return 10;

	}
}


// @pe
void func_5652(bool var_527_bool)
{
	int var_529_int;
	func_4977(var_529_int, "ood5Rubin2");
	if(var_529_int == 0) {
		var_527_bool = true;
		return 0;
	}
	var_527_bool = false;
}


void func_5141(void)
{
	@SetVariable("d10q02", 2);
	object var_48_object;
	func_5877(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_5074(var_59_float);
	var_45_object->AddMark("d10q02RubinGotoMaria", "pt_map_maria", 0, 515297, var_59_float);
	func_5745();
}
EMIT "Stack[-1] = 0";


// @pe
void func_5664(bool var_539_bool, object var_540_object)
{
	object var_542_object;
	var_540_object = var_542_object;
	bool var_541_bool;
	func_5038(var_541_bool, var_542_object, "d5q01_heart");
	if(var_541_bool != 0) {
		var_539_bool = true;
		return 0;
	}
	var_539_bool = false;
}


void func_5927(int var_215_int)
{
	int var_217_int;
	@GetVariable("branch", var_217_int);
	if(var_217_int == 0) {
		var_215_int = 1;
		return 2;
	EMIT "GOTO 0x1736";
	}
	if(var_217_int == 1) {
		var_215_int = 2;
		return 2;
	}
	var_215_int = 3;
}


// @pe
void func_5675(bool var_636_bool)
{
	int var_638_int;
	func_4977(var_638_int, "d6RubinGoesToGeorg");
	if(var_638_int != 0) {
		var_636_bool = true;
		return 0;
	}
	var_636_bool = false;
}


// @pe
void func_2604(object var_2_object, string var_502_string)
{
	bool var_503_bool;
	func_5126(var_503_bool);
	if(!var_503_bool) //@nz
		return 0;
	if(var_502_string == var_2_object)
		return 0;
	string var_506_string; bool var_507_bool;
	var_502_string = var_506_string;
	if(var_502_string == "")
		var_507_bool = false;
	else
		var_507_bool = true;
	func_4933(var_506_string, var_507_bool);
	var_2_object = var_502_string;
	
}


// @pe
void func_5164(object var_54_object)
{
	@Trace("bluevaccine is given");
	object var_57_object;
	var_54_object = var_57_object;
	func_5025(var_57_object, "blue_vaccine", 1);
}


void func_2348(object var_0_object, int var_457_int, object var_458_object)
{
	var_0_object = var_458_object;
	bool var_468_bool; object var_469_object;
	object var_470_object;
	func_4961(var_470_object);
	var_470_object = var_469_object;
	func_4788(var_468_bool, var_469_object);
	bool var_471_bool; object var_472_object;
	var_458_object = var_472_object;
	func_4703(var_471_bool, var_472_object, 70.0);
	if(!var_471_bool) { //@nz
		var_457_int = -2;
		return 8;
	}
	object var_464_object;
	@CreateDialog(var_464_object);
	int var_475_int;
	func_5120(var_475_int);
	var_464_object->SetNPCName(var_475_int);
	int var_476_int;
	func_5118(var_476_int);
	var_464_object->SetNPCDescription(var_476_int);
	string var_477_string;
	func_5122(var_477_string);
	var_464_object->SetPhoto(var_477_string);
	string var_478_string;
	func_5124(var_478_string);
	var_464_object->SetPhoto2(var_478_string);
	int var_479_int;
	func_5927(var_479_int);
	var_464_object->SetPlayerName(var_479_int);
	bool var_465_bool;
	@IsOverrideActive(var_465_bool);
	if(var_465_bool != 0) {
		var_457_int = -2;
		return 8;
	}
	@DoDialog(var_464_object);
	object var_481_object; object var_482_object;
	var_458_object = var_481_object;
	var_464_object = var_482_object;
	TaskCall(8);
	func_2429(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object);
	TaskReturn();
	bool var_467_bool;
	var_464_object->IsDialogEnd(var_467_bool);
	
	for(;;) {
		var_601_bool = !var_467_bool; //@nz
		if(var_601_bool == 0) goto Label_2418;
		@sync();
		var_464_object->IsDialogEnd(var_467_bool);
	}
	
Label_2418:
	object var_602_object;
	var_458_object = var_602_object;
	func_4771();
	@StopDialog(var_464_object);
	var_464_object->GetReturnValue(-1);
	int var_466_int = var_457_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_560(object var_2_object, string var_770_string)
{
	bool var_771_bool;
	func_5126(var_771_bool);
	if(!var_771_bool) //@nz
		return 0;
	if(var_770_string == var_2_object)
		return 0;
	string var_774_string; bool var_775_bool;
	var_770_string = var_774_string;
	if(var_770_string == "")
		var_775_bool = false;
	else
		var_775_bool = true;
	func_4933(var_774_string, var_775_bool);
	var_2_object = var_770_string;
	
}


// @pe
void func_5175(void)
{
	@SetVariable("ood4Rubin1", 1);
}


// @pe
void func_5687(bool var_589_bool)
{
	int var_591_int;
	func_4977(var_591_int, "d5q01");
	if(var_591_int == 0) {
		var_589_bool = true;
		return 0;
	}
	var_589_bool = false;
}


void func_4664(bool var_88_bool)
{
	var_88_bool = true;
}


void func_4666(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_5944(object var_54_object)
{
	bool var_55_bool;
	func_5088(var_55_bool, 3);
	if(var_55_bool != 0) {
		int var_63_int; object var_64_object;
		var_54_object = var_64_object;
		TaskCall(5);
		func_675(var_65_object, var_63_int, var_64_object);
		TaskReturn();
		return 0;
	}
	bool var_379_bool;
	func_5088(var_379_bool, 4);
	if(var_379_bool != 0) {
		int var_381_int; object var_382_object;
		var_54_object = var_382_object;
		TaskCall(9);
		func_3568(var_383_object, var_381_int, var_382_object);
		TaskReturn();
		return 0;
	}
	bool var_455_bool;
	func_5088(var_455_bool, 5);
	if(var_455_bool != 0) {
		int var_457_int; object var_458_object;
		var_54_object = var_458_object;
		TaskCall(7);
		func_2348(var_459_object, var_457_int, var_458_object);
		TaskReturn();
		return 0;
	}
	bool var_603_bool;
	func_5088(var_603_bool, 6);
	if(var_603_bool != 0) {
		int var_605_int; object var_606_object;
		var_54_object = var_606_object;
		TaskCall(11);
		func_3912(var_607_object, var_605_int, var_606_object);
		TaskReturn();
		return 0;
	}
	bool var_670_bool;
	func_5088(var_670_bool, 10);
	if(var_670_bool != 0) {
		int var_672_int; object var_673_object;
		var_54_object = var_673_object;
		TaskCall(1);
		func_13(var_674_object, var_672_int, var_673_object);
		TaskReturn();
		return 0;
	}
	bool var_737_bool;
	func_5088(var_737_bool, 12);
	if(var_737_bool != 0) {
		int var_739_int; object var_740_object;
		var_54_object = var_740_object;
		TaskCall(3);
		func_416(var_741_object, var_739_int, var_740_object);
		TaskReturn();
		return 0;
	}
	int var_798_int; object var_799_object;
	var_54_object = var_799_object;
	TaskCall(13);
	func_4206(var_800_object, var_798_int, var_799_object);
	TaskReturn();
}


// @pe
void func_5181(void)
{
	@SetVariable("ood4Rubin2", 1);
}


void func_4413(object var_0_object)
{
	bool var_36_bool;
	func_4698(var_36_bool);
	if(!var_36_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4541();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4595();
	}
}
EMIT "Return(); Pop(0)";


void func_4671(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_4926(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


// @pe
void func_3649(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_405_object, object var_406_object)
{
	var_0_object = var_406_object;
	var_1_object = var_405_object;
	var_3_string = false;
	if(1 != 0) {
		func_3727(var_406_object, "Neutral");
		var_0_object->SetMessage(511122); //@t
		var_0_object->ClearReplies(); //@t
		bool var_421_bool;
		func_5521(var_1_object);
		if(var_421_bool != 0)
			var_0_object->AddReply(511123, 12316, 12312); //@t
		bool var_430_bool;
		func_5533(var_1_object);
		if(var_430_bool != 0)
			var_0_object->AddReply(511124, 12314, 12313); //@t
		var_0_object->AddReply(536267, -1, 38051); //@t
		var_0_object->AddReply(536268, -1, 38052); //@t
		goto Label_3697;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe45";
	}
Label_3697:
	bool var_445_bool;
	func_5126(var_445_bool);
	if(var_445_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4926(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3726;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3726:
		return 0;

	}
	
}


void func_5439(void)
{
	@SetVariable("d6RubinGoesToGeorg", 1);
	object var_45_object;
	@GetSceneByName(var_45_object, "warehouse_rubin");
	@Trigger(var_45_object, "norubin");
}
EMIT "Stack[-1] = 0";


// @pe
void func_5187(object var_78_object)
{
	@Trace("lens is given");
	object var_81_object;
	var_78_object = var_81_object;
	func_5025(var_81_object, "lens", 1);
}


// @pe
void func_5699(bool var_578_bool)
{
	int var_580_int;
	func_4977(var_580_int, "ood5Rubin3");
	if(var_580_int == 0) {
		var_578_bool = true;
		return 0;
	}
	var_578_bool = false;
}


void func_4933(string var_254_string, bool var_255_bool)
{
	float var_260_float; float var_261_float;
	@lshGetAnimTimes(var_254_string, var_260_float, var_261_float);
	@lshPlayAnimation(var_260_float, var_261_float, var_255_bool);
}


void func_4679(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


void func_3912(object var_0_object, int var_605_int, object var_606_object)
{
	var_0_object = var_606_object;
	bool var_616_bool; object var_617_object;
	object var_618_object;
	func_4961(var_618_object);
	var_618_object = var_617_object;
	func_4788(var_616_bool, var_617_object);
	bool var_619_bool; object var_620_object;
	var_606_object = var_620_object;
	func_4703(var_619_bool, var_620_object, 70.0);
	if(!var_619_bool) { //@nz
		var_605_int = -2;
		return 8;
	}
	object var_612_object;
	@CreateDialog(var_612_object);
	int var_623_int;
	func_5120(var_623_int);
	var_612_object->SetNPCName(var_623_int);
	int var_624_int;
	func_5118(var_624_int);
	var_612_object->SetNPCDescription(var_624_int);
	string var_625_string;
	func_5122(var_625_string);
	var_612_object->SetPhoto(var_625_string);
	string var_626_string;
	func_5124(var_626_string);
	var_612_object->SetPhoto2(var_626_string);
	int var_627_int;
	func_5927(var_627_int);
	var_612_object->SetPlayerName(var_627_int);
	bool var_613_bool;
	@IsOverrideActive(var_613_bool);
	if(var_613_bool != 0) {
		var_605_int = -2;
		return 8;
	}
	@DoDialog(var_612_object);
	object var_629_object; object var_630_object;
	var_606_object = var_629_object;
	var_612_object = var_630_object;
	TaskCall(12);
	func_3993(var_631_object, var_632_object, var_633_string, var_634_bool, var_629_object, var_630_object);
	TaskReturn();
	bool var_615_bool;
	var_612_object->IsDialogEnd(var_615_bool);
	
	for(;;) {
		var_668_bool = !var_615_bool; //@nz
		if(var_668_bool == 0) goto Label_3982;
		@sync();
		var_612_object->IsDialogEnd(var_615_bool);
	}
	
Label_3982:
	object var_669_object;
	var_606_object = var_669_object;
	func_4771();
	@StopDialog(var_612_object);
	var_612_object->GetReturnValue(-1);
	int var_614_int = var_605_int;
}
EMIT "Stack[-4] = 0";


void func_4939(bool var_108_bool, string var_109_string)
{
	bool var_111_bool;
	bool var_112_bool;
	func_5126(var_112_bool);
	if(var_112_bool != 0) {
		@lshHasSpeech(var_111_bool, var_109_string);
		if(var_111_bool != 0) {
			@lshPlaySpeech(var_109_string);
			var_108_bool = true;
		}
	}
	var_108_bool = false;
}


// @pe
void func_5452(object var_50_object)
{
	@Trace("whitevaccine is given");
	object var_53_object;
	var_50_object = var_53_object;
	func_5025(var_53_object, "white_vaccine", 1);
}


// @pe
void func_5198(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5711(bool var_558_bool)
{
	bool var_560_bool = false;
	bool var_561_bool = false;
	int var_562_int;
	func_4977(var_562_int, "d5q01");
	if(var_562_int != 0) {
		int var_566_int;
		func_4977(var_566_int, "d5q01");
		if(var_566_int != -1)
			var_561_bool = true;
	}
	if(var_561_bool != 0) {
		int var_570_int;
		func_4977(var_570_int, "d5q01");
		if(var_570_int != 1000)
			var_560_bool = true;
	}
	if(var_560_bool != 0) {
		var_558_bool = true;
		return 0;
	}
	var_558_bool = false;
}


void func_4689(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_4679(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_4433(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_4689(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_5204(void)
{
	@SetVariable("d3q01", 1);
	object var_52_object;
	func_5877(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	float var_63_float;
	func_5074(var_63_float);
	var_49_object->AddMark("d3q01RubinGotoAlexandr", "pt_map_alexandr", 1, 511151, var_63_float);
	func_5758();
	func_5771();
}
EMIT "Stack[-1] = 0";


// @pe
void func_5463(object var_86_object)
{
	object var_90_object;
	func_5877(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	func_5894(var_87_object, "pt_map_maria", (float)2);
	object var_110_object;
	func_5877(var_110_object);
	var_86_object->ShowMap(var_110_object);
}


void func_4698(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_4954(void)
{
	bool var_39_bool;
	func_5126(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_696_object, object var_697_object)
{
	var_0_object = var_697_object;
	var_3_string = false;
	if(1 != 0) {
		func_162(var_697_object, "Neutral");
		var_0_object->SetMessage(534092); //@t
		var_0_object->ClearReplies(); //@t
		bool var_712_bool;
		func_5497(var_696_object);
		if(var_712_bool != 0)
			var_0_object->AddReply(534093, 38177, 35686); //@t
		var_0_object->AddReply(536401, -1, 38180); //@t
		var_0_object->AddReply(536402, -1, 38181); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_132:
	bool var_727_bool;
	func_5126(var_727_bool);
	if(var_727_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4926(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


void func_4703(bool var_164_bool, object var_165_object, float var_166_float)
{
	cvector var_177_cvector; bool var_184_bool;
	var_165_object->GetPosition(var_177_cvector);
	float var_176_float;
	var_165_object->GetEyesHeight(var_176_float);
	var_185_float = GetByIndex(var_177_cvector, 1);
	SetByIndex(var_177_cvector, 1) = (var_185_float + var_176_float);
	cvector var_178_cvector;
	@GetPosition(var_178_cvector);
	@GetEyesHeight(var_176_float);
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (var_186_float + var_176_float);
	cvector var_179_cvector = var_177_cvector - var_178_cvector;
	var_187_float = GetByIndex(var_179_cvector, 1);
	SetByIndex(var_179_cvector, 1) = (float)0;
	var_189_float = sqrt(var_179_cvector | var_179_cvector);
	var_179_cvector /= var_189_float;
	cvector var_180_cvector = -var_179_cvector;
	cvector var_191_cvector;
	func_4967(var_191_cvector, (var_180_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_181_cvector = ((var_179_cvector * var_166_float) + (var_191_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_183_bool;
	@IsOverrideActive(var_183_bool);
	if(var_183_bool != 0)
		var_164_bool = false;
	@StopWorld();
	@CameraTransit((var_178_cvector + var_181_cvector), var_180_cvector);
	var_204_float = GetByIndex(var_181_cvector, 0);
	var_205_float = GetByIndex(var_181_cvector, 2);
	@Rotate(var_204_float, var_205_float);
	bool var_206_bool;
	func_5126(var_206_bool);
	if(var_206_bool != 0) {
	} else {
		@HasAnimationTrack(var_184_bool, "head");
		if(var_184_bool == 0) goto Label_4765;
		@LookAsyncCamera("head");
	}
Label_4765:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_164_bool = true;
	
}


void func_4448(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_4961(object var_76_object)
{
	object var_78_object;
	@self(var_78_object);
	var_78_object = var_76_object;
}
EMIT "Stack[-1] = 0";


void func_4453(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_4671(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_5479(void)
{
	@SetVariable("d3RubinVisit", 1);
}


void func_4967(cvector var_191_cvector, cvector var_192_cvector)
{
	float var_195_float = sqrt(var_192_cvector | var_192_cvector);
	if(var_195_float < 0.000001)
		var_191_cvector = [0.0, 0.0, 0.0];
	var_191_cvector = var_192_cvector / var_195_float;
}


// @pe
void func_5485(void)
{
	@SetVariable("d5RubinVisit", 1);
}


// @pe
void func_5230(void)
{
	@SetVariable("ood3Rubin1", 1);
}


void func_4206(object var_0_object, int var_798_int, object var_799_object)
{
	var_0_object = var_799_object;
	bool var_809_bool; object var_810_object;
	object var_811_object;
	func_4961(var_811_object);
	var_811_object = var_810_object;
	func_4788(var_809_bool, var_810_object);
	bool var_812_bool; object var_813_object;
	var_799_object = var_813_object;
	func_4703(var_812_bool, var_813_object, 70.0);
	if(!var_812_bool) { //@nz
		var_798_int = -2;
		return 8;
	}
	object var_805_object;
	@CreateDialog(var_805_object);
	int var_816_int;
	func_5120(var_816_int);
	var_805_object->SetNPCName(var_816_int);
	int var_817_int;
	func_5118(var_817_int);
	var_805_object->SetNPCDescription(var_817_int);
	string var_818_string;
	func_5122(var_818_string);
	var_805_object->SetPhoto(var_818_string);
	string var_819_string;
	func_5124(var_819_string);
	var_805_object->SetPhoto2(var_819_string);
	int var_820_int;
	func_5927(var_820_int);
	var_805_object->SetPlayerName(var_820_int);
	bool var_806_bool;
	@IsOverrideActive(var_806_bool);
	if(var_806_bool != 0) {
		var_798_int = -2;
		return 8;
	}
	@DoDialog(var_805_object);
	object var_822_object; object var_823_object;
	var_799_object = var_822_object;
	var_805_object = var_823_object;
	TaskCall(14);
	func_4287(var_824_object, var_825_object, var_826_string, var_827_bool, var_822_object, var_823_object);
	TaskReturn();
	bool var_808_bool;
	var_805_object->IsDialogEnd(var_808_bool);
	
	for(;;) {
		var_852_bool = !var_808_bool; //@nz
		if(var_852_bool == 0) goto Label_4276;
		@sync();
		var_805_object->IsDialogEnd(var_808_bool);
	}
	
Label_4276:
	object var_853_object;
	var_799_object = var_853_object;
	func_4771();
	@StopDialog(var_805_object);
	var_805_object->GetReturnValue(-1);
	int var_807_int = var_798_int;
}
EMIT "Stack[-4] = 0";


void func_5745(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 668, 2, 534122);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_5849(var_67_bool, var_68_object, 666);
}
EMIT "Stack[-1] = 0";


void func_4977(int var_234_int, string var_235_string)
{
	int var_237_int;
	@GetVariable(var_235_string, var_237_int);
	var_237_int = var_234_int;
}


// @pe
void func_5491(void)
{
	@SetVariable("ood5Rubin3", 1);
}


// @pe
void func_5236(void)
{
	@SetVariable("ood3Rubin2", 1);
}


void func_4982(int var_69_int, int var_70_int)
{
	object var_72_object;
	@CreateIntVector(var_72_object);
	var_72_object->add(var_69_int);
	var_72_object->add(var_70_int);
	@SendWorldWndMessage(3, var_72_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5497(bool var_712_bool)
{
	int var_714_int;
	func_4977(var_714_int, "d10q02");
	if(var_714_int == 1)
		var_712_bool = true;
	var_712_bool = false;
}


// @pe
void func_5242(void)
{
	@SetVariable("ood3Rubin3", 1);
}


void func_4475(void)
{
	float var_50_float;
	@rand(var_50_float, 8, 16);
	@SetTimer(10, var_50_float);
}


// @pe
void func_2429(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_481_object, object var_482_object)
{
	var_0_object = var_482_object;
	var_1_object = var_481_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_488_bool;
		func_5628(var_1_object);
		if(var_488_bool != 0) {
			object var_494_object; object var_495_object;
			var_494_object = var_1_object;
			var_495_object = var_0_object;
			func_5485();
			object var_498_object; object var_499_object;
			var_498_object = var_1_object;
			var_499_object = var_0_object;
			func_5302();
			func_2604(var_482_object, "Neutral");
			var_0_object->SetMessage(511527); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511528, 12722, 12721); //@t
			var_0_object->AddReply(515598, 16625, 16624); //@t
		} else {
					bool var_525_bool = false;
					bool var_526_bool = false;
					bool var_527_bool;
					func_5652(var_1_object);
					if(var_527_bool != 0) {
						bool var_533_bool;
						func_5640(var_1_object);
						if(var_533_bool != 0)
							var_526_bool = true;
					}
					if(var_526_bool != 0) {
						bool var_539_bool;
						func_5664(var_539_bool, var_1_object);
						if(var_539_bool != 0)
							var_525_bool = true;
					}
					if(var_525_bool == 0) goto Label_2518;
					object var_544_object; object var_545_object;
					var_544_object = var_1_object;
					var_545_object = var_0_object;
					func_5343();
					func_2604(var_482_object, "Neutral");
					var_0_object->SetMessage(510510); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(510511, 11594, 11593); //@t
					var_0_object->AddReply(510521, 11594, 11604); //@t
		}
	}
Label_2574:
	for(;;) {
		bool var_517_bool;
		func_5126(var_517_bool);
		if(var_517_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4926(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2603;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2603:
			return 0;

		}

	}
	
Label_2518:
	func_2604(var_482_object, "Neutral");
	var_0_object->SetMessage(510500); //@t
	var_0_object->ClearReplies(); //@t
	bool var_558_bool;
	func_5711(var_1_object);
	if(var_558_bool != 0)
		var_0_object->AddReply(510509, 16679, 11591); //@t
	bool var_577_bool = false;
	bool var_578_bool;
	func_5699(var_1_object);
	if(var_578_bool != 0) {
		bool var_584_bool;
		func_5711(var_1_object);
		if(var_584_bool != 0)
			var_577_bool = true;
	}
	if(var_577_bool != 0)
		var_0_object->AddReply(510501, 11584, 11583); //@t
	bool var_589_bool;
	func_5687(var_1_object);
	if(var_589_bool != 0)
		var_0_object->AddReply(515653, 16690, 16689); //@t
	var_0_object->AddReply(515647, -1, 16682); //@t
	goto Label_2574;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x981";


void func_5758(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 25, 1, 503365);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5849(var_71_bool, var_72_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5248(void)
{
	@SetVariable("ood3Rubin4", 1);
}


void func_4994(int var_174_int, int var_175_int)
{
	object var_177_object;
	@CreateIntVector(var_177_object);
	var_177_object->add(var_174_int);
	var_177_object->add(var_175_int);
	@SendWorldWndMessage(4, var_177_object);
}
EMIT "Stack[-1] = 0";


void func_4484(void)
{
	@KillTimer(10);
}


// @pe
void func_5509(bool var_300_bool)
{
	int var_302_int;
	func_4977(var_302_int, "microscope_d3q01_blood");
	if(var_302_int != 0) {
		var_300_bool = true;
		return 0;
	}
	var_300_bool = false;
}


// @pe
void func_5254(object var_98_object)
{
	object var_102_object;
	func_5877(var_102_object);
	object var_99_object;
	var_102_object = var_99_object;
	func_5894(var_99_object, "pt_map_alexandr", (float)2);
	object var_122_object;
	func_5877(var_122_object);
	var_98_object->ShowMap(var_122_object);
}


void func_5771(void)
{
	object var_90_object;
	@CreateDiaryEntry(var_90_object, 68, 1, 512150);
	bool var_94_bool; object var_95_object;
	var_90_object = var_95_object;
	func_5849(var_94_bool, var_95_object, 25);
}
EMIT "Stack[-1] = 0";


void func_5006(object var_58_object, object var_59_object, int var_60_int)
{
	int var_64_int;
	var_59_object->GetItemID(var_64_int);
	int var_65_int;
	@GetInvItemProperty(var_65_int, var_64_int, "Category");
	bool var_66_bool;
	var_58_object->AddItem(var_66_bool, var_59_object, var_65_int, var_60_int);
	if(!var_66_bool) { //@nz
		var_58_object->DropItems(var_59_object, var_60_int);
	} else {
		int var_69_int; int var_70_int;
		var_64_int = var_69_int;
		var_60_int = var_70_int;
		func_4982(var_69_int, var_70_int);
	}
	
}


// @pe
void func_3727(object var_2_object, string var_412_string)
{
	bool var_413_bool;
	func_5126(var_413_bool);
	if(!var_413_bool) //@nz
		return 0;
	if(var_412_string == var_2_object)
		return 0;
	string var_416_string; bool var_417_bool;
	var_412_string = var_416_string;
	if(var_412_string == "")
		var_417_bool = false;
	else
		var_417_bool = true;
	func_4933(var_416_string, var_417_bool);
	var_2_object = var_412_string;
	
}


// @pe
void func_5521(bool var_421_bool)
{
	int var_423_int;
	func_4977(var_423_int, "ood4Rubin1");
	if(var_423_int == 0) {
		var_421_bool = true;
		return 0;
	}
	var_421_bool = false;
}


// @pe
void func_5270(object var_99_object)
{
	object var_103_object;
	func_5877(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	func_5894(var_100_object, "pt_map_bigvlad", (float)2);
	object var_123_object;
	func_5877(var_123_object);
	var_99_object->ShowMap(var_123_object);
}


void func_5784(void)
{
	object var_148_object;
	@CreateDiaryEntry(var_148_object, 74, 1, 512156);
	bool var_152_bool; object var_153_object;
	var_148_object = var_153_object;
	func_5849(var_152_bool, var_153_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3993(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_629_object, object var_630_object)
{
	var_0_object = var_630_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_636_bool;
		func_5675(var_629_object);
		if(!var_636_bool) { //@nz
			func_4067(var_630_object, "Neutral");
			var_0_object->SetMessage(512020); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512021, 13240, 13239); //@t
		} else {
					func_4067(var_630_object, "Neutral");
					var_0_object->SetMessage(513723); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513724, -1, 14990); //@t
		}
	}
	for(;;) {
		bool var_655_bool;
		func_5126(var_655_bool);
		if(var_655_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4926(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4066;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4066:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xf9d";


// @pe
void func_5533(bool var_430_bool)
{
	int var_432_int;
	func_4977(var_432_int, "ood4Rubin2");
	if(var_432_int == 0) {
		var_430_bool = true;
		return 0;
	}
	var_430_bool = false;
}


void func_416(object var_0_object, int var_739_int, object var_740_object)
{
	var_0_object = var_740_object;
	bool var_750_bool; object var_751_object;
	object var_752_object;
	func_4961(var_752_object);
	var_752_object = var_751_object;
	func_4788(var_750_bool, var_751_object);
	bool var_753_bool; object var_754_object;
	var_740_object = var_754_object;
	func_4703(var_753_bool, var_754_object, 70.0);
	if(!var_753_bool) { //@nz
		var_739_int = -2;
		return 8;
	}
	object var_746_object;
	@CreateDialog(var_746_object);
	int var_757_int;
	func_5120(var_757_int);
	var_746_object->SetNPCName(var_757_int);
	int var_758_int;
	func_5118(var_758_int);
	var_746_object->SetNPCDescription(var_758_int);
	string var_759_string;
	func_5122(var_759_string);
	var_746_object->SetPhoto(var_759_string);
	string var_760_string;
	func_5124(var_760_string);
	var_746_object->SetPhoto2(var_760_string);
	int var_761_int;
	func_5927(var_761_int);
	var_746_object->SetPlayerName(var_761_int);
	bool var_747_bool;
	@IsOverrideActive(var_747_bool);
	if(var_747_bool != 0) {
		var_739_int = -2;
		return 8;
	}
	@DoDialog(var_746_object);
	object var_763_object; object var_764_object;
	var_740_object = var_763_object;
	var_746_object = var_764_object;
	TaskCall(4);
	func_497(var_765_object, var_766_object, var_767_string, var_768_bool, var_763_object, var_764_object);
	TaskReturn();
	bool var_749_bool;
	var_746_object->IsDialogEnd(var_749_bool);
	
	for(;;) {
		var_796_bool = !var_749_bool; //@nz
		if(var_796_bool == 0) goto Label_486;
		@sync();
		var_746_object->IsDialogEnd(var_749_bool);
	}
	
Label_486:
	object var_797_object;
	var_740_object = var_797_object;
	func_4771();
	@StopDialog(var_746_object);
	var_746_object->GetReturnValue(-1);
	int var_748_int = var_739_int;
}
EMIT "Stack[-4] = 0";


void func_5025(object var_53_object, string var_54_string, int var_55_int)
{
	object var_57_object;
	@CreateInvItem(var_57_object);
	var_57_object->SetItemName(var_54_string);
	object var_58_object; object var_59_object; int var_60_int;
	var_53_object = var_58_object;
	var_57_object = var_59_object;
	var_55_int = var_60_int;
	func_5006(var_58_object, var_59_object, var_60_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_162(object var_2_object, string var_703_string)
{
	bool var_704_bool;
	func_5126(var_704_bool);
	if(!var_704_bool) //@nz
		return 0;
	if(var_703_string == var_2_object)
		return 0;
	string var_707_string; bool var_708_bool;
	var_703_string = var_707_string;
	if(var_703_string == "")
		var_708_bool = false;
	else
		var_708_bool = true;
	func_4933(var_707_string, var_708_bool);
	var_2_object = var_703_string;
	
}


void func_4771(void)
{
	bool var_374_bool;
	@CameraSwitchToNormal();
	bool var_375_bool;
	func_5126(var_375_bool);
	if(var_375_bool != 0) {
	} else {
		@HasAnimationTrack(var_374_bool, "head");
		if(var_374_bool == 0) goto Label_4787;
		@UnlookAsync("head");
	}
Label_4787:
	
}


void func_675(object var_0_object, int var_63_int, object var_64_object)
{
	var_0_object = var_64_object;
	bool var_74_bool; object var_75_object;
	object var_76_object;
	func_4961(var_76_object);
	var_76_object = var_75_object;
	func_4788(var_74_bool, var_75_object);
	bool var_164_bool; object var_165_object;
	var_64_object = var_165_object;
	func_4703(var_164_bool, var_165_object, 70.0);
	if(!var_164_bool) { //@nz
		var_63_int = -2;
		return 8;
	}
	object var_70_object;
	@CreateDialog(var_70_object);
	int var_211_int;
	func_5120(var_211_int);
	var_70_object->SetNPCName(var_211_int);
	int var_212_int;
	func_5118(var_212_int);
	var_70_object->SetNPCDescription(var_212_int);
	string var_213_string;
	func_5122(var_213_string);
	var_70_object->SetPhoto(var_213_string);
	string var_214_string;
	func_5124(var_214_string);
	var_70_object->SetPhoto2(var_214_string);
	int var_215_int;
	func_5927(var_215_int);
	var_70_object->SetPlayerName(var_215_int);
	bool var_71_bool;
	@IsOverrideActive(var_71_bool);
	if(var_71_bool != 0) {
		var_63_int = -2;
		return 8;
	}
	@DoDialog(var_70_object);
	object var_224_object; object var_225_object;
	var_64_object = var_224_object;
	var_70_object = var_225_object;
	TaskCall(6);
	func_756(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	bool var_73_bool;
	var_70_object->IsDialogEnd(var_73_bool);
	
	for(;;) {
		var_371_bool = !var_73_bool; //@nz
		if(var_371_bool == 0) goto Label_745;
		@sync();
		var_70_object->IsDialogEnd(var_73_bool);
	}
	
Label_745:
	object var_372_object;
	var_64_object = var_372_object;
	func_4771();
	@StopDialog(var_70_object);
	var_70_object->GetReturnValue(-1);
	int var_72_int = var_63_int;
}
EMIT "Stack[-4] = 0";


void func_5797(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 139, 1, 515339);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_5849(var_72_bool, var_73_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5286(void)
{
	func_5784();
	bool var_155_bool;
	func_5062(var_155_bool, "quest_d3_01", "completed");
}


// @pe
void func_5545(bool var_232_bool)
{
	int var_234_int;
	func_4977(var_234_int, "d3q01");
	if(var_234_int == 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


void func_5038(bool var_286_bool, object var_287_object, string var_288_string)
{
	int var_291_int;
	@GetInvItemByName(var_291_int, var_288_string);
	bool var_292_bool;
	var_287_object->HasItem(var_291_int, var_292_bool);
	var_292_bool = var_286_bool;
}


// @pe
void func_5296(void)
{
	@SetVariable("d3RubinToldWhereIsSimon", 1);
}


void func_5810(void)
{
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 140, 1, 515340);
	bool var_95_bool; object var_96_object;
	var_91_object = var_96_object;
	func_5849(var_95_bool, var_96_object, 139);
}
EMIT "Stack[-1] = 0";


void func_4788(bool var_74_bool, object var_75_object)
{
	int var_81_int; int var_82_int;
	@GetVariable("voice_common", var_81_int);
	if(var_81_int != 0) {
		bool var_85_bool; object var_86_object;
		var_75_object = var_86_object;
		func_4846(var_85_bool, var_86_object);
		if(!var_85_bool) { //@nz
			bool var_116_bool; object var_117_object;
			var_75_object = var_117_object;
			func_4883(var_116_bool, var_117_object);
			if(!var_116_bool) { //@nz
				var_74_bool = false;
				return 4;
			}
		}
		@irand(var_82_int, 2);
		if(var_82_int != 0)
			@SetVariable("voice_common", ((var_81_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_156_bool; object var_157_object;
		var_75_object = var_157_object;
		func_4883(var_156_bool, var_157_object);
		if(!var_156_bool) { //@nz
			bool var_159_bool; object var_160_object;
			var_75_object = var_160_object;
			func_4846(var_159_bool, var_160_object);
			if(!var_159_bool) { //@nz
				var_74_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4844;
	
Label_4844:
	var_74_bool = true;
	
}


// @pe
void func_5557(bool var_240_bool)
{
	int var_242_int;
	func_4977(var_242_int, "ood3Rubin1");
	if(var_242_int == 0) {
		var_240_bool = true;
		return 0;
	}
	var_240_bool = false;
}


// @pe
void func_5302(void)
{
	@SetVariable("ood5Rubin1", 1);
}


void func_5045(bool var_163_bool, object var_164_object, string var_165_string)
{
	int var_169_int;
	@GetInvItemByName(var_169_int, var_165_string);
	int var_170_int;
	@GetInvItemProperty(var_170_int, var_169_int, "Category");
	bool var_171_bool;
	var_164_object->RemoveItemByType(var_171_bool, var_169_int, var_170_int);
	if(var_171_bool != 0) {
		int var_174_int;
		var_169_int = var_174_int;
		func_4994(var_174_int, 1);
	}
	var_171_bool = var_163_bool;
}


void func_5308(void)
{
	@SetVariable("d5q01", 1);
	object var_48_object;
	func_5877(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_5074(var_59_float);
	var_45_object->AddMark("d5q01RubinGotoBigVlad", "pt_map_bigvlad", 1, 511956, var_59_float);
	float var_66_float;
	func_5074(var_66_float);
	var_45_object->AddMark("d5q01RubinGotoBigVladSelf", "pt_map_rubin", 1, 515348, var_66_float);
	func_5797();
	func_5810();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4287(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_822_object, object var_823_object)
{
	var_0_object = var_823_object;
	var_1_object = var_822_object;
	var_3_string = false;
	if(1 != 0) {
		func_4345(var_823_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_4315;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10c3";
	}
Label_4315:
	bool var_844_bool;
	func_5126(var_844_bool);
	if(var_844_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4926(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4344;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4344:
		return 0;

	}
	
}


void func_5823(void)
{
	object var_172_object;
	@CreateDiaryEntry(var_172_object, 147, 1, 515347);
	bool var_176_bool; object var_177_object;
	var_172_object = var_177_object;
	func_5849(var_176_bool, var_177_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5569(bool var_333_bool)
{
	int var_335_int;
	func_4977(var_335_int, "ood3Rubin2");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


void func_5062(bool var_181_bool, string var_182_string, string var_183_string)
{
	object var_185_object;
	@FindActor(var_185_object, var_182_string);
	if(var_185_object == null)
		var_181_bool = false;
	@Trigger(var_185_object, var_183_string);
	var_181_bool = true;
}
EMIT "Stack[-1] = 0";


void func_5836(object var_81_object)
{
	object var_83_object;
	@GetDiaryRoot(var_83_object);
	if(!var_83_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_81_object = false;
	}
	var_83_object = var_81_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5581(bool var_342_bool)
{
	int var_344_int;
	func_4977(var_344_int, "ood3Rubin3");
	if(var_344_int == 0) {
		var_342_bool = true;
		return 0;
	}
	var_342_bool = false;
}


void func_5074(float var_59_float)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	var_61_float = var_59_float;
}


// @pe
void func_983(object var_2_object, string var_250_string)
{
	bool var_251_bool;
	func_5126(var_251_bool);
	if(!var_251_bool) //@nz
		return 0;
	if(var_250_string == var_2_object)
		return 0;
	string var_254_string; bool var_255_bool;
	var_250_string = var_254_string;
	if(var_250_string == "")
		var_255_bool = false;
	else
		var_255_bool = true;
	func_4933(var_254_string, var_255_bool);
	var_2_object = var_250_string;
	
}


void func_5079(int var_57_int)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_57_int = 1 + (var_59_float / 24);
}


void func_5849(bool var_72_bool, object var_73_object, int var_74_int)
{
	object var_81_object;
	func_5836(var_81_object);
	object var_78_object;
	var_81_object = var_78_object;
	object var_79_object;
	var_78_object->Find(var_74_int, var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_74_int);
		var_72_bool = false;
	}
	var_79_object->AddChild(var_73_object);
	@SendWorldWndMessage(7);
	int var_80_int;
	var_73_object->GetCategory(var_80_int);
	@SetDiarySection(var_80_int);
	var_72_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5593(bool var_353_bool)
{
	int var_355_int;
	func_4977(var_355_int, "ood3Rubin4");
	if(var_355_int == 0) {
		var_353_bool = true;
		return 0;
	}
	var_353_bool = false;
}


// @pe
void func_5343(void)
{
	@SetVariable("ood5Rubin2", 1);
}


// @pe
void func_5088(bool var_55_bool, int var_56_int)
{
	int var_57_int;
	func_5079(var_57_int);
	var_55_bool = var_57_int == var_56_int;
}


// @pe
void func_4067(object var_2_object, string var_643_string)
{
	bool var_644_bool;
	func_5126(var_644_bool);
	if(!var_644_bool) //@nz
		return 0;
	if(var_643_string == var_2_object)
		return 0;
	string var_647_string; bool var_648_bool;
	var_643_string = var_647_string;
	if(var_643_string == "")
		var_648_bool = false;
	else
		var_648_bool = true;
	func_4933(var_647_string, var_648_bool);
	var_2_object = var_643_string;
	
}


void func_5349(object var_142_object)
{
	object var_150_object;
	func_5877(var_150_object);
	object var_147_object;
	var_150_object = var_147_object;
	object var_148_object;
	var_147_object->FindMark(var_148_object, "d5q01AlexandrGotoKaterina");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01BigVladGotoAlexandr");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01BurahMeeting");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d7q04NudeGotoAndrei");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01GrifWantsMoney");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01GrifWillHelp");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01BigVladGotoLara");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01PatrolGotoGrif");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01RubinGotoBigVlad");
	if(var_148_object != 0)
		var_148_object->Remove();
	var_147_object->FindMark(var_148_object, "d5q01RubinGotoBigVladSelf");
	if(var_148_object != 0)
		var_148_object->Remove();
	func_5823();
	int var_149_int;
	var_142_object->RemoveItemByType(var_149_int, "d5q01_heart", 1);
	bool var_181_bool;
	func_5062(var_181_bool, "quest_d5_01", "completed");
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5605(bool var_293_bool)
{
	int var_295_int;
	func_4977(var_295_int, "d3q01");
	if(var_295_int == 1000)
		var_293_bool = true;
	var_293_bool = false;
}


void func_5094(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


void func_5101(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_5094(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


void func_4846(bool var_85_bool, object var_86_object)
{
	string var_92_string; bool var_94_bool; int var_95_int; string var_96_string;
	var_92_string = "c";
	int var_93_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_86_object->HasProperty((var_92_string + (var_93_int + 1)), var_94_bool);
			if(!var_94_bool) { //@nz
			} else {
				var_93_int += 1;
			}
		}
		if(!var_93_int) { //@nz
			var_85_bool = false;
			return 10;
		}
		var_95_int = 0;
		if(var_93_int > 1)
			@irand(var_95_int, var_93_int);
		var_86_object->GetProperty((var_92_string + (var_95_int + 1)), var_96_string);
		bool var_108_bool; string var_109_string;
		var_96_string = var_109_string;
		func_4939(var_108_bool, var_109_string);
		var_108_bool = var_85_bool;
		return 10;

	}
}


void func_3568(object var_0_object, int var_381_int, object var_382_object)
{
	var_0_object = var_382_object;
	bool var_392_bool; object var_393_object;
	object var_394_object;
	func_4961(var_394_object);
	var_394_object = var_393_object;
	func_4788(var_392_bool, var_393_object);
	bool var_395_bool; object var_396_object;
	var_382_object = var_396_object;
	func_4703(var_395_bool, var_396_object, 70.0);
	if(!var_395_bool) { //@nz
		var_381_int = -2;
		return 8;
	}
	object var_388_object;
	@CreateDialog(var_388_object);
	int var_399_int;
	func_5120(var_399_int);
	var_388_object->SetNPCName(var_399_int);
	int var_400_int;
	func_5118(var_400_int);
	var_388_object->SetNPCDescription(var_400_int);
	string var_401_string;
	func_5122(var_401_string);
	var_388_object->SetPhoto(var_401_string);
	string var_402_string;
	func_5124(var_402_string);
	var_388_object->SetPhoto2(var_402_string);
	int var_403_int;
	func_5927(var_403_int);
	var_388_object->SetPlayerName(var_403_int);
	bool var_389_bool;
	@IsOverrideActive(var_389_bool);
	if(var_389_bool != 0) {
		var_381_int = -2;
		return 8;
	}
	@DoDialog(var_388_object);
	object var_405_object; object var_406_object;
	var_382_object = var_405_object;
	var_388_object = var_406_object;
	TaskCall(10);
	func_3649(var_407_object, var_408_object, var_409_string, var_410_bool, var_405_object, var_406_object);
	TaskReturn();
	bool var_391_bool;
	var_388_object->IsDialogEnd(var_391_bool);
	
	for(;;) {
		var_453_bool = !var_391_bool; //@nz
		if(var_453_bool == 0) goto Label_3638;
		@sync();
		var_388_object->IsDialogEnd(var_391_bool);
	}
	
Label_3638:
	object var_454_object;
	var_382_object = var_454_object;
	func_4771();
	@StopDialog(var_388_object);
	var_388_object->GetReturnValue(-1);
	int var_390_int = var_381_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_497(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_763_object, object var_764_object)
{
	var_0_object = var_764_object;
	var_1_object = var_763_object;
	var_3_string = false;
	if(1 != 0) {
		func_560(var_764_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_530;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1f5";
	}
Label_530:
	bool var_788_bool;
	func_5126(var_788_bool);
	if(var_788_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4926(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_559;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_559:
		return 0;

	}
	
}


// @pe
void func_5617(bool var_284_bool, object var_285_object)
{
	object var_287_object;
	var_285_object = var_287_object;
	bool var_286_bool;
	func_5038(var_286_bool, var_287_object, "d3q01_blood");
	if(var_286_bool != 0) {
		var_284_bool = true;
		return 0;
	}
	var_284_bool = false;
}


void func_4595(void)
{
	bool var_62_bool; int var_63_int; int var_64_int; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_4698(var_66_bool);
	if(!var_66_bool) //@nz
		return 12;
	int var_68_int;
	func_5101(var_68_int);
	int var_60_int;
	var_68_int = var_60_int;
	int var_61_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_61_int < 5) {
			bool var_84_bool;
			func_4698(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			if(!var_60_int) { //@nz
				@Sleep(3, var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			@irand(var_63_int, var_60_int);
			@irand(var_64_int, 5);
			if(var_64_int != 0)
				var_63_int = 0;
			string var_95_string; int var_96_int;
			var_63_int = var_96_int;
			func_5094(var_95_string, var_96_int);
			@PlayAnimation("all", var_95_string);
			@WaitForAnimEnd(var_65_bool);
			var_97_bool = !var_65_bool; //@nz
			if(var_97_bool == 0) goto Label_4650;
			goto Label_4661;
			}
				Label_4650:
					bool var_88_bool;
					func_4664(var_88_bool);
					var_89_bool = !var_88_bool; //@nz
					if(var_89_bool == 0) goto Label_4656;
			}
		}
	Label_4661:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4656:
		@ResetAAS();
		var_61_int += 1;
	}
	
}


// @pe
void func_756(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_224_object, object var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_231_bool = false;
		bool var_232_bool;
		func_5545(var_1_object);
		if(var_232_bool != 0) {
			bool var_240_bool;
			func_5557(var_1_object);
			if(var_240_bool != 0)
				var_231_bool = true;
		}
		if(var_231_bool != 0) {
			object var_246_object; object var_247_object;
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_5479();
			func_983(var_225_object, "Neutral");
			var_0_object->SetMessage(508737); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(508777, 9633, 9624); //@t
			var_0_object->AddReply(508781, 9629, 9628); //@t
		} else {
					bool var_282_bool = false;
					bool var_283_bool = false;
					bool var_284_bool;
					func_5617(var_284_bool, var_1_object);
					if(var_284_bool != 0) {
						bool var_293_bool;
						func_5605(var_1_object);
						if(!var_293_bool) //@nz
							var_283_bool = true;
					}
					if(var_283_bool != 0) {
						bool var_300_bool;
						func_5509(var_1_object);
						if(!var_300_bool) //@nz
							var_282_bool = true;
					}
					if(var_282_bool == 0) goto Label_846;
					func_983(var_225_object, "Neutral");
					var_0_object->SetMessage(536148); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(536149, 37916, 37914); //@t
					var_0_object->AddReply(536150, 37916, 37915); //@t
		}
	}
Label_953:
	for(;;) {
		bool var_269_bool;
		func_5126(var_269_bool);
		if(var_269_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4926(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_982;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_982:
			return 0;

		}

	}
	
Label_846:
	bool var_315_bool = false;
	bool var_316_bool;
	func_5617(var_316_bool, var_1_object);
	if(var_316_bool != 0) {
		bool var_318_bool;
		func_5605(var_1_object);
		if(!var_318_bool) //@nz
			var_315_bool = true;
	}
	if(var_315_bool != 0) {
		func_983(var_225_object, "Neutral");
		var_0_object->SetMessage(509078); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(509079, 9958, 9957); //@t
		goto Label_953;
	}
	func_983(var_225_object, "Neutral");
	var_0_object->SetMessage(508778); //@t
	var_0_object->ClearReplies(); //@t
	bool var_328_bool;
	func_5545(var_1_object);
	if(var_328_bool != 0)
		var_0_object->AddReply(511141, 12331, 12330); //@t
	bool var_333_bool;
	func_5569(var_1_object);
	if(var_333_bool != 0)
		var_0_object->AddReply(508779, 9681, 9626); //@t
	bool var_342_bool;
	func_5581(var_1_object);
	if(var_342_bool != 0)
		var_0_object->AddReply(508780, 9669, 9627); //@t
	bool var_351_bool = false;
	bool var_352_bool = false;
	bool var_353_bool;
	func_5593(var_1_object);
	if(var_353_bool != 0) {
		bool var_359_bool;
		func_5545(var_1_object);
		if(!var_359_bool) //@nz
			var_352_bool = true;
	}
	if(var_352_bool != 0) {
		bool var_362_bool;
		func_5605(var_1_object);
		if(!var_362_bool) //@nz
			var_351_bool = true;
	}
	if(var_351_bool != 0)
		var_0_object->AddReply(508802, 9651, 9650); //@t
	var_0_object->AddReply(511140, -1, 12329); //@t
	goto Label_953;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2f8";


void func_5877(object var_48_object)
{
	object var_51_object; object var_52_object;
	@GetMainOutdoorScene(var_51_object);
	if(var_51_object == null) {
		@Trace("Can't find main outdoor scene");
		var_52_object = null;
		var_52_object = var_48_object;
	}
	var_51_object->GetMap(var_52_object);
	var_52_object = var_48_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4345(object var_2_object, string var_829_string)
{
	bool var_830_bool;
	func_5126(var_830_bool);
	if(!var_830_bool) //@nz
		return 0;
	if(var_829_string == var_2_object)
		return 0;
	string var_833_string; bool var_834_bool;
	var_829_string = var_833_string;
	if(var_829_string == "")
		var_834_bool = false;
	else
		var_834_bool = true;
	func_4933(var_833_string, var_834_bool);
	var_2_object = var_829_string;
	
}


// @pe
void func_5628(bool var_488_bool)
{
	int var_490_int;
	func_4977(var_490_int, "ood5Rubin1");
	if(var_490_int == 0) {
		var_488_bool = true;
		return 0;
	}
	var_488_bool = false;
}


void func_5118(int var_212_int)
{
	var_212_int = 515551;
}


