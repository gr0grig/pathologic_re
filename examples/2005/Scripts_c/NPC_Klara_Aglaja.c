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
			func_6026();
			if(var_37_cvector == 27427) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_6278();
			}
			if(var_37_cvector == 27493) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_6295();
				object var_98_object = var_1_object;
				func_6585(var_0_object);
			}
			if(var_37_cvector == 27494) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_6305();
				object var_153_object = var_1_object;
				func_6578(var_0_object);
			}
			if(var_37_cvector == 29548) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_6437();
			}
			if(var_37_cvector == 29549) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_6443();
			}
			if(var_37_cvector == 40522) {
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_6419();
			}
			if(var_37_cvector == 40535) {
				object var_178_object = var_1_object;
				func_6571(var_0_object);
				object var_183_object = var_1_object;
				func_6538(var_0_object);
				object var_207_object; object var_208_object;
				var_207_object = var_1_object;
				var_208_object = var_0_object;
				func_6407();
			}
			if(var_36_bool == 27418) {
				bool var_213_bool;
				func_6638(var_1_object);
				if(var_213_bool != 0) {
					func_221(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526139); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528171, 29526, 29525); //@t
					var_0_object->AddReply(528185, 29500, 29540); //@t
					return 0;
				}
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526149); //@t
				var_0_object->ClearReplies(); //@t
				bool var_242_bool;
				func_6662(var_1_object);
				if(var_242_bool != 0)
					var_0_object->AddReply(526208, 29542, 27489); //@t
				bool var_251_bool;
				func_6898(var_1_object);
				if(var_251_bool != 0)
					var_0_object->AddReply(528192, 29552, 29548); //@t
				bool var_260_bool;
				func_6910(var_1_object);
				if(var_260_bool != 0)
					var_0_object->AddReply(528193, 29562, 29549); //@t
				bool var_269_bool = false;
				bool var_270_bool;
				func_6782(var_270_bool, var_1_object);
				if(var_270_bool != 0) {
					bool var_288_bool;
					func_6792(var_1_object);
					if(var_288_bool != 0)
						var_269_bool = true;
				}
				if(var_269_bool != 0)
					var_0_object->AddReply(538631, 40523, 40522); //@t
				var_0_object->AddReply(526150, -1, 27429); //@t
				return 0;
			}
			if(var_36_bool == 40523) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538633, 40526, 40524); //@t
				var_0_object->AddReply(538634, 40528, 40525); //@t
				return 0;
			}
			if(var_36_bool == 40528) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538637, 40532, 40529); //@t
				var_0_object->AddReply(538639, 40532, 40531); //@t
				return 0;
			}
			if(var_36_bool == 40526) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538635); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538638, 40532, 40530); //@t
				return 0;
			}
			if(var_36_bool == 40532) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538641, -1, 40535); //@t
				return 0;
			}
			if(var_36_bool == 29562) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528206, -1, 29563); //@t
				var_0_object->AddReply(541051, -1, 43153); //@t
				return 0;
			}
			if(var_36_bool == 29552) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528196, 29554, 29553); //@t
				return 0;
			}
			if(var_36_bool == 29554) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528198, 29556, 29555); //@t
				return 0;
			}
			if(var_36_bool == 29556) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528200, 29558, 29557); //@t
				return 0;
			}
			if(var_36_bool == 29558) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528201); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528202, 29560, 29559); //@t
				return 0;
			}
			if(var_36_bool == 29560) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528203); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528204, -1, 29561); //@t
				return 0;
			}
			if(var_36_bool == 29542) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528187, 27490, 29543); //@t
				return 0;
			}
			if(var_36_bool == 27490) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528188, 29545, 29544); //@t
				return 0;
			}
			if(var_36_bool == 29545) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526210, 29546, 27491); //@t
				return 0;
			}
			if(var_36_bool == 29546) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528191, 27492, 29547); //@t
				var_0_object->AddReply(528194, 27492, 29550); //@t
				return 0;
			}
			if(var_36_bool == 27492) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526212, -1, 27493); //@t
				var_0_object->AddReply(526213, -1, 27494); //@t
				return 0;
			}
			if(var_36_bool == 29526) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526140, 29500, 27419); //@t
				var_0_object->AddReply(541042, 43140, 43139); //@t
				return 0;
			}
			if(var_36_bool == 43140) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541044, 29500, 43141); //@t
				return 0;
			}
			if(var_36_bool == 29500) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528149, 29502, 29501); //@t
				var_0_object->AddReply(541046, 29502, 43144); //@t
				return 0;
			}
			if(var_36_bool == 29502) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528151, 29504, 29503); //@t
				var_0_object->AddReply(541047, 29504, 43146); //@t
				return 0;
			}
			if(var_36_bool == 29504) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528152); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528153, 29506, 29505); //@t
				var_0_object->AddReply(541048, 29506, 43148); //@t
				return 0;
			}
			if(var_36_bool == 29506) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528155, 27420, 29507); //@t
				return 0;
			}
			if(var_36_bool == 27420) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526141); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528174, 29529, 29528); //@t
				var_0_object->AddReply(541049, 29529, 43150); //@t
				return 0;
			}
			if(var_36_bool == 29529) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528176, 29531, 29530); //@t
				return 0;
			}
			if(var_36_bool == 29531) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526144, 27424, 27423); //@t
				return 0;
			}
			if(var_36_bool == 27424) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526146, 27426, 27425); //@t
				return 0;
			}
			if(var_36_bool == 27426) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528178, 29533, 29532); //@t
				var_0_object->AddReply(528182, 29537, 29536); //@t
				return 0;
			}
			if(var_36_bool == 29537) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528184, 29533, 29538); //@t
				return 0;
			}
			if(var_36_bool == 29533) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528180, 29535, 29534); //@t
				return 0;
			}
			if(var_36_bool == 29535) {
				func_221(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526148, -1, 27427); //@t
				bool var_536_bool;
				func_6650(var_1_object);
				if(var_536_bool != 0)
					var_0_object->AddReply(541050, -1, 43152); //@t
				return 0;
			}
			var_3_string = true;
			bool var_545_bool;
			func_6251(var_545_bool);
			if(var_545_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf4";
	
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
			func_6026();
			if(var_37_cvector == 27672) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_6321();
			}
			if(var_37_cvector == 27677) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_6321();
			}
			if(var_37_cvector == 27737) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_6333();
			}
			if(var_37_cvector == 41726) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_6449();
			}
			if(var_37_cvector == 41729) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_6455();
			}
			if(var_37_cvector == 41731) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_6467();
				object var_123_object = var_1_object;
				func_6253(var_0_object);
				object var_163_object = var_1_object;
				func_6397(var_0_object);
				object var_184_object = var_1_object;
				func_6627(var_0_object);
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_6413();
			}
			if(var_37_cvector == 40536) {
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_6425();
			}
			if(var_37_cvector == 40541) {
				object var_217_object = var_1_object;
				func_6571(var_0_object);
				object var_222_object = var_1_object;
				func_6538(var_0_object);
				object var_230_object; object var_231_object;
				var_230_object = var_1_object;
				var_231_object = var_0_object;
				func_6407();
				object var_234_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_37_cvector == 40542) {
				object var_242_object = var_1_object;
				func_6571(var_0_object);
				object var_244_object = var_1_object;
				func_6538(var_0_object);
				object var_246_object; object var_247_object;
				var_246_object = var_1_object;
				var_247_object = var_0_object;
				func_6407();
				object var_248_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_37_cvector == 40539) {
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_6592();
				object var_254_object = var_1_object;
				func_6538(var_0_object);
				object var_256_object; object var_257_object;
				var_256_object = var_1_object;
				var_257_object = var_0_object;
				func_6413();
				object var_258_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_37_cvector == 41732) {
				object var_262_object; object var_263_object;
				var_262_object = var_1_object;
				var_263_object = var_0_object;
				func_6461();
			}
			if(var_37_cvector == 41734) {
				object var_268_object = var_1_object;
				func_6260(var_0_object);
			}
			if(var_36_bool == 27671) {
				bool var_275_bool;
				func_6674(var_1_object);
				if(var_275_bool != 0) {
					object var_283_object; object var_284_object;
					var_283_object = var_1_object;
					var_284_object = var_0_object;
					func_6315();
					func_1304(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526396); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528207, 29565, 29564); //@t
					var_0_object->AddReply(528219, 29577, 29576); //@t
					return 0;
				}
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526399); //@t
				var_0_object->ClearReplies(); //@t
				bool var_308_bool;
				func_6686(var_1_object);
				if(var_308_bool != 0)
					var_0_object->AddReply(526400, 27676, 27675); //@t
				bool var_317_bool;
				func_6698(var_1_object);
				if(var_317_bool != 0)
					var_0_object->AddReply(526460, 29590, 27735); //@t
				bool var_326_bool = false;
				bool var_327_bool = false;
				bool var_328_bool;
				func_6828(var_328_bool, var_1_object);
				if(var_328_bool != 0) {
					bool var_343_bool;
					func_6838(var_343_bool, var_1_object);
					if(var_343_bool != 0)
						var_327_bool = true;
				}
				if(var_327_bool != 0) {
					bool var_357_bool;
					func_6922(var_1_object);
					if(var_357_bool != 0)
						var_326_bool = true;
				}
				if(var_326_bool != 0)
					var_0_object->AddReply(539774, 41727, 41726); //@t
				bool var_366_bool = false;
				bool var_367_bool = false;
				bool var_368_bool;
				func_6828(var_368_bool, var_1_object);
				if(var_368_bool != 0) {
					bool var_370_bool;
					func_6848(var_370_bool, var_1_object);
					if(var_370_bool != 0)
						var_367_bool = true;
				}
				if(var_367_bool != 0) {
					bool var_377_bool;
					func_6934(var_1_object);
					if(var_377_bool != 0)
						var_366_bool = true;
				}
				if(var_366_bool != 0)
					var_0_object->AddReply(539777, 41730, 41729); //@t
				bool var_386_bool = false;
				bool var_387_bool;
				func_6782(var_387_bool, var_1_object);
				if(var_387_bool != 0) {
					bool var_400_bool;
					func_6804(var_1_object);
					if(var_400_bool != 0)
						var_386_bool = true;
				}
				if(var_386_bool != 0)
					var_0_object->AddReply(538642, 40537, 40536); //@t
				bool var_409_bool = false;
				bool var_410_bool = false;
				bool var_411_bool;
				func_6828(var_411_bool, var_1_object);
				if(var_411_bool != 0) {
					bool var_413_bool;
					func_6858(var_413_bool, var_1_object);
					if(var_413_bool != 0)
						var_410_bool = true;
				}
				if(var_410_bool != 0) {
					bool var_420_bool;
					func_6946(var_1_object);
					if(var_420_bool != 0)
						var_409_bool = true;
				}
				if(var_409_bool != 0)
					var_0_object->AddReply(539780, 41733, 41732); //@t
				var_0_object->AddReply(526403, -1, 27678); //@t
				return 0;
			}
			if(var_36_bool == 41733) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539782, -1, 41734); //@t
				return 0;
			}
			if(var_36_bool == 40537) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538644, 40540, 40538); //@t
				var_0_object->AddReply(538645, -1, 40539); //@t
				return 0;
			}
			if(var_36_bool == 40540) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538647, -1, 40541); //@t
				var_0_object->AddReply(538648, -1, 40542); //@t
				return 0;
			}
			if(var_36_bool == 41730) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539779, -1, 41731); //@t
				return 0;
			}
			if(var_36_bool == 41727) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539776, -1, 41728); //@t
				return 0;
			}
			if(var_36_bool == 29590) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528232, 29592, 29591); //@t
				return 0;
			}
			if(var_36_bool == 29592) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528233); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528234, 27736, 29593); //@t
				var_0_object->AddReply(528235, 27736, 29594); //@t
				return 0;
			}
			if(var_36_bool == 27736) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528238, 29599, 29598); //@t
				return 0;
			}
			if(var_36_bool == 29599) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528239); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528236, 29597, 29596); //@t
				return 0;
			}
			if(var_36_bool == 29597) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526462, -1, 27737); //@t
				return 0;
			}
			if(var_36_bool == 27676) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528229, 29589, 29588); //@t
				return 0;
			}
			if(var_36_bool == 29589) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526402, -1, 27677); //@t
				return 0;
			}
			if(var_36_bool == 29577) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528221, 29579, 29578); //@t
				return 0;
			}
			if(var_36_bool == 29579) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528222); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528223, 29565, 29580); //@t
				return 0;
			}
			if(var_36_bool == 29565) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528209, 29567, 29566); //@t
				return 0;
			}
			if(var_36_bool == 29567) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528211, 29569, 29568); //@t
				return 0;
			}
			if(var_36_bool == 29569) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528213, 29571, 29570); //@t
				return 0;
			}
			if(var_36_bool == 29571) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528215, 29573, 29572); //@t
				return 0;
			}
			if(var_36_bool == 29573) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528217, 29575, 29574); //@t
				var_0_object->AddReply(528224, 29583, 29582); //@t
				return 0;
			}
			if(var_36_bool == 29583) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528226, 29575, 29584); //@t
				return 0;
			}
			if(var_36_bool == 29575) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528227, 29587, 29586); //@t
				return 0;
			}
			if(var_36_bool == 29587) {
				func_1304(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526397, -1, 27672); //@t
				var_0_object->AddReply(526398, -1, 27673); //@t
				return 0;
			}
			var_3_string = true;
			bool var_601_bool;
			func_6251(var_601_bool);
			if(var_601_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x52f";
	
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
			func_6026();
			if(var_37_cvector == 27742) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_6376();
			}
			if(var_37_cvector == 31171) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_6376();
			}
			if(var_37_cvector == 31197) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_6388();
			}
			if(var_37_cvector == 40543) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_6431();
			}
			if(var_37_cvector == 40545) {
				object var_103_object = var_1_object;
				func_6571(var_0_object);
				object var_143_object = var_1_object;
				func_6549(var_0_object);
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_6407();
				object var_171_object = var_1_object;
				func_6267(var_0_object);
				object var_192_object = var_1_object;
				func_6605(var_0_object);
			}
			if(var_37_cvector == 40546) {
				object var_200_object = var_1_object;
				func_6571(var_0_object);
				object var_202_object = var_1_object;
				func_6549(var_0_object);
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_6407();
				object var_206_object = var_1_object;
				func_6267(var_0_object);
				object var_208_object = var_1_object;
				func_6605(var_0_object);
			}
			if(var_37_cvector == 41735) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_6472();
			}
			if(var_37_cvector == 41738) {
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_6478();
			}
			if(var_37_cvector == 41740) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_6467();
				object var_234_object = var_1_object;
				func_6538(var_0_object);
				object var_242_object; object var_243_object;
				var_242_object = var_1_object;
				var_243_object = var_0_object;
				func_6407();
				object var_244_object = var_1_object;
				func_6627(var_0_object);
			}
			if(var_37_cvector == 41741) {
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_6484();
			}
			if(var_37_cvector == 41743) {
				object var_258_object = var_1_object;
				func_6260(var_0_object);
			}
			if(var_36_bool == 27739) {
				bool var_265_bool;
				func_6746(var_1_object);
				if(var_265_bool != 0) {
					object var_273_object; object var_274_object;
					var_273_object = var_1_object;
					var_274_object = var_0_object;
					func_6370();
					func_2380(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526473); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528240, 29601, 29600); //@t
					return 0;
				}
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526478); //@t
				var_0_object->ClearReplies(); //@t
				bool var_295_bool;
				func_6758(var_1_object);
				if(var_295_bool != 0)
					var_0_object->AddReply(529716, 31170, 31169); //@t
				bool var_304_bool;
				func_6770(var_1_object);
				if(var_304_bool != 0)
					var_0_object->AddReply(529721, 31178, 31175); //@t
				bool var_313_bool = false;
				bool var_314_bool;
				func_6782(var_314_bool, var_1_object);
				if(var_314_bool != 0) {
					bool var_332_bool;
					func_6816(var_1_object);
					if(var_332_bool != 0)
						var_313_bool = true;
				}
				if(var_313_bool != 0)
					var_0_object->AddReply(538649, 40544, 40543); //@t
				bool var_341_bool = false;
				bool var_342_bool = false;
				bool var_343_bool;
				func_6828(var_343_bool, var_1_object);
				if(var_343_bool != 0) {
					bool var_353_bool;
					func_6838(var_353_bool, var_1_object);
					if(var_353_bool != 0)
						var_342_bool = true;
				}
				if(var_342_bool != 0) {
					bool var_367_bool;
					func_6958(var_1_object);
					if(var_367_bool != 0)
						var_341_bool = true;
				}
				if(var_341_bool != 0)
					var_0_object->AddReply(539783, 41736, 41735); //@t
				bool var_376_bool = false;
				bool var_377_bool = false;
				bool var_378_bool;
				func_6828(var_378_bool, var_1_object);
				if(var_378_bool != 0) {
					bool var_380_bool;
					func_6878(var_380_bool, var_1_object);
					if(var_380_bool != 0)
						var_377_bool = true;
				}
				if(var_377_bool != 0) {
					bool var_397_bool;
					func_6970(var_1_object);
					if(var_397_bool != 0)
						var_376_bool = true;
				}
				if(var_376_bool != 0)
					var_0_object->AddReply(539786, 41739, 41738); //@t
				bool var_406_bool = false;
				bool var_407_bool = false;
				bool var_408_bool;
				func_6828(var_408_bool, var_1_object);
				if(var_408_bool != 0) {
					bool var_410_bool;
					func_6858(var_410_bool, var_1_object);
					if(var_410_bool != 0)
						var_407_bool = true;
				}
				if(var_407_bool != 0) {
					bool var_417_bool;
					func_6982(var_1_object);
					if(var_417_bool != 0)
						var_406_bool = true;
				}
				if(var_406_bool != 0)
					var_0_object->AddReply(539789, 41742, 41741); //@t
				var_0_object->AddReply(526479, -1, 27745); //@t
				return 0;
			}
			if(var_36_bool == 41742) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539790); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539791, -1, 41743); //@t
				return 0;
			}
			if(var_36_bool == 41739) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539788, -1, 41740); //@t
				return 0;
			}
			if(var_36_bool == 41736) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539785, -1, 41737); //@t
				return 0;
			}
			if(var_36_bool == 40544) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(538650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538651, -1, 40545); //@t
				var_0_object->AddReply(538652, -1, 40546); //@t
				return 0;
			}
			if(var_36_bool == 31178) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529725, 31181, 31179); //@t
				return 0;
			}
			if(var_36_bool == 31181) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529727); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529728, 31180, 31182); //@t
				var_0_object->AddReply(529737, 31180, 31191); //@t
				return 0;
			}
			if(var_36_bool == 31180) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529729, 31184, 31183); //@t
				return 0;
			}
			if(var_36_bool == 31184) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529730); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529731, 31186, 31185); //@t
				return 0;
			}
			if(var_36_bool == 31186) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529732); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529733, 31188, 31187); //@t
				return 0;
			}
			if(var_36_bool == 31188) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529735, 31190, 31189); //@t
				return 0;
			}
			if(var_36_bool == 31190) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529736); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529738, 31194, 31193); //@t
				return 0;
			}
			if(var_36_bool == 31194) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529740, 31196, 31195); //@t
				return 0;
			}
			if(var_36_bool == 31196) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529742, -1, 31197); //@t
				return 0;
			}
			if(var_36_bool == 31170) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529717); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529722, 31177, 31176); //@t
				return 0;
			}
			if(var_36_bool == 31177) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529718, -1, 31171); //@t
				return 0;
			}
			if(var_36_bool == 29601) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528242, 29603, 29602); //@t
				return 0;
			}
			if(var_36_bool == 29603) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528244, 29605, 29604); //@t
				var_0_object->AddReply(528246, -1, 29606); //@t
				return 0;
			}
			if(var_36_bool == 29605) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528247, 29608, 29607); //@t
				return 0;
			}
			if(var_36_bool == 29608) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526474, 27741, 27740); //@t
				var_0_object->AddReply(528249, 29610, 29609); //@t
				return 0;
			}
			if(var_36_bool == 29610) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528251, 27741, 29611); //@t
				return 0;
			}
			if(var_36_bool == 27741) {
				func_2380(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526476, -1, 27742); //@t
				var_0_object->AddReply(526477, -1, 27743); //@t
				return 0;
			}
			var_3_string = true;
			bool var_591_bool;
			func_6251(var_591_bool);
			if(var_591_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x963";
	
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
			func_6026();
			if(var_37_cvector == 28576) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_6349();
			}
			if(var_37_cvector == 28568) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_6349();
			}
			if(var_37_cvector == 28569) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_6349();
			}
			if(var_37_cvector == 28541) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_6361();
			}
			if(var_37_cvector == 28590) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_6361();
			}
			if(var_37_cvector == 41763) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_6514();
			}
			if(var_37_cvector == 41766) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_6520();
			}
			if(var_37_cvector == 41768) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_6467();
				object var_127_object = var_1_object;
				func_6560(var_0_object);
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_6407();
				object var_155_object = var_1_object;
				func_6594(var_0_object);
				object var_176_object = var_1_object;
				func_6616(var_0_object);
			}
			if(var_37_cvector == 41769) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_6526();
			}
			if(var_37_cvector == 41771) {
				object var_190_object = var_1_object;
				func_6260(var_0_object);
			}
			if(var_37_cvector == 41772) {
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_6532();
			}
			if(var_37_cvector == 41776) {
				object var_238_object = var_1_object;
				func_6571(var_0_object);
				object var_243_object = var_1_object;
				func_6560(var_0_object);
				object var_245_object; object var_246_object;
				var_245_object = var_1_object;
				var_246_object = var_0_object;
				func_6407();
				object var_247_object = var_1_object;
				func_6267(var_0_object);
				object var_253_object = var_1_object;
				func_6616(var_0_object);
				object var_255_object = var_1_object;
				func_6605(var_0_object);
			}
			if(var_37_cvector == 41777) {
				object var_263_object = var_1_object;
				func_6571(var_0_object);
				object var_265_object = var_1_object;
				func_6560(var_0_object);
				object var_267_object; object var_268_object;
				var_267_object = var_1_object;
				var_268_object = var_0_object;
				func_6407();
				object var_269_object = var_1_object;
				func_6616(var_0_object);
				object var_271_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_37_cvector == 41778) {
				object var_275_object = var_1_object;
				func_6571(var_0_object);
				object var_277_object = var_1_object;
				func_6560(var_0_object);
				object var_279_object; object var_280_object;
				var_279_object = var_1_object;
				var_280_object = var_0_object;
				func_6407();
				object var_281_object = var_1_object;
				func_6605(var_0_object);
				object var_283_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_36_bool == 28481) {
				bool var_287_bool;
				func_6710(var_1_object);
				if(var_287_bool != 0) {
					object var_295_object; object var_296_object;
					var_295_object = var_1_object;
					var_296_object = var_0_object;
					func_6343();
					func_3425(var_37_cvector, "Neutral");
					var_0_object->SetMessage(527173); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527174, 28483, 28482); //@t
					var_0_object->AddReply(527255, 28483, 28565); //@t
					return 0;
				}
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527177); //@t
				var_0_object->ClearReplies(); //@t
				bool var_320_bool;
				func_6722(var_1_object);
				if(var_320_bool != 0)
					var_0_object->AddReply(527179, 28488, 28487); //@t
				bool var_329_bool;
				func_6734(var_1_object);
				if(var_329_bool != 0)
					var_0_object->AddReply(527225, 28534, 28533); //@t
				bool var_338_bool = false;
				bool var_339_bool = false;
				bool var_340_bool;
				func_6828(var_340_bool, var_1_object);
				if(var_340_bool != 0) {
					bool var_355_bool;
					func_6838(var_355_bool, var_1_object);
					if(var_355_bool != 0)
						var_339_bool = true;
				}
				if(var_339_bool != 0) {
					bool var_369_bool;
					func_7042(var_1_object);
					if(var_369_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(539811, 41764, 41763); //@t
				bool var_378_bool = false;
				bool var_379_bool = false;
				bool var_380_bool;
				func_6868(var_380_bool, var_1_object);
				if(var_380_bool != 0) {
					bool var_390_bool;
					func_6848(var_390_bool, var_1_object);
					if(var_390_bool != 0)
						var_379_bool = true;
				}
				if(var_379_bool != 0) {
					bool var_397_bool;
					func_7054(var_1_object);
					if(var_397_bool != 0)
						var_378_bool = true;
				}
				if(var_378_bool != 0)
					var_0_object->AddReply(539814, 41767, 41766); //@t
				bool var_406_bool = false;
				bool var_407_bool = false;
				bool var_408_bool;
				func_6868(var_408_bool, var_1_object);
				if(var_408_bool != 0) {
					bool var_410_bool;
					func_6888(var_410_bool, var_1_object);
					if(var_410_bool != 0)
						var_407_bool = true;
				}
				if(var_407_bool != 0) {
					bool var_424_bool;
					func_7066(var_1_object);
					if(var_424_bool != 0)
						var_406_bool = true;
				}
				if(var_406_bool != 0)
					var_0_object->AddReply(539817, 41770, 41769); //@t
				bool var_433_bool = false;
				bool var_434_bool;
				func_6782(var_434_bool, var_1_object);
				if(var_434_bool != 0) {
					bool var_447_bool;
					func_7078(var_1_object);
					if(var_447_bool != 0)
						var_433_bool = true;
				}
				if(var_433_bool != 0)
					var_0_object->AddReply(539820, 41773, 41772); //@t
				var_0_object->AddReply(527182, -1, 28490); //@t
				var_0_object->AddReply(538653, -1, 40547); //@t
				return 0;
			}
			if(var_36_bool == 41773) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539822, 41775, 41774); //@t
				var_0_object->AddReply(539826, -1, 41778); //@t
				return 0;
			}
			if(var_36_bool == 41775) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539824, -1, 41776); //@t
				var_0_object->AddReply(539825, -1, 41777); //@t
				return 0;
			}
			if(var_36_bool == 41770) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539819, -1, 41771); //@t
				return 0;
			}
			if(var_36_bool == 41767) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539816, -1, 41768); //@t
				return 0;
			}
			if(var_36_bool == 41764) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539813, -1, 41765); //@t
				return 0;
			}
			if(var_36_bool == 28534) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527227, 28577, 28535); //@t
				return 0;
			}
			if(var_36_bool == 28577) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527267, 28579, 28578); //@t
				return 0;
			}
			if(var_36_bool == 28579) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527269, 28581, 28580); //@t
				return 0;
			}
			if(var_36_bool == 28581) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527271, 28536, 28582); //@t
				var_0_object->AddReply(527283, 28536, 28595); //@t
				return 0;
			}
			if(var_36_bool == 28536) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527273, 28585, 28584); //@t
				return 0;
			}
			if(var_36_bool == 28585) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527280, 28592, 28591); //@t
				return 0;
			}
			if(var_36_bool == 28592) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527277, 28589, 28588); //@t
				return 0;
			}
			if(var_36_bool == 28589) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527229, 28538, 28537); //@t
				return 0;
			}
			if(var_36_bool == 28538) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527231, 28540, 28539); //@t
				var_0_object->AddReply(527282, 28540, 28593); //@t
				return 0;
			}
			if(var_36_bool == 28540) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527233, -1, 28541); //@t
				var_0_object->AddReply(527279, -1, 28590); //@t
				return 0;
			}
			if(var_36_bool == 28488) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527181, 28567, 28489); //@t
				return 0;
			}
			if(var_36_bool == 28567) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527256); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527257, -1, 28568); //@t
				var_0_object->AddReply(527258, -1, 28569); //@t
				return 0;
			}
			if(var_36_bool == 28483) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527176, 28547, 28484); //@t
				var_0_object->AddReply(527178, 28555, 28486); //@t
				return 0;
			}
			if(var_36_bool == 28555) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527248, 28549, 28556); //@t
				return 0;
			}
			if(var_36_bool == 28547) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527239); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527240, 28549, 28548); //@t
				return 0;
			}
			if(var_36_bool == 28549) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527242, 28551, 28550); //@t
				return 0;
			}
			if(var_36_bool == 28551) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527244, 28553, 28552); //@t
				return 0;
			}
			if(var_36_bool == 28553) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527250, 28560, 28559); //@t
				return 0;
			}
			if(var_36_bool == 28560) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527246, 28558, 28554); //@t
				var_0_object->AddReply(527252, 28558, 28561); //@t
				return 0;
			}
			if(var_36_bool == 28558) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527253, 28570, 28563); //@t
				var_0_object->AddReply(527254, -1, 28564); //@t
				return 0;
			}
			if(var_36_bool == 28570) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527260, 28572, 28571); //@t
				return 0;
			}
			if(var_36_bool == 28572) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527261); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527262, 28575, 28573); //@t
				return 0;
			}
			if(var_36_bool == 28575) {
				func_3425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527265, -1, 28576); //@t
				return 0;
			}
			var_3_string = true;
			bool var_685_bool;
			func_6251(var_685_bool);
			if(var_685_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd78";
	
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
			func_6026();
			if(var_36_bool == 41138) {
				func_4527(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539196, -1, 41139); //@t
				var_0_object->AddReply(539197, -1, 41140); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_6251(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x11c6";
	
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
			func_6026();
			if(var_37_cvector == 41746) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_6490();
			}
			if(var_37_cvector == 41749) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_6496();
			}
			if(var_37_cvector == 41751) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_6467();
				object var_79_object = var_1_object;
				func_6560(var_0_object);
				object var_103_object = var_1_object;
				func_6627(var_0_object);
				object var_124_object = var_1_object;
				func_6594(var_0_object);
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_6407();
			}
			if(var_37_cvector == 41752) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_6502();
			}
			if(var_37_cvector == 41754) {
				object var_142_object = var_1_object;
				func_6260(var_0_object);
			}
			if(var_37_cvector == 41755) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_6508();
			}
			if(var_37_cvector == 41759) {
				object var_190_object = var_1_object;
				func_6571(var_0_object);
				object var_195_object = var_1_object;
				func_6560(var_0_object);
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_6407();
				object var_199_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_37_cvector == 41760) {
				object var_207_object = var_1_object;
				func_6571(var_0_object);
				object var_209_object = var_1_object;
				func_6560(var_0_object);
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_6407();
				object var_213_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_37_cvector == 41761) {
				object var_217_object = var_1_object;
				func_6571(var_0_object);
				object var_219_object = var_1_object;
				func_6560(var_0_object);
				object var_221_object; object var_222_object;
				var_221_object = var_1_object;
				var_222_object = var_0_object;
				func_6407();
				object var_223_object = var_1_object;
				func_6267(var_0_object);
			}
			if(var_36_bool == 41745) {
				func_4833(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539793); //@t
				var_0_object->ClearReplies(); //@t
				bool var_240_bool = false;
				bool var_241_bool = false;
				bool var_242_bool;
				func_6828(var_242_bool, var_1_object);
				if(var_242_bool != 0) {
					bool var_257_bool;
					func_6838(var_257_bool, var_1_object);
					if(var_257_bool != 0)
						var_241_bool = true;
				}
				if(var_241_bool != 0) {
					bool var_271_bool;
					func_6994(var_1_object);
					if(var_271_bool != 0)
						var_240_bool = true;
				}
				if(var_240_bool != 0)
					var_0_object->AddReply(539794, 41747, 41746); //@t
				bool var_282_bool = false;
				bool var_283_bool = false;
				bool var_284_bool;
				func_6828(var_284_bool, var_1_object);
				if(var_284_bool != 0) {
					bool var_286_bool;
					func_6878(var_286_bool, var_1_object);
					if(var_286_bool != 0)
						var_283_bool = true;
				}
				if(var_283_bool != 0) {
					bool var_303_bool;
					func_7006(var_1_object);
					if(var_303_bool != 0)
						var_282_bool = true;
				}
				if(var_282_bool != 0)
					var_0_object->AddReply(539797, 41750, 41749); //@t
				bool var_312_bool = false;
				bool var_313_bool = false;
				bool var_314_bool;
				func_6828(var_314_bool, var_1_object);
				if(var_314_bool != 0) {
					bool var_316_bool;
					func_6858(var_316_bool, var_1_object);
					if(var_316_bool != 0)
						var_313_bool = true;
				}
				if(var_313_bool != 0) {
					bool var_323_bool;
					func_7018(var_1_object);
					if(var_323_bool != 0)
						var_312_bool = true;
				}
				if(var_312_bool != 0)
					var_0_object->AddReply(539800, 41753, 41752); //@t
				bool var_332_bool = false;
				bool var_333_bool;
				func_6782(var_333_bool, var_1_object);
				if(var_333_bool != 0) {
					bool var_346_bool;
					func_7030(var_1_object);
					if(var_346_bool != 0)
						var_332_bool = true;
				}
				if(var_332_bool != 0)
					var_0_object->AddReply(539803, 41756, 41755); //@t
				var_0_object->AddReply(539810, -1, 41762); //@t
				var_0_object->AddReply(541106, -1, 43219); //@t
				return 0;
			}
			if(var_36_bool == 41756) {
				func_4833(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539805, 41758, 41757); //@t
				var_0_object->AddReply(539809, -1, 41761); //@t
				return 0;
			}
			if(var_36_bool == 41758) {
				func_4833(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539807, -1, 41759); //@t
				var_0_object->AddReply(539808, -1, 41760); //@t
				return 0;
			}
			if(var_36_bool == 41753) {
				func_4833(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539802, -1, 41754); //@t
				return 0;
			}
			if(var_36_bool == 41750) {
				func_4833(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539799, -1, 41751); //@t
				return 0;
			}
			if(var_36_bool == 41747) {
				func_4833(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539796, -1, 41748); //@t
				return 0;
			}
			var_3_string = true;
			bool var_402_bool;
			func_6251(var_402_bool);
			if(var_402_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x12f8";
	
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
			func_6026();
			if(var_36_int == 42548) {
				func_5376(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_6251(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1517";
	
	}

}


maintask task_15
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_5444(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_5515();
			bool var_40_bool = false;
			bool var_41_bool;
			func_5770(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_5484(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_5464(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_6033(var_82_object);
					var_82_object = var_81_object;
					func_5918(var_80_bool, var_81_object);
				}
			} else {
				func_5479(var_36_int);
				func_5506();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_5697();
		func_5515();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_5515();
		func_5998("Neutral");
		func_5506();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_5506();
		else
			func_5998("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_5697();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_5761(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_7471(var_54_object);
			func_5998("Neutral");
			func_5515();
			func_5506();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_40_bool;
	func_5770(var_40_bool);
	if(!var_40_bool) goto Label_0; //@nz
}


void func_7169(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 481, 1, 528048);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_7338(var_74_bool, var_75_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6662(bool var_350_bool)
{
	int var_352_int;
	func_6060(var_352_int, "k7q01");
	if(var_352_int == 9)
		var_350_bool = true;
	var_350_bool = false;
}


void func_13(object var_0_object, int var_286_int, object var_287_object)
{
	var_0_object = var_287_object;
	bool var_297_bool; object var_298_object;
	object var_299_object;
	func_6033(var_299_object);
	var_299_object = var_298_object;
	func_5860(var_297_bool, var_298_object);
	bool var_300_bool; object var_301_object;
	var_287_object = var_301_object;
	func_5775(var_300_bool, var_301_object, 70.0);
	if(!var_300_bool) { //@nz
		var_286_int = -2;
		return 8;
	}
	object var_293_object;
	@CreateDialog(var_293_object);
	int var_304_int;
	func_6245(var_304_int);
	var_293_object->SetNPCName(var_304_int);
	int var_305_int;
	func_6243(var_305_int);
	var_293_object->SetNPCDescription(var_305_int);
	string var_306_string;
	func_6247(var_306_string);
	var_293_object->SetPhoto(var_306_string);
	string var_307_string;
	func_6249(var_307_string);
	var_293_object->SetPhoto2(var_307_string);
	int var_308_int;
	func_7366(var_308_int);
	var_293_object->SetPlayerName(var_308_int);
	bool var_294_bool;
	@IsOverrideActive(var_294_bool);
	if(var_294_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	@DoDialog(var_293_object);
	object var_310_object; object var_311_object;
	var_287_object = var_310_object;
	var_293_object = var_311_object;
	TaskCall(2);
	func_94(var_312_object, var_313_object, var_314_string, var_315_bool, var_310_object, var_311_object);
	TaskReturn();
	bool var_296_bool;
	var_293_object->IsDialogEnd(var_296_bool);
	
	for(;;) {
		var_403_bool = !var_296_bool; //@nz
		if(var_403_bool == 0) goto Label_83;
		@sync();
		var_293_object->IsDialogEnd(var_296_bool);
	}
	
Label_83:
	object var_404_object;
	var_287_object = var_404_object;
	func_5843();
	@StopDialog(var_293_object);
	var_293_object->GetReturnValue(-1);
	int var_295_int = var_286_int;
}
EMIT "Stack[-4] = 0";


void func_7182(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 756, 2, 539741);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_7338(var_61_bool, var_62_object, 751);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6674(bool var_438_bool)
{
	int var_440_int;
	func_6060(var_440_int, "ook8Aglaja1");
	if(var_440_int == 0) {
		var_438_bool = true;
		return 0;
	}
	var_438_bool = false;
}


void func_6163(float var_151_float)
{
	object var_153_object;
	@CreateFloatVector(var_153_object);
	var_153_object->add(var_151_float);
	@SendWorldWndMessage(16, var_153_object);
}
EMIT "Stack[-1] = 0";


void func_7195(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 416, 1, 526215);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_7338(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


void func_6173(bool var_93_bool, string var_94_string, string var_95_string)
{
	object var_97_object;
	@FindActor(var_97_object, var_94_string);
	if(var_97_object == null)
		var_93_bool = false;
	@Trigger(var_97_object, var_95_string);
	var_93_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6686(bool var_473_bool)
{
	int var_475_int;
	func_6060(var_475_int, "k8q01");
	if(var_475_int == 0) {
		var_473_bool = true;
		return 0;
	}
	var_473_bool = false;
}


void func_7208(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 417, 1, 526216);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_7338(var_74_bool, var_75_object, 416);
}
EMIT "Stack[-1] = 0";


void func_6185(int var_136_int)
{
	float var_138_float;
	@GetGameTime(var_138_float);
	var_136_int = 1 + (var_138_float / 24);
}


// @pe
void func_6698(bool var_482_bool)
{
	int var_484_int;
	func_6060(var_484_int, "k8q01");
	if(var_484_int == 7)
		var_482_bool = true;
	var_482_bool = false;
}


// @pe
void func_6194(bool var_283_bool, int var_284_int)
{
	int var_285_int;
	func_6185(var_285_int);
	var_283_bool = var_285_int == var_284_int;
}


void func_2098(object var_0_object, int var_585_int, object var_586_object)
{
	var_0_object = var_586_object;
	bool var_596_bool; object var_597_object;
	object var_598_object;
	func_6033(var_598_object);
	var_598_object = var_597_object;
	func_5860(var_596_bool, var_597_object);
	bool var_599_bool; object var_600_object;
	var_586_object = var_600_object;
	func_5775(var_599_bool, var_600_object, 70.0);
	if(!var_599_bool) { //@nz
		var_585_int = -2;
		return 8;
	}
	object var_592_object;
	@CreateDialog(var_592_object);
	int var_603_int;
	func_6245(var_603_int);
	var_592_object->SetNPCName(var_603_int);
	int var_604_int;
	func_6243(var_604_int);
	var_592_object->SetNPCDescription(var_604_int);
	string var_605_string;
	func_6247(var_605_string);
	var_592_object->SetPhoto(var_605_string);
	string var_606_string;
	func_6249(var_606_string);
	var_592_object->SetPhoto2(var_606_string);
	int var_607_int;
	func_7366(var_607_int);
	var_592_object->SetPlayerName(var_607_int);
	bool var_593_bool;
	@IsOverrideActive(var_593_bool);
	if(var_593_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	@DoDialog(var_592_object);
	object var_609_object; object var_610_object;
	var_586_object = var_609_object;
	var_592_object = var_610_object;
	TaskCall(6);
	func_2179(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	bool var_595_bool;
	var_592_object->IsDialogEnd(var_595_bool);
	
	for(;;) {
		var_741_bool = !var_595_bool; //@nz
		if(var_741_bool == 0) goto Label_2168;
		@sync();
		var_592_object->IsDialogEnd(var_595_bool);
	}
	
Label_2168:
	object var_742_object;
	var_586_object = var_742_object;
	func_5843();
	@StopDialog(var_592_object);
	var_592_object->GetReturnValue(-1);
	int var_594_int = var_585_int;
}
EMIT "Stack[-4] = 0";


void func_7221(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 428, 1, 526227);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_7338(var_92_bool, var_93_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6710(bool var_891_bool)
{
	int var_893_int;
	func_6060(var_893_int, "ook11Aglaja1");
	if(var_893_int == 0) {
		var_891_bool = true;
		return 0;
	}
	var_891_bool = false;
}


void func_6200(bool var_55_bool, int var_56_int)
{
	float var_60_float;
	@GetGameTime(var_60_float);
	if((1 + (var_60_float / 24)) != var_56_int)
		var_55_bool = false;
	int var_67_int;
	var_60_float = var_67_int;
	int var_62_int = var_67_int % 24;
	var_55_bool = var_62_int < 7;
}


void func_3133(object var_0_object, int var_860_int, object var_861_object)
{
	var_0_object = var_861_object;
	bool var_871_bool; object var_872_object;
	object var_873_object;
	func_6033(var_873_object);
	var_873_object = var_872_object;
	func_5860(var_871_bool, var_872_object);
	bool var_874_bool; object var_875_object;
	var_861_object = var_875_object;
	func_5775(var_874_bool, var_875_object, 70.0);
	if(!var_874_bool) { //@nz
		var_860_int = -2;
		return 8;
	}
	object var_867_object;
	@CreateDialog(var_867_object);
	int var_878_int;
	func_6245(var_878_int);
	var_867_object->SetNPCName(var_878_int);
	int var_879_int;
	func_6243(var_879_int);
	var_867_object->SetNPCDescription(var_879_int);
	string var_880_string;
	func_6247(var_880_string);
	var_867_object->SetPhoto(var_880_string);
	string var_881_string;
	func_6249(var_881_string);
	var_867_object->SetPhoto2(var_881_string);
	int var_882_int;
	func_7366(var_882_int);
	var_867_object->SetPlayerName(var_882_int);
	bool var_868_bool;
	@IsOverrideActive(var_868_bool);
	if(var_868_bool != 0) {
		var_860_int = -2;
		return 8;
	}
	@DoDialog(var_867_object);
	object var_884_object; object var_885_object;
	var_861_object = var_884_object;
	var_867_object = var_885_object;
	TaskCall(8);
	func_3214(var_886_object, var_887_object, var_888_string, var_889_bool, var_884_object, var_885_object);
	TaskReturn();
	bool var_870_bool;
	var_867_object->IsDialogEnd(var_870_bool);
	
	for(;;) {
		var_1017_bool = !var_870_bool; //@nz
		if(var_1017_bool == 0) goto Label_3203;
		@sync();
		var_867_object->IsDialogEnd(var_870_bool);
	}
	
Label_3203:
	object var_1018_object;
	var_861_object = var_1018_object;
	func_5843();
	@StopDialog(var_867_object);
	var_867_object->GetReturnValue(-1);
	int var_869_int = var_860_int;
}
EMIT "Stack[-4] = 0";


void func_5695(bool var_88_bool)
{
	var_88_bool = true;
}


// @pe
void func_4672(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_769_object, object var_770_object)
{
	var_0_object = var_770_object;
	var_1_object = var_769_object;
	var_3_string = false;
	if(1 != 0) {
		func_4833(var_770_object, "Neutral");
		var_0_object->SetMessage(539793); //@t
		var_0_object->ClearReplies(); //@t
		bool var_785_bool = false;
		bool var_786_bool = false;
		bool var_787_bool;
		func_6828(var_787_bool, var_1_object);
		if(var_787_bool != 0) {
			bool var_789_bool;
			func_6838(var_789_bool, var_1_object);
			if(var_789_bool != 0)
				var_786_bool = true;
		}
		if(var_786_bool != 0) {
			bool var_791_bool;
			func_6994(var_1_object);
			if(var_791_bool != 0)
				var_785_bool = true;
		}
		if(var_785_bool != 0)
			var_0_object->AddReply(539794, 41747, 41746); //@t
		bool var_800_bool = false;
		bool var_801_bool = false;
		bool var_802_bool;
		func_6828(var_802_bool, var_1_object);
		if(var_802_bool != 0) {
			bool var_804_bool;
			func_6878(var_804_bool, var_1_object);
			if(var_804_bool != 0)
				var_801_bool = true;
		}
		if(var_801_bool != 0) {
			bool var_806_bool;
			func_7006(var_1_object);
			if(var_806_bool != 0)
				var_800_bool = true;
		}
		if(var_800_bool != 0)
			var_0_object->AddReply(539797, 41750, 41749); //@t
		bool var_815_bool = false;
		bool var_816_bool = false;
		bool var_817_bool;
		func_6828(var_817_bool, var_1_object);
		if(var_817_bool != 0) {
			bool var_819_bool;
			func_6858(var_819_bool, var_1_object);
			if(var_819_bool != 0)
				var_816_bool = true;
		}
		if(var_816_bool != 0) {
			bool var_821_bool;
			func_7018(var_1_object);
			if(var_821_bool != 0)
				var_815_bool = true;
		}
		if(var_815_bool != 0)
			var_0_object->AddReply(539800, 41753, 41752); //@t
		bool var_830_bool = false;
		bool var_831_bool;
		func_6782(var_831_bool, var_1_object);
		if(var_831_bool != 0) {
			bool var_833_bool;
			func_7030(var_1_object);
			if(var_833_bool != 0)
				var_830_bool = true;
		}
		if(var_830_bool != 0)
			var_0_object->AddReply(539803, 41756, 41755); //@t
		var_0_object->AddReply(539810, -1, 41762); //@t
		var_0_object->AddReply(541106, -1, 43219); //@t
		goto Label_4803;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1244";
	}
Label_4803:
	bool var_848_bool;
	func_6251(var_848_bool);
	if(var_848_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5998(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4832;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4832:
		return 0;

	}
	
}


void func_5697(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_6722(bool var_926_bool)
{
	int var_928_int;
	func_6060(var_928_int, "k11q01");
	if(var_928_int == 0) {
		var_926_bool = true;
		return 0;
	}
	var_926_bool = false;
}


void func_7234(void)
{
	object var_143_object;
	@CreateDiaryEntry(var_143_object, 429, 1, 526228);
	bool var_147_bool; object var_148_object;
	var_143_object = var_148_object;
	func_7338(var_147_bool, var_148_object, 416);
}
EMIT "Stack[-1] = 0";


void func_5702(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


// @pe
void func_1098(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_431_object, object var_432_object)
{
	var_0_object = var_432_object;
	var_1_object = var_431_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_438_bool;
		func_6674(var_1_object);
		if(var_438_bool != 0) {
			object var_444_object; object var_445_object;
			var_444_object = var_1_object;
			var_445_object = var_0_object;
			func_6315();
			func_1304(var_432_object, "Neutral");
			var_0_object->SetMessage(526396); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528207, 29565, 29564); //@t
			var_0_object->AddReply(528219, 29577, 29576); //@t
		} else {
					func_1304(var_432_object, "Neutral");
					var_0_object->SetMessage(526399); //@t
					var_0_object->ClearReplies(); //@t
					bool var_473_bool;
					func_6686(var_1_object);
					if(var_473_bool != 0)
						var_0_object->AddReply(526400, 27676, 27675); //@t
					bool var_482_bool;
					func_6698(var_1_object);
					if(var_482_bool != 0)
						var_0_object->AddReply(526460, 29590, 27735); //@t
					bool var_491_bool = false;
					bool var_492_bool = false;
					bool var_493_bool;
					func_6828(var_493_bool, var_1_object);
					if(var_493_bool != 0) {
						bool var_503_bool;
						func_6838(var_503_bool, var_1_object);
						if(var_503_bool != 0)
							var_492_bool = true;
					}
					if(var_492_bool != 0) {
						bool var_517_bool;
						func_6922(var_1_object);
						if(var_517_bool != 0)
							var_491_bool = true;
					}
					if(var_491_bool != 0)
						var_0_object->AddReply(539774, 41727, 41726); //@t
					bool var_526_bool = false;
					bool var_527_bool = false;
					bool var_528_bool;
					func_6828(var_528_bool, var_1_object);
					if(var_528_bool != 0) {
						bool var_530_bool;
						func_6848(var_530_bool, var_1_object);
						if(var_530_bool != 0)
							var_527_bool = true;
					}
					if(var_527_bool != 0) {
						bool var_537_bool;
						func_6934(var_1_object);
						if(var_537_bool != 0)
							var_526_bool = true;
					}
					if(var_526_bool != 0)
						var_0_object->AddReply(539777, 41730, 41729); //@t
					bool var_546_bool = false;
					bool var_547_bool;
					func_6782(var_547_bool, var_1_object);
					if(var_547_bool != 0) {
						bool var_549_bool;
						func_6804(var_1_object);
						if(var_549_bool != 0)
							var_546_bool = true;
					}
					if(var_546_bool != 0)
						var_0_object->AddReply(538642, 40537, 40536); //@t
					bool var_558_bool = false;
					bool var_559_bool = false;
					bool var_560_bool;
					func_6828(var_560_bool, var_1_object);
					if(var_560_bool != 0) {
						bool var_562_bool;
						func_6858(var_562_bool, var_1_object);
						if(var_562_bool != 0)
							var_559_bool = true;
					}
					if(var_559_bool != 0) {
						bool var_569_bool;
						func_6946(var_1_object);
						if(var_569_bool != 0)
							var_558_bool = true;
					}
					if(var_558_bool != 0)
						var_0_object->AddReply(539780, 41733, 41732); //@t
					var_0_object->AddReply(526403, -1, 27678); //@t
		}
	}
	for(;;) {
		bool var_463_bool;
		func_6251(var_463_bool);
		if(var_463_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5998(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1303;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1303:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x44e";


void func_6219(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


// @pe
void func_6734(bool var_935_bool)
{
	int var_937_int;
	func_6060(var_937_int, "k11q01");
	if(var_937_int == 7)
		var_935_bool = true;
	var_935_bool = false;
}


void func_5710(bool var_163_bool, object var_164_object, string var_165_string)
{
	var_170_bool = IsFuncExist(var_164_object, "HasProperty", 2);
	if(!var_170_bool) { //@nz
		var_163_bool = false;
		return 2;
	}
	bool var_167_bool;
	var_164_object->HasProperty(var_165_string, var_167_bool);
	var_167_bool = var_163_bool;
}


void func_7247(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 438, 1, 526463);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_7338(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


void func_6226(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_6219(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


// @pe
void func_6746(bool var_616_bool)
{
	int var_618_int;
	func_6060(var_618_int, "ook9Aglaja1");
	if(var_618_int == 0) {
		var_616_bool = true;
		return 0;
	}
	var_616_bool = false;
}


void func_5722(bool var_155_bool, object var_156_object, string var_157_string, float var_158_float, float var_159_float, float var_160_float)
{
	object var_164_object;
	var_156_object = var_164_object;
	string var_165_string;
	var_157_string = var_165_string;
	bool var_163_bool;
	func_5710(var_163_bool, var_164_object, var_165_string);
	if(!var_163_bool) //@nz
		var_155_bool = false;
	float var_162_float;
	var_156_object->GetProperty(var_157_string, var_162_float);
	float var_173_float; float var_175_float; float var_176_float;
	var_159_float = var_175_float;
	var_160_float = var_176_float;
	func_6049(var_173_float, (var_162_float + var_158_float), var_175_float, var_176_float);
	var_156_object->SetProperty(var_157_string, var_173_float);
	var_155_bool = true;
}


void func_7260(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 439, 1, 526464);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_7338(var_74_bool, var_75_object, 438);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_310_object, object var_311_object)
{
	var_0_object = var_311_object;
	var_1_object = var_310_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_317_bool;
		func_6638(var_1_object);
		if(var_317_bool != 0) {
			func_221(var_311_object, "Neutral");
			var_0_object->SetMessage(526139); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528171, 29526, 29525); //@t
			var_0_object->AddReply(528185, 29500, 29540); //@t
		} else {
					func_221(var_311_object, "Neutral");
					var_0_object->SetMessage(526149); //@t
					var_0_object->ClearReplies(); //@t
					bool var_350_bool;
					func_6662(var_1_object);
					if(var_350_bool != 0)
						var_0_object->AddReply(526208, 29542, 27489); //@t
					bool var_359_bool;
					func_6898(var_1_object);
					if(var_359_bool != 0)
						var_0_object->AddReply(528192, 29552, 29548); //@t
					bool var_368_bool;
					func_6910(var_1_object);
					if(var_368_bool != 0)
						var_0_object->AddReply(528193, 29562, 29549); //@t
					bool var_377_bool = false;
					bool var_378_bool;
					func_6782(var_378_bool, var_1_object);
					if(var_378_bool != 0) {
						bool var_391_bool;
						func_6792(var_1_object);
						if(var_391_bool != 0)
							var_377_bool = true;
					}
					if(var_377_bool != 0)
						var_0_object->AddReply(538631, 40523, 40522); //@t
					var_0_object->AddReply(526150, -1, 27429); //@t
		}
	}
	for(;;) {
		bool var_340_bool;
		func_6251(var_340_bool);
		if(var_340_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5998(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_220;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_220:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_6243(int var_224_int)
{
	var_224_int = 515527;
}


void func_6245(int var_223_int)
{
	var_223_int = 513334;
}


// @pe
void func_6758(bool var_648_bool)
{
	int var_650_int;
	func_6060(var_650_int, "k9q01");
	if(var_650_int == 0) {
		var_648_bool = true;
		return 0;
	}
	var_648_bool = false;
}


void func_6247(string var_225_string)
{
	var_225_string = "ui/NPC_Aglaja.png";
}


void func_6249(string var_226_string)
{
	var_226_string = "ui/NPC_Aglaja_b.png";
}


void func_7273(void)
{
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 446, 1, 526471);
	bool var_90_bool; object var_91_object;
	var_86_object = var_91_object;
	func_7338(var_90_bool, var_91_object, 438);
}
EMIT "Stack[-1] = 0";


void func_6251(bool var_119_bool)
{
	var_119_bool = true;
}


// @pe
void func_6253(object var_123_object)
{
	object var_126_object;
	var_123_object = var_126_object;
	bool var_125_bool;
	func_6128(var_125_bool, var_126_object, 0.05);
}


void func_5744(object var_89_object, string var_90_string, int var_91_int)
{
	int var_93_int;
	var_89_object->GetProperty(var_90_string, var_93_int);
	var_89_object->SetProperty(var_90_string, (var_93_int + var_91_int));
}


// @pe
void func_6770(bool var_657_bool)
{
	int var_659_int;
	func_6060(var_659_int, "k9q01");
	if(var_659_int == 7)
		var_657_bool = true;
	var_657_bool = false;
}


// @pe
void func_6260(object var_142_object)
{
	object var_145_object;
	var_142_object = var_145_object;
	bool var_144_bool;
	func_6128(var_144_bool, var_145_object, -0.05);
}


void func_5237(object var_0_object, int var_1019_int, object var_1020_object)
{
	var_0_object = var_1020_object;
	bool var_1030_bool; object var_1031_object;
	object var_1032_object;
	func_6033(var_1032_object);
	var_1032_object = var_1031_object;
	func_5860(var_1030_bool, var_1031_object);
	bool var_1033_bool; object var_1034_object;
	var_1020_object = var_1034_object;
	func_5775(var_1033_bool, var_1034_object, 70.0);
	if(!var_1033_bool) { //@nz
		var_1019_int = -2;
		return 8;
	}
	object var_1026_object;
	@CreateDialog(var_1026_object);
	int var_1037_int;
	func_6245(var_1037_int);
	var_1026_object->SetNPCName(var_1037_int);
	int var_1038_int;
	func_6243(var_1038_int);
	var_1026_object->SetNPCDescription(var_1038_int);
	string var_1039_string;
	func_6247(var_1039_string);
	var_1026_object->SetPhoto(var_1039_string);
	string var_1040_string;
	func_6249(var_1040_string);
	var_1026_object->SetPhoto2(var_1040_string);
	int var_1041_int;
	func_7366(var_1041_int);
	var_1026_object->SetPlayerName(var_1041_int);
	bool var_1027_bool;
	@IsOverrideActive(var_1027_bool);
	if(var_1027_bool != 0) {
		var_1019_int = -2;
		return 8;
	}
	@DoDialog(var_1026_object);
	object var_1043_object; object var_1044_object;
	var_1020_object = var_1043_object;
	var_1026_object = var_1044_object;
	TaskCall(14);
	func_5318(var_1045_object, var_1046_object, var_1047_string, var_1048_bool, var_1043_object, var_1044_object);
	TaskReturn();
	bool var_1029_bool;
	var_1026_object->IsDialogEnd(var_1029_bool);
	
	for(;;) {
		var_1073_bool = !var_1029_bool; //@nz
		if(var_1073_bool == 0) goto Label_5307;
		@sync();
		var_1026_object->IsDialogEnd(var_1029_bool);
	}
	
Label_5307:
	object var_1074_object;
	var_1020_object = var_1074_object;
	func_5843();
	@StopDialog(var_1026_object);
	var_1026_object->GetReturnValue(-1);
	int var_1028_int = var_1019_int;
}
EMIT "Stack[-4] = 0";


void func_7286(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 517, 1, 529809);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_7338(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5751(bool var_44_bool, cvector var_45_cvector)
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


// @pe
void func_6267(object var_199_object)
{
	@Trace("beta_pills 5 is given");
	object var_202_object;
	var_199_object = var_202_object;
	func_6115(var_202_object, "beta_pills", 5);
}


// @pe
void func_6782(bool var_378_bool, object var_379_object)
{
	object var_381_object;
	var_379_object = var_381_object;
	func_7090(var_381_object);
	bool var_380_bool;
	if(var_380_bool != 0) {
		var_378_bool = true;
		return 0;
	}
	var_378_bool = false;
}


void func_5761(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_5751(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


// @pe
void func_2179(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_609_object, object var_610_object)
{
	var_0_object = var_610_object;
	var_1_object = var_609_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_616_bool;
		func_6746(var_1_object);
		if(var_616_bool != 0) {
			object var_622_object; object var_623_object;
			var_622_object = var_1_object;
			var_623_object = var_0_object;
			func_6370();
			func_2380(var_610_object, "Neutral");
			var_0_object->SetMessage(526473); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528240, 29601, 29600); //@t
		} else {
					func_2380(var_610_object, "Neutral");
					var_0_object->SetMessage(526478); //@t
					var_0_object->ClearReplies(); //@t
					bool var_648_bool;
					func_6758(var_1_object);
					if(var_648_bool != 0)
						var_0_object->AddReply(529716, 31170, 31169); //@t
					bool var_657_bool;
					func_6770(var_1_object);
					if(var_657_bool != 0)
						var_0_object->AddReply(529721, 31178, 31175); //@t
					bool var_666_bool = false;
					bool var_667_bool;
					func_6782(var_667_bool, var_1_object);
					if(var_667_bool != 0) {
						bool var_669_bool;
						func_6816(var_1_object);
						if(var_669_bool != 0)
							var_666_bool = true;
					}
					if(var_666_bool != 0)
						var_0_object->AddReply(538649, 40544, 40543); //@t
					bool var_678_bool = false;
					bool var_679_bool = false;
					bool var_680_bool;
					func_6828(var_680_bool, var_1_object);
					if(var_680_bool != 0) {
						bool var_682_bool;
						func_6838(var_682_bool, var_1_object);
						if(var_682_bool != 0)
							var_679_bool = true;
					}
					if(var_679_bool != 0) {
						bool var_684_bool;
						func_6958(var_1_object);
						if(var_684_bool != 0)
							var_678_bool = true;
					}
					if(var_678_bool != 0)
						var_0_object->AddReply(539783, 41736, 41735); //@t
					bool var_693_bool = false;
					bool var_694_bool = false;
					bool var_695_bool;
					func_6828(var_695_bool, var_1_object);
					if(var_695_bool != 0) {
						bool var_697_bool;
						func_6878(var_697_bool, var_1_object);
						if(var_697_bool != 0)
							var_694_bool = true;
					}
					if(var_694_bool != 0) {
						bool var_714_bool;
						func_6970(var_1_object);
						if(var_714_bool != 0)
							var_693_bool = true;
					}
					if(var_693_bool != 0)
						var_0_object->AddReply(539786, 41739, 41738); //@t
					bool var_723_bool = false;
					bool var_724_bool = false;
					bool var_725_bool;
					func_6828(var_725_bool, var_1_object);
					if(var_725_bool != 0) {
						bool var_727_bool;
						func_6858(var_727_bool, var_1_object);
						if(var_727_bool != 0)
							var_724_bool = true;
					}
					if(var_724_bool != 0) {
						bool var_729_bool;
						func_6982(var_1_object);
						if(var_729_bool != 0)
							var_723_bool = true;
					}
					if(var_723_bool != 0)
						var_0_object->AddReply(539789, 41742, 41741); //@t
					var_0_object->AddReply(526479, -1, 27745); //@t
		}
	}
	for(;;) {
		bool var_638_bool;
		func_6251(var_638_bool);
		if(var_638_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5998(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2379;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2379:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x887";


void func_7299(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 525, 1, 529817);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_7338(var_92_bool, var_93_object, 517);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6278(void)
{
	@SetVariable("k7q01", 1);
	func_7195();
	func_7208();
	bool var_77_bool;
	func_6173(var_77_bool, "quest_k7_01", "place_danko");
}


// @pe
void func_6792(bool var_391_bool)
{
	int var_393_int;
	func_6060(var_393_int, "ook7Aglaja1");
	if(var_393_int == 0) {
		var_391_bool = true;
		return 0;
	}
	var_391_bool = false;
}


void func_5770(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_3214(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_884_object, object var_885_object)
{
	var_0_object = var_885_object;
	var_1_object = var_884_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_891_bool;
		func_6710(var_1_object);
		if(var_891_bool != 0) {
			object var_897_object; object var_898_object;
			var_897_object = var_1_object;
			var_898_object = var_0_object;
			func_6343();
			func_3425(var_885_object, "Neutral");
			var_0_object->SetMessage(527173); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527174, 28483, 28482); //@t
			var_0_object->AddReply(527255, 28483, 28565); //@t
		} else {
					func_3425(var_885_object, "Neutral");
					var_0_object->SetMessage(527177); //@t
					var_0_object->ClearReplies(); //@t
					bool var_926_bool;
					func_6722(var_1_object);
					if(var_926_bool != 0)
						var_0_object->AddReply(527179, 28488, 28487); //@t
					bool var_935_bool;
					func_6734(var_1_object);
					if(var_935_bool != 0)
						var_0_object->AddReply(527225, 28534, 28533); //@t
					bool var_944_bool = false;
					bool var_945_bool = false;
					bool var_946_bool;
					func_6828(var_946_bool, var_1_object);
					if(var_946_bool != 0) {
						bool var_948_bool;
						func_6838(var_948_bool, var_1_object);
						if(var_948_bool != 0)
							var_945_bool = true;
					}
					if(var_945_bool != 0) {
						bool var_950_bool;
						func_7042(var_1_object);
						if(var_950_bool != 0)
							var_944_bool = true;
					}
					if(var_944_bool != 0)
						var_0_object->AddReply(539811, 41764, 41763); //@t
					bool var_959_bool = false;
					bool var_960_bool = false;
					bool var_961_bool;
					func_6868(var_961_bool, var_1_object);
					if(var_961_bool != 0) {
						bool var_968_bool;
						func_6848(var_968_bool, var_1_object);
						if(var_968_bool != 0)
							var_960_bool = true;
					}
					if(var_960_bool != 0) {
						bool var_970_bool;
						func_7054(var_1_object);
						if(var_970_bool != 0)
							var_959_bool = true;
					}
					if(var_959_bool != 0)
						var_0_object->AddReply(539814, 41767, 41766); //@t
					bool var_979_bool = false;
					bool var_980_bool = false;
					bool var_981_bool;
					func_6868(var_981_bool, var_1_object);
					if(var_981_bool != 0) {
						bool var_983_bool;
						func_6888(var_983_bool, var_1_object);
						if(var_983_bool != 0)
							var_980_bool = true;
					}
					if(var_980_bool != 0) {
						bool var_990_bool;
						func_7066(var_1_object);
						if(var_990_bool != 0)
							var_979_bool = true;
					}
					if(var_979_bool != 0)
						var_0_object->AddReply(539817, 41770, 41769); //@t
					bool var_999_bool = false;
					bool var_1000_bool;
					func_6782(var_1000_bool, var_1_object);
					if(var_1000_bool != 0) {
						bool var_1002_bool;
						func_7078(var_1_object);
						if(var_1002_bool != 0)
							var_999_bool = true;
					}
					if(var_999_bool != 0)
						var_0_object->AddReply(539820, 41773, 41772); //@t
					var_0_object->AddReply(527182, -1, 28490); //@t
					var_0_object->AddReply(538653, -1, 40547); //@t
		}
	}
	for(;;) {
		bool var_916_bool;
		func_6251(var_916_bool);
		if(var_916_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5998(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3424;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3424:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc92";


void func_5775(bool var_176_bool, object var_177_object, float var_178_float)
{
	cvector var_189_cvector; bool var_196_bool;
	var_177_object->GetPosition(var_189_cvector);
	float var_188_float;
	var_177_object->GetEyesHeight(var_188_float);
	var_197_float = GetByIndex(var_189_cvector, 1);
	SetByIndex(var_189_cvector, 1) = (var_197_float + var_188_float);
	cvector var_190_cvector;
	@GetPosition(var_190_cvector);
	@GetEyesHeight(var_188_float);
	var_198_float = GetByIndex(var_190_cvector, 1);
	SetByIndex(var_190_cvector, 1) = (var_198_float + var_188_float);
	cvector var_191_cvector = var_189_cvector - var_190_cvector;
	var_199_float = GetByIndex(var_191_cvector, 1);
	SetByIndex(var_191_cvector, 1) = (float)0;
	var_201_float = sqrt(var_191_cvector | var_191_cvector);
	var_191_cvector /= var_201_float;
	cvector var_192_cvector = -var_191_cvector;
	cvector var_203_cvector;
	func_6039(var_203_cvector, (var_192_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_193_cvector = ((var_191_cvector * var_178_float) + (var_203_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_195_bool;
	@IsOverrideActive(var_195_bool);
	if(var_195_bool != 0)
		var_176_bool = false;
	@StopWorld();
	@CameraTransit((var_190_cvector + var_193_cvector), var_192_cvector);
	var_216_float = GetByIndex(var_193_cvector, 0);
	var_217_float = GetByIndex(var_193_cvector, 2);
	@Rotate(var_216_float, var_217_float);
	bool var_218_bool;
	func_6251(var_218_bool);
	if(var_218_bool != 0) {
	} else {
		@HasAnimationTrack(var_196_bool, "head");
		if(var_196_bool == 0) goto Label_5837;
		@LookAsyncCamera("head");
	}
Label_5837:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_176_bool = true;
	
}


void func_7312(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 518, 1, 529810);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_7338(var_74_bool, var_75_object, 517);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6804(bool var_549_bool)
{
	int var_551_int;
	func_6060(var_551_int, "ook8Aglaja2");
	if(var_551_int == 0) {
		var_549_bool = true;
		return 0;
	}
	var_549_bool = false;
}


// @pe
void func_6295(void)
{
	func_7221();
	bool var_95_bool;
	func_6173(var_95_bool, "quest_k7_01", "completed");
}


void func_7325(object var_70_object)
{
	object var_72_object;
	@GetDiaryRoot(var_72_object);
	if(!var_72_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_70_object = false;
	}
	var_72_object = var_70_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6816(bool var_669_bool)
{
	int var_671_int;
	func_6060(var_671_int, "ook9Aglaja2");
	if(var_671_int == 0) {
		var_669_bool = true;
		return 0;
	}
	var_669_bool = false;
}


// @pe
void func_6305(void)
{
	func_7234();
	bool var_150_bool;
	func_6173(var_150_bool, "quest_k7_01", "completed");
}


void func_7338(bool var_61_bool, object var_62_object, int var_63_int)
{
	object var_70_object;
	func_7325(var_70_object);
	object var_67_object;
	var_70_object = var_67_object;
	object var_68_object;
	var_67_object->Find(var_63_int, var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_63_int);
		var_61_bool = false;
	}
	var_68_object->AddChild(var_62_object);
	@SendWorldWndMessage(7);
	int var_69_int;
	var_62_object->GetCategory(var_69_int);
	@SetDiarySection(var_69_int);
	var_61_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_6315(void)
{
	@SetVariable("ook8Aglaja1", 1);
}


// @pe
void func_6828(bool var_493_bool, object var_494_object)
{
	object var_496_object;
	var_494_object = var_496_object;
	func_7101(var_496_object);
	bool var_495_bool;
	if(var_495_bool != 0) {
		var_493_bool = true;
		return 0;
	}
	var_493_bool = false;
}


// @pe
void func_6321(void)
{
	@SetVariable("k8q01", 1);
	func_7247();
	func_7260();
}


// @pe
void func_6650(bool var_536_bool)
{
	int var_538_int;
	func_6060(var_538_int, "k7q01");
	if(var_538_int == 1)
		var_536_bool = true;
	var_536_bool = false;
}


// @pe
void func_6838(bool var_503_bool, object var_504_object)
{
	object var_506_object;
	var_504_object = var_506_object;
	func_7107(var_506_object);
	bool var_505_bool;
	if(var_505_bool != 0) {
		var_503_bool = true;
		return 0;
	}
	var_503_bool = false;
}


// @pe
void func_6333(void)
{
	func_7273();
	bool var_93_bool;
	func_6173(var_93_bool, "quest_k8_01", "completed");
}


// @pe
void func_6848(bool var_530_bool, object var_531_object)
{
	object var_533_object;
	var_531_object = var_533_object;
	func_7113(var_533_object);
	bool var_532_bool;
	if(var_532_bool != 0) {
		var_530_bool = true;
		return 0;
	}
	var_530_bool = false;
}


void func_7366(int var_227_int)
{
	int var_229_int;
	@GetVariable("branch", var_229_int);
	if(var_229_int == 0) {
		var_227_int = 1;
		return 2;
	EMIT "GOTO 0x1cd5";
	}
	if(var_229_int == 1) {
		var_227_int = 2;
		return 2;
	}
	var_227_int = 3;
}


// @pe
void func_6343(void)
{
	@SetVariable("ook11Aglaja1", 1);
}


// @pe
void func_5318(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1043_object, object var_1044_object)
{
	var_0_object = var_1044_object;
	var_1_object = var_1043_object;
	var_3_string = false;
	if(1 != 0) {
		func_5376(var_1044_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_5346;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14ca";
	}
Label_5346:
	bool var_1065_bool;
	func_6251(var_1065_bool);
	if(var_1065_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5998(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5375;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5375:
		return 0;

	}
	
}


// @pe
void func_6858(bool var_562_bool, object var_563_object)
{
	object var_565_object;
	var_563_object = var_565_object;
	func_7119(var_565_object);
	bool var_564_bool;
	if(var_564_bool != 0) {
		var_562_bool = true;
		return 0;
	}
	var_562_bool = false;
}


// @pe
void func_6349(void)
{
	@SetVariable("k11q01", 1);
	func_7143();
	func_7169();
}


void func_5843(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal();
	bool var_279_bool;
	func_6251(var_279_bool);
	if(var_279_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_5859;
		@UnlookAsync("head");
	}
Label_5859:
	
}


// @pe
void func_6868(bool var_961_bool, object var_962_object)
{
	object var_964_object;
	var_962_object = var_964_object;
	func_7125(var_964_object);
	bool var_963_bool;
	if(var_963_bool != 0) {
		var_961_bool = true;
		return 0;
	}
	var_961_bool = false;
}


void func_7383(bool var_382_bool, int var_383_int)
{
	int var_387_int;
	@GetVariable(("K2System" + var_383_int), var_387_int);
	var_382_bool = var_387_int != 0;
}


// @pe
void func_6361(void)
{
	@SetVariable("k11q01", 8);
	func_7156();
}


// @pe
void func_221(object var_2_object, string var_325_string)
{
	bool var_326_bool;
	func_6251(var_326_bool);
	if(!var_326_bool) //@nz
		return 0;
	if(var_325_string == var_2_object)
		return 0;
	string var_329_string; bool var_330_bool;
	var_325_string = var_329_string;
	if(var_325_string == "")
		var_330_bool = false;
	else
		var_330_bool = true;
	func_6005(var_329_string, var_330_bool);
	var_2_object = var_325_string;
	
}


// @pe
void func_6878(bool var_697_bool, object var_698_object)
{
	object var_700_object;
	var_698_object = var_700_object;
	func_7131(var_700_object);
	bool var_699_bool;
	if(var_699_bool != 0) {
		var_697_bool = true;
		return 0;
	}
	var_697_bool = false;
}


void func_7391(int var_499_int)
{
	int var_501_int;
	@GetVariable("k2system_burah_day", var_501_int);
	var_501_int = var_499_int;
}


// @pe
void func_4833(object var_2_object, string var_776_string)
{
	bool var_777_bool;
	func_6251(var_777_bool);
	if(!var_777_bool) //@nz
		return 0;
	if(var_776_string == var_2_object)
		return 0;
	string var_780_string; bool var_781_bool;
	var_776_string = var_780_string;
	if(var_776_string == "")
		var_781_bool = false;
	else
		var_781_bool = true;
	func_6005(var_780_string, var_781_bool);
	var_2_object = var_776_string;
	
}


// @pe
void func_6370(void)
{
	@SetVariable("ook9Aglaja1", 1);
}


void func_5860(bool var_81_bool, object var_82_object)
{
	int var_88_int; int var_89_int;
	@GetVariable("voice_common", var_88_int);
	if(var_88_int != 0) {
		bool var_92_bool; object var_93_object;
		var_82_object = var_93_object;
		func_5918(var_92_bool, var_93_object);
		if(!var_92_bool) { //@nz
			bool var_123_bool; object var_124_object;
			var_82_object = var_124_object;
			func_5955(var_123_bool, var_124_object);
			if(!var_123_bool) { //@nz
				var_81_bool = false;
				return 4;
			}
		}
		@irand(var_89_int, 2);
		if(var_89_int != 0)
			@SetVariable("voice_common", ((var_88_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_168_bool; object var_169_object;
		var_82_object = var_169_object;
		func_5955(var_168_bool, var_169_object);
		if(!var_168_bool) { //@nz
			bool var_171_bool; object var_172_object;
			var_82_object = var_172_object;
			func_5918(var_171_bool, var_172_object);
			if(!var_171_bool) { //@nz
				var_81_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5916;
	
Label_5916:
	var_81_bool = true;
	
}


void func_7397(int var_707_int)
{
	int var_709_int;
	@GetVariable("k2system_danko_day", var_709_int);
	var_709_int = var_707_int;
}


// @pe
void func_6376(void)
{
	@SetVariable("k9q01", 1);
	func_7286();
	func_7312();
}


// @pe
void func_6888(bool var_983_bool, object var_984_object)
{
	object var_986_object;
	var_984_object = var_986_object;
	func_7137(var_986_object);
	bool var_985_bool;
	if(var_985_bool != 0) {
		var_983_bool = true;
		return 0;
	}
	var_983_bool = false;
}


void func_7403(int var_508_int)
{
	int var_513_int;
	func_7391(var_513_int);
	int var_511_int;
	var_513_int = var_511_int;
	int var_512_int;
	@GetVariable(("k2system_burah_state" + var_511_int), var_512_int);
	var_512_int = var_508_int;
}


// @pe
void func_6898(bool var_359_bool)
{
	int var_361_int;
	func_6060(var_361_int, "ook7Aglaja2");
	if(var_361_int == 0) {
		var_359_bool = true;
		return 0;
	}
	var_359_bool = false;
}


// @pe
void func_6388(void)
{
	@SetVariable("k9q01", 8);
	func_7299();
}


void func_7414(int var_702_int)
{
	int var_707_int;
	func_7397(var_707_int);
	int var_705_int;
	var_707_int = var_705_int;
	int var_706_int;
	@GetVariable(("k2system_danko_state" + var_705_int), var_706_int);
	var_706_int = var_702_int;
}


// @pe
void func_6397(object var_163_object)
{
	@Trace("money1000 is given");
	object var_166_object;
	var_163_object = var_166_object;
	func_6077(var_166_object, 1000);
}


// @pe
void func_6910(bool var_368_bool)
{
	int var_370_int;
	func_6060(var_370_int, "ook7Aglaja3");
	if(var_370_int == 0) {
		var_368_bool = true;
		return 0;
	}
	var_368_bool = false;
}


// @pe
void func_5376(object var_2_object, string var_1050_string)
{
	bool var_1051_bool;
	func_6251(var_1051_bool);
	if(!var_1051_bool) //@nz
		return 0;
	if(var_1050_string == var_2_object)
		return 0;
	string var_1054_string; bool var_1055_bool;
	var_1050_string = var_1054_string;
	if(var_1050_string == "")
		var_1055_bool = false;
	else
		var_1055_bool = true;
	func_6005(var_1054_string, var_1055_bool);
	var_2_object = var_1050_string;
	
}


void func_7425(bool var_965_bool)
{
	int var_966_int;
	func_6185(var_966_int);
	int var_967_int;
	func_7397(var_967_int);
	var_965_bool = var_966_int == var_967_int;
}


// @pe
void func_6407(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_7433(bool var_701_bool)
{
	int var_702_int;
	func_7414(var_702_int);
	var_701_bool = var_702_int == 2;
}


// @pe
void func_6922(bool var_517_bool)
{
	int var_519_int;
	func_6060(var_519_int, "ook8Aglaja3");
	if(var_519_int == 0) {
		var_517_bool = true;
		return 0;
	}
	var_517_bool = false;
}


// @pe
void func_6413(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_7439(bool var_987_bool)
{
	int var_988_int;
	func_7414(var_988_int);
	var_987_bool = var_988_int == 3;
}


// @pe
void func_6419(void)
{
	@SetVariable("ook7Aglaja1", 1);
}


void func_7445(bool var_497_bool)
{
	int var_498_int;
	func_6185(var_498_int);
	int var_499_int;
	func_7391(var_499_int);
	var_497_bool = var_498_int == var_499_int;
}


// @pe
void func_6934(bool var_537_bool)
{
	int var_539_int;
	func_6060(var_539_int, "ook8Aglaja4");
	if(var_539_int == 0) {
		var_537_bool = true;
		return 0;
	}
	var_537_bool = false;
}


// @pe
void func_1304(object var_2_object, string var_448_string)
{
	bool var_449_bool;
	func_6251(var_449_bool);
	if(!var_449_bool) //@nz
		return 0;
	if(var_448_string == var_2_object)
		return 0;
	string var_452_string; bool var_453_bool;
	var_448_string = var_452_string;
	if(var_448_string == "")
		var_453_bool = false;
	else
		var_453_bool = true;
	func_6005(var_452_string, var_453_bool);
	var_2_object = var_448_string;
	
}


// @pe
void func_6425(void)
{
	@SetVariable("ook8Aglaja2", 1);
}


void func_7453(bool var_534_bool)
{
	int var_535_int;
	func_7403(var_535_int);
	var_534_bool = var_535_int == 2;
}


void func_5918(bool var_92_bool, object var_93_object)
{
	string var_99_string; bool var_101_bool; int var_102_int; string var_103_string;
	var_99_string = "c";
	int var_100_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_93_object->HasProperty((var_99_string + (var_100_int + 1)), var_101_bool);
			if(!var_101_bool) { //@nz
			} else {
				var_100_int += 1;
			}
		}
		if(!var_100_int) { //@nz
			var_92_bool = false;
			return 10;
		}
		var_102_int = 0;
		if(var_100_int > 1)
			@irand(var_102_int, var_100_int);
		var_93_object->GetProperty((var_99_string + (var_102_int + 1)), var_103_string);
		bool var_115_bool; string var_116_string;
		var_103_string = var_116_string;
		func_6011(var_115_bool, var_116_string);
		var_115_bool = var_92_bool;
		return 10;

	}
}


// @pe
void func_6431(void)
{
	@SetVariable("ook9Aglaja2", 1);
}


// @pe
void func_6946(bool var_569_bool)
{
	int var_571_int;
	func_6060(var_571_int, "ook8Aglaja5");
	if(var_571_int == 0) {
		var_569_bool = true;
		return 0;
	}
	var_569_bool = false;
}


void func_7459(bool var_566_bool)
{
	int var_567_int;
	func_7403(var_567_int);
	var_566_bool = var_567_int == 3;
}


void func_4388(object var_0_object, int var_70_int, object var_71_object)
{
	var_0_object = var_71_object;
	bool var_81_bool; object var_82_object;
	object var_83_object;
	func_6033(var_83_object);
	var_83_object = var_82_object;
	func_5860(var_81_bool, var_82_object);
	bool var_176_bool; object var_177_object;
	var_71_object = var_177_object;
	func_5775(var_176_bool, var_177_object, 70.0);
	if(!var_176_bool) { //@nz
		var_70_int = -2;
		return 8;
	}
	object var_77_object;
	@CreateDialog(var_77_object);
	int var_223_int;
	func_6245(var_223_int);
	var_77_object->SetNPCName(var_223_int);
	int var_224_int;
	func_6243(var_224_int);
	var_77_object->SetNPCDescription(var_224_int);
	string var_225_string;
	func_6247(var_225_string);
	var_77_object->SetPhoto(var_225_string);
	string var_226_string;
	func_6249(var_226_string);
	var_77_object->SetPhoto2(var_226_string);
	int var_227_int;
	func_7366(var_227_int);
	var_77_object->SetPlayerName(var_227_int);
	bool var_78_bool;
	@IsOverrideActive(var_78_bool);
	if(var_78_bool != 0) {
		var_70_int = -2;
		return 8;
	}
	@DoDialog(var_77_object);
	object var_236_object; object var_237_object;
	var_71_object = var_236_object;
	var_77_object = var_237_object;
	TaskCall(10);
	func_4469(var_238_object, var_239_object, var_240_string, var_241_bool, var_236_object, var_237_object);
	TaskReturn();
	bool var_80_bool;
	var_77_object->IsDialogEnd(var_80_bool);
	
	for(;;) {
		var_275_bool = !var_80_bool; //@nz
		if(var_275_bool == 0) goto Label_4458;
		@sync();
		var_77_object->IsDialogEnd(var_80_bool);
	}
	
Label_4458:
	object var_276_object;
	var_71_object = var_276_object;
	func_5843();
	@StopDialog(var_77_object);
	var_77_object->GetReturnValue(-1);
	int var_79_int = var_70_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6437(void)
{
	@SetVariable("ook7Aglaja2", 1);
}


void func_7465(bool var_507_bool)
{
	int var_508_int;
	func_7403(var_508_int);
	var_507_bool = var_508_int == 0;
}


// @pe
void func_6443(void)
{
	@SetVariable("ook7Aglaja3", 1);
}


// @pe
void func_6958(bool var_684_bool)
{
	int var_686_int;
	func_6060(var_686_int, "ook9Aglaja3");
	if(var_686_int == 0) {
		var_684_bool = true;
		return 0;
	}
	var_684_bool = false;
}


// @pe
void func_7471(object var_54_object)
{
	bool var_55_bool;
	func_6200(var_55_bool, 12);
	if(var_55_bool != 0) {
		int var_70_int; object var_71_object;
		var_54_object = var_71_object;
		TaskCall(9);
		func_4388(var_72_object, var_70_int, var_71_object);
		TaskReturn();
		return 0;
	}
	bool var_283_bool;
	func_6194(var_283_bool, 7);
	if(var_283_bool != 0) {
		int var_286_int; object var_287_object;
		var_54_object = var_287_object;
		TaskCall(1);
		func_13(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	bool var_405_bool;
	func_6194(var_405_bool, 8);
	if(var_405_bool != 0) {
		int var_407_int; object var_408_object;
		var_54_object = var_408_object;
		TaskCall(3);
		func_1017(var_409_object, var_407_int, var_408_object);
		TaskReturn();
		return 0;
	}
	bool var_583_bool;
	func_6194(var_583_bool, 9);
	if(var_583_bool != 0) {
		int var_585_int; object var_586_object;
		var_54_object = var_586_object;
		TaskCall(5);
		func_2098(var_587_object, var_585_int, var_586_object);
		TaskReturn();
		return 0;
	}
	bool var_743_bool;
	func_6194(var_743_bool, 10);
	if(var_743_bool != 0) {
		int var_745_int; object var_746_object;
		var_54_object = var_746_object;
		TaskCall(11);
		func_4591(var_747_object, var_745_int, var_746_object);
		TaskReturn();
		return 0;
	}
	bool var_858_bool;
	func_6194(var_858_bool, 11);
	if(var_858_bool != 0) {
		int var_860_int; object var_861_object;
		var_54_object = var_861_object;
		TaskCall(7);
		func_3133(var_862_object, var_860_int, var_861_object);
		TaskReturn();
		return 0;
	}
	int var_1019_int; object var_1020_object;
	var_54_object = var_1020_object;
	TaskCall(13);
	func_5237(var_1021_object, var_1019_int, var_1020_object);
	TaskReturn();
}


// @pe
void func_6449(void)
{
	@SetVariable("ook8Aglaja3", 1);
}


// @pe
void func_6455(void)
{
	@SetVariable("ook8Aglaja4", 1);
}


// @pe
void func_6970(bool var_714_bool)
{
	int var_716_int;
	func_6060(var_716_int, "ook9Aglaja4");
	if(var_716_int == 0) {
		var_714_bool = true;
		return 0;
	}
	var_714_bool = false;
}


// @pe
void func_6461(void)
{
	@SetVariable("ook8Aglaja5", 1);
}


// @pe
void func_6467(void)
{
	func_7182();
}


void func_5444(object var_0_object)
{
	bool var_36_bool;
	func_5770(var_36_bool);
	if(!var_36_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_5572();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_5626();
	}
}
EMIT "Return(); Pop(0)";


void func_5955(bool var_123_bool, object var_124_object)
{
	bool var_132_bool; int var_133_int; string var_134_string;
	int var_136_int;
	func_6185(var_136_int);
	string var_130_string = ("d" + var_136_int) + "m";
	int var_131_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_124_object->HasProperty((var_130_string + (var_131_int + 1)), var_132_bool);
			if(!var_132_bool) { //@nz
			} else {
				var_131_int += 1;
			}
		}
		if(!var_131_int) { //@nz
			var_123_bool = false;
			return 10;
		}
		var_133_int = 0;
		if(var_131_int > 1)
			@irand(var_133_int, var_131_int);
		var_124_object->GetProperty((var_130_string + (var_133_int + 1)), var_134_string);
		bool var_155_bool; string var_156_string;
		var_134_string = var_156_string;
		func_6011(var_155_bool, var_156_string);
		var_155_bool = var_123_bool;
		return 10;

	}
}


// @pe
void func_6982(bool var_729_bool)
{
	int var_731_int;
	func_6060(var_731_int, "ook9Aglaja5");
	if(var_731_int == 0) {
		var_729_bool = true;
		return 0;
	}
	var_729_bool = false;
}


// @pe
void func_6472(void)
{
	@SetVariable("ook9Aglaja3", 1);
}


// @pe
void func_2380(object var_2_object, string var_626_string)
{
	bool var_627_bool;
	func_6251(var_627_bool);
	if(!var_627_bool) //@nz
		return 0;
	if(var_626_string == var_2_object)
		return 0;
	string var_630_string; bool var_631_bool;
	var_626_string = var_630_string;
	if(var_626_string == "")
		var_631_bool = false;
	else
		var_631_bool = true;
	func_6005(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	
}


// @pe
void func_6478(void)
{
	@SetVariable("ook9Aglaja4", 1);
}


// @pe
void func_6994(bool var_791_bool)
{
	int var_793_int;
	func_6060(var_793_int, "ook10Aglaja1");
	if(var_793_int == 0) {
		var_791_bool = true;
		return 0;
	}
	var_791_bool = false;
}


// @pe
void func_6484(void)
{
	@SetVariable("ook9Aglaja5", 1);
}


void func_5464(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_5761(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6490(void)
{
	@SetVariable("ook10Aglaja1", 1);
}


// @pe
void func_7006(bool var_806_bool)
{
	int var_808_int;
	func_6060(var_808_int, "ook10Aglaja2");
	if(var_808_int == 0) {
		var_806_bool = true;
		return 0;
	}
	var_806_bool = false;
}


// @pe
void func_6496(void)
{
	@SetVariable("ook10Aglaja2", 1);
}


// @pe
void func_3425(object var_2_object, string var_901_string)
{
	bool var_902_bool;
	func_6251(var_902_bool);
	if(!var_902_bool) //@nz
		return 0;
	if(var_901_string == var_2_object)
		return 0;
	string var_905_string; bool var_906_bool;
	var_901_string = var_905_string;
	if(var_901_string == "")
		var_906_bool = false;
	else
		var_906_bool = true;
	func_6005(var_905_string, var_906_bool);
	var_2_object = var_901_string;
	
}


// @pe
void func_6502(void)
{
	@SetVariable("ook10Aglaja3", 1);
}


void func_5479(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


// @pe
void func_7018(bool var_821_bool)
{
	int var_823_int;
	func_6060(var_823_int, "ook10Aglaja3");
	if(var_823_int == 0) {
		var_821_bool = true;
		return 0;
	}
	var_821_bool = false;
}


// @pe
void func_6508(void)
{
	@SetVariable("ook10Aglaja4", 1);
}


void func_5484(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_5702(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_5998(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


// @pe
void func_6514(void)
{
	@SetVariable("ook11Aglaja2", 1);
}


void func_6005(string var_247_string, bool var_248_bool)
{
	float var_253_float; float var_254_float;
	@lshGetAnimTimes(var_247_string, var_253_float, var_254_float);
	@lshPlayAnimation(var_253_float, var_254_float, var_248_bool);
}


// @pe
void func_4469(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_236_object, object var_237_object)
{
	var_0_object = var_237_object;
	var_1_object = var_236_object;
	var_3_string = false;
	if(1 != 0) {
		func_4527(var_237_object, "Neutral");
		var_0_object->SetMessage(539195); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539196, -1, 41139); //@t
		var_0_object->AddReply(539197, -1, 41140); //@t
		goto Label_4497;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1179";
	}
Label_4497:
	bool var_262_bool;
	func_6251(var_262_bool);
	if(var_262_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5998(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4526;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4526:
		return 0;

	}
	
}


// @pe
void func_7030(bool var_833_bool)
{
	int var_835_int;
	func_6060(var_835_int, "ook10Aglaja4");
	if(var_835_int == 0) {
		var_833_bool = true;
		return 0;
	}
	var_833_bool = false;
}


// @pe
void func_6520(void)
{
	@SetVariable("ook11Aglaja3", 1);
}


void func_6011(bool var_115_bool, string var_116_string)
{
	bool var_118_bool;
	bool var_119_bool;
	func_6251(var_119_bool);
	if(var_119_bool != 0) {
		@lshHasSpeech(var_118_bool, var_116_string);
		if(var_118_bool != 0) {
			@lshPlaySpeech(var_116_string);
			var_115_bool = true;
		}
	}
	var_115_bool = false;
}


// @pe
void func_6526(void)
{
	@SetVariable("ook11Aglaja4", 1);
}


// @pe
void func_7042(bool var_950_bool)
{
	int var_952_int;
	func_6060(var_952_int, "ook11Aglaja2");
	if(var_952_int == 0) {
		var_950_bool = true;
		return 0;
	}
	var_950_bool = false;
}


void func_5506(void)
{
	float var_50_float;
	@rand(var_50_float, 8, 16);
	@SetTimer(10, var_50_float);
}


// @pe
void func_6532(void)
{
	@SetVariable("ook11Aglaja5", 1);
}


void func_6026(void)
{
	bool var_39_bool;
	func_6251(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_6538(object var_234_object)
{
	int var_237_int;
	@irand(var_237_int, 1000);
	object var_239_object;
	var_234_object = var_239_object;
	func_6077(var_239_object, (var_237_int + 2000));
}


void func_5515(void)
{
	@KillTimer(10);
}


// @pe
void func_7054(bool var_970_bool)
{
	int var_972_int;
	func_6060(var_972_int, "ook11Aglaja3");
	if(var_972_int == 0) {
		var_970_bool = true;
		return 0;
	}
	var_970_bool = false;
}


void func_6033(object var_83_object)
{
	object var_85_object;
	@self(var_85_object);
	var_85_object = var_83_object;
}
EMIT "Stack[-1] = 0";


void func_6549(object var_143_object)
{
	int var_146_int;
	@irand(var_146_int, 1000);
	object var_148_object;
	var_143_object = var_148_object;
	func_6077(var_148_object, (var_146_int + 3000));
}


void func_6039(cvector var_203_cvector, cvector var_204_cvector)
{
	float var_207_float = sqrt(var_204_cvector | var_204_cvector);
	if(var_207_float < 0.000001)
		var_203_cvector = [0.0, 0.0, 0.0];
	var_203_cvector = var_204_cvector / var_207_float;
}


// @pe
void func_7066(bool var_990_bool)
{
	int var_992_int;
	func_6060(var_992_int, "ook11Aglaja4");
	if(var_992_int == 0) {
		var_990_bool = true;
		return 0;
	}
	var_990_bool = false;
}


void func_6560(object var_79_object)
{
	int var_82_int;
	@irand(var_82_int, 1000);
	object var_84_object;
	var_79_object = var_84_object;
	func_6077(var_84_object, (var_82_int + 4000));
}


// @pe
void func_6049(float var_173_float, float var_174_float, float var_175_float, float var_176_float)
{
	if(var_174_float < var_175_float) {
		var_175_float = var_173_float;
		return 0;
	}
	if(var_174_float > var_176_float) {
		var_176_float = var_173_float;
		return 0;
	}
	var_174_float = var_173_float;
}


// @pe
void func_7078(bool var_1002_bool)
{
	int var_1004_int;
	func_6060(var_1004_int, "ook11Aglaja5");
	if(var_1004_int == 0) {
		var_1002_bool = true;
		return 0;
	}
	var_1002_bool = false;
}


// @pe
void func_6571(object var_190_object)
{
	object var_193_object;
	var_190_object = var_193_object;
	bool var_192_bool;
	func_6128(var_192_bool, var_193_object, 0.3);
}


void func_6060(int var_319_int, string var_320_string)
{
	int var_322_int;
	@GetVariable(var_320_string, var_322_int);
	var_322_int = var_319_int;
}


// @pe
void func_4527(object var_2_object, string var_243_string)
{
	bool var_244_bool;
	func_6251(var_244_bool);
	if(!var_244_bool) //@nz
		return 0;
	if(var_243_string == var_2_object)
		return 0;
	string var_247_string; bool var_248_bool;
	var_243_string = var_247_string;
	if(var_243_string == "")
		var_248_bool = false;
	else
		var_248_bool = true;
	func_6005(var_247_string, var_248_bool);
	var_2_object = var_243_string;
	
}


void func_6065(int var_98_int, int var_99_int)
{
	object var_101_object;
	@CreateIntVector(var_101_object);
	var_101_object->add(var_98_int);
	var_101_object->add(var_99_int);
	@SendWorldWndMessage(3, var_101_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6578(object var_153_object)
{
	object var_156_object;
	var_153_object = var_156_object;
	bool var_155_bool;
	func_6128(var_155_bool, var_156_object, 0.5);
}


// @pe
void func_7090(bool var_380_bool)
{
	int var_384_int;
	func_6185(var_384_int);
	bool var_382_bool;
	func_7383(var_382_bool, (var_384_int - 1));
	var_382_bool = var_380_bool;
}


// @pe
void func_6585(object var_98_object)
{
	object var_101_object;
	var_98_object = var_101_object;
	bool var_100_bool;
	func_6128(var_100_bool, var_101_object, -0.5);
}


void func_6077(object var_84_object, int var_85_int)
{
	int var_88_int;
	object var_89_object;
	var_84_object = var_89_object;
	int var_91_int;
	func_5744(var_89_object, "money", var_91_int);
	if(var_91_int > 0) {
		@GetInvItemByName(var_88_int, "Money");
		int var_98_int; int var_99_int;
		var_88_int = var_98_int;
		var_85_int = var_99_int;
		func_6065(var_98_int, var_99_int);
	}
}


// @pe
void func_7101(bool var_495_bool)
{
	bool var_497_bool;
	func_7445(var_497_bool);
	var_497_bool = var_495_bool;
}


// @pe
void func_6592(void)
{
}


// @pe
void func_6594(object var_124_object)
{
	@Trace("feromicin is given");
	object var_127_object;
	var_124_object = var_127_object;
	func_6115(var_127_object, "feromicin", 1);
}


// @pe
void func_7107(bool var_505_bool)
{
	bool var_507_bool;
	func_7465(var_507_bool);
	var_507_bool = var_505_bool;
}


// @pe
void func_7113(bool var_532_bool)
{
	bool var_534_bool;
	func_7453(var_534_bool);
	var_534_bool = var_532_bool;
}


// @pe
void func_6605(object var_255_object)
{
	@Trace("gamma_pills is given");
	object var_258_object;
	var_255_object = var_258_object;
	func_6115(var_258_object, "gamma_pills", 1);
}


// @pe
void func_7119(bool var_564_bool)
{
	bool var_566_bool;
	func_7459(var_566_bool);
	var_566_bool = var_564_bool;
}


void func_6096(object var_111_object, object var_112_object, int var_113_int)
{
	int var_117_int;
	var_112_object->GetItemID(var_117_int);
	int var_118_int;
	@GetInvItemProperty(var_118_int, var_117_int, "Category");
	bool var_119_bool;
	var_111_object->AddItem(var_119_bool, var_112_object, var_118_int, var_113_int);
	if(!var_119_bool) { //@nz
		var_111_object->DropItems(var_112_object, var_113_int);
	} else {
		int var_122_int; int var_123_int;
		var_117_int = var_122_int;
		var_113_int = var_123_int;
		func_6065(var_122_int, var_123_int);
	}
	
}


// @pe
void func_7125(bool var_963_bool)
{
	bool var_965_bool;
	func_7425(var_965_bool);
	var_965_bool = var_963_bool;
}


// @pe
void func_6616(object var_176_object)
{
	@Trace("delta_pills is given");
	object var_179_object;
	var_176_object = var_179_object;
	func_6115(var_179_object, "delta_pills", 1);
}


// @pe
void func_7131(bool var_699_bool)
{
	bool var_701_bool;
	func_7433(var_701_bool);
	var_701_bool = var_699_bool;
}


// @pe
void func_7137(bool var_985_bool)
{
	bool var_987_bool;
	func_7439(var_987_bool);
	var_987_bool = var_985_bool;
}


// @pe
void func_6627(object var_103_object)
{
	@Trace("monomicin is given");
	object var_106_object;
	var_103_object = var_106_object;
	func_6115(var_106_object, "monomicin", 1);
}


void func_6115(object var_106_object, string var_107_string, int var_108_int)
{
	object var_110_object;
	@CreateInvItem(var_110_object);
	var_110_object->SetItemName(var_107_string);
	object var_111_object; object var_112_object; int var_113_int;
	var_106_object = var_111_object;
	var_110_object = var_112_object;
	var_108_int = var_113_int;
	func_6096(var_111_object, var_112_object, var_113_int);
}
EMIT "Stack[-1] = 0";


void func_7143(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 480, 1, 528047);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_7338(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6638(bool var_317_bool)
{
	int var_319_int;
	func_6060(var_319_int, "k7q01");
	if(var_319_int == 0) {
		var_317_bool = true;
		return 0;
	}
	var_317_bool = false;
}


void func_4591(object var_0_object, int var_745_int, object var_746_object)
{
	var_0_object = var_746_object;
	bool var_756_bool; object var_757_object;
	object var_758_object;
	func_6033(var_758_object);
	var_758_object = var_757_object;
	func_5860(var_756_bool, var_757_object);
	bool var_759_bool; object var_760_object;
	var_746_object = var_760_object;
	func_5775(var_759_bool, var_760_object, 70.0);
	if(!var_759_bool) { //@nz
		var_745_int = -2;
		return 8;
	}
	object var_752_object;
	@CreateDialog(var_752_object);
	int var_763_int;
	func_6245(var_763_int);
	var_752_object->SetNPCName(var_763_int);
	int var_764_int;
	func_6243(var_764_int);
	var_752_object->SetNPCDescription(var_764_int);
	string var_765_string;
	func_6247(var_765_string);
	var_752_object->SetPhoto(var_765_string);
	string var_766_string;
	func_6249(var_766_string);
	var_752_object->SetPhoto2(var_766_string);
	int var_767_int;
	func_7366(var_767_int);
	var_752_object->SetPlayerName(var_767_int);
	bool var_753_bool;
	@IsOverrideActive(var_753_bool);
	if(var_753_bool != 0) {
		var_745_int = -2;
		return 8;
	}
	@DoDialog(var_752_object);
	object var_769_object; object var_770_object;
	var_746_object = var_769_object;
	var_752_object = var_770_object;
	TaskCall(12);
	func_4672(var_771_object, var_772_object, var_773_string, var_774_bool, var_769_object, var_770_object);
	TaskReturn();
	bool var_755_bool;
	var_752_object->IsDialogEnd(var_755_bool);
	
	for(;;) {
		var_856_bool = !var_755_bool; //@nz
		if(var_856_bool == 0) goto Label_4661;
		@sync();
		var_752_object->IsDialogEnd(var_755_bool);
	}
	
Label_4661:
	object var_857_object;
	var_746_object = var_857_object;
	func_5843();
	@StopDialog(var_752_object);
	var_752_object->GetReturnValue(-1);
	int var_754_int = var_745_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6128(bool var_144_bool, object var_145_object, float var_146_float)
{
	if(!var_145_object) { //@nz
		var_144_bool = false;
		return 0;
	}
	if(var_146_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_146_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_151_float;
		var_146_float = var_151_float;
		func_6163(var_151_float);
		bool var_155_bool; object var_156_object; float var_158_float;
		var_145_object = var_156_object;
		var_146_float = var_158_float;
		func_5722(var_155_bool, var_156_object, "reputation", var_158_float, (float)0, (float)1);
		var_144_bool = true;
		return 0;

	}
	
	var_144_bool = false;
}


void func_7156(void)
{
	object var_92_object;
	@CreateDiaryEntry(var_92_object, 491, 1, 528058);
	bool var_96_bool; object var_97_object;
	var_92_object = var_97_object;
	func_7338(var_96_bool, var_97_object, 480);
}
EMIT "Stack[-1] = 0";


void func_1017(object var_0_object, int var_407_int, object var_408_object)
{
	var_0_object = var_408_object;
	bool var_418_bool; object var_419_object;
	object var_420_object;
	func_6033(var_420_object);
	var_420_object = var_419_object;
	func_5860(var_418_bool, var_419_object);
	bool var_421_bool; object var_422_object;
	var_408_object = var_422_object;
	func_5775(var_421_bool, var_422_object, 70.0);
	if(!var_421_bool) { //@nz
		var_407_int = -2;
		return 8;
	}
	object var_414_object;
	@CreateDialog(var_414_object);
	int var_425_int;
	func_6245(var_425_int);
	var_414_object->SetNPCName(var_425_int);
	int var_426_int;
	func_6243(var_426_int);
	var_414_object->SetNPCDescription(var_426_int);
	string var_427_string;
	func_6247(var_427_string);
	var_414_object->SetPhoto(var_427_string);
	string var_428_string;
	func_6249(var_428_string);
	var_414_object->SetPhoto2(var_428_string);
	int var_429_int;
	func_7366(var_429_int);
	var_414_object->SetPlayerName(var_429_int);
	bool var_415_bool;
	@IsOverrideActive(var_415_bool);
	if(var_415_bool != 0) {
		var_407_int = -2;
		return 8;
	}
	@DoDialog(var_414_object);
	object var_431_object; object var_432_object;
	var_408_object = var_431_object;
	var_414_object = var_432_object;
	TaskCall(4);
	func_1098(var_433_object, var_434_object, var_435_string, var_436_bool, var_431_object, var_432_object);
	TaskReturn();
	bool var_417_bool;
	var_414_object->IsDialogEnd(var_417_bool);
	
	for(;;) {
		var_581_bool = !var_417_bool; //@nz
		if(var_581_bool == 0) goto Label_1087;
		@sync();
		var_414_object->IsDialogEnd(var_417_bool);
	}
	
Label_1087:
	object var_582_object;
	var_408_object = var_582_object;
	func_5843();
	@StopDialog(var_414_object);
	var_414_object->GetReturnValue(-1);
	int var_416_int = var_407_int;
}
EMIT "Stack[-4] = 0";


void func_5626(void)
{
	bool var_62_bool; int var_63_int; int var_64_int; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_5770(var_66_bool);
	if(!var_66_bool) //@nz
		return 12;
	int var_68_int;
	func_6226(var_68_int);
	int var_60_int;
	var_68_int = var_60_int;
	int var_61_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_61_int < 5) {
			bool var_84_bool;
			func_5770(var_84_bool);
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
			func_6219(var_95_string, var_96_int);
			@PlayAnimation("all", var_95_string);
			@WaitForAnimEnd(var_65_bool);
			var_97_bool = !var_65_bool; //@nz
			if(var_97_bool == 0) goto Label_5681;
			goto Label_5692;
			}
				Label_5681:
					bool var_88_bool;
					func_5695(var_88_bool);
					var_89_bool = !var_88_bool; //@nz
					if(var_89_bool == 0) goto Label_5687;
			}
		}
	Label_5692:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5687:
		@ResetAAS();
		var_61_int += 1;
	}
	
}


