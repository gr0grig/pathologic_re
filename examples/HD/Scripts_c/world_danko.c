// @IMPORTS: SetVariable/2,SetSaveProperty/2,Hold/0,FindActor/2,GetSceneByName/2,Trace/1,Teleport/4,CreateObjectVector/1,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,AddBlankActorFromXml/4,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,Trigger/3,GetGameTime/1,SetSepia/2,ReplaceScene/2,irand/2,AddActor/6,AddActor/4,RemoveActor/1,PlaySound/1,_strtoi/2,AddActorByType/6,CreateStringVector/1,UnlockAchievement/1,GameOver/1,AddScriptedActor/5,RandOneOf/13,RandOneOf/5,SetTimeEvent/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,AddMessage/4,QueuePlayMovie/1,CreateIntVector/1
// @STRINGS: W:branch|W:burah_home@door1|W:player|W:cot_eva|W:Starting scene not found|W:pt_birth_Danko|A:GetLocator|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:.bin|W:.xml|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W:locked|W:reputation|A:add|A:size|A:get|A:Remove|A:clear|W:Region|W:State|W:s_|W:n_|W:.isc|W:City manager: can't replace indoor scene "|W:" because it doesn't exist|W:Diseased Region: |W:City manager: main outdoor scene not found|A:RemoveAllRegionActors|W:City manager: Can't find main outdoor scene|A:SetRegionActorCount|A:SetRegionActorCountByType|A:GetGroupActors|A:Next|W:Actor "|W:" can't be locked|W:fog_stat.xml|W:fog|A:AddStationaryActorByType|W:pt_blockpost|W:_1_|W:pers_patrool|W:patrol_stat.xml|W:pt_fog|W:pers_soldat|W:soldier.xml|W:_2_|W:pers_sanitar|W:sanitar_stat.xml|A:EnableSubsets|W:street_rags|W:do_invis.xml|A:RemoveOnUnload|W:dr_mark|W:disease_object.xml|W:restore|W:cleanup|W:br_|W:pers_grabitel|W:grabitel.xml|W:pers_unosha|W:unosha_attacker.xml|W:unosha2_attacker.xml|W:pers_worker|W:worker_attacker.xml|W:worker2_attacker.xml|W:pers_wasted_girl|W:wasted_girl.xml|W:pers_wasted_male|W:wasted_male.xml|W:pers_woman|W:woman.xml|W:pers_boy|W:boy.xml|W:pers_girl|W:girl2.xml|W:unosha.xml|W:unosha2.xml|W:wasted_girl_killme.xml|W:soldier_marauder.xml|W:pers_alkash|W:alkash.xml|W:pers_littleboy|W:littleboy.xml|W:pers_littlegirl|W:littlegirl.xml|W:pers_dohodyaga|W:dohodyaga.xml|W:worker.xml|W:worker2.xml|W:pers_butcher|W:butcher.xml|W:woman_killme.xml|W:pers_nudegirl|W:nudegirl.xml|W:pers_dog|W:dog.xml|W:pers_vaxxabit|W:vaxxabit_d.xml|W:pers_vaxxabitka|W:vaxxabitka_d.xml|W:pers_rat_big|W:rat_big.xml|W:fog.xml|W:fog_hunter.xml|W:pers_bomber|W:bomber.xml|W:agony1_man.xml|W:agony1_woman.xml|W:sanitar.xml|W:pers_rat|W:rat.xml|W:patrol.xml|W:pers_soldat_hand|W:soldier_patrol.xml|W:dt_house3_05_i2|W:dt_house3_05|W:dt_house3_06_i2|W:dt_house_1_10|W:house5_10|W:house5_07|W:dt_house_1_03|W:dt_house1_union2_04l|W:dt_house1_union2_04r|W:house5_22|W:house5_08|W:dt_house1_union2_02l|W:dt_house1_union2_02r|W:dt_house1_union2_05l|W:dt_house1_union2_05r|W:dt_house2_01|W:dt_house2_02|W:dt_house2_03|W:dt_house2_04|W:dt_house2_05|W:dt_house3_10_i2|W:dt_house3_10|W:dt_house3_11_i2|W:dt_house3_11|W:dt_house3_12_i2|W:dt_house3_12|W:dt_house_1_06|W:dt_house3_07_i2|W:dt_house3_07|W:house5_02|W:dt_house1_union2_03l|W:dt_house1_union2_03r|W:dt_house1_union2_01l|W:dt_house1_union2_01r|W:house5_unoinl|W:house5_unoinr|W:dt_house_1_01|W:house5_05|W:house5_06|W:dt_house_1_02|W:house5_unoin_solid01l|W:house5_unoin_solid01r|W:house5_03|W:house5_04|W:house1_se_02l|W:house1_se_02r|W:dt_house3_01_i2|W:dt_house3_02_i2|W:dt_house3_02|W:dt_house3_03_i2|W:dt_house3_03|W:dt_house3_04_i2|W:house5_21|W:dt_house3_08_i2|W:dt_house3_09|W:dt_house3_09_i2|W:house1_se_03l|W:house1_se_03r|W:house1_se_01l|W:house1_se_01r|W:house1_se_04l|W:house1_se_04r|W:house5_11|W:house5_09|W:house5_13|W:house5_12|W:house5_14|W:house5_unoin03l|W:house5_unoin03r|W:house5_unoin02l|W:house5_unoin02r|W:house5_unoin01l|W:house5_unoin01r|W:dt_house3_14_i2|W:dt_house3_14|W:house1_arc_01l|W:house1_arc_01r|W:dt_House6_01|W:dt_house_1_09|W:house5_24|W:dt_House6_03|W:dt_House6_04|W:dt_house_1_08|W:house5_unoin_solidl|W:house5_unoin_solidr|W:dt_house2_12|W:dt_house2_11|W:dt_house2_13|W:dt_house2_09|W:dt_house2_08|W:dt_house2_07|W:dt_house2_06|W:house5_01|W:house5_15|W:house5_16|W:house5_17|W:house5_unoin04l|W:house5_unoin04r|W:house5_23|W:house1_se_05r|W:house1_se_05l|W:dt_house2_10|W:House6_02|W:house_2_01|W:house7_03|W:house7_02|W:house3_01|W:house_2_03|W:house_2_02|W:house4_01_i2|W:house4_01|W:House6_05|W:r2_house_2_01|W:r2_house_2_02|W:r2_house_2_03|W:r2_house7_02|W:r2_house01_01|W:r2_house7_01|W:r2_house3_01_i2|W:r2_house3_01|W:r2_house3_02_i2|W:r2_house3_02|W:r2_house3_03_i2|W:r2_house3_03|W:r3_house7_01|W:r3_house7_02|W:r3_house_2_02|W:r3_house3_02_i2|W:r3_house3_02|W:r3_house4_05_i2|W:r3_house4_05|W:r3_house4_03_i2|W:r3_house4_04_i2|W:r3_house4_04|W:r3_house4_01_i2|W:r3_house4_01|W:r3_house_2_01|W:r3_house4_02_i2|W:r3_house4_02|W:r3_house3_01_i2|W:r3_house3_01|W:r4_house_2_02|W:r4_house3_03_i2|W:r4_house3_03|W:r4_house4_02_i2|W:r4_house4_02|W:r4_house4_01_i2|W:r4_house4_01|W:r4_house3_02_i2|W:r4_house3_02|W:r4_house_2_01|W:r4_house3_01_i2|W:r4_house3_01|W:r4_house7_01|W:r4_House6_01|W:r4_house_2_03|W:r4_House6_03|W:r4_house_2_04|W:r5_house2_01|W:r5_house2_02|W:r5_house2_03|W:r5_house3_01_i2|W:r5_house3_01|W:r5_house3_02_i2|W:r5_house3_02|W:r5_house3_03_i2|W:r5_house3_03|W:r5_house3_04_i2|W:r5_house3_04|W:r5_house3_05_i2|W:r5_house3_05|W:r5_house3_06_i2|W:r5_house3_06|W:r5_house3_07_i2|W:r5_house3_07|W:r5_House6_01|W:r6_house2_03|W:r6_house4_01_i2|W:r6_house4_02_i2|W:r6_house4_02|W:r6_house3_02_i2|W:r6_house3_02|W:r6_house3_01_i2|W:r6_house3_01|W:r6_house2_01|W:r6_house7_01|W:r6_house7_02|W:r6_House6_01|W:r6_house2_02|W:r7_house2_01|W:r7_house2_02|W:r7_house2_03|W:r7_house2_04|W:r7_house3_03_i2|W:r7_house3_03|W:r7_house3_04_i2|W:r7_house3_04|W:r7_house3_05_i2|W:r7_house3_05|W:r7_house3_06_i2|W:r7_house3_01_i2|W:r7_house3_01|W:r7_house3_02_i2|W:r7_house3_02|W:lc_house7_02|W:lc_house7_03|W:lc_house7_04|W:lc_house7_05|W:lc_house7_06|W:lc_house7_07|W:lc_House6_02|W:lc_house7_01|W:lc_house_2_02|W:lc_House6_01|W:lc_house3_03_i2|W:lc_house3_03|W:lc_House6_03|W:lc_House6_04|W:lc_house3_05_i2|W:lc_house3_05|W:lc_house3_06_i2|W:lc_house3_06|W:lc_House6_06|W:lc_house3_04_i2|W:lc_house3_04|W:house3_plus_03_i2|W:playsound|W:enable_bonfire|W:disable_bonfire|W:horror|W:Replaced|W:Invalid region index|W:nail|W:fogme|A:GetScene|A:GetPosition|W:sepia|W:nosepia|W:Wrong bonfire index |W:bonfire_light|W:Bofire  light |A:Switch|W:pt_bonfire|W:Locator for bonfire doesn't exist|W:scripted|W:bonfire_big.xml|A:set|W:Setting bonfire |W:... ok|W:Cleanup bonfire |W:pt_guard_|W:Locator doesn't exist for guard |W:term|W:guard_term.xml|W:arena_light|W:Setting arena...|W:pt_arena_manager|W:Locator doesn't exist for arena manager|W:pt_arena_torch|W:Locator doesn't exist for arena torch |W:torch.xml|W:Cleaning arena...|W:remove|W:pt_bull|W:pers_bull|W:bull.xml|W:pt_plant|A:resize|W:Total plants: |W:pt_grave_supply|W:Total grave supplies: |W:Total bonfires: |W:d1q01|W:ACHIEVEMENT_UP|W:gameover_fail.xml|W:b1q01|W:ACHIEVEMENT_BACH_1|W:ACHIEVEMENT_BACH_2|W:ACHIEVEMENT_BACH_3|W:ACHIEVEMENT_BACH_4|W:ACHIEVEMENT_BACH_5|W:ACHIEVEMENT_BACH_6|W:ACHIEVEMENT_BACH_7|W:ACHIEVEMENT_BACH_8|W:ACHIEVEMENT_BACH_9|W:ACHIEVEMENT_BACH_10|W:ACHIEVEMENT_BACH_11|W:ACHIEVEMENT_BURAH_1|W:ACHIEVEMENT_BURAH_2|W:ACHIEVEMENT_BURAH_3|W:ACHIEVEMENT_BURAH_4|W:ACHIEVEMENT_BURAH_5|W:ACHIEVEMENT_BURAH_6|W:ACHIEVEMENT_BURAH_7|W:ACHIEVEMENT_BURAH_8|W:ACHIEVEMENT_BURAH_9|W:ACHIEVEMENT_BURAH_10|W:ACHIEVEMENT_BURAH_11|W:ACHIEVEMENT_CLARA_1|W:ACHIEVEMENT_CLARA_2|W:ACHIEVEMENT_CLARA_3|W:ACHIEVEMENT_CLARA_4|W:ACHIEVEMENT_CLARA_5|W:ACHIEVEMENT_CLARA_6|W:ACHIEVEMENT_CLARA_7|W:ACHIEVEMENT_CLARA_8|W:ACHIEVEMENT_CLARA_9|W:ACHIEVEMENT_CLARA_10|W:ACHIEVEMENT_CLARA_11|W:c_iWM_RealDayChange|W:shed_corpse|W:splash_object_wo_pf.bin|W:b|W:volonteers_burah|W:volonteers_danko|W:volonteers_klara|W:rescue_locked|W:update|W:Plant point not found|W:grass_black_tvir|W:grass_blood_tvir|W:grass_brown_tvir|W:grass_savyur|W:grass_white_plet|W:item_|W:New plant: "|W:" at location #|W:Grave supply point not found|W:bread|W:milk|W:big_gun|W:big_gun.bin|W:vagon_martira|W:d9q01_trigger_wagon|W:quest_d9_01_wagon.bin|W:dt_house_1_07|A:EnableSubset|A:SwitchLights|W:City update|W:kolokol|W:day time|W:night time|W:termitnik2@door1|W:house_vlad@door2|W:warehouse_rubin@door1|W:d1KaterinaMapMark|W:pt_map_katerina|A:AddMark|W:d8q01MatGotoToyHouse|A:FindMark|W:d8q01MatGotoBoiny|W:d8q01MladVladGotoMat|W:d8q01MladVladgotoOspina|W:d8q01OspinaGotoMladVlad|W:d8q02GotoKapella|W:d8q04MladVladGotoMark|W:house1_kabak@door1|W:mnogogrannik_han@door1|W:d10q03GotoMark|W:pt_map_theater|W:d9q01GotoViktor|W:pt_map_viktor|W:d9q02GotoJulia|W:pt_map_julia|W:d9q03GotoLara|W:pt_map_lara|W:d9q04GotoAnna|W:pt_map_anna|W:d8BurahLetter|W:map_chertez_state|W:map_chertez_force|W:theater@door1|W:termitnik@door1|W:resque_list|W:factory@door1|W:icot_eva@door1|W:d1EvaGotoMaria|W:d1EvaInfo|W:d1GeorgInfo|W:d1JuliaMapMarkEva|W:d1JuliaMapMarkLara|W:d1q01AlexandrGotoJulia|W:d1q01AnnaMapMarkMladVlad|W:d1q01EvaGotoSimon|W:d1q01EvaMapMarkMladVlad|W:d1q01GeorgGotoViktor|W:d1q01JuliaGotoBigVlad|W:d1q01LaraMarkMladVlad|W:d1q01PatrolGotoAlexandr|W:d1q01ViktorGotoIsidor|W:d1q02AnnaGotoLaska|W:d1q02JuliaGotoAnna|W:d1q03KapellaGotoOspina|W:d1q03MladVladGotoOspina|W:Day1 cleanup|W:d2q01AlexandrGotoAnna|W:d2q01AlexandrGotoBigVlad|W:d2q01AlexandrGotoGeorg|W:d2q01AnnaGotoKapella|W:d2q01KapellaGotoSpi4ka|W:d2q01WomanDGotoAlexandr|W:d2q02AndreiGotoGrif|W:d2q02AndreiGotoPetr|W:d2q02EvaGotoAndrei|W:d2q02EvaGotoMaria|W:d2q02MariaGotoPetr|W:d2q02PetrGotoAndrei|W:d2q03BirdmaskGotoLara|W:d2q03LaraGotoJulia|W:d2q03LaraGotoMaria|W:d2q03LaraGotoMladVlad|W:d2q03LaraGotoMoneyFoodSelf|W:d2q03LaraGotoSklad|W:d3q01AlexandrGotoOspina|W:d3q01BigVladAgreed|W:d3q01OspinaGotoBigVlad|W:d3q01RubinGotoAlexandr|W:d3q02GeorgGotoViktor|W:d3q02HanGotoMladVlad|W:d3q02MishkaGotoMladVlad|W:d3q02MladVladGotoButcher|W:d3q02MladVladGotoViktor|W:d3q02ViktorGotoHan|W:d3q02ViktorGotoMladVlad|W:d3q03KapellaBoyLocation|W:d4q01BigVladGotoLara|W:d4q01BigVladGotoSklad|W:d4q01BigVladGotoSobor|W:d4q01BigVladGotoTheater|W:d4q01LaraGotoMladVlad|W:d4q01LaraGotoMladVladSelf|W:d4q01LaraGotoOspina|W:d4q01MladVladGotoBigVlad|W:d4q01MladVladGotoOspina|W:d4q01OspinaGotoLara|W:d4q01WastedMale|W:d4q01Whitemask|W:d4q02BirdmaskNearHome|W:d4q02MladVladGotoAnna|W:d4q02MladVladGotoJulia|W:d4q02MladVladGotoLara|W:d4q03AlexandrAboutVolnica|W:d4q03AlexandrGotoGrif|W:d4q03GrifGotoAlexandr|W:d4q03GrifGotoAlexandrSelf|W:d5q01AlexandrGotoKaterina|W:d5q01BigVladGotoAlexandr|W:d5q01BigVladGotoLara|W:d5q01BurahMeeting|W:d5q01GrifWantsMoney|W:d5q01PatrolGotoGrif|W:d5q01RubinGotoBigVlad|W:d5q01RubinGotoBigVladSelf|W:d5q02AnnaGotoGorbun|W:d5q02AnnaGotoGorbunSelf|W:d5q02AnnaGotoKabak|W:d5q02GorbunFindTheDaughter|W:d5q02NudeMeeting|W:d5q03BirdmaskBringMoneySelf|W:d5q03BirdmaskGotoMladVlad|W:d5q03BirdmaskGotoViktor|W:d5q03SavePrisoners|W:d6q01AlexandrGotoJulia|W:d6q01AlexandrGotoKaterina|W:d6q01AlexandrGotoLara|W:d6q01AlexangrGotoJulLaraSelf|W:d6q01BigVladGotoAnna|W:d6q01BigVladGotoAnnaOspinaSelf|W:d6q01BigVladGotoOspina|W:d6q01KaterinaGotoLaska|W:d6q01KaterinagotoLaskaSelf|W:d6q01KillerIsKlara|W:d6q01LaskaGotoAlbinos|W:d6q01ViktorGotoAlexandr|W:d6q01ViktorGotoAlxBigSelf|W:d6q01ViktorGotoBigVlad|W:d6q02BigVlad|W:d6q02KapellaGotoMladVlad|W:d6q02MladVladGotoBigVlad|W:d6q02MladVladGotoBigVladSelf|W:d7q01AglajaFindLierSelf|W:d7q01AglajaGotoBirdmaskSelf|W:d7q01BirdmaskD|W:d7q01BirdmaskM|W:d7q01BirdmaskU|W:d7q02AlexandrGotoPetr|W:d7q02MarkGotoAlexandr|W:d7q02MarkGotoCemetery|W:d7q04WastedGotoGatherer|W:d7q04NudeGotoAndrei|W:mnogogrannik@door1|W:d9q05AglajaGotoBurah|W:d10q01AglajaGotoPetr|W:d10q02KaterinaGotoRubin|W:d10q02RubinGotoMaria|W:d10q02GeorgGotoAglaja|W:d10q03MarkGotoBlock|W:d11q01NudeGotoRastrel|W:d11q01NudeGotoBlock|W:d2EvaVisit|W:d2LaraVisit|W:d4MladVladVisit|W:d4AlexandrVisit|W:d5AnnaVisit|W:d8MladVladVisit|W:d9q03|W:d10KaterinaVisit|W:d10MarkVisit|W:d12q01BurahVisit|W:d4ViktorVisit|W:d8AglajaVisit|W:d9AnnaVisit|W:d9LaraVisit|W:d9JuliaVisit|W:d10AglajaVisit|W:d11ViktorVisit|W:d9AglajaVisit|W:d9ViktorVisit|W:d2q03RepDown|W:d1q01KaterinaUHave1day|W:d6q03|W:d11q03BurahVisit|W:d11q04KlaraVisit|W:d2TalkToAlexandr|W:d3RubinVisit|W:d3GeorgVisit|W:d4BigVladVisit|W:d12q01KlaraVisit|W:d5RubinVisit|W:d6KapellaVisit|W:d6MariaVisit|W:d6BigVladVisit|W:d6ViktorVisit|W:d7AglajaVisit|W:d11AglajaVisit|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:GetMap|W:aglaja.wmv|W:army.wmv|W:quest_d11_01|W:quest_d12_01|W:quest_d9_01|W:quest_d10_01|W:quest_d2_01|W:quest_d3_01|W:quest_d7_01|W:quest_d8_01|W:quest_d4_01|W:quest_d5_01|W:quest_d11_02|W:quest_d1_01|W:tutorial_mask1|W:tutorial_mask2|W:quest_d6_01|W:vol_|W:Updating game |W:house7_03@door1|W:lp|W:house7_03@door2|W:sobor|W:aglaja|W:Disease update|W:Diseased regions : |W:Special diseased region: 5|W:Special diseased region: 3|W:Special diseased region: 13|W:Special diseased house: r4_house_2_02|W:s_r4_house_2_02.isc|W:Special house: r7_house2_01|W:r7_house2_01_d3q02.isc|W:Special diseased house: house7_03|W:s_house7_03.isc|W:dtheater_danko.isc|W:Special house: sobor (with corpses)|W:sobor_trup.isc|W:Special house: sobor (normal)|W:sobor_danko.isc|W:Special replaced house: uprava_admin|W:uprava_admin_army_danko.isc|W:pers_morlok|W:Danko_arena_manager.xml
// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_9: op=0x0 vars=int,float
// @STANDALONE_EVENT_26: op=0x1d32 vars=string,string
// @STANDALONE_EVENT_1000: op=0x1d4f vars=string,string
// @PE: 0x0,0x79,0xc8,0x131,0x274,0x287,0x2d6,0x3dd,0x402,0x420,0x445,0x47b,0x493,0x4ed,0x547,0x551,0x562,0x1127,0x1129,0x115d,0x1191,0x11c5,0x11ee,0x1222,0x1256,0x128a,0x12bc,0x12f0,0x1324,0x1358,0x13a2,0x13d6,0x140a,0x143e,0x147c,0x14b0,0x14e4,0x1518,0x1571,0x15a5,0x15d9,0x160d,0x160f,0x1616,0x161d,0x1624,0x1650,0x1684,0x16b8,0x16ec,0x1718,0x174c,0x1780,0x17b4,0x17e3,0x1817,0x184b,0x187f,0x18b4,0x18e8,0x191c,0x1950,0x1988,0x19bc,0x19f0,0x1a24,0x1a4d,0x1a81,0x1ab5,0x1ae9,0x1b18,0x1b4c,0x1b80,0x1bb4,0x1be0,0x1c14,0x1c48,0x1c7c,0x1c96,0x1cca,0x1cfe,0x1e58,0x2668,0x2671,0x267a,0x2683,0x268c,0x2695,0x269e,0x26a7,0x26b0,0x26b9,0x26c2,0x26cb,0x26d4,0x26dd,0x26e6,0x26ef,0x26f8,0x2701,0x270a,0x2713,0x271c,0x2725,0x272e,0x2737,0x2740,0x2749,0x2752,0x275b,0x2764,0x276d,0x2776,0x277f,0x2788,0x2791,0x279a,0x27a3,0x27ac,0x27b5,0x27be,0x27c7,0x27d0,0x27d9,0x27e2,0x27eb,0x27f4,0x27fd,0x2806,0x280f,0x2818,0x2821,0x282a,0x2833,0x283c,0x2845,0x284e,0x2857,0x2860,0x2869,0x2872,0x287b,0x2884,0x288d,0x2896,0x289f,0x28a8,0x28b1,0x28ba,0x28c3,0x28cc,0x28d5,0x28de,0x28e5,0x28ec,0x294c,0x2953,0x29aa,0x29b0,0x29c1,0x29d2,0x29e3,0x29f4,0x2a05,0x2a0c,0x2a13,0x2a18,0x2a1f,0x2a26,0x2a2d,0x2a36,0x2a3d,0x2dfd,0x2ea7,0x2eb3,0x2ebf,0x2ecb,0x2ed7,0x2ee3,0x2eef,0x2efb,0x2f07,0x2f13,0x2f1f,0x2f2b,0x2f37,0x2f43,0x2f4f,0x2f5b,0x2f67,0x2f73,0x2f7f,0x2f8b,0x2f97,0x2fa3,0x2faf,0x2fbb,0x2fc5,0x2fd1,0x2fdd,0x2fe9,0x2ff5,0x3001,0x300d,0x3019,0x3025,0x3031,0x303d,0x3049,0x3055,0x3061,0x306d,0x3079,0x3085,0x314e,0x367b,0x383d,0x3883,0x3888

task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0;
	var_0_int = var_3_int;
	var_1_float = var_4_float;
	func_8899(var_3_int, var_4_float);
	if(var_2_bool != 0) {
		return 0;
	}
	var_4135_bool = 0; var_4136_int = 0; var_4137_float = 0;
	var_0_int = var_4136_int;
	var_1_float = var_4137_float;
	func_12526(var_4136_int, var_4137_float);
	if(var_4135_bool != 0) {
		return 0;
	}
	var_4657_int = 0; var_4658_float = 0;
	var_0_int = var_4657_int;
	var_1_float = var_4658_float;
	func_12622(var_4657_int, var_4658_float);
	return 0;
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0;
	var_7_bool = var_0_string == "playsound";
	if(var_7_bool != 0) {
		PlaySound(var_1_string);
	} else {
		var_9_bool = var_0_string == "enable_bonfire";
		if(var_9_bool != 0) {
			_strtoi(var_4_int, var_1_string);
			var_10_int = 0;
			var_10_int = var_4_int - (int)1;
			func_7614(var_10_int);
			goto Label_7502;
		}
		var_65_bool = var_0_string == "disable_bonfire";
		if(var_65_bool == 0) goto Label_7502;
		_strtoi(var_5_int, var_1_string);
		var_66_int = 0;
		var_66_int = var_5_int - (int)1;
		func_7691(var_66_int);
	}
Label_7502:
	return 4;
	
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	var_23_bool = var_0_string == "horror";
	if(var_23_bool != 0) {
		_strtoi(var_12_int, var_1_string);
		var_24_int = 0;
		var_12_int = var_24_int;
		func_448(var_24_int);
		var_39_object = GlobalVars[13];
		@@var_39_object:size(var_13_int);
		var_40_bool = 0;
		var_40_bool = 0;
		var_42_bool = var_12_int >= (int)0;
		if(var_42_bool != 0) {
			var_43_bool = var_12_int < var_13_int;
			if(var_43_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			@@var_44_object:get(var_14_object, var_12_int);
			var_45_object = Obj(); var_46_int = 0;
			var_14_object = var_45_object;
			func_311(var_45_object, (int)1);
			Trace("Replaced");
			var_14_object = 0;
		} else {
			Trace("Invalid region index");
	}
		var_75_bool = var_0_string == "nail";
		if(var_75_bool != 0) {
			_strtoi(var_15_int, var_1_string);
			var_76_int = 0;
			var_15_int = var_76_int;
			func_478(var_76_int);
			var_88_object = GlobalVars[13];
			@@var_88_object:size(var_16_int);
			var_89_bool = 0;
			var_89_bool = 0;
			var_91_bool = var_15_int >= (int)0;
			if(var_91_bool != 0) {
				var_92_bool = var_15_int < var_16_int;
				if(var_92_bool != 0) {
					var_89_bool = 1;
				}
			}
			if(var_89_bool != 0) {
				var_93_object = GlobalVars[13];
				@@var_93_object:get(var_17_object, var_15_int);
				var_94_object = Obj(); var_95_int = 0;
				var_17_object = var_94_object;
				func_311(var_94_object, (int)2);
				Trace("Replaced");
				var_17_object = 0;
			} else {
				Trace("Invalid region index");
		}
			var_99_bool = var_0_string == "fogme";
			if(var_99_bool != 0) {
				func_80(Obj());
				var_100_object = var_18_object;
				@@var_18_object:GetScene(var_19_object);
				@@var_18_object:GetPosition(var_20_cvector);
				AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, CVector(0.0, 0.0, 1.0), "fog_stat.xml");
				var_21_object = 0;
				var_19_object = 0;
				var_18_object = 0;
				goto Label_7613;
			}
			var_108_bool = var_0_string == "sepia";
			if(var_108_bool != 0) {
				func_295();
				goto Label_7613;
			}
			var_112_bool = var_0_string == "nosepia";
			if(var_112_bool == 0) goto Label_7613;
			func_300();
		}
		goto Label_7613;
	}
	goto Label_7613;
	
Label_7613:
	return 20;
	
}


main()
{
	SetVariable("branch", (int)0);
	SetSaveProperty((int)0, (int)0);
	func_57();
	func_7914();
	func_8954();
	func_12587();
	var_4560_float = 0;
	func_290((float)0);
	var_4561_float = var_4560_float;
	func_13947(var_4560_float);
	var_4843_string = ""; var_4844_bool = 0;
	func_183("burah_home@door1", (bool)1);
	
Label_53:
	Hold();
	goto Label_53;
}
EMIT "Return(); Pop(0)";


func_12289(var_5573_bool)
{
	var_5576_int = 0; var_5577_string = "";
	func_138(var_5576_int, "d3RubinVisit");
	var_5579_bool = var_5576_int == (int)1;
	if(var_5579_bool != 0) {
		var_5573_bool = 1;
		return 0;
	}
	var_5573_bool = 0;
	return 0;
}


func_1026(var_1323_int, var_1324_int)
{
	var_1325_bool = 0;
	var_1325_bool = 1;
	var_1327_bool = var_1324_int >= (int)20;
	if(var_1327_bool != 1) {
		var_1328_bool = 0;
		var_1328_bool = 0;
		var_1330_bool = var_1324_int >= (int)6;
		if(var_1330_bool != 0) {
			var_1332_bool = var_1324_int < (int)10;
			if(var_1332_bool != 0) {
				var_1328_bool = 1;
			}
		}
		if(var_1328_bool != 1) {
			var_1325_bool = 0;
		}
	}
	if(var_1325_bool != 0) {
		var_1333_int = 0; var_1334_bool = 0;
		var_1323_int = var_1333_int;
		func_785(var_1333_int, (bool)1);
	} else {
		var_1335_int = 0; var_1336_bool = 0;
		var_1323_int = var_1335_int;
		func_785(var_1335_int, (bool)0);
	}
	return 0;
	
}


func_10246(var_5376_int, var_5377_float)
{
	var_5378_int = 0; var_5379_int = 0; var_5380_int = 0; var_5381_float = 0;
	var_5377_float = var_5381_float;
	func_12495(var_5378_int, (int)522202, (int)522201, var_5381_float);
	var_5378_int = var_5376_int;
	return 0;
}


func_5130(var_3680_int, var_3681_int, var_3682_object, var_3683_object, var_3684_object, var_3685_object)
{
	var_3687_bool = var_3681_int == (int)0;
	if(var_3687_bool != 0) {
		var_3688_int = 0; var_3689_bool = 0;
		func_802((int)3, (bool)0);
		var_3690_int = 0; var_3691_bool = 0; var_3692_int = 0;
		func_819((int)3, (bool)0, (int)1);
		var_3693_int = 0; var_3694_int = 0; var_3695_object = Obj(); var_3696_object = Obj(); var_3697_object = Obj();
		var_3680_int = var_3694_int;
		var_3682_object = var_3695_object;
		var_3683_object = var_3696_object;
		var_3684_object = var_3697_object;
		func_726((int)3, var_3694_int, var_3695_object, var_3696_object, var_3697_object);
		var_3698_object = Obj(); var_3699_int = 0;
		var_3685_object = var_3698_object;
		func_311(var_3698_object, (int)2);
		var_3700_int = 0; var_3701_bool = 0; var_3702_int = 0;
		func_876((int)3, (bool)0, (int)7);
		var_3703_int = 0; var_3704_bool = 0; var_3705_int = 0;
		func_938((int)3, (bool)1, (int)7);
	}
	var_3706_int = 0; var_3707_bool = 0;
	func_785((int)3, (bool)0);
	var_3708_int = 0; var_3709_int = 0; var_3710_int = 0;
	var_3680_int = var_3709_int;
	var_3681_int = var_3710_int;
	func_3853((int)3, var_3709_int, var_3710_int);
	return 0;
}


func_12301(var_5557_bool)
{
	var_5560_int = 0; var_5561_string = "";
	func_138(var_5560_int, "d3GeorgVisit");
	var_5563_bool = var_5560_int == (int)1;
	if(var_5563_bool != 0) {
		var_5557_bool = 1;
		return 0;
	}
	var_5557_bool = 0;
	return 0;
}


func_8206()
{
	var_4415_object = Obj(); var_4416_object = Obj();
	GetMainOutdoorScene(var_4416_object);
	var_4417_object = GlobalVars[0];
	var_4418_object = Obj(); var_4419_object = Obj(); var_4420_int = 0;
	var_4416_object = var_4419_object;
	func_7768(var_4418_object, var_4419_object, (int)1);
	var_4418_object = var_4417_object;
	GlobalVars[0] = var_4417_object;
	var_4440_object = GlobalVars[1];
	var_4441_object = Obj(); var_4442_object = Obj(); var_4443_int = 0;
	var_4416_object = var_4442_object;
	func_7768(var_4441_object, var_4442_object, (int)2);
	var_4441_object = var_4440_object;
	GlobalVars[1] = var_4440_object;
	var_4444_object = GlobalVars[2];
	var_4445_object = Obj(); var_4446_object = Obj(); var_4447_int = 0;
	var_4416_object = var_4446_object;
	func_7768(var_4445_object, var_4446_object, (int)3);
	var_4445_object = var_4444_object;
	GlobalVars[2] = var_4444_object;
	var_4448_object = GlobalVars[3];
	var_4449_object = Obj(); var_4450_object = Obj(); var_4451_int = 0;
	var_4416_object = var_4450_object;
	func_7768(var_4449_object, var_4450_object, (int)4);
	var_4449_object = var_4448_object;
	GlobalVars[3] = var_4448_object;
	var_4452_object = GlobalVars[4];
	var_4453_object = Obj(); var_4454_object = Obj(); var_4455_int = 0;
	var_4416_object = var_4454_object;
	func_7768(var_4453_object, var_4454_object, (int)5);
	var_4453_object = var_4452_object;
	GlobalVars[4] = var_4452_object;
	var_4456_object = GlobalVars[5];
	var_4457_object = Obj(); var_4458_object = Obj(); var_4459_int = 0;
	var_4416_object = var_4458_object;
	func_7768(var_4457_object, var_4458_object, (int)6);
	var_4457_object = var_4456_object;
	GlobalVars[5] = var_4456_object;
	var_4460_object = GlobalVars[12];
	func_132(Obj());
	var_4461_object = var_4460_object;
	GlobalVars[12] = var_4460_object;
	var_4462_bool = 0;
	func_7779((bool)0);
	func_8754();
	func_8829();
	SendWorldWndMessage((int)100);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10255(var_5697_int, var_5698_float)
{
	var_5699_int = 0; var_5700_int = 0; var_5701_int = 0; var_5702_float = 0;
	var_5698_float = var_5702_float;
	func_12495(var_5699_int, (int)502853, (int)502852, var_5702_float);
	var_5699_int = var_5697_int;
	return 0;
}


func_7188(var_3000_int, var_3001_int, var_3002_object, var_3003_object, var_3004_object, var_3005_object)
{
	var_3007_bool = var_3001_int == (int)0;
	if(var_3007_bool != 0) {
		var_3008_int = 0; var_3009_bool = 0;
		func_802((int)14, (bool)1);
		var_3010_int = 0; var_3011_bool = 0; var_3012_int = 0;
		func_819((int)14, (bool)1, (int)1);
		var_3013_int = 0; var_3014_int = 0; var_3015_object = Obj(); var_3016_object = Obj(); var_3017_object = Obj();
		var_3000_int = var_3014_int;
		var_3002_object = var_3015_object;
		var_3003_object = var_3016_object;
		var_3004_object = var_3017_object;
		func_647((int)14, var_3014_int, var_3015_object, var_3016_object, var_3017_object);
		var_3018_object = Obj(); var_3019_int = 0;
		var_3005_object = var_3018_object;
		func_311(var_3018_object, (int)1);
		var_3020_int = 0; var_3021_bool = 0; var_3022_int = 0;
		func_876((int)14, (bool)1, (int)5);
		var_3023_int = 0; var_3024_bool = 0; var_3025_int = 0;
		func_938((int)14, (bool)0, (int)5);
	}
	var_3026_int = 0; var_3027_bool = 0;
	func_785((int)14, (bool)0);
	var_3028_int = 0; var_3029_int = 0; var_3030_int = 0;
	var_3000_int = var_3029_int;
	var_3001_int = var_3030_int;
	func_2590((int)14, var_3029_int, var_3030_int);
	return 0;
}


func_6167(var_2835_int, var_2836_int, var_2837_object, var_2838_object, var_2839_object, var_2840_object)
{
	var_2842_bool = var_2836_int == (int)0;
	if(var_2842_bool != 0) {
		var_2843_int = 0; var_2844_bool = 0;
		func_802((int)9, (bool)1);
		var_2845_int = 0; var_2846_bool = 0; var_2847_int = 0;
		func_819((int)9, (bool)1, (int)1);
		var_2848_int = 0; var_2849_int = 0; var_2850_object = Obj(); var_2851_object = Obj(); var_2852_object = Obj();
		var_2835_int = var_2849_int;
		var_2837_object = var_2850_object;
		var_2838_object = var_2851_object;
		var_2839_object = var_2852_object;
		func_647((int)9, var_2849_int, var_2850_object, var_2851_object, var_2852_object);
		var_2853_object = Obj(); var_2854_int = 0;
		var_2840_object = var_2853_object;
		func_311(var_2853_object, (int)1);
		var_2855_int = 0; var_2856_bool = 0; var_2857_int = 0;
		func_876((int)9, (bool)1, (int)7);
		var_2858_int = 0; var_2859_bool = 0; var_2860_int = 0;
		func_938((int)9, (bool)0, (int)7);
	}
	var_2861_int = 0; var_2862_bool = 0;
	func_785((int)9, (bool)0);
	var_2863_int = 0; var_2864_int = 0; var_2865_int = 0;
	var_2835_int = var_2864_int;
	var_2836_int = var_2865_int;
	func_2770((int)9, var_2864_int, var_2865_int);
	return 0;
}


func_10264(var_6267_int, var_6268_float)
{
	var_6269_int = 0; var_6270_int = 0; var_6271_int = 0; var_6272_float = 0;
	var_6268_float = var_6272_float;
	func_12495(var_6269_int, (int)503175, (int)503174, var_6272_float);
	var_6269_int = var_6267_int;
	return 0;
}


func_12313(var_5619_bool)
{
	var_5622_int = 0; var_5623_string = "";
	func_138(var_5622_int, "d4BigVladVisit");
	var_5625_bool = var_5622_int == (int)1;
	if(var_5625_bool != 0) {
		var_5619_bool = 1;
		return 0;
	}
	var_5619_bool = 0;
	return 0;
}


func_1056(var_725_int, var_726_int)
{
	var_727_bool = 0;
	var_727_bool = 1;
	var_728_bool = 0;
	var_728_bool = 1;
	var_730_bool = var_726_int >= (int)22;
	if(var_730_bool != 1) {
		var_732_bool = var_726_int < (int)4;
		if(var_732_bool != 1) {
			var_728_bool = 0;
		}
	}
	if(var_728_bool != 1) {
		var_733_bool = 0;
		var_733_bool = 0;
		var_735_bool = var_726_int >= (int)6;
		if(var_735_bool != 0) {
			var_737_bool = var_726_int < (int)8;
			if(var_737_bool != 0) {
				var_733_bool = 1;
			}
		}
		if(var_733_bool != 1) {
			var_727_bool = 0;
		}
	}
	if(var_727_bool != 0) {
		var_738_int = 0; var_739_bool = 0;
		var_725_int = var_738_int;
		func_785(var_738_int, (bool)1);
	} else {
		var_749_int = 0; var_750_bool = 0;
		var_725_int = var_749_int;
		func_785(var_749_int, (bool)0);
	}
	return 0;
	
}


func_10273(var_5387_int, var_5388_float)
{
	var_5389_int = 0; var_5390_int = 0; var_5391_int = 0; var_5392_float = 0;
	var_5388_float = var_5392_float;
	func_12495(var_5389_int, (int)522204, (int)522203, var_5392_float);
	var_5389_int = var_5387_int;
	return 0;
}


func_12325(var_4996_bool)
{
	var_4999_int = 0; var_5000_string = "";
	func_138(var_4999_int, "d12q01KlaraVisit");
	var_5002_bool = var_4999_int != (int)0;
	if(var_5002_bool != 0) {
		var_4996_bool = 1;
		return 0;
	}
	var_4996_bool = 0;
	return 0;
}


func_10282(var_5713_int, var_5714_float)
{
	var_5715_int = 0; var_5716_int = 0; var_5717_int = 0; var_5718_float = 0;
	var_5714_float = var_5718_float;
	func_12495(var_5715_int, (int)503177, (int)503176, var_5718_float);
	var_5715_int = var_5713_int;
	return 0;
}


func_12337(var_5689_bool)
{
	var_5692_int = 0; var_5693_string = "";
	func_138(var_5692_int, "d5RubinVisit");
	var_5695_bool = var_5692_int == (int)1;
	if(var_5695_bool != 0) {
		var_5689_bool = 1;
		return 0;
	}
	var_5689_bool = 0;
	return 0;
}


func_10291(var_5643_int, var_5644_float)
{
	var_5645_int = 0; var_5646_int = 0; var_5647_int = 0; var_5648_float = 0;
	var_5644_float = var_5648_float;
	func_12495(var_5645_int, (int)503181, (int)503180, var_5648_float);
	var_5645_int = var_5643_int;
	return 0;
}


func_57()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	FindActor(var_9_object, "player");
	GetSceneByName(var_10_object, "cot_eva");
	var_16_bool = var_10_object == 0; //@nz
	if(var_16_bool != 0) {
		Trace("Starting scene not found");
		return 10;
	}
	@@var_10_object:GetLocator("pt_birth_Danko", var_11_bool, var_12_cvector, var_13_cvector);
	var_19_bool = var_11_bool;
	if(var_19_bool != 0) {
		Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
	}
	return 10;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_10300(var_5729_int, var_5730_float)
{
	var_5731_int = 0; var_5732_int = 0; var_5733_int = 0; var_5734_float = 0;
	var_5730_float = var_5734_float;
	func_12495(var_5731_int, (int)503179, (int)503178, var_5734_float);
	var_5731_int = var_5729_int;
	return 0;
}


func_14397(var_4899_object, var_4900_bool, var_4901_int)
{
	@@var_4899_object:add((int)6);
	@@var_4899_object:add((int)26);
	@@var_4899_object:add((int)2);
	@@var_4899_object:add((int)22);
	var_4907_bool = var_4900_bool == (bool)0;
	if(var_4907_bool != 0) {
		@@var_4899_object:add((int)15);
		@@var_4899_object:add((int)5);
		@@var_4899_object:add((int)16);
	} else {
		var_4912_bool = var_4901_int != (int)0;
		if(var_4912_bool == 0) goto Label_14429;
		@@var_4899_object:add((int)15);
	}
Label_14429:
	return 0;
	
}


func_12349(var_5635_bool)
{
	var_5638_int = 0; var_5639_string = "";
	func_138(var_5638_int, "d6KapellaVisit");
	var_5641_bool = var_5638_int == (int)1;
	if(var_5641_bool != 0) {
		var_5635_bool = 1;
		return 0;
	}
	var_5635_bool = 0;
	return 0;
}


func_5182(var_123_object)
{
	@@var_123_object:add("dt_house3_08_i2");
	@@var_123_object:add("dt_house3_09");
	@@var_123_object:add("dt_house3_09_i2");
	@@var_123_object:add("house1_se_03l");
	@@var_123_object:add("house1_se_03r");
	@@var_123_object:add("house1_se_01l");
	@@var_123_object:add("house1_se_01r");
	@@var_123_object:add("house1_se_04l");
	@@var_123_object:add("house1_se_04r");
	@@var_123_object:add("house5_11");
	@@var_123_object:add("house5_09");
	@@var_123_object:add("house5_13");
	@@var_123_object:add("house5_12");
	@@var_123_object:add("house5_14");
	@@var_123_object:add("house5_unoin03l");
	@@var_123_object:add("house5_unoin03r");
	@@var_123_object:add("house5_unoin02l");
	@@var_123_object:add("house5_unoin02r");
	@@var_123_object:add("house5_unoin01l");
	@@var_123_object:add("house5_unoin01r");
	return 0;
}


func_10309(var_5966_int, var_5967_float)
{
	var_5968_int = 0; var_5969_int = 0; var_5970_int = 0; var_5971_float = 0;
	var_5967_float = var_5971_float;
	func_12495(var_5968_int, (int)512530, (int)512529, var_5971_float);
	var_5968_int = var_5966_int;
	return 0;
}


func_1093(var_1796_int, var_1797_int)
{
	var_1798_bool = 0;
	var_1798_bool = 1;
	var_1800_bool = var_1797_int >= (int)22;
	if(var_1800_bool != 1) {
		var_1802_bool = var_1797_int < (int)6;
		if(var_1802_bool != 1) {
			var_1798_bool = 0;
		}
	}
	if(var_1798_bool != 0) {
		var_1803_int = 0; var_1804_bool = 0;
		var_1796_int = var_1803_int;
		func_785(var_1803_int, (bool)1);
	} else {
		var_1805_int = 0; var_1806_bool = 0;
		var_1796_int = var_1805_int;
		func_785(var_1805_int, (bool)0);
	}
	return 0;
	
}


func_3143(var_2119_int, var_2120_int, var_2121_int)
{
	var_2122_int = 0; var_2123_int = 0; var_2124_int = 0; var_2125_int = 0;
	var_2126_bool = 0;
	var_2126_bool = 0;
	var_2128_bool = var_2121_int > (int)8;
	if(var_2128_bool != 0) {
		var_2130_bool = var_2121_int < (int)21;
		if(var_2130_bool != 0) {
			var_2126_bool = 1;
		}
	}
	if(var_2126_bool != 0) {
		var_2131_int = 0; var_2132_string = ""; var_2133_string = ""; var_2134_int = 0;
		var_2119_int = var_2131_int;
		func_509(var_2131_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2135_int = 0; var_2136_string = ""; var_2137_string = ""; var_2138_int = 0;
		var_2119_int = var_2135_int;
		func_509(var_2135_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2139_int = 0; var_2140_string = ""; var_2141_string = ""; var_2142_int = 0;
		var_2119_int = var_2139_int;
		func_509(var_2139_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2143_int = 0; var_2144_string = ""; var_2145_string = ""; var_2146_int = 0;
		var_2119_int = var_2143_int;
		func_535(var_2143_int, "fog", "fog.xml", (int)6);
		var_2152_bool = var_2120_int >= (int)5;
		if(var_2152_bool != 0) {
			var_2153_int = 0; var_2154_string = ""; var_2155_string = ""; var_2156_int = 0;
			var_2119_int = var_2153_int;
			func_535(var_2153_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2158_float = 0; var_2159_int = 0;
		var_2120_int = var_2159_int;
		func_1261(var_2158_float, var_2159_int);
		var_2124_int = (int)1 * var_2158_float;
		var_2204_int = var_2124_int;
		if(var_2204_int != 0) {
			var_2205_int = 0; var_2206_string = ""; var_2207_string = ""; var_2208_int = 0;
			var_2119_int = var_2205_int;
			var_2124_int = var_2208_int;
			func_509(var_2205_int, "pers_bomber", "bomber.xml", var_2208_int);
		}
	} else {
		var_2244_int = 0; var_2245_string = ""; var_2246_string = ""; var_2247_int = 0;
		var_2119_int = var_2244_int;
		func_509(var_2244_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)4);
		var_2248_int = 0; var_2249_string = ""; var_2250_string = ""; var_2251_int = 0;
		var_2119_int = var_2248_int;
		func_509(var_2248_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)4);
		var_2252_int = 0; var_2253_string = ""; var_2254_string = ""; var_2255_int = 0;
		var_2119_int = var_2252_int;
		func_509(var_2252_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2256_int = 0; var_2257_string = ""; var_2258_string = ""; var_2259_int = 0;
		var_2119_int = var_2256_int;
		func_535(var_2256_int, "fog", "fog.xml", (int)6);
		var_2261_bool = var_2120_int >= (int)5;
		if(var_2261_bool != 0) {
			var_2262_int = 0; var_2263_string = ""; var_2264_string = ""; var_2265_int = 0;
			var_2119_int = var_2262_int;
			func_535(var_2262_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2267_float = 0; var_2268_int = 0;
		var_2120_int = var_2268_int;
		func_1261(var_2267_float, var_2268_int);
		var_2125_int = (int)2 * var_2267_float;
		var_2269_int = var_2125_int;
		if(var_2269_int == 0) goto Label_3261;
		var_2270_int = 0; var_2271_string = ""; var_2272_string = ""; var_2273_int = 0;
		var_2119_int = var_2270_int;
		var_2125_int = var_2273_int;
		func_509(var_2270_int, "pers_bomber", "bomber.xml", var_2273_int);
	}
Label_3261:
	var_2209_bool = 0; var_2210_int = 0;
	var_2120_int = var_2210_int;
	func_1378(var_2209_bool, var_2210_int);
	if(var_2209_bool != 0) {
		var_2212_int = 0; var_2213_string = ""; var_2214_string = ""; var_2215_int = 0;
		var_2119_int = var_2212_int;
		func_509(var_2212_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	var_2216_int = 0; var_2217_string = ""; var_2218_string = ""; var_2219_int = 0; var_2220_int = 0; var_2221_int = 0;
	var_2119_int = var_2216_int;
	func_522(var_2216_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2226_int = 0; var_2227_string = ""; var_2228_string = ""; var_2229_int = 0; var_2230_int = 0; var_2231_int = 0;
	var_2119_int = var_2226_int;
	func_522(var_2226_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2232_int = 0; var_2233_string = ""; var_2234_string = ""; var_2235_int = 0; var_2236_int = 0; var_2237_int = 0;
	var_2119_int = var_2232_int;
	func_522(var_2232_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2238_int = 0; var_2239_string = ""; var_2240_string = ""; var_2241_int = 0; var_2242_int = 0; var_2243_int = 0;
	var_2119_int = var_2238_int;
	func_522(var_2238_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_7240(var_4130_int, var_4131_int, var_4132_object, var_4133_object, var_4134_object, var_4135_object)
{
	var_4137_bool = var_4131_int == (int)0;
	if(var_4137_bool != 0) {
		var_4138_int = 0; var_4139_bool = 0;
		func_802((int)14, (bool)0);
		var_4140_int = 0; var_4141_bool = 0; var_4142_int = 0;
		func_819((int)14, (bool)0, (int)1);
		var_4143_int = 0; var_4144_int = 0; var_4145_object = Obj(); var_4146_object = Obj(); var_4147_object = Obj();
		var_4130_int = var_4144_int;
		var_4132_object = var_4145_object;
		var_4133_object = var_4146_object;
		var_4134_object = var_4147_object;
		func_726((int)14, var_4144_int, var_4145_object, var_4146_object, var_4147_object);
		var_4148_object = Obj(); var_4149_int = 0;
		var_4135_object = var_4148_object;
		func_311(var_4148_object, (int)2);
		var_4150_int = 0; var_4151_bool = 0; var_4152_int = 0;
		func_876((int)14, (bool)0, (int)5);
		var_4153_int = 0; var_4154_bool = 0; var_4155_int = 0;
		func_938((int)14, (bool)1, (int)5);
	}
	var_4156_int = 0; var_4157_bool = 0;
	func_785((int)14, (bool)0);
	var_4158_int = 0; var_4159_int = 0; var_4160_int = 0;
	var_4130_int = var_4159_int;
	var_4131_int = var_4160_int;
	func_3477((int)14, var_4159_int, var_4160_int);
	return 0;
}


func_12361(var_5721_bool)
{
	var_5724_int = 0; var_5725_string = "";
	func_138(var_5724_int, "d6MariaVisit");
	var_5727_bool = var_5724_int == (int)1;
	if(var_5727_bool != 0) {
		var_5721_bool = 1;
		return 0;
	}
	var_5721_bool = 0;
	return 0;
}


func_6219(var_3965_int, var_3966_int, var_3967_object, var_3968_object, var_3969_object, var_3970_object)
{
	var_3972_bool = var_3966_int == (int)0;
	if(var_3972_bool != 0) {
		var_3973_int = 0; var_3974_bool = 0;
		func_802((int)9, (bool)0);
		var_3975_int = 0; var_3976_bool = 0; var_3977_int = 0;
		func_819((int)9, (bool)0, (int)1);
		var_3978_int = 0; var_3979_int = 0; var_3980_object = Obj(); var_3981_object = Obj(); var_3982_object = Obj();
		var_3965_int = var_3979_int;
		var_3967_object = var_3980_object;
		var_3968_object = var_3981_object;
		var_3969_object = var_3982_object;
		func_726((int)9, var_3979_int, var_3980_object, var_3981_object, var_3982_object);
		var_3983_object = Obj(); var_3984_int = 0;
		var_3970_object = var_3983_object;
		func_311(var_3983_object, (int)2);
		var_3985_int = 0; var_3986_bool = 0; var_3987_int = 0;
		func_876((int)9, (bool)0, (int)7);
		var_3988_int = 0; var_3989_bool = 0; var_3990_int = 0;
		func_938((int)9, (bool)1, (int)7);
	}
	var_3991_int = 0; var_3992_bool = 0;
	func_785((int)9, (bool)0);
	var_3993_int = 0; var_3994_int = 0; var_3995_int = 0;
	var_3965_int = var_3994_int;
	var_3966_int = var_3995_int;
	func_3665((int)9, var_3994_int, var_3995_int);
	return 0;
}


func_10318(var_5659_int, var_5660_float)
{
	var_5661_int = 0; var_5662_int = 0; var_5663_int = 0; var_5664_float = 0;
	var_5660_float = var_5664_float;
	func_12495(var_5661_int, (int)515382, (int)515381, var_5664_float);
	var_5661_int = var_5659_int;
	return 0;
}


func_80(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	FindActor(var_102_object, "player");
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_12373(var_5705_bool)
{
	var_5708_int = 0; var_5709_string = "";
	func_138(var_5708_int, "d6BigVladVisit");
	var_5711_bool = var_5708_int == (int)1;
	if(var_5711_bool != 0) {
		var_5705_bool = 1;
		return 0;
	}
	var_5705_bool = 0;
	return 0;
}


func_8278(var_4157_int, var_4158_int)
{
	var_4160_bool = 0; var_4161_int = 0; var_4162_int = 0; var_4163_bool = 0; var_4164_int = 0; var_4165_int = 0;
	var_4167_bool = var_4158_int == (int)0;
	if(var_4167_bool != 0) {
		var_4163_bool = 0;
		var_4169_bool = var_4157_int == (int)2;
		if(var_4169_bool != 0) {
			var_4170_int = 0;
			func_12520(var_4170_int);
			var_4172_bool = var_4170_int == (int)0;
			if(var_4172_bool != 0) {
				GetVariable("d1q01", var_4164_int);
				var_4175_bool = var_4164_int != (int)1000;
				if(var_4175_bool != 0) {
					var_4163_bool = 1;
					UnlockAchievement("ACHIEVEMENT_UP");
					GameOver("gameover_fail.xml");
				}
			} else {
							var_4286_int = 0;
							func_12520(var_4286_int);
							var_4288_bool = var_4286_int == (int)1;
							if(var_4288_bool == 0) goto Label_8325;
							GetVariable("b1q01", var_4165_int);
							var_4291_bool = var_4165_int != (int)1000;
							if(var_4291_bool == 0) goto Label_8325;
							var_4163_bool = 1;
							UnlockAchievement("ACHIEVEMENT_UP");
							GameOver("gameover_fail.xml");
			}
		}
	Label_8325:
		var_4178_bool = var_4163_bool == 0; //@nz
		if(var_4178_bool != 0) {
			var_4179_int = 0;
			func_12520(var_4179_int);
			var_4181_bool = var_4179_int == (int)0;
			if(var_4181_bool != 0) {
				var_4183_bool = var_4157_int == (int)2;
				if(var_4183_bool != 0) {
					UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
					var_4188_bool = var_4157_int == (int)3;
					if(var_4188_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_2");
						goto Label_8409;
					}
					var_4191_bool = var_4157_int == (int)4;
					if(var_4191_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_3");
						goto Label_8409;
					}
					var_4194_bool = var_4157_int == (int)5;
					if(var_4194_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_4");
						goto Label_8409;
					}
					var_4197_bool = var_4157_int == (int)6;
					if(var_4197_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_5");
						goto Label_8409;
					}
					var_4200_bool = var_4157_int == (int)7;
					if(var_4200_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_6");
						goto Label_8409;
					}
					var_4203_bool = var_4157_int == (int)8;
					if(var_4203_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_7");
						goto Label_8409;
					}
					var_4206_bool = var_4157_int == (int)9;
					if(var_4206_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_8");
						goto Label_8409;
					}
					var_4209_bool = var_4157_int == (int)10;
					if(var_4209_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_9");
						goto Label_8409;
					}
					var_4212_bool = var_4157_int == (int)11;
					if(var_4212_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_10");
						goto Label_8409;
					}
					var_4215_bool = var_4157_int == (int)12;
					if(var_4215_bool == 0) goto Label_8409;
					UnlockAchievement("ACHIEVEMENT_BACH_11");
			}
				var_4217_int = 0;
				func_12520(var_4217_int);
				var_4219_bool = var_4217_int == (int)1;
				if(var_4219_bool != 0) {
					var_4221_bool = var_4157_int == (int)2;
					if(var_4221_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else {
						var_4224_bool = var_4157_int == (int)3;
						if(var_4224_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_2");
							goto Label_8492;
						}
						var_4227_bool = var_4157_int == (int)4;
						if(var_4227_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_3");
							goto Label_8492;
						}
						var_4230_bool = var_4157_int == (int)5;
						if(var_4230_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_4");
							goto Label_8492;
						}
						var_4233_bool = var_4157_int == (int)6;
						if(var_4233_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_5");
							goto Label_8492;
						}
						var_4236_bool = var_4157_int == (int)7;
						if(var_4236_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_6");
							goto Label_8492;
						}
						var_4239_bool = var_4157_int == (int)8;
						if(var_4239_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_7");
							goto Label_8492;
						}
						var_4242_bool = var_4157_int == (int)9;
						if(var_4242_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_8");
							goto Label_8492;
						}
						var_4245_bool = var_4157_int == (int)10;
						if(var_4245_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_9");
							goto Label_8492;
						}
						var_4248_bool = var_4157_int == (int)11;
						if(var_4248_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_10");
							goto Label_8492;
						}
						var_4251_bool = var_4157_int == (int)12;
						if(var_4251_bool == 0) goto Label_8492;
						UnlockAchievement("ACHIEVEMENT_BURAH_11");
				}
					var_4254_bool = var_4157_int == (int)2;
					if(var_4254_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_1");
						goto Label_8569;
					}
					var_4257_bool = var_4157_int == (int)3;
					if(var_4257_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_2");
						goto Label_8569;
					}
					var_4260_bool = var_4157_int == (int)4;
					if(var_4260_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_3");
						goto Label_8569;
					}
					var_4263_bool = var_4157_int == (int)5;
					if(var_4263_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_4");
						goto Label_8569;
					}
					var_4266_bool = var_4157_int == (int)6;
					if(var_4266_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_5");
						goto Label_8569;
					}
					var_4269_bool = var_4157_int == (int)7;
					if(var_4269_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_6");
						goto Label_8569;
					}
					var_4272_bool = var_4157_int == (int)8;
					if(var_4272_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_7");
						goto Label_8569;
					}
					var_4275_bool = var_4157_int == (int)9;
					if(var_4275_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_8");
						goto Label_8569;
					}
					var_4278_bool = var_4157_int == (int)10;
					if(var_4278_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_9");
						goto Label_8569;
					}
					var_4281_bool = var_4157_int == (int)11;
					if(var_4281_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_10");
						goto Label_8569;
					}
					var_4284_bool = var_4157_int == (int)12;
					if(var_4284_bool == 0) goto Label_8569;
					UnlockAchievement("ACHIEVEMENT_CLARA_11");

				}
			Label_8492:
				goto Label_8569;
			}
		Label_8409:
			goto Label_8569;
		}
	Label_8569:
		SendWorldWndMessage((int)101);
		SetVariable("c_iWM_RealDayChange", var_4157_int);
	}
	return 6;
	
}


func_87(var_586_bool, var_587_object, var_588_string)
{
	var_589_bool = 0; var_590_bool = 0;
	var_593_bool = IsFuncExist(var_587_object, "HasProperty", (int)2);
	var_594_bool = var_593_bool == 0; //@nz
	if(var_594_bool != 0) {
		var_586_bool = 0;
		return 2;
	}
	@@var_587_object:HasProperty(var_588_string, var_590_bool);
	var_590_bool = var_586_bool;
	return 2;
}


func_10327(var_5753_int, var_5754_float)
{
	var_5755_int = 0; var_5756_int = 0; var_5757_int = 0; var_5758_float = 0;
	var_5754_float = var_5758_float;
	func_12495(var_5755_int, (int)515433, (int)515432, var_5758_float);
	var_5755_int = var_5753_int;
	return 0;
}


func_1116(var_792_bool, var_793_int, var_794_int)
{
	var_795_int = 0; var_796_int = 0;
	func_12520((int)0);
	var_797_int = var_796_int;
	var_802_bool = var_796_int == (int)1;
	if(var_802_bool != 0) {
		var_803_bool = 0;
		var_803_bool = 0;
		var_805_bool = var_793_int == (int)0;
		if(var_805_bool != 0) {
			var_807_bool = var_794_int < (int)21;
			if(var_807_bool != 0) {
				var_803_bool = 1;
			}
		}
		if(var_803_bool != 0) {
			var_792_bool = 1;
			return 2;
		}
	} else {
		var_809_bool = var_796_int == (int)2;
		if(var_809_bool == 0) goto Label_1145;
		var_811_bool = var_793_int == (int)5;
		if(var_811_bool == 0) goto Label_1145;
		var_792_bool = 1;
		return 2;
	}
Label_1145:
	var_792_bool = 0;
	return 2;
	
}


func_14430(var_4915_int)
{
	var_4916_int = 0; var_4917_int = 0;
	var_4919_int = "vol_" + var_4915_int;
	GetVariable(var_4919_int, var_4917_int);
	var_4921_int = "vol_" + var_4915_int;
	var_4923_int = var_4917_int | (int)8;
	SetVariable(var_4921_int, var_4923_int);
	return 2;
}


func_10336(var_5395_int, var_5396_float)
{
	var_5397_int = 0; var_5398_int = 0; var_5399_int = 0; var_5400_float = 0;
	var_5396_float = var_5400_float;
	func_12495(var_5397_int, (int)522206, (int)522205, var_5400_float);
	var_5397_int = var_5395_int;
	return 0;
}


func_12385(var_5651_bool)
{
	var_5654_int = 0; var_5655_string = "";
	func_138(var_5654_int, "d6ViktorVisit");
	var_5657_bool = var_5654_int == (int)1;
	if(var_5657_bool != 0) {
		var_5651_bool = 1;
		return 0;
	}
	var_5651_bool = 0;
	return 0;
}


func_99(var_4826_bool, var_4827_object, var_4828_string, var_4829_float, var_4830_float, var_4831_float)
{
	var_4832_float = 0; var_4833_float = 0;
	var_4834_bool = 0; var_4835_object = Obj(); var_4836_string = "";
	var_4827_object = var_4835_object;
	var_4828_string = var_4836_string;
	func_87(var_4834_bool, var_4835_object, var_4836_string);
	var_4837_bool = var_4834_bool == 0; //@nz
	if(var_4837_bool != 0) {
		var_4826_bool = 0;
		return 2;
	}
	@@var_4827_object:GetProperty(var_4828_string, var_4833_float);
	var_4838_float = 0; var_4839_float = 0; var_4840_float = 0; var_4841_float = 0;
	var_4839_float = var_4833_float + var_4829_float;
	var_4830_float = var_4840_float;
	var_4831_float = var_4841_float;
	func_121(var_4838_float, var_4839_float, var_4840_float, var_4841_float);
	@@var_4827_object:SetProperty(var_4828_string, var_4838_float);
	var_4826_bool = 1;
	return 2;
}


func_10345(var_5489_int, var_5490_float)
{
	var_5491_int = 0; var_5492_int = 0; var_5493_int = 0; var_5494_float = 0;
	var_5490_float = var_5494_float;
	func_12495(var_5491_int, (int)515439, (int)515438, var_5494_float);
	var_5491_int = var_5489_int;
	return 0;
}


func_14442()
{
	var_4891_object = Obj(); var_4892_int = 0; var_4893_int = 0; var_4894_int = 0; var_4895_object = Obj(); var_4896_int = 0; var_4897_int = 0; var_4898_int = 0;
	CreateIntVector(var_4895_object);
	var_4899_object = Obj(); var_4900_bool = 0; var_4901_int = 0;
	var_4895_object = var_4899_object;
	func_14397(var_4899_object, (bool)0, (int)-1);
	@@var_4895_object:size(var_4896_int);
	var_4897_int = 0;
	
Label_14454:
	var_4914_bool = var_4897_int < var_4896_int;
	if(var_4914_bool != 0) {
		@@var_4895_object:get(var_4898_int, var_4897_int);
		var_4915_int = 0;
		var_4898_int = var_4915_int;
		func_14430(var_4915_int);
		var_4897_int = var_4897_int + (int)1;
		goto Label_14454;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_12397(var_5745_bool)
{
	var_5748_int = 0; var_5749_string = "";
	func_138(var_5748_int, "d7AglajaVisit");
	var_5751_bool = var_5748_int == (int)1;
	if(var_5751_bool != 0) {
		var_5745_bool = 1;
		return 0;
	}
	var_5745_bool = 0;
	return 0;
}


func_10354(var_5737_int, var_5738_float)
{
	var_5739_int = 0; var_5740_int = 0; var_5741_int = 0; var_5742_float = 0;
	var_5738_float = var_5742_float;
	func_12495(var_5739_int, (int)515431, (int)515430, var_5742_float);
	var_5739_int = var_5737_int;
	return 0;
}


func_4216(var_3429_int, var_3430_int, var_3431_int)
{
	var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0; var_3439_int = 0;
	var_3440_bool = 0;
	var_3440_bool = 0;
	var_3442_bool = var_3431_int > (int)8;
	if(var_3442_bool != 0) {
		var_3444_bool = var_3431_int < (int)21;
		if(var_3444_bool != 0) {
			var_3440_bool = 1;
		}
	}
	if(var_3440_bool != 0) {
		var_3445_int = 0; var_3446_string = ""; var_3447_string = ""; var_3448_int = 0;
		var_3429_int = var_3445_int;
		func_509(var_3445_int, "pers_rat", "rat.xml", (int)4);
		var_3449_int = 0; var_3450_string = ""; var_3451_string = ""; var_3452_int = 0;
		var_3429_int = var_3449_int;
		func_509(var_3449_int, "pers_alkash", "alkash.xml", (int)2);
		var_3453_int = 0; var_3454_string = ""; var_3455_string = ""; var_3456_int = 0;
		var_3429_int = var_3453_int;
		func_509(var_3453_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3458_float = 0; var_3459_int = 0;
		var_3430_int = var_3459_int;
		func_1171(var_3458_float, var_3459_int);
		var_3436_int = (int)2 * var_3458_float;
		var_3460_int = var_3436_int;
		if(var_3460_int != 0) {
			var_3461_int = 0; var_3462_string = ""; var_3463_string = ""; var_3464_int = 0;
			var_3429_int = var_3461_int;
			var_3436_int = var_3464_int;
			func_509(var_3461_int, "pers_grabitel", "grabitel.xml", var_3464_int);
		}
		var_3466_int = var_3430_int + (int)1;
		var_3468_bool = var_3466_int >= (int)2;
		if(var_3468_bool != 0) {
			var_3469_int = 0; var_3470_string = ""; var_3471_string = ""; var_3472_int = 0;
			var_3429_int = var_3469_int;
			func_509(var_3469_int, "pers_patrool", "patrol.xml", (int)2);
			var_3473_bool = 0; var_3474_int = 0;
			var_3430_int = var_3474_int;
			func_1378(var_3473_bool, var_3474_int);
			if(var_3473_bool != 0) {
				var_3475_int = 0; var_3476_string = ""; var_3477_string = ""; var_3478_int = 0;
				var_3429_int = var_3475_int;
				func_509(var_3475_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3480_float = 0; var_3481_int = 0;
		var_3430_int = var_3481_int;
		func_1261(var_3480_float, var_3481_int);
		var_3437_int = (int)1 * var_3480_float;
		var_3482_int = var_3437_int;
		if(var_3482_int != 0) {
			var_3483_int = 0; var_3484_string = ""; var_3485_string = ""; var_3486_int = 0;
			var_3429_int = var_3483_int;
			var_3437_int = var_3486_int;
			func_509(var_3483_int, "pers_bomber", "bomber.xml", var_3486_int);
		}
	} else {
		var_3493_int = 0; var_3494_string = ""; var_3495_string = ""; var_3496_int = 0;
		var_3429_int = var_3493_int;
		func_509(var_3493_int, "pers_rat", "rat.xml", (int)8);
		var_3497_int = 0; var_3498_string = ""; var_3499_string = ""; var_3500_int = 0;
		var_3429_int = var_3497_int;
		func_509(var_3497_int, "pers_alkash", "alkash.xml", (int)1);
		var_3501_int = 0; var_3502_string = ""; var_3503_string = ""; var_3504_int = 0;
		var_3429_int = var_3501_int;
		func_509(var_3501_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3506_float = 0; var_3507_int = 0;
		var_3430_int = var_3507_int;
		func_1171(var_3506_float, var_3507_int);
		var_3438_int = (int)3 * var_3506_float;
		var_3508_int = var_3438_int;
		if(var_3508_int != 0) {
			var_3509_int = 0; var_3510_string = ""; var_3511_string = ""; var_3512_int = 0;
			var_3429_int = var_3509_int;
			var_3438_int = var_3512_int;
			func_509(var_3509_int, "pers_grabitel", "grabitel.xml", var_3512_int);
		}
		var_3514_int = var_3430_int + (int)1;
		var_3516_bool = var_3514_int >= (int)2;
		if(var_3516_bool != 0) {
			var_3517_int = 0; var_3518_string = ""; var_3519_string = ""; var_3520_int = 0;
			var_3429_int = var_3517_int;
			func_509(var_3517_int, "pers_patrool", "patrol.xml", (int)1);
			var_3521_bool = 0; var_3522_int = 0;
			var_3430_int = var_3522_int;
			func_1378(var_3521_bool, var_3522_int);
			if(var_3521_bool != 0) {
				var_3523_int = 0; var_3524_string = ""; var_3525_string = ""; var_3526_int = 0;
				var_3429_int = var_3523_int;
				func_509(var_3523_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3528_float = 0; var_3529_int = 0;
		var_3430_int = var_3529_int;
		func_1261(var_3528_float, var_3529_int);
		var_3439_int = (int)1 * var_3528_float;
		var_3530_int = var_3439_int;
		if(var_3530_int == 0) goto Label_4378;
		var_3531_int = 0; var_3532_string = ""; var_3533_string = ""; var_3534_int = 0;
		var_3429_int = var_3531_int;
		var_3439_int = var_3534_int;
		func_509(var_3531_int, "pers_bomber", "bomber.xml", var_3534_int);
	}
Label_4378:
	var_3487_bool = 0; var_3488_int = 0;
	var_3430_int = var_3488_int;
	func_1378(var_3487_bool, var_3488_int);
	if(var_3487_bool != 0) {
		var_3489_int = 0; var_3490_string = ""; var_3491_string = ""; var_3492_int = 0;
		var_3429_int = var_3489_int;
		func_509(var_3489_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	return 8;
	
}


func_12409(var_5497_bool)
{
	var_5500_int = 0; var_5501_string = "";
	func_138(var_5500_int, "d11AglajaVisit");
	var_5503_bool = var_5500_int == (int)1;
	if(var_5503_bool != 0) {
		var_5497_bool = 1;
		return 0;
	}
	var_5497_bool = 0;
	return 0;
}


func_121(var_4838_float, var_4839_float, var_4840_float, var_4841_float)
{
	var_4842_bool = var_4839_float < var_4840_float;
	if(var_4842_bool != 0) {
		var_4840_float = var_4838_float;
		return 0;
	}
	var_4843_bool = var_4839_float > var_4841_float;
	if(var_4843_bool != 0) {
		var_4841_float = var_4838_float;
		return 0;
	}
	var_4839_float = var_4838_float;
	return 0;
}


func_10363(var_4988_int, var_4989_float)
{
	var_4990_int = 0; var_4991_int = 0; var_4992_int = 0; var_4993_float = 0;
	var_4989_float = var_4993_float;
	func_12495(var_4990_int, (int)536365, (int)536364, var_4993_float);
	var_4990_int = var_4988_int;
	return 0;
}


func_1147(var_769_float, var_770_int)
{
	var_772_int = var_770_int + (int)1;
	var_774_bool = var_772_int == (int)7;
	if(var_774_bool != 0) {
		var_769_float = 2;
		return 0;
	}
	var_776_int = var_770_int + (int)1;
	var_778_bool = var_776_int == (int)8;
	if(var_778_bool != 0) {
		var_769_float = 0;
		return 0;
	}
	var_780_int = var_770_int + (int)1;
	var_782_bool = var_780_int == (int)1;
	if(var_782_bool != 0) {
		var_769_float = 0;
		return 0;
	}
	var_769_float = 1;
	return 0;
}


func_7292(var_314_object)
{
	@@var_314_object:add("lc_house3_05_i2");
	@@var_314_object:add("lc_house3_05");
	@@var_314_object:add("lc_house3_06_i2");
	@@var_314_object:add("lc_house3_06");
	@@var_314_object:add("lc_House6_06");
	@@var_314_object:add("lc_house3_04_i2");
	@@var_314_object:add("lc_house3_04");
	@@var_314_object:add("house3_plus_03_i2");
	return 0;
}


func_5244(var_1297_int, var_1298_int, var_1299_object, var_1300_object, var_1301_object, var_1302_object)
{
	var_1304_bool = var_1298_int == (int)0;
	if(var_1304_bool != 0) {
		var_1305_int = 0; var_1306_bool = 0;
		func_802((int)4, (bool)0);
		var_1307_int = 0; var_1308_bool = 0; var_1309_int = 0;
		func_819((int)4, (bool)0, (int)1);
		var_1310_int = 0; var_1311_int = 0; var_1312_object = Obj(); var_1313_object = Obj(); var_1314_object = Obj();
		var_1310_int = 4;
		var_1297_int = var_1311_int;
		var_1299_object = var_1312_object;
		var_1300_object = var_1313_object;
		var_1301_object = var_1314_object;
		func_628(var_1311_int, var_1312_object, var_1313_object, var_1314_object);
		var_1315_object = Obj(); var_1316_int = 0;
		var_1302_object = var_1315_object;
		func_311(var_1315_object, (int)0);
		var_1317_int = 0; var_1318_bool = 0; var_1319_int = 0;
		func_876((int)4, (bool)0, (int)4);
		var_1320_int = 0; var_1321_bool = 0; var_1322_int = 0;
		func_938((int)4, (bool)0, (int)4);
	}
	var_1323_int = 0; var_1324_int = 0;
	var_1298_int = var_1324_int;
	func_1026((int)4, var_1324_int);
	var_1337_int = 0; var_1338_int = 0; var_1339_int = 0;
	var_1297_int = var_1338_int;
	var_1298_int = var_1339_int;
	func_1903((int)4, var_1338_int, var_1339_int);
	return 0;
}


func_6271(var_227_object)
{
	@@var_227_object:add("r4_house_2_02");
	@@var_227_object:add("r4_house3_03_i2");
	@@var_227_object:add("r4_house3_03");
	@@var_227_object:add("r4_house4_02_i2");
	@@var_227_object:add("r4_house4_02");
	@@var_227_object:add("r4_house4_01_i2");
	@@var_227_object:add("r4_house4_01");
	@@var_227_object:add("r4_house3_02_i2");
	@@var_227_object:add("r4_house3_02");
	@@var_227_object:add("r4_house_2_01");
	@@var_227_object:add("r4_house3_01_i2");
	@@var_227_object:add("r4_house3_01");
	@@var_227_object:add("r4_house7_01");
	@@var_227_object:add("r4_House6_01");
	@@var_227_object:add("r4_house_2_03");
	@@var_227_object:add("r4_House6_03");
	@@var_227_object:add("r4_house_2_04");
	return 0;
}


func_11394()
{
	var_6222_object = Obj(); var_6223_object = Obj(); var_6224_object = Obj(); var_6225_object = Obj();
	func_12503(Obj());
	var_6226_object = var_6224_object;
	@@var_6224_object:FindMark(var_6225_object, "d5q01AlexandrGotoKaterina");
	var_6228_object = var_6225_object;
	if(var_6228_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01BigVladGotoAlexandr");
	var_6230_object = var_6225_object;
	if(var_6230_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01BigVladGotoLara");
	var_6232_object = var_6225_object;
	if(var_6232_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01BurahMeeting");
	var_6234_object = var_6225_object;
	if(var_6234_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01GrifWantsMoney");
	var_6236_object = var_6225_object;
	if(var_6236_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01PatrolGotoGrif");
	var_6238_object = var_6225_object;
	if(var_6238_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01RubinGotoBigVlad");
	var_6240_object = var_6225_object;
	if(var_6240_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q01RubinGotoBigVladSelf");
	var_6242_object = var_6225_object;
	if(var_6242_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q02AnnaGotoGorbun");
	var_6244_object = var_6225_object;
	if(var_6244_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q02AnnaGotoGorbunSelf");
	var_6246_object = var_6225_object;
	if(var_6246_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q02AnnaGotoKabak");
	var_6248_object = var_6225_object;
	if(var_6248_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q02GorbunFindTheDaughter");
	var_6250_object = var_6225_object;
	if(var_6250_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q02NudeMeeting");
	var_6252_object = var_6225_object;
	if(var_6252_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q03BirdmaskBringMoneySelf");
	var_6254_object = var_6225_object;
	if(var_6254_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q03BirdmaskGotoMladVlad");
	var_6256_object = var_6225_object;
	if(var_6256_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q03BirdmaskGotoViktor");
	var_6258_object = var_6225_object;
	if(var_6258_object != 0) {
		@@var_6225_object:Remove();
	}
	@@var_6224_object:FindMark(var_6225_object, "d5q03SavePrisoners");
	var_6260_object = var_6225_object;
	if(var_6260_object != 0) {
		@@var_6225_object:Remove();
	}
	var_6261_bool = 0; var_6262_int = 0;
	func_12478(var_6261_bool, (int)139);
	var_6263_bool = 0; var_6264_int = 0;
	func_12478(var_6263_bool, (int)148);
	var_6265_bool = 0; var_6266_int = 0;
	func_12478(var_6265_bool, (int)154);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_14467()
{
	func_14442();
	return 0;
}


func_132(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateObjectVector(var_43_object);
	var_43_object = var_41_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_12421(var_5195_bool)
{
	var_5195_bool = 0;
	return 0;
}


func_10372(var_5160_int, var_5161_float)
{
	var_5162_int = 0; var_5163_int = 0; var_5164_int = 0; var_5165_float = 0;
	var_5161_float = var_5165_float;
	func_12495(var_5162_int, (int)522208, (int)522207, var_5165_float);
	var_5162_int = var_5160_int;
	return 0;
}


func_14471()
{
	return 0;
}


func_14472(var_144_bool, var_145_int, var_146_int)
{
	var_148_bool = var_145_int == (int)6;
	if(var_148_bool != 0) {
		var_144_bool = 0;
		return 0;
	}
	var_150_bool = var_146_int == (int)4;
	if(var_150_bool != 0) {
		var_152_bool = var_145_int == (int)15;
		if(var_152_bool != 0) {
			var_144_bool = 0;
			return 0;
		}
		var_154_bool = var_145_int == (int)9;
		if(var_154_bool != 0) {
			var_144_bool = 0;
			return 0;
		}
	} else {
		var_156_bool = var_146_int == (int)5;
		if(var_156_bool != 0) {
			var_158_bool = var_145_int == (int)15;
			if(var_158_bool != 0) {
				var_144_bool = 0;
				return 0;
			}
			goto Label_14509;
		}
		var_160_bool = var_146_int == (int)6;
		if(var_160_bool == 0) goto Label_14509;
		var_162_bool = var_145_int == (int)15;
		if(var_162_bool == 0) goto Label_14509;
		var_144_bool = 0;
		return 0;
	}
Label_14509:
	var_144_bool = 1;
	return 0;
	
}


func_12424()
{
	var_4755_object = Obj(); var_4756_object = Obj();
	CreateDiaryEntry(var_4756_object, (int)30, (int)0, (int)504079);
	var_4760_bool = 0; var_4761_object = Obj(); var_4762_int = 0;
	var_4756_object = var_4761_object;
	func_12450(var_4760_bool, var_4761_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_138(var_4665_int, var_4666_string)
{
	var_4667_int = 0; var_4668_int = 0;
	GetVariable(var_4666_string, var_4668_int);
	var_4668_int = var_4665_int;
	return 2;
}


func_10381(var_5018_int, var_5019_float)
{
	var_5020_int = 0; var_5021_int = 0; var_5022_int = 0; var_5023_float = 0;
	var_5019_float = var_5023_float;
	func_12495(var_5020_int, (int)538406, (int)538405, var_5023_float);
	var_5020_int = var_5018_int;
	return 0;
}


func_143(var_4823_object, var_4824_string)
{
	var_4825_object = Obj(); var_4826_object = Obj(); var_4827_object = Obj(); var_4828_object = Obj();
	GetMainOutdoorScene(var_4827_object);
	var_4830_int = var_4824_string + ".bin";
	AddBlankActor(var_4828_object, var_4827_object, var_4824_string, var_4830_int);
	var_4828_object = var_4823_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1171(var_3278_float, var_3279_int)
{
	var_3281_int = var_3279_int + (int)1;
	var_3283_bool = var_3281_int == (int)1;
	if(var_3283_bool != 0) {
		var_3278_float = 0;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3285_int = var_3279_int + (int)1;
	var_3287_bool = var_3285_int == (int)2;
	if(var_3287_bool != 0) {
		var_3278_float = 0;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3289_int = var_3279_int + (int)1;
	var_3291_bool = var_3289_int == (int)3;
	if(var_3291_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3293_int = var_3279_int + (int)1;
	var_3295_bool = var_3293_int == (int)4;
	if(var_3295_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3297_int = var_3279_int + (int)1;
	var_3299_bool = var_3297_int == (int)5;
	if(var_3299_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3301_int = var_3279_int + (int)1;
	var_3303_bool = var_3301_int == (int)6;
	if(var_3303_bool != 0) {
		var_3278_float = 2;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3305_int = var_3279_int + (int)1;
	var_3307_bool = var_3305_int == (int)7;
	if(var_3307_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3309_int = var_3279_int + (int)1;
	var_3311_bool = var_3309_int == (int)8;
	if(var_3311_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3313_int = var_3279_int + (int)1;
	var_3315_bool = var_3313_int == (int)9;
	if(var_3315_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3317_int = var_3279_int + (int)1;
	var_3319_bool = var_3317_int == (int)10;
	if(var_3319_bool != 0) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	var_3321_int = var_3279_int + (int)1;
	var_3323_bool = var_3321_int == (int)11;
	if(var_3323_bool != 0) {
		var_3278_float = 1;
		return 0;
	}
	var_3278_float = 0;
	return 0;
}


func_12437(var_4769_object)
{
	var_4770_object = Obj(); var_4771_object = Obj();
	GetDiaryRoot(var_4771_object);
	var_4772_bool = var_4771_object == 0; //@nz
	if(var_4772_bool != 0) {
		Trace("Can't retrieve diary root");
		var_4769_object = 0;
		return 2;
	}
	var_4771_object = var_4769_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10390(var_5325_int, var_5326_float)
{
	var_5327_int = 0; var_5328_int = 0; var_5329_int = 0; var_5330_float = 0;
	var_5326_float = var_5330_float;
	func_12495(var_5327_int, (int)533323, (int)533322, var_5330_float);
	var_5327_int = var_5325_int;
	return 0;
}


func_7318(var_1948_int, var_1949_int, var_1950_object, var_1951_object, var_1952_object, var_1953_object)
{
	var_1955_bool = var_1949_int == (int)0;
	if(var_1955_bool != 0) {
		var_1956_int = 0; var_1957_bool = 0;
		func_802((int)15, (bool)0);
		var_1958_int = 0; var_1959_bool = 0; var_1960_int = 0;
		func_819((int)15, (bool)0, (int)1);
		var_1961_int = 0; var_1962_int = 0; var_1963_object = Obj(); var_1964_object = Obj(); var_1965_object = Obj();
		var_1961_int = 15;
		var_1948_int = var_1962_int;
		var_1950_object = var_1963_object;
		var_1951_object = var_1964_object;
		var_1952_object = var_1965_object;
		func_628(var_1962_int, var_1963_object, var_1964_object, var_1965_object);
		var_1966_object = Obj(); var_1967_int = 0;
		var_1953_object = var_1966_object;
		func_311(var_1966_object, (int)0);
		var_1968_int = 0; var_1969_bool = 0; var_1970_int = 0;
		func_876((int)15, (bool)0, (int)5);
		var_1971_int = 0; var_1972_bool = 0; var_1973_int = 0;
		func_938((int)15, (bool)0, (int)5);
	}
	var_1974_int = 0; var_1975_int = 0;
	var_1949_int = var_1975_int;
	func_1093((int)15, var_1975_int);
	var_1976_int = 0; var_1977_int = 0; var_1978_int = 0;
	var_1948_int = var_1977_int;
	var_1949_int = var_1978_int;
	func_1382((int)15, var_1977_int, var_1978_int);
	return 0;
}


func_154(var_6068_object, var_6069_string)
{
	var_6070_object = Obj(); var_6071_object = Obj(); var_6072_object = Obj(); var_6073_object = Obj();
	GetMainOutdoorScene(var_6072_object);
	var_6075_int = var_6069_string + ".xml";
	AddBlankActorFromXml(var_6073_object, var_6072_object, var_6069_string, var_6075_int);
	var_6073_object = var_6068_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10399(var_4935_int, var_4936_float)
{
	var_4937_int = 0; var_4938_int = 0; var_4939_int = 0; var_4940_float = 0;
	var_4936_float = var_4940_float;
	func_12495(var_4937_int, (int)538721, (int)538720, var_4940_float);
	var_4937_int = var_4935_int;
	return 0;
}


func_12450(var_4760_bool, var_4761_object, var_4762_int)
{
	var_4763_object = Obj(); var_4764_object = Obj(); var_4765_int = 0; var_4766_object = Obj(); var_4767_object = Obj(); var_4768_int = 0;
	func_12437(Obj());
	var_4769_object = var_4766_object;
	@@var_4766_object:Find(var_4762_int, var_4767_object);
	var_4774_bool = var_4767_object == 0; //@nz
	if(var_4774_bool != 0) {
		var_4776_int = "Can't find diary parent with id: " + var_4762_int;
		Trace(var_4776_int);
		var_4760_bool = 0;
		return 6;
	}
	@@var_4767_object:AddChild(var_4761_object);
	SendWorldWndMessage((int)7);
	@@var_4761_object:GetCategory(var_4768_int);
	SetDiarySection(var_4768_int);
	var_4760_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2212(var_751_int, var_752_int, var_753_int)
{
	var_754_int = 0; var_755_int = 0;
	var_757_int = var_752_int + (int)1;
	var_759_bool = var_757_int == (int)12;
	if(var_759_bool != 0) {
		return 2;
	}
	var_760_bool = 0;
	var_760_bool = 0;
	var_761_bool = 0;
	var_761_bool = 1;
	var_763_bool = var_753_int < (int)7;
	if(var_763_bool != 1) {
		var_765_bool = var_753_int > (int)21;
		if(var_765_bool != 1) {
			var_761_bool = 0;
		}
	}
	if(var_761_bool != 0) {
		var_767_bool = var_752_int != (int)0;
		if(var_767_bool != 0) {
			var_760_bool = 1;
		}
	}
	if(var_760_bool != 0) {
		var_769_float = 0; var_770_int = 0;
		var_752_int = var_770_int;
		func_1147(var_769_float, var_770_int);
		var_755_int = (int)1 * var_769_float;
		var_783_int = var_755_int;
		if(var_783_int != 0) {
			var_784_int = 0; var_785_string = ""; var_786_string = ""; var_787_int = 0;
			var_751_int = var_784_int;
			var_755_int = var_787_int;
			func_509(var_784_int, "pers_grabitel", "grabitel.xml", var_787_int);
		}
	}
	var_792_bool = 0; var_793_int = 0; var_794_int = 0;
	var_752_int = var_793_int;
	var_753_int = var_794_int;
	func_1116(var_792_bool, var_793_int, var_794_int);
	if(var_792_bool != 0) {
		var_812_int = 0; var_813_string = ""; var_814_string = ""; var_815_int = 0;
		var_751_int = var_812_int;
		func_509(var_812_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_816_int = 0; var_817_string = ""; var_818_string = ""; var_819_int = 0;
		var_751_int = var_816_int;
		func_509(var_816_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_820_int = 0; var_821_string = ""; var_822_string = ""; var_823_int = 0;
		var_751_int = var_820_int;
		func_509(var_820_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_824_int = 0; var_825_string = ""; var_826_string = ""; var_827_int = 0;
		var_751_int = var_824_int;
		func_509(var_824_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_828_int = 0; var_829_string = ""; var_830_string = ""; var_831_int = 0;
		var_751_int = var_828_int;
		func_509(var_828_int, "pers_boy", "boy.xml", (int)1);
		var_832_int = 0; var_833_string = ""; var_834_string = ""; var_835_int = 0;
		var_751_int = var_832_int;
		func_509(var_832_int, "pers_alkash", "alkash.xml", (int)1);
		var_836_int = 0; var_837_string = ""; var_838_string = ""; var_839_int = 0;
		var_751_int = var_836_int;
		func_509(var_836_int, "pers_girl", "girl.xml", (int)1);
		var_840_int = 0; var_841_string = ""; var_842_string = ""; var_843_int = 0;
		var_751_int = var_840_int;
		func_509(var_840_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_844_bool = 0;
		var_844_bool = 0;
		var_846_bool = var_753_int > (int)8;
		if(var_846_bool != 0) {
			var_848_bool = var_753_int < (int)21;
			if(var_848_bool != 0) {
				var_844_bool = 1;
			}
		}
		if(var_844_bool != 0) {
			var_849_int = 0; var_850_string = ""; var_851_string = ""; var_852_int = 0;
			var_751_int = var_849_int;
			func_509(var_849_int, "pers_boy", "boy.xml", (int)1);
			var_853_int = 0; var_854_string = ""; var_855_string = ""; var_856_int = 0;
			var_751_int = var_853_int;
			func_509(var_853_int, "pers_alkash", "alkash.xml", (int)1);
			var_857_int = 0; var_858_string = ""; var_859_string = ""; var_860_int = 0;
			var_751_int = var_857_int;
			func_509(var_857_int, "pers_girl", "girl.xml", (int)1);
			var_861_int = 0; var_862_string = ""; var_863_string = ""; var_864_int = 0;
			var_751_int = var_861_int;
			func_509(var_861_int, "pers_girl", "girl2.xml", (int)1);
			var_865_int = 0; var_866_string = ""; var_867_string = ""; var_868_int = 0;
			var_751_int = var_865_int;
			func_509(var_865_int, "pers_worker", "worker.xml", (int)2);
			var_869_int = 0; var_870_string = ""; var_871_string = ""; var_872_int = 0;
			var_751_int = var_869_int;
			func_509(var_869_int, "pers_worker", "worker2.xml", (int)2);
			goto Label_2388;
		}
		var_873_int = 0; var_874_string = ""; var_875_string = ""; var_876_int = 0;
		var_751_int = var_873_int;
		func_509(var_873_int, "pers_alkash", "alkash.xml", (int)1);
		var_877_int = 0; var_878_string = ""; var_879_string = ""; var_880_int = 0;
		var_751_int = var_877_int;
		func_509(var_877_int, "pers_worker", "worker.xml", (int)1);
		var_881_int = 0; var_882_string = ""; var_883_string = ""; var_884_int = 0;
		var_751_int = var_881_int;
		func_509(var_881_int, "pers_worker", "worker2.xml", (int)1);
	}
Label_2388:
	return 2;
	
}


func_165(var_330_object, var_331_object, var_332_string, var_333_string, var_334_string)
{
	var_336_bool = 0; var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_object = Obj(); var_340_bool = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_object = Obj();
	@@var_331_object:GetLocator(var_332_string, var_340_bool, var_341_cvector, var_342_cvector);
	var_344_bool = var_340_bool == 0; //@nz
	if(var_344_bool != 0) {
		var_346_int = "Locator " + var_332_string;
		var_348_int = var_346_int + " doesn't exist";
		Trace(var_348_int);
	} else {
		@@var_331_object:AddStationaryActor(Obj(), var_341_cvector, var_342_cvector, var_333_string, var_334_string);
	}
	var_343_object = var_330_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_9382(var_1989_int, var_1990_int, var_1991_int)
{
	var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj(); var_1999_object = Obj();
	var_2000_object = GlobalVars[8];
	@@var_2000_object:get(var_1996_object, var_1989_int);
	var_2001_object = GlobalVars[9];
	@@var_2001_object:get(var_1997_object, var_1989_int);
	var_2002_object = GlobalVars[10];
	@@var_2002_object:get(var_1998_object, var_1989_int);
	var_2003_object = GlobalVars[13];
	@@var_2003_object:get(var_1999_object, var_1989_int);
	var_2005_bool = var_1989_int == (int)0;
	if(var_2005_bool != 0) {
		var_2006_int = 0; var_2007_int = 0; var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj(); var_2011_object = Obj();
		var_1990_int = var_2006_int;
		var_1991_int = var_2007_int;
		var_1996_object = var_2008_object;
		var_1997_object = var_2009_object;
		var_1998_object = var_2010_object;
		var_1999_object = var_2011_object;
		func_4445(var_2006_int, var_2007_int, var_2008_object, var_2009_object, var_2010_object, var_2011_object);
	} else {
		var_2275_bool = var_1989_int == (int)1;
		if(var_2275_bool != 0) {
			var_2276_int = 0; var_2277_int = 0; var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj(); var_2281_object = Obj();
			var_1990_int = var_2276_int;
			var_1991_int = var_2277_int;
			var_1996_object = var_2278_object;
			var_1997_object = var_2279_object;
			var_1998_object = var_2280_object;
			var_1999_object = var_2281_object;
			func_4642(var_2276_int, var_2277_int, var_2278_object, var_2279_object, var_2280_object, var_2281_object);
			goto Label_9602;
		}
		var_2407_bool = var_1989_int == (int)2;
		if(var_2407_bool != 0) {
			var_2408_int = 0; var_2409_int = 0; var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj(); var_2413_object = Obj();
			var_1990_int = var_2408_int;
			var_1991_int = var_2409_int;
			var_1996_object = var_2410_object;
			var_1997_object = var_2411_object;
			var_1998_object = var_2412_object;
			var_1999_object = var_2413_object;
			func_4848(var_2408_int, var_2409_int, var_2410_object, var_2411_object, var_2412_object, var_2413_object);
			goto Label_9602;
		}
		var_2553_bool = var_1989_int == (int)3;
		if(var_2553_bool != 0) {
			var_2554_int = 0; var_2555_int = 0; var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj(); var_2559_object = Obj();
			var_1990_int = var_2554_int;
			var_1991_int = var_2555_int;
			var_1996_object = var_2556_object;
			var_1997_object = var_2557_object;
			var_1998_object = var_2558_object;
			var_1999_object = var_2559_object;
			func_5078(var_2554_int, var_2555_int, var_2556_object, var_2557_object, var_2558_object, var_2559_object);
			goto Label_9602;
		}
		var_2586_bool = var_1989_int == (int)4;
		if(var_2586_bool != 0) {
			var_2587_int = 0; var_2588_int = 0; var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj(); var_2592_object = Obj();
			var_1990_int = var_2587_int;
			var_1991_int = var_2588_int;
			var_1996_object = var_2589_object;
			var_1997_object = var_2590_object;
			var_1998_object = var_2591_object;
			var_1999_object = var_2592_object;
			func_5296(var_2587_int, var_2588_int, var_2589_object, var_2590_object, var_2591_object, var_2592_object);
			goto Label_9602;
		}
		var_2619_bool = var_1989_int == (int)5;
		if(var_2619_bool != 0) {
			var_2620_int = 0; var_2621_int = 0; var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj(); var_2625_object = Obj();
			var_1990_int = var_2620_int;
			var_1991_int = var_2621_int;
			var_1996_object = var_2622_object;
			var_1997_object = var_2623_object;
			var_1998_object = var_2624_object;
			var_1999_object = var_2625_object;
			func_5541(var_2620_int, var_2621_int, var_2622_object, var_2623_object, var_2624_object, var_2625_object);
			goto Label_9602;
		}
		var_2652_bool = var_1989_int == (int)6;
		if(var_2652_bool != 0) {
			var_2653_int = 0; var_2654_int = 0; var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj(); var_2658_object = Obj();
			var_1990_int = var_2653_int;
			var_1991_int = var_2654_int;
			var_1996_object = var_2655_object;
			var_1997_object = var_2656_object;
			var_1998_object = var_2657_object;
			var_1999_object = var_2658_object;
			func_5654();
			goto Label_9602;
		}
		var_2662_bool = var_1989_int == (int)7;
		if(var_2662_bool != 0) {
			var_2663_int = 0; var_2664_int = 0; var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj(); var_2668_object = Obj();
			var_1990_int = var_2663_int;
			var_1991_int = var_2664_int;
			var_1996_object = var_2665_object;
			var_1997_object = var_2666_object;
			var_1998_object = var_2667_object;
			var_1999_object = var_2668_object;
			func_5764(var_2663_int, var_2664_int, var_2665_object, var_2666_object, var_2667_object, var_2668_object);
			goto Label_9602;
		}
		var_2801_bool = var_1989_int == (int)8;
		if(var_2801_bool != 0) {
			var_2802_int = 0; var_2803_int = 0; var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj(); var_2807_object = Obj();
			var_1990_int = var_2802_int;
			var_1991_int = var_2803_int;
			var_1996_object = var_2804_object;
			var_1997_object = var_2805_object;
			var_1998_object = var_2806_object;
			var_1999_object = var_2807_object;
			func_5964(var_2802_int, var_2803_int, var_2804_object, var_2805_object, var_2806_object, var_2807_object);
			goto Label_9602;
		}
		var_2834_bool = var_1989_int == (int)9;
		if(var_2834_bool != 0) {
			var_2835_int = 0; var_2836_int = 0; var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj(); var_2840_object = Obj();
			var_1990_int = var_2835_int;
			var_1991_int = var_2836_int;
			var_1996_object = var_2837_object;
			var_1997_object = var_2838_object;
			var_1998_object = var_2839_object;
			var_1999_object = var_2840_object;
			func_6167(var_2835_int, var_2836_int, var_2837_object, var_2838_object, var_2839_object, var_2840_object);
			goto Label_9602;
		}
		var_2867_bool = var_1989_int == (int)10;
		if(var_2867_bool != 0) {
			var_2868_int = 0; var_2869_int = 0; var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj(); var_2873_object = Obj();
			var_1990_int = var_2868_int;
			var_1991_int = var_2869_int;
			var_1996_object = var_2870_object;
			var_1997_object = var_2871_object;
			var_1998_object = var_2872_object;
			var_1999_object = var_2873_object;
			func_6376(var_2868_int, var_2869_int, var_2870_object, var_2871_object, var_2872_object, var_2873_object);
			goto Label_9602;
		}
		var_2900_bool = var_1989_int == (int)11;
		if(var_2900_bool != 0) {
			var_2901_int = 0; var_2902_int = 0; var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj(); var_2906_object = Obj();
			var_1990_int = var_2901_int;
			var_1991_int = var_2902_int;
			var_1996_object = var_2903_object;
			var_1997_object = var_2904_object;
			var_1998_object = var_2905_object;
			var_1999_object = var_2906_object;
			func_6588(var_2901_int, var_2902_int, var_2903_object, var_2904_object, var_2905_object, var_2906_object);
			goto Label_9602;
		}
		var_2933_bool = var_1989_int == (int)12;
		if(var_2933_bool != 0) {
			var_2934_int = 0; var_2935_int = 0; var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj(); var_2939_object = Obj();
			var_1990_int = var_2934_int;
			var_1991_int = var_2935_int;
			var_1996_object = var_2936_object;
			var_1997_object = var_2937_object;
			var_1998_object = var_2938_object;
			var_1999_object = var_2939_object;
			func_6785(var_2934_int, var_2935_int, var_2936_object, var_2937_object, var_2938_object, var_2939_object);
			goto Label_9602;
		}
		var_2966_bool = var_1989_int == (int)13;
		if(var_2966_bool != 0) {
			var_2967_int = 0; var_2968_int = 0; var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj(); var_2972_object = Obj();
			var_1990_int = var_2967_int;
			var_1991_int = var_2968_int;
			var_1996_object = var_2969_object;
			var_1997_object = var_2970_object;
			var_1998_object = var_2971_object;
			var_1999_object = var_2972_object;
			func_6988(var_2967_int, var_2968_int, var_2969_object, var_2970_object, var_2971_object, var_2972_object);
			goto Label_9602;
		}
		var_2999_bool = var_1989_int == (int)14;
		if(var_2999_bool != 0) {
			var_3000_int = 0; var_3001_int = 0; var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj(); var_3005_object = Obj();
			var_1990_int = var_3000_int;
			var_1991_int = var_3001_int;
			var_1996_object = var_3002_object;
			var_1997_object = var_3003_object;
			var_1998_object = var_3004_object;
			var_1999_object = var_3005_object;
			func_7188(var_3000_int, var_3001_int, var_3002_object, var_3003_object, var_3004_object, var_3005_object);
			goto Label_9602;
		}
		var_3138_bool = var_1989_int == (int)15;
		if(var_3138_bool == 0) goto Label_9602;
		var_3139_int = 0; var_3140_int = 0; var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj(); var_3144_object = Obj();
		var_1990_int = var_3139_int;
		var_1991_int = var_3140_int;
		var_1996_object = var_3141_object;
		var_1997_object = var_3142_object;
		var_1998_object = var_3143_object;
		var_1999_object = var_3144_object;
		func_7370(var_3139_int, var_3140_int, var_3141_object, var_3142_object, var_3143_object, var_3144_object);
	}
Label_9602:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_10408(var_4972_int, var_4973_float)
{
	var_4974_int = 0; var_4975_int = 0; var_4976_int = 0; var_4977_float = 0;
	var_4973_float = var_4977_float;
	func_12495(var_4974_int, (int)536369, (int)536368, var_4977_float);
	var_4974_int = var_4972_int;
	return 0;
}


func_14511(var_4627_int, var_4628_int)
{
	var_4630_object = Obj(); var_4631_object = Obj(); var_4632_object = Obj(); var_4633_object = Obj();
	var_4635_int = "Updating game " + var_4627_int;
	var_4637_int = var_4635_int + " ";
	var_4638_int = var_4637_int + var_4628_int;
	Trace(var_4638_int);
	var_4639_bool = 0;
	var_4639_bool = 0;
	var_4641_bool = var_4627_int == (int)5;
	if(var_4641_bool != 0) {
		var_4643_bool = var_4628_int == (int)0;
		if(var_4643_bool != 0) {
			var_4639_bool = 1;
		}
	}
	if(var_4639_bool != 0) {
		FindActor(var_4632_object, "house7_03@door1");
		@@var_4632_object:SetProperty("lp", (bool)1);
		FindActor(var_4632_object, "house7_03@door2");
		@@var_4632_object:SetProperty("lp", (bool)1);
		var_4632_object = 0;
	} else {
		var_4650_bool = 0;
		var_4650_bool = 0;
		var_4652_bool = var_4627_int == (int)7;
		if(var_4652_bool != 0) {
			var_4654_bool = var_4628_int == (int)0;
			if(var_4654_bool != 0) {
				var_4650_bool = 1;
			}
		}
		if(var_4650_bool == 0) goto Label_14562;
		GetSceneByName(var_4633_object, "sobor");
		Trigger(var_4633_object, "aglaja");
		var_4633_object = 0;
	}
Label_14562:
	return 4;
	
}


func_5296(var_2587_int, var_2588_int, var_2589_object, var_2590_object, var_2591_object, var_2592_object)
{
	var_2594_bool = var_2588_int == (int)0;
	if(var_2594_bool != 0) {
		var_2595_int = 0; var_2596_bool = 0;
		func_802((int)4, (bool)1);
		var_2597_int = 0; var_2598_bool = 0; var_2599_int = 0;
		func_819((int)4, (bool)1, (int)1);
		var_2600_int = 0; var_2601_int = 0; var_2602_object = Obj(); var_2603_object = Obj(); var_2604_object = Obj();
		var_2587_int = var_2601_int;
		var_2589_object = var_2602_object;
		var_2590_object = var_2603_object;
		var_2591_object = var_2604_object;
		func_647((int)4, var_2601_int, var_2602_object, var_2603_object, var_2604_object);
		var_2605_object = Obj(); var_2606_int = 0;
		var_2592_object = var_2605_object;
		func_311(var_2605_object, (int)1);
		var_2607_int = 0; var_2608_bool = 0; var_2609_int = 0;
		func_876((int)4, (bool)1, (int)4);
		var_2610_int = 0; var_2611_bool = 0; var_2612_int = 0;
		func_938((int)4, (bool)0, (int)4);
	}
	var_2613_int = 0; var_2614_bool = 0;
	func_785((int)4, (bool)0);
	var_2615_int = 0; var_2616_int = 0; var_2617_int = 0;
	var_2587_int = var_2616_int;
	var_2588_int = var_2617_int;
	func_2950((int)4, var_2616_int, var_2617_int);
	return 0;
}


func_10417(var_5168_int, var_5169_float)
{
	var_5170_int = 0; var_5171_int = 0; var_5172_int = 0; var_5173_float = 0;
	var_5169_float = var_5173_float;
	func_12495(var_5170_int, (int)522210, (int)522209, var_5173_float);
	var_5170_int = var_5168_int;
	return 0;
}


func_6324(var_1638_int, var_1639_int, var_1640_object, var_1641_object, var_1642_object, var_1643_object)
{
	var_1645_bool = var_1639_int == (int)0;
	if(var_1645_bool != 0) {
		var_1646_int = 0; var_1647_bool = 0;
		func_802((int)10, (bool)0);
		var_1648_int = 0; var_1649_bool = 0; var_1650_int = 0;
		func_819((int)10, (bool)0, (int)1);
		var_1651_int = 0; var_1652_int = 0; var_1653_object = Obj(); var_1654_object = Obj(); var_1655_object = Obj();
		var_1651_int = 10;
		var_1638_int = var_1652_int;
		var_1640_object = var_1653_object;
		var_1641_object = var_1654_object;
		var_1642_object = var_1655_object;
		func_628(var_1652_int, var_1653_object, var_1654_object, var_1655_object);
		var_1656_object = Obj(); var_1657_int = 0;
		var_1643_object = var_1656_object;
		func_311(var_1656_object, (int)0);
		var_1658_int = 0; var_1659_bool = 0; var_1660_int = 0;
		func_876((int)10, (bool)0, (int)7);
		var_1661_int = 0; var_1662_bool = 0; var_1663_int = 0;
		func_938((int)10, (bool)0, (int)7);
	}
	var_1664_int = 0; var_1665_int = 0;
	var_1639_int = var_1665_int;
	func_989((int)10, var_1665_int);
	var_1666_int = 0; var_1667_int = 0; var_1668_int = 0;
	var_1638_int = var_1667_int;
	var_1639_int = var_1668_int;
	func_1630((int)10, var_1667_int, var_1668_int);
	return 0;
}


func_183(var_4735_string, var_4736_bool)
{
	var_4737_object = Obj(); var_4738_object = Obj();
	FindActor(var_4738_object, var_4735_string);
	var_4739_bool = var_4738_object == 0; //@nz
	if(var_4739_bool != 0) {
		var_4741_int = "Door " + var_4735_string;
		var_4743_int = var_4741_int + " not found";
		Trace(var_4743_int);
	} else {
		@@var_4738_object:SetProperty("locked", var_4736_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_10426(var_4782_int, var_4783_float)
{
	var_4784_int = 0; var_4785_int = 0; var_4786_int = 0; var_4787_float = 0;
	var_4783_float = var_4787_float;
	func_12495(var_4784_int, (int)536371, (int)536370, var_4787_float);
	var_4784_int = var_4782_int;
	return 0;
}


func_12478(var_5526_bool, var_5527_int)
{
	var_5528_object = Obj(); var_5529_object = Obj(); var_5530_object = Obj(); var_5531_object = Obj();
	func_12437(Obj());
	var_5532_object = var_5530_object;
	@@var_5530_object:Find(var_5527_int, var_5531_object);
	var_5537_bool = var_5531_object == 0; //@nz
	if(var_5537_bool != 0) {
		var_5526_bool = 0;
		return 4;
	}
	@@var_5531_object:Remove();
	var_5526_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10435(var_5481_int, var_5482_float)
{
	var_5483_int = 0; var_5484_int = 0; var_5485_int = 0; var_5486_float = 0;
	var_5482_float = var_5486_float;
	func_12495(var_5483_int, (int)533585, (int)533584, var_5486_float);
	var_5483_int = var_5481_int;
	return 0;
}


func_200(var_4815_bool, var_4816_object, var_4817_float)
{
	var_4818_bool = var_4816_object == 0; //@nz
	if(var_4818_bool != 0) {
		var_4815_bool = 0;
		return 0;
	}
	var_4820_bool = var_4817_float > (int)0;
	if(var_4820_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_4845_bool = var_4817_float < (int)0;
		if(var_4845_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_221;
		}
		var_4815_bool = 0;
		return 0;
	}
Label_221:
	var_4822_float = 0;
	var_4817_float = var_4822_float;
	func_235(var_4822_float);
	var_4826_bool = 0; var_4827_object = Obj(); var_4828_string = ""; var_4829_float = 0; var_4830_float = 0; var_4831_float = 0;
	var_4816_object = var_4827_object;
	var_4817_float = var_4829_float;
	func_99(var_4826_bool, var_4827_object, "reputation", var_4829_float, (float)0, (float)1);
	var_4815_bool = 1;
	return 0;
	
}


func_7370(var_3139_int, var_3140_int, var_3141_object, var_3142_object, var_3143_object, var_3144_object)
{
	var_3146_bool = var_3140_int == (int)0;
	if(var_3146_bool != 0) {
		var_3147_int = 0; var_3148_bool = 0;
		func_802((int)15, (bool)1);
		var_3149_int = 0; var_3150_bool = 0; var_3151_int = 0;
		func_819((int)15, (bool)1, (int)1);
		var_3152_int = 0; var_3153_int = 0; var_3154_object = Obj(); var_3155_object = Obj(); var_3156_object = Obj();
		var_3139_int = var_3153_int;
		var_3141_object = var_3154_object;
		var_3142_object = var_3155_object;
		var_3143_object = var_3156_object;
		func_647((int)15, var_3153_int, var_3154_object, var_3155_object, var_3156_object);
		var_3157_object = Obj(); var_3158_int = 0;
		var_3144_object = var_3157_object;
		func_311(var_3157_object, (int)1);
		var_3159_int = 0; var_3160_bool = 0; var_3161_int = 0;
		func_876((int)15, (bool)1, (int)5);
		var_3162_int = 0; var_3163_bool = 0; var_3164_int = 0;
		func_938((int)15, (bool)0, (int)5);
	}
	var_3165_int = 0; var_3166_bool = 0;
	func_785((int)15, (bool)0);
	var_3167_int = 0; var_3168_int = 0; var_3169_int = 0;
	var_3139_int = var_3168_int;
	var_3140_int = var_3169_int;
	func_2590((int)15, var_3168_int, var_3169_int);
	return 0;
}


func_10444(var_5152_int, var_5153_float)
{
	var_5154_int = 0; var_5155_int = 0; var_5156_int = 0; var_5157_float = 0;
	var_5153_float = var_5157_float;
	func_12495(var_5154_int, (int)536367, (int)536366, var_5157_float);
	var_5154_int = var_5152_int;
	return 0;
}


func_12495(var_4816_int, var_4817_int, var_4818_int, var_4819_float)
{
	var_4820_int = 0; var_4821_int = 0;
	AddMessage(var_4817_int, var_4818_int, var_4819_float, var_4821_int);
	SendWorldWndMessage((int)6);
	var_4821_int = var_4816_int;
	return 2;
}


func_10453(var_4705_int, var_4706_float)
{
	var_4707_int = 0; var_4708_int = 0; var_4709_int = 0; var_4710_float = 0;
	var_4706_float = var_4710_float;
	func_12495(var_4707_int, (int)538734, (int)538733, var_4710_float);
	var_4707_int = var_4705_int;
	return 0;
}


func_12503(var_4691_object)
{
	var_4692_object = Obj(); var_4693_object = Obj(); var_4694_object = Obj(); var_4695_object = Obj();
	GetMainOutdoorScene(var_4694_object);
	var_4696_bool = var_4694_object == 0; //@ne
	if(var_4696_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_4695_object = 0;
		var_4695_object = var_4691_object;
		return 4;
	}
	@@var_4694_object:GetMap(var_4695_object);
	var_4695_object = var_4691_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10462()
{
	var_4812_string = ""; var_4813_bool = 0;
	func_183("termitnik2@door1", (bool)1);
	return 0;
}


func_14563(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0;
	Trace("Disease update");
	var_30_int = 0;
	var_38_bool = var_23_int == (int)0;
	if(var_38_bool != 0) {
		var_30_int = 0;
	} else {
					var_184_bool = var_23_int == (int)1;
					if(var_184_bool != 0) {
						var_30_int = 0;
						goto Label_14627;
					}
					var_186_bool = var_23_int == (int)2;
					if(var_186_bool != 0) {
						var_30_int = 1;
						goto Label_14627;
					}
					var_188_bool = var_23_int == (int)3;
					if(var_188_bool != 0) {
						var_30_int = 2;
						goto Label_14627;
					}
					var_190_bool = var_23_int == (int)4;
					if(var_190_bool != 0) {
						var_30_int = 3;
						goto Label_14627;
					}
					var_192_bool = var_23_int == (int)5;
					if(var_192_bool != 0) {
						var_30_int = 4;
						goto Label_14627;
					}
					var_194_bool = var_23_int == (int)6;
					if(var_194_bool != 0) {
						var_30_int = 5;
						goto Label_14627;
					}
					var_196_bool = var_23_int == (int)7;
					if(var_196_bool != 0) {
						var_30_int = 5;
						goto Label_14627;
					}
					var_198_bool = var_23_int == (int)8;
					if(var_198_bool != 0) {
						var_30_int = 6;
						goto Label_14627;
					}
					var_200_bool = var_23_int == (int)9;
					if(var_200_bool != 0) {
						var_30_int = 6;
						goto Label_14627;
					}
					var_202_bool = var_23_int == (int)10;
					if(var_202_bool != 0) {
						var_30_int = 7;
						goto Label_14627;
					}
					var_204_bool = var_23_int == (int)11;
					if(var_204_bool == 0) goto Label_14627;
					var_30_int = 8;
	}
Label_14627:
	var_40_int = var_23_int + (int)1;
	var_42_bool = var_40_int != (int)12;
	if(var_42_bool != 0) {
		var_44_int = "Diseased regions : " + var_30_int;
		Trace(var_44_int);

	Label_14637:
		var_46_bool = (int)0 < (int)16;
		if(var_46_bool != 0) {
			var_47_bool = 0; var_48_int = 0;
			var_31_int = var_48_int;
			func_436(var_47_bool, var_48_int);
			if(var_47_bool != 0) {
				var_59_int = 0;
				var_31_int = var_59_int;
				func_478(var_59_int);
			} else {
				var_72_bool = 0; var_73_int = 0;
				var_31_int = var_73_int;
				func_466(var_72_bool, var_73_int);
				if(var_72_bool != 0) {
					var_81_int = 0;
					var_31_int = var_81_int;
					func_418(var_81_int);
		}
				var_94_bool = var_23_int == (int)2;
				if(var_94_bool != 0) {
					Trace("Special diseased region: 5");
					var_96_int = 0;
					func_448((int)5);
				} else {
					var_169_bool = var_23_int == (int)3;
					if(var_169_bool == 0) goto Label_14690;
					Trace("Special diseased region: 3");
					var_171_int = 0;
					func_448((int)3);
					Trace("Special diseased region: 13");
					var_173_int = 0;
					func_448((int)13);
	}

			Label_14710:
				var_175_bool = (int)0 < (int)16;
				if(var_175_bool == 0) goto Label_14734;
				var_176_bool = 0;
				var_176_bool = 1;
				var_177_bool = 0; var_178_int = 0;
				var_35_int = var_178_int;
				func_436(var_177_bool, var_178_int);
				if(var_177_bool != 1) {
					var_179_bool = 0; var_180_int = 0;
					var_35_int = var_180_int;
					func_466(var_179_bool, var_180_int);
					if(var_179_bool != 1) {
						var_176_bool = 0;
					}
				}
				if(var_176_bool != 0) {
					var_181_int = 0;
					var_35_int = var_181_int;
					func_418(var_181_int);
				}
				var_35_int = var_35_int + (int)1;
				goto Label_14710;

			}
		Label_14690:
			func_349((int)0);
			var_108_int = var_32_int;
			var_119_bool = var_32_int < var_30_int;
			if(var_119_bool != 0) {
				var_33_int = var_30_int - var_32_int;
				var_34_int = 0;

			Label_14698:
				var_120_bool = var_34_int < var_33_int;
				if(var_120_bool != 0) {
					var_121_int = 0;
					var_121_int = var_23_int + (int)1;
					func_367(var_121_int);
					var_34_int = var_34_int + (int)1;
					goto Label_14698;
				}
			}
		} else {
		var_31_int = var_31_int + (int)1;
		goto Label_14637;
		}
	Label_14734:
		return 12;
	}
}


func_5348(var_3713_int, var_3714_int, var_3715_object, var_3716_object, var_3717_object, var_3718_object)
{
	var_3720_bool = var_3714_int == (int)0;
	if(var_3720_bool != 0) {
		var_3721_int = 0; var_3722_bool = 0;
		func_802((int)4, (bool)0);
		var_3723_int = 0; var_3724_bool = 0; var_3725_int = 0;
		func_819((int)4, (bool)0, (int)1);
		var_3726_int = 0; var_3727_int = 0; var_3728_object = Obj(); var_3729_object = Obj(); var_3730_object = Obj();
		var_3713_int = var_3727_int;
		var_3715_object = var_3728_object;
		var_3716_object = var_3729_object;
		var_3717_object = var_3730_object;
		func_726((int)4, var_3727_int, var_3728_object, var_3729_object, var_3730_object);
		var_3731_object = Obj(); var_3732_int = 0;
		var_3718_object = var_3731_object;
		func_311(var_3731_object, (int)2);
		var_3733_int = 0; var_3734_bool = 0; var_3735_int = 0;
		func_876((int)4, (bool)0, (int)4);
		var_3736_int = 0; var_3737_bool = 0; var_3738_int = 0;
		func_938((int)4, (bool)1, (int)4);
	}
	var_3739_int = 0; var_3740_bool = 0;
	func_785((int)4, (bool)0);
	var_3741_int = 0; var_3742_int = 0; var_3743_int = 0;
	var_3713_int = var_3742_int;
	var_3714_int = var_3743_int;
	func_3853((int)4, var_3742_int, var_3743_int);
	return 0;
}


func_10469()
{
	var_4794_string = ""; var_4795_bool = 0;
	func_183("house_vlad@door2", (bool)1);
	return 0;
}


func_12520(var_797_int)
{
	var_798_int = 0; var_799_int = 0;
	GetVariable("branch", var_799_int);
	var_799_int = var_797_int;
	return 2;
}


func_6376(var_2868_int, var_2869_int, var_2870_object, var_2871_object, var_2872_object, var_2873_object)
{
	var_2875_bool = var_2869_int == (int)0;
	if(var_2875_bool != 0) {
		var_2876_int = 0; var_2877_bool = 0;
		func_802((int)10, (bool)1);
		var_2878_int = 0; var_2879_bool = 0; var_2880_int = 0;
		func_819((int)10, (bool)1, (int)1);
		var_2881_int = 0; var_2882_int = 0; var_2883_object = Obj(); var_2884_object = Obj(); var_2885_object = Obj();
		var_2868_int = var_2882_int;
		var_2870_object = var_2883_object;
		var_2871_object = var_2884_object;
		var_2872_object = var_2885_object;
		func_647((int)10, var_2882_int, var_2883_object, var_2884_object, var_2885_object);
		var_2886_object = Obj(); var_2887_int = 0;
		var_2873_object = var_2886_object;
		func_311(var_2886_object, (int)1);
		var_2888_int = 0; var_2889_bool = 0; var_2890_int = 0;
		func_876((int)10, (bool)1, (int)7);
		var_2891_int = 0; var_2892_bool = 0; var_2893_int = 0;
		func_938((int)10, (bool)0, (int)7);
	}
	var_2894_int = 0; var_2895_bool = 0;
	func_785((int)10, (bool)0);
	var_2896_int = 0; var_2897_int = 0; var_2898_int = 0;
	var_2868_int = var_2897_int;
	var_2869_int = var_2898_int;
	func_2770((int)10, var_2897_int, var_2898_int);
	return 0;
}


func_235(var_4822_float)
{
	var_4823_object = Obj(); var_4824_object = Obj();
	CreateFloatVector(var_4824_object);
	@@var_4824_object:add(var_4822_float);
	SendWorldWndMessage((int)16, var_4824_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10476()
{
	var_5585_string = ""; var_5586_bool = 0;
	func_183("warehouse_rubin@door1", (bool)0);
	return 0;
}


func_1261(var_2158_float, var_2159_int)
{
	var_2161_int = var_2159_int + (int)1;
	var_2163_bool = var_2161_int == (int)1;
	if(var_2163_bool != 0) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2165_int = var_2159_int + (int)1;
	var_2167_bool = var_2165_int == (int)2;
	if(var_2167_bool != 0) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2169_int = var_2159_int + (int)1;
	var_2171_bool = var_2169_int == (int)3;
	if(var_2171_bool != 0) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2173_int = var_2159_int + (int)1;
	var_2175_bool = var_2173_int == (int)4;
	if(var_2175_bool != 0) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2177_int = var_2159_int + (int)1;
	var_2179_bool = var_2177_int == (int)5;
	if(var_2179_bool != 0) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2181_int = var_2159_int + (int)1;
	var_2183_bool = var_2181_int == (int)6;
	if(var_2183_bool != 0) {
		var_2158_float = 2;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2185_int = var_2159_int + (int)1;
	var_2187_bool = var_2185_int == (int)7;
	if(var_2187_bool != 0) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2189_int = var_2159_int + (int)1;
	var_2191_bool = var_2189_int == (int)8;
	if(var_2191_bool != 0) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2193_int = var_2159_int + (int)1;
	var_2195_bool = var_2193_int == (int)9;
	if(var_2195_bool != 0) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2197_int = var_2159_int + (int)1;
	var_2199_bool = var_2197_int == (int)10;
	if(var_2199_bool != 0) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	var_2201_int = var_2159_int + (int)1;
	var_2203_bool = var_2201_int == (int)11;
	if(var_2203_bool != 0) {
		var_2158_float = 1;
		return 0;
	}
	var_2158_float = 0;
	return 0;
}


func_12526(var_4135_bool, var_4136_int)
{
	var_4138_int = 0; var_4139_int = 0; var_4140_int = 0; var_4141_int = 0; var_4142_int = 0; var_4143_int = 0; var_4144_int = 0; var_4145_int = 0;
	var_4146_bool = 0;
	var_4146_bool = 0;
	var_4148_bool = var_4136_int > (int)42000;
	if(var_4148_bool != 0) {
		var_4150_bool = var_4136_int < (int)42288;
		if(var_4150_bool != 0) {
			var_4146_bool = 1;
		}
	}
	if(var_4146_bool != 0) {
		var_4152_int = var_4136_int - (int)42000;
		var_4142_int = var_4152_int / (int)24;
		var_4155_int = var_4136_int - (int)42000;
		var_4143_int = var_4155_int % (int)24;
		var_4157_int = 0; var_4158_int = 0;
		var_4157_int = var_4142_int + (int)1;
		var_4143_int = var_4158_int;
		func_8278(var_4157_int, var_4158_int);
		var_4135_bool = 1;
		return 8;
	}
	var_4294_bool = 0;
	var_4294_bool = 0;
	var_4296_bool = var_4136_int > (int)40000;
	if(var_4296_bool != 0) {
		var_4298_bool = var_4136_int < (int)40288;
		if(var_4298_bool != 0) {
			var_4294_bool = 1;
		}
	}
	if(var_4294_bool != 0) {
		var_4300_int = var_4136_int - (int)40000;
		var_4144_int = var_4300_int / (int)24;
		var_4303_int = var_4136_int - (int)40000;
		var_4145_int = var_4303_int % (int)24;
		var_4305_int = 0; var_4306_int = 0;
		var_4305_int = var_4144_int + (int)1;
		var_4145_int = var_4306_int;
		func_8576(var_4305_int, var_4306_int);
		var_4627_int = 0; var_4628_int = 0;
		var_4627_int = var_4144_int + (int)1;
		var_4145_int = var_4628_int;
		func_14511(var_4627_int, var_4628_int);
		var_4135_bool = 1;
		return 8;
	}
	var_4135_bool = 0;
	return 8;
}


func_3310(var_2304_int, var_2305_int, var_2306_int)
{
	var_2307_int = 0; var_2308_int = 0; var_2309_int = 0; var_2310_int = 0;
	var_2311_bool = 0;
	var_2311_bool = 0;
	var_2313_bool = var_2306_int > (int)8;
	if(var_2313_bool != 0) {
		var_2315_bool = var_2306_int < (int)21;
		if(var_2315_bool != 0) {
			var_2311_bool = 1;
		}
	}
	if(var_2311_bool != 0) {
		var_2316_int = 0; var_2317_string = ""; var_2318_string = ""; var_2319_int = 0;
		var_2304_int = var_2316_int;
		func_509(var_2316_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)7);
		var_2320_int = 0; var_2321_string = ""; var_2322_string = ""; var_2323_int = 0;
		var_2304_int = var_2320_int;
		func_509(var_2320_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)7);
		var_2324_int = 0; var_2325_string = ""; var_2326_string = ""; var_2327_int = 0;
		var_2304_int = var_2324_int;
		func_509(var_2324_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2328_int = 0; var_2329_string = ""; var_2330_string = ""; var_2331_int = 0;
		var_2304_int = var_2328_int;
		func_535(var_2328_int, "fog", "fog.xml", (int)7);
		var_2333_bool = var_2305_int >= (int)5;
		if(var_2333_bool != 0) {
			var_2334_int = 0; var_2335_string = ""; var_2336_string = ""; var_2337_int = 0;
			var_2304_int = var_2334_int;
			func_535(var_2334_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_2339_float = 0; var_2340_int = 0;
		var_2305_int = var_2340_int;
		func_1261(var_2339_float, var_2340_int);
		var_2309_int = (int)2 * var_2339_float;
		var_2341_int = var_2309_int;
		if(var_2341_int != 0) {
			var_2342_int = 0; var_2343_string = ""; var_2344_string = ""; var_2345_int = 0;
			var_2304_int = var_2342_int;
			var_2309_int = var_2345_int;
			func_509(var_2342_int, "pers_bomber", "bomber.xml", var_2345_int);
		}
	} else {
		var_2376_int = 0; var_2377_string = ""; var_2378_string = ""; var_2379_int = 0;
		var_2304_int = var_2376_int;
		func_509(var_2376_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2380_int = 0; var_2381_string = ""; var_2382_string = ""; var_2383_int = 0;
		var_2304_int = var_2380_int;
		func_509(var_2380_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2384_int = 0; var_2385_string = ""; var_2386_string = ""; var_2387_int = 0;
		var_2304_int = var_2384_int;
		func_509(var_2384_int, "pers_rat_big", "rat_big.xml", (int)4);
		var_2388_int = 0; var_2389_string = ""; var_2390_string = ""; var_2391_int = 0;
		var_2304_int = var_2388_int;
		func_535(var_2388_int, "fog", "fog.xml", (int)7);
		var_2393_bool = var_2305_int >= (int)5;
		if(var_2393_bool != 0) {
			var_2394_int = 0; var_2395_string = ""; var_2396_string = ""; var_2397_int = 0;
			var_2304_int = var_2394_int;
			func_535(var_2394_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_2399_float = 0; var_2400_int = 0;
		var_2305_int = var_2400_int;
		func_1261(var_2399_float, var_2400_int);
		var_2310_int = (int)2 * var_2399_float;
		var_2401_int = var_2310_int;
		if(var_2401_int == 0) goto Label_3428;
		var_2402_int = 0; var_2403_string = ""; var_2404_string = ""; var_2405_int = 0;
		var_2304_int = var_2402_int;
		var_2310_int = var_2405_int;
		func_509(var_2402_int, "pers_bomber", "bomber.xml", var_2405_int);
	}
Label_3428:
	var_2346_bool = 0; var_2347_int = 0;
	var_2305_int = var_2347_int;
	func_1378(var_2346_bool, var_2347_int);
	if(var_2346_bool != 0) {
		var_2348_int = 0; var_2349_string = ""; var_2350_string = ""; var_2351_int = 0;
		var_2304_int = var_2348_int;
		func_509(var_2348_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	var_2352_int = 0; var_2353_string = ""; var_2354_string = ""; var_2355_int = 0; var_2356_int = 0; var_2357_int = 0;
	var_2304_int = var_2352_int;
	func_522(var_2352_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2358_int = 0; var_2359_string = ""; var_2360_string = ""; var_2361_int = 0; var_2362_int = 0; var_2363_int = 0;
	var_2304_int = var_2358_int;
	func_522(var_2358_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2364_int = 0; var_2365_string = ""; var_2366_string = ""; var_2367_int = 0; var_2368_int = 0; var_2369_int = 0;
	var_2304_int = var_2364_int;
	func_522(var_2364_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2370_int = 0; var_2371_string = ""; var_2372_string = ""; var_2373_int = 0; var_2374_int = 0; var_2375_int = 0;
	var_2304_int = var_2370_int;
	func_522(var_2370_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_10483()
{
	var_6379_object = Obj(); var_6380_object = Obj();
	func_12503(Obj());
	var_6381_object = var_6380_object;
	var_6386_float = 0;
	func_290(var_6386_float);
	@@var_6380_object:AddMark("d1KaterinaMapMark", "pt_map_katerina", (int)3, (int)508640, var_6386_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_245(var_673_bool, var_674_string, var_675_string)
{
	var_676_object = Obj(); var_677_object = Obj();
	FindActor(var_677_object, var_674_string);
	var_678_bool = var_677_object == 0; //@ne
	if(var_678_bool != 0) {
		var_673_bool = 0;
		return 2;
	}
	Trigger(var_677_object, var_675_string);
	var_673_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7422(var_4273_int, var_4274_int, var_4275_object, var_4276_object, var_4277_object, var_4278_object)
{
	var_4280_bool = var_4274_int == (int)0;
	if(var_4280_bool != 0) {
		var_4281_int = 0; var_4282_bool = 0;
		func_802((int)15, (bool)0);
		var_4283_int = 0; var_4284_bool = 0; var_4285_int = 0;
		func_819((int)15, (bool)0, (int)1);
		var_4286_int = 0; var_4287_int = 0; var_4288_object = Obj(); var_4289_object = Obj(); var_4290_object = Obj();
		var_4273_int = var_4287_int;
		var_4275_object = var_4288_object;
		var_4276_object = var_4289_object;
		var_4277_object = var_4290_object;
		func_726((int)15, var_4287_int, var_4288_object, var_4289_object, var_4290_object);
		var_4291_object = Obj(); var_4292_int = 0;
		var_4278_object = var_4291_object;
		func_311(var_4291_object, (int)2);
		var_4293_int = 0; var_4294_bool = 0; var_4295_int = 0;
		func_876((int)15, (bool)0, (int)5);
		var_4296_int = 0; var_4297_bool = 0; var_4298_int = 0;
		func_938((int)15, (bool)1, (int)5);
	}
	var_4299_int = 0; var_4300_bool = 0;
	func_785((int)15, (bool)0);
	var_4301_int = 0; var_4302_int = 0; var_4303_int = 0;
	var_4273_int = var_4302_int;
	var_4274_int = var_4303_int;
	func_3477((int)15, var_4302_int, var_4303_int);
	return 0;
}


func_257(var_4508_bool, var_4509_string, var_4510_string, var_4511_string)
{
	var_4512_object = Obj(); var_4513_object = Obj();
	FindActor(var_4513_object, var_4509_string);
	var_4514_bool = var_4513_object == 0; //@ne
	if(var_4514_bool != 0) {
		var_4508_bool = 0;
		return 2;
	}
	Trigger(var_4513_object, var_4510_string, var_4511_string);
	var_4508_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10499()
{
	var_5925_object = Obj(); var_5926_object = Obj(); var_5927_object = Obj(); var_5928_object = Obj();
	func_12503(Obj());
	var_5929_object = var_5927_object;
	@@var_5927_object:FindMark(var_5928_object, "d8q01MatGotoToyHouse");
	var_5931_object = var_5928_object;
	if(var_5931_object != 0) {
		@@var_5928_object:Remove();
	}
	@@var_5927_object:FindMark(var_5928_object, "d8q01MatGotoBoiny");
	var_5933_object = var_5928_object;
	if(var_5933_object != 0) {
		@@var_5928_object:Remove();
	}
	@@var_5927_object:FindMark(var_5928_object, "d8q01MladVladGotoMat");
	var_5935_object = var_5928_object;
	if(var_5935_object != 0) {
		@@var_5928_object:Remove();
	}
	@@var_5927_object:FindMark(var_5928_object, "d8q01MladVladgotoOspina");
	var_5937_object = var_5928_object;
	if(var_5937_object != 0) {
		@@var_5928_object:Remove();
	}
	@@var_5927_object:FindMark(var_5928_object, "d8q01OspinaGotoMladVlad");
	var_5939_object = var_5928_object;
	if(var_5939_object != 0) {
		@@var_5928_object:Remove();
	}
	@@var_5927_object:FindMark(var_5928_object, "d8q02GotoKapella");
	var_5941_object = var_5928_object;
	if(var_5941_object != 0) {
		@@var_5928_object:Remove();
	}
	@@var_5927_object:FindMark(var_5928_object, "d8q04MladVladGotoMark");
	var_5943_object = var_5928_object;
	if(var_5943_object != 0) {
		@@var_5928_object:Remove();
	}
	var_5944_bool = 0; var_5945_int = 0;
	func_12478(var_5944_bool, (int)175);
	var_5946_bool = 0; var_5947_int = 0;
	func_12478(var_5946_bool, (int)127);
	var_5948_bool = 0; var_5949_int = 0;
	func_12478(var_5948_bool, (int)124);
	var_5950_bool = 0; var_5951_int = 0;
	func_12478(var_5950_bool, (int)649);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_269(var_600_object)
{
	var_601_int = 0; var_602_int = 0; var_603_object = Obj(); var_604_int = 0; var_605_int = 0; var_606_object = Obj();
	var_607_object = var_600_object;
	if(var_607_object != 0) {
		@@var_600_object:size(var_604_int);
		var_605_int = 0;

	Label_275:
		var_608_bool = var_605_int < var_604_int;
		if(var_608_bool != 0) {
			@@var_600_object:get(var_606_object, var_605_int);
			var_609_object = var_606_object;
			if(var_609_object != 0) {
				@@var_606_object:Remove();
			}
			var_606_object = 0;
			var_605_int = var_605_int + (int)1;
			goto Label_275;
		}
		@@var_600_object:clear();
	}
	return 6;
}


func_11533()
{
	var_6284_object = Obj(); var_6285_object = Obj(); var_6286_object = Obj(); var_6287_object = Obj();
	func_12503(Obj());
	var_6288_object = var_6286_object;
	@@var_6286_object:FindMark(var_6287_object, "d6q01AlexandrGotoJulia");
	var_6290_object = var_6287_object;
	if(var_6290_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01AlexandrGotoKaterina");
	var_6292_object = var_6287_object;
	if(var_6292_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01AlexandrGotoLara");
	var_6294_object = var_6287_object;
	if(var_6294_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01AlexangrGotoJulLaraSelf");
	var_6296_object = var_6287_object;
	if(var_6296_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01BigVladGotoAnna");
	var_6298_object = var_6287_object;
	if(var_6298_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01BigVladGotoAnnaOspinaSelf");
	var_6300_object = var_6287_object;
	if(var_6300_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01BigVladGotoOspina");
	var_6302_object = var_6287_object;
	if(var_6302_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01KaterinaGotoLaska");
	var_6304_object = var_6287_object;
	if(var_6304_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01KaterinagotoLaskaSelf");
	var_6306_object = var_6287_object;
	if(var_6306_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01KillerIsKlara");
	var_6308_object = var_6287_object;
	if(var_6308_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01LaskaGotoAlbinos");
	var_6310_object = var_6287_object;
	if(var_6310_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01ViktorGotoAlexandr");
	var_6312_object = var_6287_object;
	if(var_6312_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01ViktorGotoAlxBigSelf");
	var_6314_object = var_6287_object;
	if(var_6314_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q01ViktorGotoBigVlad");
	var_6316_object = var_6287_object;
	if(var_6316_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q02BigVlad");
	var_6318_object = var_6287_object;
	if(var_6318_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q02KapellaGotoMladVlad");
	var_6320_object = var_6287_object;
	if(var_6320_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q02MladVladGotoBigVlad");
	var_6322_object = var_6287_object;
	if(var_6322_object != 0) {
		@@var_6287_object:Remove();
	}
	@@var_6286_object:FindMark(var_6287_object, "d6q02MladVladGotoBigVladSelf");
	var_6324_object = var_6287_object;
	if(var_6324_object != 0) {
		@@var_6287_object:Remove();
	}
	var_6325_bool = 0; var_6326_int = 0;
	func_12478(var_6325_bool, (int)111);
	var_6327_bool = 0; var_6328_int = 0;
	func_12478(var_6327_bool, (int)102);
	var_6329_bool = 0; var_6330_int = 0;
	func_12478(var_6329_bool, (int)107);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5400(var_145_object)
{
	@@var_145_object:add("dt_house3_14_i2");
	@@var_145_object:add("dt_house3_14");
	@@var_145_object:add("house1_arc_01l");
	@@var_145_object:add("house1_arc_01r");
	@@var_145_object:add("dt_House6_01");
	@@var_145_object:add("dt_house_1_09");
	@@var_145_object:add("house5_24");
	@@var_145_object:add("dt_House6_03");
	@@var_145_object:add("dt_House6_04");
	@@var_145_object:add("dt_house_1_08");
	@@var_145_object:add("house5_unoin_solidl");
	@@var_145_object:add("house5_unoin_solidr");
	@@var_145_object:add("dt_house2_12");
	@@var_145_object:add("dt_house2_11");
	@@var_145_object:add("dt_house2_13");
	@@var_145_object:add("dt_house2_09");
	@@var_145_object:add("dt_house2_08");
	@@var_145_object:add("dt_house2_07");
	@@var_145_object:add("dt_house2_06");
	@@var_145_object:add("house5_01");
	@@var_145_object:add("house5_15");
	@@var_145_object:add("house5_16");
	@@var_145_object:add("house5_17");
	@@var_145_object:add("house5_unoin04l");
	@@var_145_object:add("house5_unoin04r");
	@@var_145_object:add("house5_23");
	@@var_145_object:add("house1_se_05r");
	@@var_145_object:add("house1_se_05l");
	@@var_145_object:add("dt_house2_10");
	return 0;
}


func_6428(var_3998_int, var_3999_int, var_4000_object, var_4001_object, var_4002_object, var_4003_object)
{
	var_4005_bool = var_3999_int == (int)0;
	if(var_4005_bool != 0) {
		var_4006_int = 0; var_4007_bool = 0;
		func_802((int)10, (bool)0);
		var_4008_int = 0; var_4009_bool = 0; var_4010_int = 0;
		func_819((int)10, (bool)0, (int)1);
		var_4011_int = 0; var_4012_int = 0; var_4013_object = Obj(); var_4014_object = Obj(); var_4015_object = Obj();
		var_3998_int = var_4012_int;
		var_4000_object = var_4013_object;
		var_4001_object = var_4014_object;
		var_4002_object = var_4015_object;
		func_726((int)10, var_4012_int, var_4013_object, var_4014_object, var_4015_object);
		var_4016_object = Obj(); var_4017_int = 0;
		var_4003_object = var_4016_object;
		func_311(var_4016_object, (int)2);
		var_4018_int = 0; var_4019_bool = 0; var_4020_int = 0;
		func_876((int)10, (bool)0, (int)7);
		var_4021_int = 0; var_4022_bool = 0; var_4023_int = 0;
		func_938((int)10, (bool)1, (int)7);
	}
	var_4024_int = 0; var_4025_bool = 0;
	func_785((int)10, (bool)0);
	var_4026_int = 0; var_4027_int = 0; var_4028_int = 0;
	var_3998_int = var_4027_int;
	var_3999_int = var_4028_int;
	func_3665((int)10, var_4027_int, var_4028_int);
	return 0;
}


func_290(var_4561_float)
{
	var_4562_float = 0; var_4563_float = 0;
	GetGameTime(var_4563_float);
	var_4563_float = var_4561_float;
	return 2;
}


func_295()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_4391()
{
	return 0;
}


func_4393(var_519_int, var_520_int, var_521_object, var_522_object, var_523_object, var_524_object)
{
	var_526_bool = var_520_int == (int)0;
	if(var_526_bool != 0) {
		var_527_int = 0; var_528_bool = 0;
		func_802((int)0, (bool)0);
		var_529_int = 0; var_530_bool = 0; var_531_int = 0;
		func_819((int)0, (bool)0, (int)1);
		var_567_int = 0; var_568_int = 0; var_569_object = Obj(); var_570_object = Obj(); var_571_object = Obj();
		var_567_int = 0;
		var_519_int = var_568_int;
		var_521_object = var_569_object;
		var_522_object = var_570_object;
		var_523_object = var_571_object;
		func_628(var_568_int, var_569_object, var_570_object, var_571_object);
		var_613_object = Obj(); var_614_int = 0;
		var_524_object = var_613_object;
		func_311(var_613_object, (int)0);
		var_640_int = 0; var_641_bool = 0; var_642_int = 0;
		func_876((int)0, (bool)0, (int)4);
		var_687_int = 0; var_688_bool = 0; var_689_int = 0;
		func_938((int)0, (bool)0, (int)4);
	}
	var_725_int = 0; var_726_int = 0;
	var_520_int = var_726_int;
	func_1056((int)0, var_726_int);
	var_751_int = 0; var_752_int = 0; var_753_int = 0;
	var_519_int = var_752_int;
	var_520_int = var_753_int;
	func_2212((int)0, var_752_int, var_753_int);
	return 0;
}


func_12587()
{
	var_4398_float = 0; var_4399_int = 0; var_4400_float = 0; var_4401_float = 0; var_4402_int = 0; var_4403_float = 0;
	GetGameTime(var_4401_float);
	var_4402_int = 1;
	
Label_12591:
	var_4405_bool = var_4402_int < (int)288;
	if(var_4405_bool != 0) {
		var_4403_float = (float)1.0 * var_4402_int;
		var_4407_bool = var_4403_float < var_4401_float;
		if(var_4407_bool != 0) {
		} else {
			var_4410_int = (int)40000 + var_4402_int;
			SetTimeEvent(var_4410_int, var_4403_float);
			var_4403_float = var_4403_float - (float)0.0033333334140479565;
			var_4412_bool = var_4403_float < var_4401_float;
			if(var_4412_bool != 0) {
				goto Label_12612;
			}
			var_4414_int = (int)42000 + var_4402_int;
			SetTimeEvent(var_4414_int, var_4403_float);
	}
		func_8206();
		func_14471();
		var_4402_int = var_4402_int + (int)1;
		goto Label_12591;
	}
	return 6;
	
}


func_300()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_305(var_447_string, var_448_int)
{
	var_450_int = "Region" + var_448_int;
	var_447_string = var_450_int + "State";
	return 0;
}


func_311(var_613_object, var_614_int)
{
	var_615_int = 0; var_616_string = ""; var_617_int = 0; var_618_string = ""; var_619_string = ""; var_620_object = Obj(); var_621_int = 0; var_622_string = ""; var_623_int = 0; var_624_string = ""; var_625_string = ""; var_626_object = Obj();
	@@var_613_object:size(var_621_int);
	var_628_bool = var_614_int == (int)1;
	if(var_628_bool != 0) {
		var_622_string = "s_";
	} else {
			var_639_bool = var_614_int == (int)2;
			if(var_639_bool == 0) goto Label_323;
			var_622_string = "n_";
	}
Label_323:
	var_623_int = 0;
	
Label_324:
	var_629_bool = var_623_int < var_621_int;
	if(var_629_bool != 0) {
		@@var_613_object:get(var_624_string, var_623_int);
		var_630_int = var_622_string + var_624_string;
		var_625_string = var_630_int + ".isc";
		GetSceneByName(var_626_object, var_624_string);
		var_632_bool = var_626_object == 0; //@nz
		if(var_632_bool != 0) {
			var_634_int = "City manager: can't replace indoor scene \"" + var_624_string;
			var_636_int = var_634_int + "\" because it doesn't exist";
			Trace(var_636_int);
		} else {
			ReplaceScene(var_626_object, var_625_string);
	}
		var_626_object = 0;
		var_623_int = var_623_int + (int)1;
		goto Label_324;
	}
	return 12;
	
}


func_1351(var_1129_bool, var_1130_int, var_1131_int)
{
	var_1129_bool = 0;
	var_1133_bool = var_1130_int >= (int)10;
	if(var_1133_bool != 0) {
		var_1135_bool = var_1131_int < (int)6;
		if(var_1135_bool != 0) {
			var_1129_bool = 1;
		}
	}
	return 0;
}


func_10572()
{
	var_4800_string = ""; var_4801_bool = 0;
	func_183("house1_kabak@door1", (bool)1);
	return 0;
}


func_12622(var_4657_int, var_4658_float)
{
	var_4660_bool = var_4657_int == (int)45268;
	if(var_4660_bool != 0) {
		var_4661_object = Obj(); var_4662_object = Obj();
		var_4663_object = GlobalVars[16];
		var_4663_object = var_4661_object;
		var_4664_object = GlobalVars[16];
		var_4664_object = var_4662_object;
		func_10689();
	}
	var_4676_bool = var_4657_int == (int)45261;
	if(var_4676_bool != 0) {
		var_4677_bool = 0; var_4678_object = Obj();
		var_4679_object = GlobalVars[16];
		var_4679_object = var_4678_object;
		func_12195(var_4678_object);
		var_4684_bool = var_4677_bool == 0; //@nz
		if(var_4684_bool != 0) {
			var_4685_object = Obj(); var_4686_object = Obj();
			var_4687_object = GlobalVars[16];
			var_4687_object = var_4685_object;
			var_4688_object = GlobalVars[16];
			var_4688_object = var_4686_object;
			func_10602();
			var_4705_int = 0; var_4706_float = 0;
			var_4658_float = var_4706_float;
			func_10453(var_4705_int, var_4706_float);
		}
	}
	var_4715_bool = var_4657_int == (int)45230;
	if(var_4715_bool != 0) {
		var_4716_int = 0; var_4717_float = 0;
		var_4658_float = var_4717_float;
		func_10156(var_4716_int, var_4717_float);
	}
	var_4723_bool = var_4657_int == (int)45218;
	if(var_4723_bool != 0) {
		var_4724_bool = 0; var_4725_object = Obj();
		var_4726_object = GlobalVars[16];
		var_4726_object = var_4725_object;
		func_12063(var_4725_object);
		var_4731_bool = var_4724_bool == 0; //@nz
		if(var_4731_bool != 0) {
			var_4732_int = 0; var_4733_float = 0;
			var_4658_float = var_4733_float;
			func_9922(var_4732_int, var_4733_float);
		}
	}
	var_4739_bool = var_4657_int == (int)45269;
	if(var_4739_bool != 0) {
		var_4740_object = Obj(); var_4741_object = Obj();
		var_4742_object = GlobalVars[16];
		var_4742_object = var_4740_object;
		var_4743_object = GlobalVars[16];
		var_4743_object = var_4741_object;
		func_10706();
	}
	var_4753_bool = var_4657_int == (int)45231;
	if(var_4753_bool != 0) {
		var_4754_int = 0; var_4755_float = 0;
		var_4658_float = var_4755_float;
		func_10201(var_4754_int, var_4755_float);
	}
	var_4761_bool = var_4657_int == (int)45227;
	if(var_4761_bool != 0) {
		var_4762_bool = 0; var_4763_object = Obj();
		var_4764_object = GlobalVars[16];
		var_4764_object = var_4763_object;
		func_12147(var_4763_object);
		var_4769_bool = var_4762_bool == 0; //@nz
		if(var_4769_bool != 0) {
			var_4770_object = Obj(); var_4771_object = Obj();
			var_4772_object = GlobalVars[16];
			var_4772_object = var_4770_object;
			var_4773_object = GlobalVars[16];
			var_4773_object = var_4771_object;
			func_10618();
			var_4782_int = 0; var_4783_float = 0;
			var_4658_float = var_4783_float;
			func_10426(var_4782_int, var_4783_float);
		}
	}
	var_4789_bool = var_4657_int == (int)45271;
	if(var_4789_bool != 0) {
		var_4790_object = Obj(); var_4791_object = Obj();
		var_4792_object = GlobalVars[16];
		var_4792_object = var_4790_object;
		var_4793_object = GlobalVars[16];
		var_4793_object = var_4791_object;
		func_10740();
	}
	var_4803_bool = var_4657_int == (int)45282;
	if(var_4803_bool != 0) {
		var_4804_bool = 0; var_4805_object = Obj();
		var_4806_object = GlobalVars[16];
		var_4806_object = var_4805_object;
		func_12207(var_4805_object);
		if(var_4804_bool != 0) {
			var_4811_object = Obj(); var_4812_object = Obj();
			var_4813_object = GlobalVars[16];
			var_4813_object = var_4811_object;
			var_4814_object = GlobalVars[16];
			var_4814_object = var_4812_object;
			func_10776(var_4812_object);
			var_4847_int = 0; var_4848_float = 0;
			var_4658_float = var_4848_float;
			func_10120(var_4847_int, var_4848_float);
		}
	}
	var_4854_bool = var_4657_int == (int)45270;
	if(var_4854_bool != 0) {
		var_4855_object = Obj(); var_4856_object = Obj();
		var_4857_object = GlobalVars[16];
		var_4857_object = var_4855_object;
		var_4858_object = GlobalVars[16];
		var_4858_object = var_4856_object;
		func_10723();
	}
	var_4868_bool = var_4657_int == (int)45229;
	if(var_4868_bool != 0) {
		var_4869_int = 0; var_4870_float = 0;
		var_4658_float = var_4870_float;
		func_10147(var_4869_int, var_4870_float);
	}
	var_4876_bool = var_4657_int == (int)45222;
	if(var_4876_bool != 0) {
		var_4877_bool = 0; var_4878_object = Obj();
		var_4879_object = GlobalVars[16];
		var_4879_object = var_4878_object;
		func_11967(var_4878_object);
		var_4884_bool = var_4877_bool == 0; //@nz
		if(var_4884_bool != 0) {
			var_4885_object = Obj(); var_4886_object = Obj();
			var_4887_object = GlobalVars[16];
			var_4887_object = var_4885_object;
			var_4888_object = GlobalVars[16];
			var_4888_object = var_4886_object;
			func_10797();
		}
	}
	var_4926_bool = var_4657_int == (int)45260;
	if(var_4926_bool != 0) {
		var_4927_bool = 0; var_4928_object = Obj();
		var_4929_object = GlobalVars[16];
		var_4929_object = var_4928_object;
		func_12183(var_4928_object);
		var_4934_bool = var_4927_bool == 0; //@nz
		if(var_4934_bool != 0) {
			var_4935_int = 0; var_4936_float = 0;
			var_4658_float = var_4936_float;
			func_10399(var_4935_int, var_4936_float);
		}
	}
	var_4942_bool = var_4657_int == (int)45226;
	if(var_4942_bool != 0) {
		var_4943_bool = 0;
		var_4943_bool = 0;
		var_4944_bool = 0; var_4945_object = Obj();
		var_4946_object = GlobalVars[16];
		var_4946_object = var_4945_object;
		func_12123(var_4945_object);
		var_4951_bool = var_4944_bool == 0; //@nz
		if(var_4951_bool != 0) {
			var_4952_bool = 0; var_4953_object = Obj();
			var_4954_object = GlobalVars[16];
			var_4954_object = var_4953_object;
			func_12051(var_4953_object);
			var_4959_bool = var_4952_bool == 0; //@nz
			if(var_4959_bool != 0) {
				var_4943_bool = 1;
			}
		}
		if(var_4943_bool != 0) {
			var_4960_object = Obj(); var_4961_object = Obj();
			var_4962_object = GlobalVars[16];
			var_4962_object = var_4960_object;
			var_4963_object = GlobalVars[16];
			var_4963_object = var_4961_object;
			func_10650();
			var_4972_int = 0; var_4973_float = 0;
			var_4658_float = var_4973_float;
			func_10408(var_4972_int, var_4973_float);
		}
	}
	var_4979_bool = var_4657_int == (int)45224;
	if(var_4979_bool != 0) {
		var_4980_bool = 0; var_4981_object = Obj();
		var_4982_object = GlobalVars[16];
		var_4982_object = var_4981_object;
		func_12111(var_4981_object);
		var_4987_bool = var_4980_bool == 0; //@nz
		if(var_4987_bool != 0) {
			var_4988_int = 0; var_4989_float = 0;
			var_4658_float = var_4989_float;
			func_10363(var_4988_int, var_4989_float);
		}
	}
	var_4995_bool = var_4657_int == (int)45221;
	if(var_4995_bool != 0) {
		var_4996_bool = 0; var_4997_object = Obj();
		var_4998_object = GlobalVars[16];
		var_4998_object = var_4997_object;
		func_12325(var_4997_object);
		var_5003_bool = var_4996_bool == 0; //@nz
		if(var_5003_bool != 0) {
			var_5004_int = 0; var_5005_float = 0;
			var_4658_float = var_5005_float;
			func_10021(var_5004_int, var_5005_float);
		}
	}
	var_5011_bool = var_4657_int == (int)45239;
	if(var_5011_bool != 0) {
		var_5012_object = Obj(); var_5013_object = Obj();
		var_5014_object = GlobalVars[16];
		var_5014_object = var_5012_object;
		var_5015_object = GlobalVars[16];
		var_5015_object = var_5013_object;
		func_10666();
		var_5018_int = 0; var_5019_float = 0;
		var_4658_float = var_5019_float;
		func_10381(var_5018_int, var_5019_float);
	}
	var_5025_bool = var_4657_int == (int)45220;
	if(var_5025_bool != 0) {
		var_5026_bool = 0; var_5027_object = Obj();
		var_5028_object = GlobalVars[16];
		var_5028_object = var_5027_object;
		func_12087(var_5027_object);
		var_5033_bool = var_5026_bool == 0; //@nz
		if(var_5033_bool != 0) {
			var_5034_int = 0; var_5035_float = 0;
			var_4658_float = var_5035_float;
			func_10012(var_5034_int, var_5035_float);
		}
	}
	var_5041_bool = var_4657_int == (int)45228;
	if(var_5041_bool != 0) {
		var_5042_bool = 0; var_5043_object = Obj();
		var_5044_object = GlobalVars[16];
		var_5044_object = var_5043_object;
		func_12159(var_5043_object);
		var_5049_bool = var_5042_bool == 0; //@nz
		if(var_5049_bool != 0) {
			var_5050_int = 0; var_5051_float = 0;
			var_4658_float = var_5051_float;
			func_9904(var_5050_int, var_5051_float);
		}
	}
	var_5057_bool = var_4657_int == (int)45219;
	if(var_5057_bool != 0) {
		var_5058_bool = 0; var_5059_object = Obj();
		var_5060_object = GlobalVars[16];
		var_5060_object = var_5059_object;
		func_12075(var_5059_object);
		var_5065_bool = var_5058_bool == 0; //@nz
		if(var_5065_bool != 0) {
			var_5066_object = Obj(); var_5067_object = Obj();
			var_5068_object = GlobalVars[16];
			var_5068_object = var_5066_object;
			var_5069_object = GlobalVars[16];
			var_5069_object = var_5067_object;
			func_10586();
			var_5078_int = 0; var_5079_float = 0;
			var_4658_float = var_5079_float;
			func_9931(var_5078_int, var_5079_float);
		}
	}
	var_5085_bool = var_4657_int == (int)45232;
	if(var_5085_bool != 0) {
		var_5086_bool = 0; var_5087_object = Obj();
		var_5088_object = GlobalVars[16];
		var_5088_object = var_5087_object;
		func_12171(var_5087_object);
		var_5093_bool = var_5086_bool == 0; //@nz
		if(var_5093_bool != 0) {
			var_5094_int = 0; var_5095_float = 0;
			var_4658_float = var_5095_float;
			func_9985(var_5094_int, var_5095_float);
		}
	}
	var_5101_bool = var_4657_int == (int)45267;
	if(var_5101_bool != 0) {
		var_5102_object = Obj(); var_5103_object = Obj();
		var_5104_object = GlobalVars[16];
		var_5104_object = var_5102_object;
		var_5105_object = GlobalVars[16];
		var_5105_object = var_5103_object;
		func_10672();
	}
	var_5115_bool = var_4657_int == (int)45223;
	if(var_5115_bool != 0) {
		var_5116_bool = 0; var_5117_object = Obj();
		var_5118_object = GlobalVars[16];
		var_5118_object = var_5117_object;
		func_12099(var_5117_object);
		var_5123_bool = var_5116_bool == 0; //@nz
		if(var_5123_bool != 0) {
			var_5124_int = 0; var_5125_float = 0;
			var_4658_float = var_5125_float;
			func_10219(var_5124_int, var_5125_float);
		}
	}
	var_5131_bool = var_4657_int == (int)45225;
	if(var_5131_bool != 0) {
		var_5132_bool = 0; var_5133_object = Obj();
		var_5134_object = GlobalVars[16];
		var_5134_object = var_5133_object;
		func_12135(var_5133_object);
		var_5139_bool = var_5132_bool == 0; //@nz
		if(var_5139_bool != 0) {
			var_5140_object = Obj(); var_5141_object = Obj();
			var_5142_object = GlobalVars[16];
			var_5142_object = var_5140_object;
			var_5143_object = GlobalVars[16];
			var_5143_object = var_5141_object;
			func_10634();
			var_5152_int = 0; var_5153_float = 0;
			var_4658_float = var_5153_float;
			func_10444(var_5152_int, var_5153_float);
		}
	}
	var_5159_bool = var_4657_int == (int)45214;
	if(var_5159_bool != 0) {
		var_5160_int = 0; var_5161_float = 0;
		var_4658_float = var_5161_float;
		func_10372(var_5160_int, var_5161_float);
	}
	var_5167_bool = var_4657_int == (int)45215;
	if(var_5167_bool != 0) {
		var_5168_int = 0; var_5169_float = 0;
		var_4658_float = var_5169_float;
		func_10417(var_5168_int, var_5169_float);
	}
	var_5175_bool = var_4657_int == (int)45216;
	if(var_5175_bool != 0) {
		var_5176_int = 0; var_5177_float = 0;
		var_4658_float = var_5177_float;
		func_9913(var_5176_int, var_5177_float);
	}
	var_5183_bool = var_4657_int == (int)45217;
	if(var_5183_bool != 0) {
		var_5184_int = 0; var_5185_float = 0;
		var_4658_float = var_5185_float;
		func_9958(var_5184_int, var_5185_float);
	}
	var_5191_bool = var_4657_int == (int)45174;
	if(var_5191_bool != 0) {
		var_5192_bool = 0; var_5193_object = Obj();
		var_5194_object = GlobalVars[16];
		var_5194_object = var_5193_object;
		func_12219(var_5192_bool, var_5193_object);
		if(var_5192_bool != 0) {
			var_5197_int = 0; var_5198_float = 0;
			var_4658_float = var_5198_float;
			func_9832(var_5197_int, var_5198_float);
		}
	}
	var_5204_bool = var_4657_int == (int)45178;
	if(var_5204_bool != 0) {
		var_5205_bool = 0; var_5206_object = Obj();
		var_5207_object = GlobalVars[16];
		var_5207_object = var_5206_object;
		func_12219(var_5205_bool, var_5206_object);
		if(var_5205_bool != 0) {
			var_5208_int = 0; var_5209_float = 0;
			var_4658_float = var_5209_float;
			func_9868(var_5208_int, var_5209_float);
		}
	}
	var_5215_bool = var_4657_int == (int)45179;
	if(var_5215_bool != 0) {
		var_5216_bool = 0; var_5217_object = Obj();
		var_5218_object = GlobalVars[16];
		var_5218_object = var_5217_object;
		func_12219(var_5216_bool, var_5217_object);
		if(var_5216_bool != 0) {
			var_5219_int = 0; var_5220_float = 0;
			var_4658_float = var_5220_float;
			func_9877(var_5219_int, var_5220_float);
		}
	}
	var_5226_bool = var_4657_int == (int)45200;
	if(var_5226_bool != 0) {
		var_5227_bool = 0; var_5228_object = Obj();
		var_5229_object = GlobalVars[16];
		var_5229_object = var_5228_object;
		func_11979(var_5228_object);
		var_5234_bool = var_5227_bool == 0; //@nz
		if(var_5234_bool != 0) {
			var_5235_int = 0; var_5236_float = 0;
			var_4658_float = var_5236_float;
			func_10102(var_5235_int, var_5236_float);
		}
	}
	var_5242_bool = var_4657_int == (int)45180;
	if(var_5242_bool != 0) {
		var_5243_bool = 0; var_5244_object = Obj();
		var_5245_object = GlobalVars[16];
		var_5245_object = var_5244_object;
		func_12219(var_5243_bool, var_5244_object);
		if(var_5243_bool != 0) {
			var_5246_int = 0; var_5247_float = 0;
			var_4658_float = var_5247_float;
			func_9886(var_5246_int, var_5247_float);
		}
	}
	var_5253_bool = var_4657_int == (int)45182;
	if(var_5253_bool != 0) {
		var_5254_bool = 0; var_5255_object = Obj();
		var_5256_object = GlobalVars[16];
		var_5256_object = var_5255_object;
		func_12219(var_5254_bool, var_5255_object);
		if(var_5254_bool != 0) {
			var_5257_int = 0; var_5258_float = 0;
			var_4658_float = var_5258_float;
			func_9940(var_5257_int, var_5258_float);
		}
	}
	var_5264_bool = var_4657_int == (int)45176;
	if(var_5264_bool != 0) {
		var_5265_bool = 0; var_5266_object = Obj();
		var_5267_object = GlobalVars[16];
		var_5267_object = var_5266_object;
		func_12219(var_5265_bool, var_5266_object);
		if(var_5265_bool != 0) {
			var_5268_int = 0; var_5269_float = 0;
			var_4658_float = var_5269_float;
			func_9850(var_5268_int, var_5269_float);
		}
	}
	var_5275_bool = var_4657_int == (int)45063;
	if(var_5275_bool != 0) {
		QueuePlayMovie("aglaja.wmv");
	}
	var_5278_bool = var_4657_int == (int)45177;
	if(var_5278_bool != 0) {
		var_5279_bool = 0; var_5280_object = Obj();
		var_5281_object = GlobalVars[16];
		var_5281_object = var_5280_object;
		func_12219(var_5279_bool, var_5280_object);
		if(var_5279_bool != 0) {
			var_5282_int = 0; var_5283_float = 0;
			var_4658_float = var_5283_float;
			func_9859(var_5282_int, var_5283_float);
		}
	}
	var_5289_bool = var_4657_int == (int)45183;
	if(var_5289_bool != 0) {
		var_5290_bool = 0; var_5291_object = Obj();
		var_5292_object = GlobalVars[16];
		var_5292_object = var_5291_object;
		func_12219(var_5290_bool, var_5291_object);
		if(var_5290_bool != 0) {
			var_5293_int = 0; var_5294_float = 0;
			var_4658_float = var_5294_float;
			func_9994(var_5293_int, var_5294_float);
		}
	}
	var_5300_bool = var_4657_int == (int)45202;
	if(var_5300_bool != 0) {
		var_5301_bool = 0; var_5302_object = Obj();
		var_5303_object = GlobalVars[16];
		var_5303_object = var_5302_object;
		func_12015(var_5302_object);
		var_5308_bool = var_5301_bool == 0; //@nz
		if(var_5308_bool != 0) {
			var_5309_int = 0; var_5310_float = 0;
			var_4658_float = var_5310_float;
			func_10183(var_5309_int, var_5310_float);
		}
	}
	var_5316_bool = var_4657_int == (int)45205;
	if(var_5316_bool != 0) {
		var_5317_bool = 0; var_5318_object = Obj();
		var_5319_object = GlobalVars[16];
		var_5319_object = var_5318_object;
		func_12039(var_5318_object);
		var_5324_bool = var_5317_bool == 0; //@nz
		if(var_5324_bool != 0) {
			var_5325_int = 0; var_5326_float = 0;
			var_4658_float = var_5326_float;
			func_10390(var_5325_int, var_5326_float);
		}
	}
	var_5332_bool = var_4657_int == (int)45209;
	if(var_5332_bool != 0) {
		var_5333_int = 0; var_5334_float = 0;
		var_4658_float = var_5334_float;
		func_10138(var_5333_int, var_5334_float);
	}
	var_5340_bool = var_4657_int == (int)45207;
	if(var_5340_bool != 0) {
		var_5341_int = 0; var_5342_float = 0;
		var_4658_float = var_5342_float;
		func_10084(var_5341_int, var_5342_float);
	}
	var_5348_bool = var_4657_int == (int)45208;
	if(var_5348_bool != 0) {
		var_5349_int = 0; var_5350_float = 0;
		var_4658_float = var_5350_float;
		func_10093(var_5349_int, var_5350_float);
	}
	var_5356_bool = var_4657_int == (int)45181;
	if(var_5356_bool != 0) {
		var_5357_bool = 0; var_5358_object = Obj();
		var_5359_object = GlobalVars[16];
		var_5359_object = var_5358_object;
		func_12219(var_5357_bool, var_5358_object);
		if(var_5357_bool != 0) {
			var_5360_int = 0; var_5361_float = 0;
			var_4658_float = var_5361_float;
			func_9895(var_5360_int, var_5361_float);
		}
	}
	var_5367_bool = var_4657_int == (int)45210;
	if(var_5367_bool != 0) {
		var_5368_int = 0; var_5369_float = 0;
		var_4658_float = var_5369_float;
		func_10192(var_5368_int, var_5369_float);
	}
	var_5375_bool = var_4657_int == (int)45211;
	if(var_5375_bool != 0) {
		var_5376_int = 0; var_5377_float = 0;
		var_4658_float = var_5377_float;
		func_10246(var_5376_int, var_5377_float);
	}
	var_5383_bool = var_4657_int == (int)45064;
	if(var_5383_bool != 0) {
		QueuePlayMovie("army.wmv");
	}
	var_5386_bool = var_4657_int == (int)45212;
	if(var_5386_bool != 0) {
		var_5387_int = 0; var_5388_float = 0;
		var_4658_float = var_5388_float;
		func_10273(var_5387_int, var_5388_float);
	}
	var_5394_bool = var_4657_int == (int)45213;
	if(var_5394_bool != 0) {
		var_5395_int = 0; var_5396_float = 0;
		var_4658_float = var_5396_float;
		func_10336(var_5395_int, var_5396_float);
	}
	var_5402_bool = var_4657_int == (int)45203;
	if(var_5402_bool != 0) {
		var_5403_bool = 0; var_5404_object = Obj();
		var_5405_object = GlobalVars[16];
		var_5405_object = var_5404_object;
		func_12027(var_5404_object);
		var_5410_bool = var_5403_bool == 0; //@nz
		if(var_5410_bool != 0) {
			var_5411_int = 0; var_5412_float = 0;
			var_4658_float = var_5412_float;
			func_10237(var_5411_int, var_5412_float);
		}
	}
	var_5418_bool = var_4657_int == (int)45175;
	if(var_5418_bool != 0) {
		var_5419_bool = 0; var_5420_object = Obj();
		var_5421_object = GlobalVars[16];
		var_5421_object = var_5420_object;
		func_12219(var_5419_bool, var_5420_object);
		if(var_5419_bool != 0) {
			var_5422_int = 0; var_5423_float = 0;
			var_4658_float = var_5423_float;
			func_9841(var_5422_int, var_5423_float);
		}
	}
	var_5429_bool = var_4657_int == (int)45054;
	if(var_5429_bool != 0) {
		var_5430_int = 0; var_5431_float = 0;
		var_4658_float = var_5431_float;
		func_10003(var_5430_int, var_5431_float);
	}
	var_5437_bool = var_4657_int == (int)45199;
	if(var_5437_bool != 0) {
		var_5438_bool = 0; var_5439_object = Obj();
		var_5440_object = GlobalVars[16];
		var_5440_object = var_5439_object;
		func_11991(var_5439_object);
		var_5445_bool = var_5438_bool == 0; //@nz
		if(var_5445_bool != 0) {
			var_5446_int = 0; var_5447_float = 0;
			var_4658_float = var_5447_float;
			func_10111(var_5446_int, var_5447_float);
		}
	}
	var_5453_bool = var_4657_int == (int)45201;
	if(var_5453_bool != 0) {
		var_5454_bool = 0; var_5455_object = Obj();
		var_5456_object = GlobalVars[16];
		var_5456_object = var_5455_object;
		func_12003(var_5455_object);
		var_5461_bool = var_5454_bool == 0; //@nz
		if(var_5461_bool != 0) {
			var_5462_int = 0; var_5463_float = 0;
			var_4658_float = var_5463_float;
			func_10210(var_5462_int, var_5463_float);
		}
	}
	var_5469_bool = var_4657_int == (int)45184;
	if(var_5469_bool != 0) {
		var_5470_bool = 0; var_5471_object = Obj();
		var_5472_object = GlobalVars[16];
		var_5472_object = var_5471_object;
		func_12219(var_5470_bool, var_5471_object);
		if(var_5470_bool != 0) {
			var_5473_int = 0; var_5474_float = 0;
			var_4658_float = var_5474_float;
			func_10030(var_5473_int, var_5474_float);
		}
	}
	var_5480_bool = var_4657_int == (int)45206;
	if(var_5480_bool != 0) {
		var_5481_int = 0; var_5482_float = 0;
		var_4658_float = var_5482_float;
		func_10435(var_5481_int, var_5482_float);
	}
	var_5488_bool = var_4657_int == (int)45050;
	if(var_5488_bool != 0) {
		var_5489_int = 0; var_5490_float = 0;
		var_4658_float = var_5490_float;
		func_10345(var_5489_int, var_5490_float);
	}
	var_5496_bool = var_4657_int == (int)45051;
	if(var_5496_bool != 0) {
		var_5497_bool = 0; var_5498_object = Obj();
		var_5499_object = GlobalVars[16];
		var_5499_object = var_5498_object;
		func_12409(var_5498_object);
		var_5504_bool = var_5497_bool == 0; //@nz
		if(var_5504_bool != 0) {
			var_5505_int = 0; var_5506_float = 0;
			var_4658_float = var_5506_float;
			func_9949(var_5505_int, var_5506_float);
		}
	}
	var_5512_bool = var_4657_int == (int)45042;
	if(var_5512_bool != 0) {
		var_5513_object = Obj(); var_5514_object = Obj();
		var_5515_object = GlobalVars[16];
		var_5515_object = var_5513_object;
		var_5516_object = GlobalVars[16];
		var_5516_object = var_5514_object;
		func_11905();
		var_5544_bool = 0; var_5545_string = ""; var_5546_string = "";
		func_245(var_5544_bool, "quest_d11_01", "cleanup");
		var_5547_object = Obj(); var_5548_string = "";
		func_143(var_5547_object, "quest_d12_01");
	}
	var_5556_bool = var_4657_int == (int)45040;
	if(var_5556_bool != 0) {
		var_5557_bool = 0; var_5558_object = Obj();
		var_5559_object = GlobalVars[16];
		var_5559_object = var_5558_object;
		func_12301(var_5558_object);
		var_5564_bool = var_5557_bool == 0; //@nz
		if(var_5564_bool != 0) {
			var_5565_int = 0; var_5566_float = 0;
			var_4658_float = var_5566_float;
			func_10165(var_5565_int, var_5566_float);
		}
	}
	var_5572_bool = var_4657_int == (int)45039;
	if(var_5572_bool != 0) {
		var_5573_bool = 0; var_5574_object = Obj();
		var_5575_object = GlobalVars[16];
		var_5575_object = var_5574_object;
		func_12289(var_5574_object);
		var_5580_bool = var_5573_bool == 0; //@nz
		if(var_5580_bool != 0) {
			var_5581_object = Obj(); var_5582_object = Obj();
			var_5583_object = GlobalVars[16];
			var_5583_object = var_5581_object;
			var_5584_object = GlobalVars[16];
			var_5584_object = var_5582_object;
			func_10476();
			var_5595_int = 0; var_5596_float = 0;
			var_4658_float = var_5596_float;
			func_10174(var_5595_int, var_5596_float);
		}
	}
	var_5602_bool = var_4657_int == (int)45038;
	if(var_5602_bool != 0) {
		var_5603_bool = 0; var_5604_object = Obj();
		var_5605_object = GlobalVars[16];
		var_5605_object = var_5604_object;
		func_12277(var_5604_object);
		var_5610_bool = var_5603_bool == 0; //@nz
		if(var_5610_bool != 0) {
			var_5611_int = 0; var_5612_float = 0;
			var_4658_float = var_5612_float;
			func_10129(var_5611_int, var_5612_float);
		}
	}
	var_5618_bool = var_4657_int == (int)45041;
	if(var_5618_bool != 0) {
		var_5619_bool = 0; var_5620_object = Obj();
		var_5621_object = GlobalVars[16];
		var_5621_object = var_5620_object;
		func_12313(var_5620_object);
		var_5626_bool = var_5619_bool == 0; //@nz
		if(var_5626_bool != 0) {
			var_5627_int = 0; var_5628_float = 0;
			var_4658_float = var_5628_float;
			func_10228(var_5627_int, var_5628_float);
		}
	}
	var_5634_bool = var_4657_int == (int)45045;
	if(var_5634_bool != 0) {
		var_5635_bool = 0; var_5636_object = Obj();
		var_5637_object = GlobalVars[16];
		var_5637_object = var_5636_object;
		func_12349(var_5636_object);
		var_5642_bool = var_5635_bool == 0; //@nz
		if(var_5642_bool != 0) {
			var_5643_int = 0; var_5644_float = 0;
			var_4658_float = var_5644_float;
			func_10291(var_5643_int, var_5644_float);
		}
	}
	var_5650_bool = var_4657_int == (int)45047;
	if(var_5650_bool != 0) {
		var_5651_bool = 0; var_5652_object = Obj();
		var_5653_object = GlobalVars[16];
		var_5653_object = var_5652_object;
		func_12385(var_5652_object);
		var_5658_bool = var_5651_bool == 0; //@nz
		if(var_5658_bool != 0) {
			var_5659_int = 0; var_5660_float = 0;
			var_4658_float = var_5660_float;
			func_10318(var_5659_int, var_5660_float);
		}
	}
	var_5666_bool = var_4657_int == (int)45036;
	if(var_5666_bool != 0) {
		var_5667_bool = 0; var_5668_object = Obj();
		var_5669_object = GlobalVars[16];
		var_5669_object = var_5668_object;
		func_12253(var_5668_object);
		var_5674_bool = var_5667_bool == 0; //@nz
		if(var_5674_bool != 0) {
			var_5675_object = Obj(); var_5676_object = Obj();
			var_5677_object = GlobalVars[16];
			var_5677_object = var_5675_object;
			var_5678_object = GlobalVars[16];
			var_5678_object = var_5676_object;
			func_10806();
			var_5681_int = 0; var_5682_float = 0;
			var_4658_float = var_5682_float;
			func_9967(var_5681_int, var_5682_float);
		}
	}
	var_5688_bool = var_4657_int == (int)45043;
	if(var_5688_bool != 0) {
		var_5689_bool = 0; var_5690_object = Obj();
		var_5691_object = GlobalVars[16];
		var_5691_object = var_5690_object;
		func_12337(var_5690_object);
		var_5696_bool = var_5689_bool == 0; //@nz
		if(var_5696_bool != 0) {
			var_5697_int = 0; var_5698_float = 0;
			var_4658_float = var_5698_float;
			func_10255(var_5697_int, var_5698_float);
		}
	}
	var_5704_bool = var_4657_int == (int)45046;
	if(var_5704_bool != 0) {
		var_5705_bool = 0; var_5706_object = Obj();
		var_5707_object = GlobalVars[16];
		var_5707_object = var_5706_object;
		func_12373(var_5706_object);
		var_5712_bool = var_5705_bool == 0; //@nz
		if(var_5712_bool != 0) {
			var_5713_int = 0; var_5714_float = 0;
			var_4658_float = var_5714_float;
			func_10282(var_5713_int, var_5714_float);
		}
	}
	var_5720_bool = var_4657_int == (int)45044;
	if(var_5720_bool != 0) {
		var_5721_bool = 0; var_5722_object = Obj();
		var_5723_object = GlobalVars[16];
		var_5723_object = var_5722_object;
		func_12361(var_5722_object);
		var_5728_bool = var_5721_bool == 0; //@nz
		if(var_5728_bool != 0) {
			var_5729_int = 0; var_5730_float = 0;
			var_4658_float = var_5730_float;
			func_10300(var_5729_int, var_5730_float);
		}
	}
	var_5736_bool = var_4657_int == (int)45048;
	if(var_5736_bool != 0) {
		var_5737_int = 0; var_5738_float = 0;
		var_4658_float = var_5738_float;
		func_10354(var_5737_int, var_5738_float);
	}
	var_5744_bool = var_4657_int == (int)45049;
	if(var_5744_bool != 0) {
		var_5745_bool = 0; var_5746_object = Obj();
		var_5747_object = GlobalVars[16];
		var_5747_object = var_5746_object;
		func_12397(var_5746_object);
		var_5752_bool = var_5745_bool == 0; //@nz
		if(var_5752_bool != 0) {
			var_5753_int = 0; var_5754_float = 0;
			var_4658_float = var_5754_float;
			func_10327(var_5753_int, var_5754_float);
		}
	}
	var_5760_bool = var_4657_int == (int)45018;
	if(var_5760_bool != 0) {
		var_5761_object = Obj(); var_5762_object = Obj();
		var_5763_object = GlobalVars[16];
		var_5763_object = var_5761_object;
		var_5764_object = GlobalVars[16];
		var_5764_object = var_5762_object;
		func_11780();
		var_5790_bool = 0; var_5791_string = ""; var_5792_string = "";
		func_245(var_5790_bool, "quest_d9_01", "cleanup");
		var_5793_object = Obj(); var_5794_string = "";
		func_143(var_5793_object, "quest_d10_01");
	}
	var_5796_bool = var_4657_int == (int)45005;
	if(var_5796_bool != 0) {
		var_5797_object = Obj(); var_5798_object = Obj();
		var_5799_object = GlobalVars[16];
		var_5799_object = var_5797_object;
		var_5800_object = GlobalVars[16];
		var_5800_object = var_5798_object;
		func_10980();
		var_5848_bool = 0; var_5849_string = ""; var_5850_string = "";
		func_245(var_5848_bool, "quest_d2_01", "cleanup");
		var_5851_object = Obj(); var_5852_string = "";
		func_143(var_5851_object, "quest_d3_01");
	}
	var_5854_bool = var_4657_int == (int)45007;
	if(var_5854_bool != 0) {
		var_5855_object = Obj(); var_5856_object = Obj();
		var_5857_object = GlobalVars[16];
		var_5857_object = var_5855_object;
		var_5858_object = GlobalVars[16];
		var_5858_object = var_5856_object;
		func_10764();
	}
	var_5862_bool = var_4657_int == (int)45009;
	if(var_5862_bool != 0) {
		var_5863_int = 0; var_5864_float = 0;
		var_4658_float = var_5864_float;
		func_10048(var_5863_int, var_5864_float);
	}
	var_5870_bool = var_4657_int == (int)45016;
	if(var_5870_bool != 0) {
		var_5871_object = Obj(); var_5872_object = Obj();
		var_5873_object = GlobalVars[16];
		var_5873_object = var_5871_object;
		var_5874_object = GlobalVars[16];
		var_5874_object = var_5872_object;
		func_11679();
		var_5908_object = Obj(); var_5909_object = Obj();
		var_5910_object = GlobalVars[16];
		var_5910_object = var_5908_object;
		var_5911_object = GlobalVars[16];
		var_5911_object = var_5909_object;
		func_10790();
		var_5914_bool = 0; var_5915_string = ""; var_5916_string = "";
		func_245(var_5914_bool, "quest_d7_01", "cleanup");
		var_5917_object = Obj(); var_5918_string = "";
		func_143(var_5917_object, "quest_d8_01");
	}
	var_5920_bool = var_4657_int == (int)45017;
	if(var_5920_bool != 0) {
		var_5921_object = Obj(); var_5922_object = Obj();
		var_5923_object = GlobalVars[16];
		var_5923_object = var_5921_object;
		var_5924_object = GlobalVars[16];
		var_5924_object = var_5922_object;
		func_10499();
		var_5952_bool = 0; var_5953_string = ""; var_5954_string = "";
		func_245(var_5952_bool, "quest_d8_01", "cleanup");
		var_5955_object = Obj(); var_5956_string = "";
		func_143(var_5955_object, "quest_d9_01");
	}
	var_5958_bool = var_4657_int == (int)45015;
	if(var_5958_bool != 0) {
		var_5959_bool = 0; var_5960_object = Obj();
		var_5961_object = GlobalVars[16];
		var_5961_object = var_5960_object;
		func_12241(var_5960_object);
		if(var_5959_bool != 0) {
			var_5966_int = 0; var_5967_float = 0;
			var_4658_float = var_5967_float;
			func_10309(var_5966_int, var_5967_float);
		}
	}
	var_5973_bool = var_4657_int == (int)45031;
	if(var_5973_bool != 0) {
		var_5974_object = Obj(); var_5975_object = Obj();
		var_5976_object = GlobalVars[16];
		var_5976_object = var_5974_object;
		var_5977_object = GlobalVars[16];
		var_5977_object = var_5975_object;
		func_11843();
		var_6001_bool = 0; var_6002_string = ""; var_6003_string = "";
		func_245(var_6001_bool, "quest_d10_01", "cleanup");
		var_6004_object = Obj(); var_6005_string = "";
		func_143(var_6004_object, "quest_d11_01");
	}
	var_6007_bool = var_4657_int == (int)45011;
	if(var_6007_bool != 0) {
		var_6008_object = Obj(); var_6009_object = Obj();
		var_6010_object = GlobalVars[16];
		var_6010_object = var_6008_object;
		var_6011_object = GlobalVars[16];
		var_6011_object = var_6009_object;
		func_11230();
		var_6065_bool = 0; var_6066_string = ""; var_6067_string = "";
		func_245(var_6065_bool, "quest_d4_01", "cleanup");
		var_6068_object = Obj(); var_6069_string = "";
		func_154(var_6068_object, "quest_d5_01");
	}
	var_6077_bool = var_4657_int == (int)45032;
	if(var_6077_bool != 0) {
		var_6078_object = Obj(); var_6079_string = "";
		func_143(var_6078_object, "quest_d11_02");
	}
	var_6081_bool = var_4657_int == (int)45008;
	if(var_6081_bool != 0) {
		var_6082_bool = 0; var_6083_object = Obj();
		var_6084_object = GlobalVars[16];
		var_6084_object = var_6083_object;
		func_11955(var_6083_object);
		if(var_6082_bool != 0) {
			var_6089_int = 0; var_6090_float = 0;
			var_4658_float = var_6090_float;
			func_10057(var_6089_int, var_6090_float);
		}
	}
	var_6096_bool = var_4657_int == (int)45003;
	if(var_6096_bool != 0) {
		var_6097_object = Obj(); var_6098_object = Obj();
		var_6099_object = GlobalVars[16];
		var_6099_object = var_6097_object;
		var_6100_object = GlobalVars[16];
		var_6100_object = var_6098_object;
		func_10820();
		var_6153_int = 0; var_6154_float = 0;
		var_4658_float = var_6154_float;
		func_10039(var_6153_int, var_6154_float);
		var_6159_object = Obj(); var_6160_string = "";
		func_143(var_6159_object, "quest_d2_01");
		var_6161_bool = 0; var_6162_string = ""; var_6163_string = "";
		func_245(var_6161_bool, "quest_d1_01", "cleanup");
		var_6164_bool = 0; var_6165_string = ""; var_6166_string = "";
		func_245(var_6164_bool, "tutorial_mask1", "cleanup");
		var_6167_bool = 0; var_6168_string = ""; var_6169_string = "";
		func_245(var_6167_bool, "tutorial_mask2", "cleanup");
	}
	var_6171_bool = var_4657_int == (int)45006;
	if(var_6171_bool != 0) {
		var_6172_object = Obj(); var_6173_object = Obj();
		var_6174_object = GlobalVars[16];
		var_6174_object = var_6172_object;
		var_6175_object = GlobalVars[16];
		var_6175_object = var_6173_object;
		func_11126();
		var_6211_bool = 0; var_6212_string = ""; var_6213_string = "";
		func_245(var_6211_bool, "quest_d3_01", "cleanup");
		var_6214_object = Obj(); var_6215_string = "";
		func_143(var_6214_object, "quest_d4_01");
	}
	var_6217_bool = var_4657_int == (int)45012;
	if(var_6217_bool != 0) {
		var_6218_object = Obj(); var_6219_object = Obj();
		var_6220_object = GlobalVars[16];
		var_6220_object = var_6218_object;
		var_6221_object = GlobalVars[16];
		var_6221_object = var_6219_object;
		func_11394();
		var_6267_int = 0; var_6268_float = 0;
		var_4658_float = var_6268_float;
		func_10264(var_6267_int, var_6268_float);
		var_6273_bool = 0; var_6274_string = ""; var_6275_string = "";
		func_245(var_6273_bool, "quest_d5_01", "cleanup");
		var_6276_object = Obj(); var_6277_string = "";
		func_143(var_6276_object, "quest_d6_01");
	}
	var_6279_bool = var_4657_int == (int)45013;
	if(var_6279_bool != 0) {
		var_6280_object = Obj(); var_6281_object = Obj();
		var_6282_object = GlobalVars[16];
		var_6282_object = var_6280_object;
		var_6283_object = GlobalVars[16];
		var_6283_object = var_6281_object;
		func_11533();
		var_6331_bool = 0; var_6332_string = ""; var_6333_string = "";
		func_245(var_6331_bool, "quest_d6_01", "cleanup");
		var_6334_object = Obj(); var_6335_string = "";
		func_143(var_6334_object, "quest_d7_01");
	}
	var_6337_bool = var_4657_int == (int)45035;
	if(var_6337_bool != 0) {
		var_6338_bool = 0; var_6339_object = Obj();
		var_6340_object = GlobalVars[16];
		var_6340_object = var_6339_object;
		func_12265(var_6339_object);
		var_6345_bool = var_6338_bool == 0; //@nz
		if(var_6345_bool != 0) {
			var_6346_object = Obj(); var_6347_object = Obj();
			var_6348_object = GlobalVars[16];
			var_6348_object = var_6346_object;
			var_6349_object = GlobalVars[16];
			var_6349_object = var_6347_object;
			func_10790();
			var_6350_int = 0; var_6351_float = 0;
			var_4658_float = var_6351_float;
			func_9976(var_6350_int, var_6351_float);
		}
	}
	var_6357_bool = var_4657_int == (int)45010;
	if(var_6357_bool != 0) {
		var_6358_bool = 0;
		var_6358_bool = 0;
		var_6359_bool = 0; var_6360_object = Obj();
		var_6361_object = GlobalVars[16];
		var_6361_object = var_6360_object;
		func_12229(var_6360_object);
		var_6366_bool = var_6359_bool == 0; //@nz
		if(var_6366_bool != 0) {
			var_6367_bool = 0; var_6368_object = Obj();
			var_6369_object = GlobalVars[16];
			var_6369_object = var_6368_object;
			func_11943(var_6368_object);
			var_6374_bool = var_6367_bool == 0; //@nz
			if(var_6374_bool != 0) {
				var_6358_bool = 1;
			}
		}
		if(var_6358_bool != 0) {
			var_6375_object = Obj(); var_6376_object = Obj();
			var_6377_object = GlobalVars[16];
			var_6377_object = var_6375_object;
			var_6378_object = GlobalVars[16];
			var_6378_object = var_6376_object;
			func_10483();
			var_6387_int = 0; var_6388_float = 0;
			var_4658_float = var_6388_float;
			func_10075(var_6387_int, var_6388_float);
		}
	}
	return 0;
}


func_6480(var_246_object)
{
	@@var_246_object:add("r5_house2_01");
	@@var_246_object:add("r5_house2_02");
	@@var_246_object:add("r5_house2_03");
	@@var_246_object:add("r5_house3_01_i2");
	@@var_246_object:add("r5_house3_01");
	@@var_246_object:add("r5_house3_02_i2");
	@@var_246_object:add("r5_house3_02");
	@@var_246_object:add("r5_house3_03_i2");
	@@var_246_object:add("r5_house3_03");
	@@var_246_object:add("r5_house3_04_i2");
	@@var_246_object:add("r5_house3_04");
	@@var_246_object:add("r5_house3_05_i2");
	@@var_246_object:add("r5_house3_05");
	@@var_246_object:add("r5_house3_06_i2");
	@@var_246_object:add("r5_house3_06");
	@@var_246_object:add("r5_house3_07_i2");
	@@var_246_object:add("r5_house3_07");
	@@var_246_object:add("r5_House6_01");
	return 0;
}


func_1361(var_1140_bool, var_1141_int, var_1142_int)
{
	var_1140_bool = 0;
	var_1144_bool = var_1141_int >= (int)3;
	if(var_1144_bool != 0) {
		var_1145_bool = 0;
		var_1145_bool = 1;
		var_1147_bool = var_1142_int > (int)22;
		if(var_1147_bool != 1) {
			var_1149_bool = var_1142_int < (int)5;
			if(var_1149_bool != 1) {
				var_1145_bool = 0;
			}
		}
		if(var_1145_bool != 0) {
			var_1140_bool = 1;
		}
	}
	return 0;
}


func_10579()
{
	var_4806_string = ""; var_4807_bool = 0;
	func_183("mnogogrannik_han@door1", (bool)1);
	return 0;
}


func_2389(var_915_int, var_916_int, var_917_int)
{
	var_918_int = 0; var_919_int = 0;
	var_921_int = var_916_int + (int)1;
	var_923_bool = var_921_int == (int)12;
	if(var_923_bool != 0) {
		return 2;
	}
	var_924_bool = 0;
	var_924_bool = 0;
	var_925_bool = 0;
	var_925_bool = 1;
	var_927_bool = var_917_int < (int)7;
	if(var_927_bool != 1) {
		var_929_bool = var_917_int > (int)21;
		if(var_929_bool != 1) {
			var_925_bool = 0;
		}
	}
	if(var_925_bool != 0) {
		var_931_bool = var_916_int != (int)0;
		if(var_931_bool != 0) {
			var_924_bool = 1;
		}
	}
	if(var_924_bool != 0) {
		var_933_float = 0; var_934_int = 0;
		var_916_int = var_934_int;
		func_1147(var_933_float, var_934_int);
		var_919_int = (int)1 * var_933_float;
		var_935_int = var_919_int;
		if(var_935_int != 0) {
			var_936_int = 0; var_937_string = ""; var_938_string = ""; var_939_int = 0;
			var_915_int = var_936_int;
			var_919_int = var_939_int;
			func_509(var_936_int, "pers_grabitel", "grabitel.xml", var_939_int);
		}
	}
	var_940_bool = 0; var_941_int = 0; var_942_int = 0;
	var_916_int = var_941_int;
	var_917_int = var_942_int;
	func_1116(var_940_bool, var_941_int, var_942_int);
	if(var_940_bool != 0) {
		var_943_int = 0; var_944_string = ""; var_945_string = ""; var_946_int = 0;
		var_915_int = var_943_int;
		func_509(var_943_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_947_int = 0; var_948_string = ""; var_949_string = ""; var_950_int = 0;
		var_915_int = var_947_int;
		func_509(var_947_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_951_int = 0; var_952_string = ""; var_953_string = ""; var_954_int = 0;
		var_915_int = var_951_int;
		func_509(var_951_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_955_int = 0; var_956_string = ""; var_957_string = ""; var_958_int = 0;
		var_915_int = var_955_int;
		func_509(var_955_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_959_int = 0; var_960_string = ""; var_961_string = ""; var_962_int = 0;
		var_915_int = var_959_int;
		func_509(var_959_int, "pers_alkash", "alkash.xml", (int)1);
		var_963_int = 0; var_964_string = ""; var_965_string = ""; var_966_int = 0;
		var_915_int = var_963_int;
		func_509(var_963_int, "pers_woman", "woman.xml", (int)2);
	} else {
		var_979_bool = 0;
		var_979_bool = 0;
		var_981_bool = var_917_int > (int)8;
		if(var_981_bool != 0) {
			var_983_bool = var_917_int < (int)21;
			if(var_983_bool != 0) {
				var_979_bool = 1;
			}
		}
		if(var_979_bool != 0) {
			var_984_int = 0; var_985_string = ""; var_986_string = ""; var_987_int = 0;
			var_915_int = var_984_int;
			func_509(var_984_int, "pers_worker", "worker.xml", (int)2);
			var_988_int = 0; var_989_string = ""; var_990_string = ""; var_991_int = 0;
			var_915_int = var_988_int;
			func_509(var_988_int, "pers_worker", "worker2.xml", (int)2);
			var_992_int = 0; var_993_string = ""; var_994_string = ""; var_995_int = 0;
			var_915_int = var_992_int;
			func_509(var_992_int, "pers_alkash", "alkash.xml", (int)1);
			var_996_int = 0; var_997_string = ""; var_998_string = ""; var_999_int = 0;
			var_915_int = var_996_int;
			func_509(var_996_int, "pers_woman", "woman.xml", (int)2);
			var_1000_int = 0; var_1001_string = ""; var_1002_string = ""; var_1003_int = 0;
			var_915_int = var_1000_int;
			func_509(var_1000_int, "pers_unosha", "unosha.xml", (int)1);
			var_1004_int = 0; var_1005_string = ""; var_1006_string = ""; var_1007_int = 0;
			var_915_int = var_1004_int;
			func_509(var_1004_int, "pers_unosha", "unosha2.xml", (int)1);
			goto Label_2565;
		}
		var_1008_int = 0; var_1009_string = ""; var_1010_string = ""; var_1011_int = 0;
		var_915_int = var_1008_int;
		func_509(var_1008_int, "pers_alkash", "alkash.xml", (int)1);
		var_1012_int = 0; var_1013_string = ""; var_1014_string = ""; var_1015_int = 0;
		var_915_int = var_1012_int;
		func_509(var_1012_int, "pers_worker", "worker.xml", (int)1);
		var_1016_int = 0; var_1017_string = ""; var_1018_string = ""; var_1019_int = 0;
		var_915_int = var_1016_int;
		func_509(var_1016_int, "pers_worker", "worker2.xml", (int)1);
		var_1020_int = 0; var_1021_string = ""; var_1022_string = ""; var_1023_int = 0;
		var_915_int = var_1020_int;
		func_509(var_1020_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1024_int = 0; var_1025_string = ""; var_1026_string = ""; var_1027_int = 0;
		var_915_int = var_1024_int;
		func_509(var_1024_int, "pers_dog", "dog.xml", (int)1);
	}
Label_2565:
	var_967_bool = 0;
	var_967_bool = 0;
	var_968_bool = 0;
	var_968_bool = 0;
	var_970_bool = var_916_int == (int)0;
	if(var_970_bool != 0) {
		var_972_bool = var_917_int > (int)12;
		if(var_972_bool != 0) {
			var_968_bool = 1;
		}
	}
	if(var_968_bool != 0) {
		var_974_bool = var_917_int < (int)22;
		if(var_974_bool != 0) {
			var_967_bool = 1;
		}
	}
	if(var_967_bool != 0) {
		var_975_int = 0; var_976_string = ""; var_977_string = ""; var_978_int = 0;
		var_915_int = var_975_int;
		func_509(var_975_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	return 2;
	
}


func_10586()
{
	var_5070_object = Obj(); var_5071_object = Obj();
	func_12503(Obj());
	var_5072_object = var_5071_object;
	var_5077_float = 0;
	func_290(var_5077_float);
	@@var_5071_object:AddMark("d10q03GotoMark", "pt_map_theater", (int)0, (int)511154, var_5077_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4445(var_2006_int, var_2007_int, var_2008_object, var_2009_object, var_2010_object, var_2011_object)
{
	var_2013_bool = var_2007_int == (int)0;
	if(var_2013_bool != 0) {
		var_2014_int = 0; var_2015_bool = 0;
		func_802((int)0, (bool)1);
		var_2016_int = 0; var_2017_bool = 0; var_2018_int = 0;
		func_819((int)0, (bool)1, (int)1);
		var_2019_int = 0; var_2020_int = 0; var_2021_object = Obj(); var_2022_object = Obj(); var_2023_object = Obj();
		var_2006_int = var_2020_int;
		var_2008_object = var_2021_object;
		var_2009_object = var_2022_object;
		var_2010_object = var_2023_object;
		func_647((int)0, var_2020_int, var_2021_object, var_2022_object, var_2023_object);
		var_2109_object = Obj(); var_2110_int = 0;
		var_2011_object = var_2109_object;
		func_311(var_2109_object, (int)1);
		var_2111_int = 0; var_2112_bool = 0; var_2113_int = 0;
		func_876((int)0, (bool)1, (int)4);
		var_2114_int = 0; var_2115_bool = 0; var_2116_int = 0;
		func_938((int)0, (bool)0, (int)4);
	}
	var_2117_int = 0; var_2118_bool = 0;
	func_785((int)0, (bool)0);
	var_2119_int = 0; var_2120_int = 0; var_2121_int = 0;
	var_2006_int = var_2120_int;
	var_2007_int = var_2121_int;
	func_3143((int)0, var_2120_int, var_2121_int);
	return 0;
}


func_349(var_108_int)
{
	var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0;
	
Label_352:
	var_114_bool = (int)0 < (int)16;
	if(var_114_bool != 0) {
		var_115_bool = 0; var_116_int = 0;
		var_112_int = var_116_int;
		func_436(var_115_bool, var_116_int);
		if(var_115_bool != 0) {
			(int)0 = (int)0 + (int)1;
		}
		var_112_int = var_112_int + (int)1;
		goto Label_352;
	}
	var_111_int = var_108_int;
	return 4;
}


func_1378(var_2209_bool, var_2210_int)
{
	var_2209_bool = var_2210_int >= (int)8;
	return 0;
}


func_1382(var_1807_int, var_1808_int, var_1809_int)
{
	var_1810_int = 0; var_1811_int = 0;
	var_1813_int = var_1808_int + (int)1;
	var_1815_bool = var_1813_int == (int)12;
	if(var_1815_bool != 0) {
		return 2;
	}
	var_1816_bool = 0;
	var_1816_bool = 0;
	var_1817_bool = 0;
	var_1817_bool = 1;
	var_1819_bool = var_1809_int < (int)7;
	if(var_1819_bool != 1) {
		var_1821_bool = var_1809_int > (int)21;
		if(var_1821_bool != 1) {
			var_1817_bool = 0;
		}
	}
	if(var_1817_bool != 0) {
		var_1823_bool = var_1808_int != (int)0;
		if(var_1823_bool != 0) {
			var_1816_bool = 1;
		}
	}
	if(var_1816_bool != 0) {
		var_1824_float = 0; var_1825_int = 0;
		var_1808_int = var_1825_int;
		func_1147(var_1824_float, var_1825_int);
		var_1824_float = var_1811_int;
		var_1826_int = var_1811_int;
		if(var_1826_int != 0) {
			var_1827_int = 0; var_1828_string = ""; var_1829_string = ""; var_1830_int = 0;
			var_1807_int = var_1827_int;
			var_1811_int = var_1830_int;
			func_509(var_1827_int, "pers_grabitel", "grabitel.xml", var_1830_int);
		}
	}
	var_1831_bool = 0; var_1832_int = 0; var_1833_int = 0;
	var_1808_int = var_1832_int;
	var_1809_int = var_1833_int;
	func_1116(var_1831_bool, var_1832_int, var_1833_int);
	if(var_1831_bool != 0) {
		var_1834_int = 0; var_1835_string = ""; var_1836_string = ""; var_1837_int = 0;
		var_1807_int = var_1834_int;
		func_509(var_1834_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1838_int = 0; var_1839_string = ""; var_1840_string = ""; var_1841_int = 0;
		var_1807_int = var_1838_int;
		func_509(var_1838_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1842_int = 0; var_1843_string = ""; var_1844_string = ""; var_1845_int = 0;
		var_1807_int = var_1842_int;
		func_509(var_1842_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1846_int = 0; var_1847_string = ""; var_1848_string = ""; var_1849_int = 0;
		var_1807_int = var_1846_int;
		func_509(var_1846_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1850_int = 0; var_1851_string = ""; var_1852_string = ""; var_1853_int = 0;
		var_1807_int = var_1850_int;
		func_509(var_1850_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
		var_1854_int = 0; var_1855_string = ""; var_1856_string = ""; var_1857_int = 0;
		var_1807_int = var_1854_int;
		func_509(var_1854_int, "pers_wasted_male", "wasted_male.xml", (int)3);
		var_1858_int = 0; var_1859_string = ""; var_1860_string = ""; var_1861_int = 0;
		var_1807_int = var_1858_int;
		func_509(var_1858_int, "pers_woman", "woman.xml", (int)3);
		var_1862_int = 0; var_1863_string = ""; var_1864_string = ""; var_1865_int = 0;
		var_1807_int = var_1862_int;
		func_509(var_1862_int, "pers_boy", "boy.xml", (int)1);
		var_1866_int = 0; var_1867_string = ""; var_1868_string = ""; var_1869_int = 0;
		var_1807_int = var_1866_int;
		func_509(var_1866_int, "pers_girl", "girl.xml", (int)1);
		var_1870_int = 0; var_1871_string = ""; var_1872_string = ""; var_1873_int = 0;
		var_1807_int = var_1870_int;
		func_509(var_1870_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_1893_bool = 0;
		var_1893_bool = 0;
		var_1895_bool = var_1809_int > (int)8;
		if(var_1895_bool != 0) {
			var_1897_bool = var_1809_int < (int)21;
			if(var_1897_bool != 0) {
				var_1893_bool = 1;
			}
		}
		if(var_1893_bool != 0) {
			var_1898_int = 0; var_1899_string = ""; var_1900_string = ""; var_1901_int = 0;
			var_1807_int = var_1898_int;
			func_509(var_1898_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
			var_1902_int = 0; var_1903_string = ""; var_1904_string = ""; var_1905_int = 0;
			var_1807_int = var_1902_int;
			func_509(var_1902_int, "pers_wasted_male", "wasted_male.xml", (int)3);
			var_1906_int = 0; var_1907_string = ""; var_1908_string = ""; var_1909_int = 0;
			var_1807_int = var_1906_int;
			func_509(var_1906_int, "pers_woman", "woman.xml", (int)3);
			var_1910_int = 0; var_1911_string = ""; var_1912_string = ""; var_1913_int = 0;
			var_1807_int = var_1910_int;
			func_509(var_1910_int, "pers_unosha", "unosha.xml", (int)2);
			var_1914_int = 0; var_1915_string = ""; var_1916_string = ""; var_1917_int = 0;
			var_1807_int = var_1914_int;
			func_509(var_1914_int, "pers_unosha", "unosha2.xml", (int)2);
			var_1918_int = 0; var_1919_string = ""; var_1920_string = ""; var_1921_int = 0;
			var_1807_int = var_1918_int;
			func_509(var_1918_int, "pers_boy", "boy.xml", (int)2);
			var_1922_int = 0; var_1923_string = ""; var_1924_string = ""; var_1925_int = 0;
			var_1807_int = var_1922_int;
			func_509(var_1922_int, "pers_girl", "girl.xml", (int)1);
			var_1926_int = 0; var_1927_string = ""; var_1928_string = ""; var_1929_int = 0;
			var_1807_int = var_1926_int;
			func_509(var_1926_int, "pers_girl", "girl2.xml", (int)1);
			goto Label_1592;
		}
		var_1930_int = 0; var_1931_string = ""; var_1932_string = ""; var_1933_int = 0;
		var_1807_int = var_1930_int;
		func_509(var_1930_int, "pers_wasted_girl", "wasted_girl.xml", (int)1);
		var_1934_int = 0; var_1935_string = ""; var_1936_string = ""; var_1937_int = 0;
		var_1807_int = var_1934_int;
		func_509(var_1934_int, "pers_wasted_male", "wasted_male.xml", (int)2);
		var_1938_int = 0; var_1939_string = ""; var_1940_string = ""; var_1941_int = 0;
		var_1807_int = var_1938_int;
		func_509(var_1938_int, "pers_unosha", "unosha.xml", (int)1);
		var_1942_int = 0; var_1943_string = ""; var_1944_string = ""; var_1945_int = 0;
		var_1807_int = var_1942_int;
		func_509(var_1942_int, "pers_unosha", "unosha2.xml", (int)1);
	}
Label_1592:
	var_1874_bool = 0;
	var_1874_bool = 0;
	var_1875_bool = 0;
	var_1875_bool = 0;
	var_1877_bool = var_1808_int == (int)0;
	if(var_1877_bool != 0) {
		var_1879_bool = var_1809_int > (int)12;
		if(var_1879_bool != 0) {
			var_1875_bool = 1;
		}
	}
	if(var_1875_bool != 0) {
		var_1881_bool = var_1809_int < (int)22;
		if(var_1881_bool != 0) {
			var_1874_bool = 1;
		}
	}
	if(var_1874_bool != 0) {
		var_1882_int = 0; var_1883_string = ""; var_1884_string = ""; var_1885_int = 0;
		var_1807_int = var_1882_int;
		func_509(var_1882_int, "pers_wasted_girl", "wasted_girl_killme.xml", (int)1);
	}
	var_1886_bool = 0; var_1887_int = 0; var_1888_int = 0;
	var_1808_int = var_1887_int;
	var_1809_int = var_1888_int;
	func_1351(var_1886_bool, var_1887_int, var_1888_int);
	if(var_1886_bool != 0) {
		var_1889_int = 0; var_1890_string = ""; var_1891_string = ""; var_1892_int = 0;
		var_1807_int = var_1889_int;
		func_509(var_1889_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 2;
	
}


func_10602()
{
	var_4689_object = Obj(); var_4690_object = Obj();
	func_12503(Obj());
	var_4691_object = var_4690_object;
	var_4702_float = 0;
	func_290(var_4702_float);
	@@var_4690_object:AddMark("d9q01GotoViktor", "pt_map_viktor", (int)1, (int)540031, var_4702_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_367(var_121_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0;
	irand(var_126_int, (int)16);
	var_127_int = 0;
	
Label_372:
	var_131_bool = var_127_int < (int)16;
	if(var_131_bool != 0) {
		var_132_int = var_127_int + var_126_int;
		var_128_int = var_132_int % (int)16;
		var_134_bool = 0;
		var_134_bool = 0;
		var_135_bool = 0; var_136_int = 0;
		var_128_int = var_136_int;
		func_406(var_135_bool, var_136_int);
		if(var_135_bool != 0) {
			var_144_bool = 0; var_145_int = 0; var_146_int = 0;
			var_128_int = var_145_int;
			var_121_int = var_146_int;
			func_14472(var_144_bool, var_145_int, var_146_int);
			if(var_144_bool != 0) {
				var_134_bool = 1;
			}
		}
		if(var_134_bool != 0) {
			var_163_int = 0;
			var_128_int = var_163_int;
			func_448(var_163_int);
			var_165_int = "Diseased Region: " + var_128_int;
			Trace(var_165_int);
			var_127_int = var_127_int + (int)1;
			goto Label_372;
		}
		return 6;
	}
	return 6;
}


func_5489(var_1342_int, var_1343_int, var_1344_object, var_1345_object, var_1346_object, var_1347_object)
{
	var_1349_bool = var_1343_int == (int)0;
	if(var_1349_bool != 0) {
		var_1350_int = 0; var_1351_bool = 0;
		func_802((int)5, (bool)0);
		var_1352_int = 0; var_1353_bool = 0; var_1354_int = 0;
		func_819((int)5, (bool)0, (int)1);
		var_1355_int = 0; var_1356_int = 0; var_1357_object = Obj(); var_1358_object = Obj(); var_1359_object = Obj();
		var_1355_int = 5;
		var_1342_int = var_1356_int;
		var_1344_object = var_1357_object;
		var_1345_object = var_1358_object;
		var_1346_object = var_1359_object;
		func_628(var_1356_int, var_1357_object, var_1358_object, var_1359_object);
		var_1360_object = Obj(); var_1361_int = 0;
		var_1347_object = var_1360_object;
		func_311(var_1360_object, (int)0);
		var_1362_int = 0; var_1363_bool = 0; var_1364_int = 0;
		func_876((int)5, (bool)0, (int)4);
		var_1365_int = 0; var_1366_bool = 0; var_1367_int = 0;
		func_938((int)5, (bool)0, (int)4);
	}
	var_1368_int = 0; var_1369_int = 0;
	var_1343_int = var_1369_int;
	func_989((int)5, var_1369_int);
	var_1370_int = 0; var_1371_int = 0; var_1372_int = 0;
	var_1342_int = var_1371_int;
	var_1343_int = var_1372_int;
	func_1903((int)5, var_1371_int, var_1372_int);
	return 0;
}


func_10618()
{
	var_4774_object = Obj(); var_4775_object = Obj();
	func_12503(Obj());
	var_4776_object = var_4775_object;
	var_4781_float = 0;
	func_290(var_4781_float);
	@@var_4775_object:AddMark("d9q02GotoJulia", "pt_map_julia", (int)0, (int)515296, var_4781_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8576(var_4305_int, var_4306_int)
{
	var_4308_object = Obj(); var_4309_object = Obj(); var_4310_string = ""; var_4311_int = 0; var_4312_int = 0; var_4313_int = 0; var_4314_object = Obj(); var_4315_object = Obj(); var_4316_string = ""; var_4317_int = 0; var_4318_int = 0; var_4319_int = 0;
	var_4320_bool = 0;
	var_4320_bool = 0;
	var_4322_bool = var_4306_int == (int)5;
	if(var_4322_bool != 0) {
		var_4324_bool = var_4305_int >= (int)7;
		if(var_4324_bool != 0) {
			var_4320_bool = 1;
		}
	}
	if(var_4320_bool != 0) {
		var_4325_int = 0;
		func_12520(var_4325_int);
		var_4327_bool = var_4325_int != (int)2;
		if(var_4327_bool != 0) {
			func_7787();
		}
	} else {
					var_4602_bool = 0;
					var_4602_bool = 0;
					var_4604_bool = var_4306_int == (int)22;
					if(var_4604_bool != 0) {
						var_4606_bool = var_4305_int >= (int)7;
						if(var_4606_bool != 0) {
							var_4602_bool = 1;
						}
					}
					if(var_4602_bool == 0) goto Label_8616;
					var_4607_int = 0;
					func_12520(var_4607_int);
					var_4609_bool = var_4607_int != (int)2;
					if(var_4609_bool == 0) goto Label_8616;
					func_7850();
	}
Label_8616:
	var_4374_bool = 0;
	var_4374_bool = 0;
	var_4376_bool = var_4306_int == (int)7;
	if(var_4376_bool != 0) {
		var_4378_bool = var_4305_int != (int)1;
		if(var_4378_bool != 0) {
			var_4374_bool = 1;
		}
	}
	if(var_4374_bool != 0) {
		SendWorldWndMessage((int)100);
	}
	var_4381_bool = var_4306_int == (int)0;
	if(var_4381_bool != 0) {
		func_8754();
		func_8829();
		var_4476_bool = var_4305_int == (int)6;
		if(var_4476_bool != 0) {
			GetMainOutdoorScene(var_4314_object);
			AddScriptedActor(var_4315_object, "shed_corpse", "splash_object_wo_pf.bin", var_4314_object, CVector(0.0, 0.0, 0.0));
			var_4315_object = 0;
			var_4314_object = 0;
		}
		var_4481_bool = var_4305_int == (int)9;
		if(var_4481_bool != 0) {
			func_8878();
		}
		var_4496_bool = var_4305_int != (int)1;
		if(var_4496_bool != 0) {
			var_4497_int = 0;
			func_12520(var_4497_int);
			var_4499_bool = var_4497_int == (int)1;
			if(var_4499_bool != 0) {
				var_4502_int = var_4305_int - (int)1;
				var_4503_int = "b" + var_4502_int;
				var_4505_int = var_4503_int + "q01";
				GetVariable(var_4505_int, var_4317_int);
				var_4316_string = "volonteers_burah";
			} else {
				var_4587_int = 0;
				func_12520(var_4587_int);
				var_4589_bool = var_4587_int == (int)0;
				if(var_4589_bool != 0) {
					var_4592_int = var_4305_int - (int)1;
					var_4593_int = "d" + var_4592_int;
					var_4595_int = var_4593_int + "q01";
					GetVariable(var_4595_int, var_4317_int);
					var_4316_string = "volonteers_danko";
					goto Label_8700;
				}
				var_4598_int = var_4305_int - (int)1;
				var_4599_int = "k" + var_4598_int;
				var_4601_int = var_4599_int + "q01";
				GetVariable(var_4601_int, var_4317_int);
				var_4316_string = "volonteers_klara";

			}
		Label_8700:
			Trace(var_4316_string);
			var_4507_bool = var_4317_int == (int)1000;
			if(var_4507_bool != 0) {
				var_4508_bool = 0; var_4509_string = ""; var_4510_string = ""; var_4511_string = "";
				var_4316_string = var_4509_string;
				func_257(var_4508_bool, var_4509_string, "rescue_locked", "");
			}
			var_4515_bool = 0; var_4516_string = ""; var_4517_string = ""; var_4518_string = "";
			var_4316_string = var_4516_string;
			func_257(var_4515_bool, var_4516_string, "update", "");
		}
	}
	var_4519_bool = 0;
	var_4519_bool = 0;
	var_4521_bool = var_4305_int == (int)6;
	if(var_4521_bool != 0) {
		var_4523_bool = var_4306_int == (int)0;
		if(var_4523_bool != 0) {
			var_4519_bool = 1;
		}
	}
	if(var_4519_bool != 0) {
		func_7907();
	}
	var_4526_bool = 0;
	var_4526_bool = 0;
	var_4528_bool = var_4305_int == (int)7;
	if(var_4528_bool != 0) {
		var_4530_bool = var_4306_int == (int)0;
		if(var_4530_bool != 0) {
			var_4526_bool = 1;
		}
	}
	if(var_4526_bool != 0) {
		var_4531_object = GlobalVars[14];
		@@var_4531_object:size(var_4318_int);

	Label_8744:
		var_4532_bool = (int)0 < var_4318_int;
		if(var_4532_bool != 0) {
			var_4533_int = 0;
			var_4319_int = var_4533_int;
			func_7614(var_4533_int);
			var_4319_int = var_4319_int + (int)1;
			goto Label_8744;
		}
	}
	return 12;
	
}


func_9607(var_3170_int, var_3171_int, var_3172_int)
{
	var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj(); var_3180_object = Obj();
	var_3181_object = GlobalVars[8];
	@@var_3181_object:get(var_3177_object, var_3170_int);
	var_3182_object = GlobalVars[9];
	@@var_3182_object:get(var_3178_object, var_3170_int);
	var_3183_object = GlobalVars[10];
	@@var_3183_object:get(var_3179_object, var_3170_int);
	var_3184_object = GlobalVars[13];
	@@var_3184_object:get(var_3180_object, var_3170_int);
	var_3186_bool = var_3170_int == (int)0;
	if(var_3186_bool != 0) {
		var_3187_int = 0; var_3188_int = 0; var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); var_3192_object = Obj();
		var_3171_int = var_3187_int;
		var_3172_int = var_3188_int;
		var_3177_object = var_3189_object;
		var_3178_object = var_3190_object;
		var_3179_object = var_3191_object;
		var_3180_object = var_3192_object;
		func_4497(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object);
	} else {
		var_3400_bool = var_3170_int == (int)1;
		if(var_3400_bool != 0) {
			var_3401_int = 0; var_3402_int = 0; var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj(); var_3406_object = Obj();
			var_3171_int = var_3401_int;
			var_3172_int = var_3402_int;
			var_3177_object = var_3403_object;
			var_3178_object = var_3404_object;
			var_3179_object = var_3405_object;
			var_3180_object = var_3406_object;
			func_4694(var_3401_int, var_3402_int, var_3403_object, var_3404_object, var_3405_object, var_3406_object);
			goto Label_9827;
		}
		var_3536_bool = var_3170_int == (int)2;
		if(var_3536_bool != 0) {
			var_3537_int = 0; var_3538_int = 0; var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj(); var_3542_object = Obj();
			var_3171_int = var_3537_int;
			var_3172_int = var_3538_int;
			var_3177_object = var_3539_object;
			var_3178_object = var_3540_object;
			var_3179_object = var_3541_object;
			var_3180_object = var_3542_object;
			func_4900(var_3537_int, var_3538_int, var_3539_object, var_3540_object, var_3541_object, var_3542_object);
			goto Label_9827;
		}
		var_3679_bool = var_3170_int == (int)3;
		if(var_3679_bool != 0) {
			var_3680_int = 0; var_3681_int = 0; var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj(); var_3685_object = Obj();
			var_3171_int = var_3680_int;
			var_3172_int = var_3681_int;
			var_3177_object = var_3682_object;
			var_3178_object = var_3683_object;
			var_3179_object = var_3684_object;
			var_3180_object = var_3685_object;
			func_5130(var_3680_int, var_3681_int, var_3682_object, var_3683_object, var_3684_object, var_3685_object);
			goto Label_9827;
		}
		var_3712_bool = var_3170_int == (int)4;
		if(var_3712_bool != 0) {
			var_3713_int = 0; var_3714_int = 0; var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj(); var_3718_object = Obj();
			var_3171_int = var_3713_int;
			var_3172_int = var_3714_int;
			var_3177_object = var_3715_object;
			var_3178_object = var_3716_object;
			var_3179_object = var_3717_object;
			var_3180_object = var_3718_object;
			func_5348(var_3713_int, var_3714_int, var_3715_object, var_3716_object, var_3717_object, var_3718_object);
			goto Label_9827;
		}
		var_3745_bool = var_3170_int == (int)5;
		if(var_3745_bool != 0) {
			var_3746_int = 0; var_3747_int = 0; var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj(); var_3751_object = Obj();
			var_3171_int = var_3746_int;
			var_3172_int = var_3747_int;
			var_3177_object = var_3748_object;
			var_3178_object = var_3749_object;
			var_3179_object = var_3750_object;
			var_3180_object = var_3751_object;
			func_5593(var_3746_int, var_3747_int, var_3748_object, var_3749_object, var_3750_object, var_3751_object);
			goto Label_9827;
		}
		var_3778_bool = var_3170_int == (int)6;
		if(var_3778_bool != 0) {
			var_3779_int = 0; var_3780_int = 0; var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj(); var_3784_object = Obj();
			var_3171_int = var_3779_int;
			var_3172_int = var_3780_int;
			var_3177_object = var_3781_object;
			var_3178_object = var_3782_object;
			var_3179_object = var_3783_object;
			var_3180_object = var_3784_object;
			func_5661();
			goto Label_9827;
		}
		var_3788_bool = var_3170_int == (int)7;
		if(var_3788_bool != 0) {
			var_3789_int = 0; var_3790_int = 0; var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj(); var_3794_object = Obj();
			var_3171_int = var_3789_int;
			var_3172_int = var_3790_int;
			var_3177_object = var_3791_object;
			var_3178_object = var_3792_object;
			var_3179_object = var_3793_object;
			var_3180_object = var_3794_object;
			func_5816(var_3789_int, var_3790_int, var_3791_object, var_3792_object, var_3793_object, var_3794_object);
			goto Label_9827;
		}
		var_3931_bool = var_3170_int == (int)8;
		if(var_3931_bool != 0) {
			var_3932_int = 0; var_3933_int = 0; var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj(); var_3937_object = Obj();
			var_3171_int = var_3932_int;
			var_3172_int = var_3933_int;
			var_3177_object = var_3934_object;
			var_3178_object = var_3935_object;
			var_3179_object = var_3936_object;
			var_3180_object = var_3937_object;
			func_6016(var_3932_int, var_3933_int, var_3934_object, var_3935_object, var_3936_object, var_3937_object);
			goto Label_9827;
		}
		var_3964_bool = var_3170_int == (int)9;
		if(var_3964_bool != 0) {
			var_3965_int = 0; var_3966_int = 0; var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj(); var_3970_object = Obj();
			var_3171_int = var_3965_int;
			var_3172_int = var_3966_int;
			var_3177_object = var_3967_object;
			var_3178_object = var_3968_object;
			var_3179_object = var_3969_object;
			var_3180_object = var_3970_object;
			func_6219(var_3965_int, var_3966_int, var_3967_object, var_3968_object, var_3969_object, var_3970_object);
			goto Label_9827;
		}
		var_3997_bool = var_3170_int == (int)10;
		if(var_3997_bool != 0) {
			var_3998_int = 0; var_3999_int = 0; var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj(); var_4003_object = Obj();
			var_3171_int = var_3998_int;
			var_3172_int = var_3999_int;
			var_3177_object = var_4000_object;
			var_3178_object = var_4001_object;
			var_3179_object = var_4002_object;
			var_3180_object = var_4003_object;
			func_6428(var_3998_int, var_3999_int, var_4000_object, var_4001_object, var_4002_object, var_4003_object);
			goto Label_9827;
		}
		var_4030_bool = var_3170_int == (int)11;
		if(var_4030_bool != 0) {
			var_4031_int = 0; var_4032_int = 0; var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj(); var_4036_object = Obj();
			var_3171_int = var_4031_int;
			var_3172_int = var_4032_int;
			var_3177_object = var_4033_object;
			var_3178_object = var_4034_object;
			var_3179_object = var_4035_object;
			var_3180_object = var_4036_object;
			func_6640(var_4031_int, var_4032_int, var_4033_object, var_4034_object, var_4035_object, var_4036_object);
			goto Label_9827;
		}
		var_4063_bool = var_3170_int == (int)12;
		if(var_4063_bool != 0) {
			var_4064_int = 0; var_4065_int = 0; var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj(); var_4069_object = Obj();
			var_3171_int = var_4064_int;
			var_3172_int = var_4065_int;
			var_3177_object = var_4066_object;
			var_3178_object = var_4067_object;
			var_3179_object = var_4068_object;
			var_3180_object = var_4069_object;
			func_6837(var_4064_int, var_4065_int, var_4066_object, var_4067_object, var_4068_object, var_4069_object);
			goto Label_9827;
		}
		var_4096_bool = var_3170_int == (int)13;
		if(var_4096_bool != 0) {
			var_4097_int = 0; var_4098_int = 0; var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj(); var_4102_object = Obj();
			var_3171_int = var_4097_int;
			var_3172_int = var_4098_int;
			var_3177_object = var_4099_object;
			var_3178_object = var_4100_object;
			var_3179_object = var_4101_object;
			var_3180_object = var_4102_object;
			func_7040(var_4097_int, var_4098_int, var_4099_object, var_4100_object, var_4101_object, var_4102_object);
			goto Label_9827;
		}
		var_4129_bool = var_3170_int == (int)14;
		if(var_4129_bool != 0) {
			var_4130_int = 0; var_4131_int = 0; var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj(); var_4135_object = Obj();
			var_3171_int = var_4130_int;
			var_3172_int = var_4131_int;
			var_3177_object = var_4132_object;
			var_3178_object = var_4133_object;
			var_3179_object = var_4134_object;
			var_3180_object = var_4135_object;
			func_7240(var_4130_int, var_4131_int, var_4132_object, var_4133_object, var_4134_object, var_4135_object);
			goto Label_9827;
		}
		var_4272_bool = var_3170_int == (int)15;
		if(var_4272_bool == 0) goto Label_9827;
		var_4273_int = 0; var_4274_int = 0; var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj(); var_4278_object = Obj();
		var_3171_int = var_4273_int;
		var_3172_int = var_4274_int;
		var_3177_object = var_4275_object;
		var_3178_object = var_4276_object;
		var_3179_object = var_4277_object;
		var_3180_object = var_4278_object;
		func_7422(var_4273_int, var_4274_int, var_4275_object, var_4276_object, var_4277_object, var_4278_object);
	}
Label_9827:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_6536(var_1671_int, var_1672_int, var_1673_object, var_1674_object, var_1675_object, var_1676_object)
{
	var_1678_bool = var_1672_int == (int)0;
	if(var_1678_bool != 0) {
		var_1679_int = 0; var_1680_bool = 0;
		func_802((int)11, (bool)0);
		var_1681_int = 0; var_1682_bool = 0; var_1683_int = 0;
		func_819((int)11, (bool)0, (int)1);
		var_1684_int = 0; var_1685_int = 0; var_1686_object = Obj(); var_1687_object = Obj(); var_1688_object = Obj();
		var_1684_int = 11;
		var_1671_int = var_1685_int;
		var_1673_object = var_1686_object;
		var_1674_object = var_1687_object;
		var_1675_object = var_1688_object;
		func_628(var_1685_int, var_1686_object, var_1687_object, var_1688_object);
		var_1689_object = Obj(); var_1690_int = 0;
		var_1676_object = var_1689_object;
		func_311(var_1689_object, (int)0);
		var_1691_int = 0; var_1692_bool = 0; var_1693_int = 0;
		func_876((int)11, (bool)0, (int)5);
		var_1694_int = 0; var_1695_bool = 0; var_1696_int = 0;
		func_938((int)11, (bool)0, (int)5);
	}
	var_1697_int = 0; var_1698_int = 0;
	var_1672_int = var_1698_int;
	func_989((int)11, var_1698_int);
	var_1699_int = 0; var_1700_int = 0; var_1701_int = 0;
	var_1671_int = var_1700_int;
	var_1672_int = var_1701_int;
	func_1630((int)11, var_1700_int, var_1701_int);
	return 0;
}


func_10634()
{
	var_5144_object = Obj(); var_5145_object = Obj();
	func_12503(Obj());
	var_5146_object = var_5145_object;
	var_5151_float = 0;
	func_290(var_5151_float);
	@@var_5145_object:AddMark("d9q03GotoLara", "pt_map_lara", (int)0, (int)515294, var_5151_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_14735(var_4306_int)
{
	var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_object = Obj(); var_4312_object = Obj(); var_4313_object = Obj(); var_4314_object = Obj(); var_4315_object = Obj(); var_4316_object = Obj(); var_4317_object = Obj(); var_4318_object = Obj(); var_4319_object = Obj(); var_4320_object = Obj(); var_4321_object = Obj(); var_4322_object = Obj(); var_4323_object = Obj(); var_4324_object = Obj();
	var_4326_bool = var_4306_int == (int)1;
	if(var_4326_bool != 0) {
		Trace("Special diseased house: r4_house_2_02");
		GetSceneByName(var_4316_object, "r4_house_2_02");
		ReplaceScene(var_4316_object, "s_r4_house_2_02.isc");
		var_4316_object = 0;
	} else {
		var_4331_bool = var_4306_int == (int)2;
		if(var_4331_bool != 0) {
			Trace("Special house: r7_house2_01");
			GetSceneByName(var_4317_object, "r7_house2_01");
			ReplaceScene(var_4317_object, "r7_house2_01_d3q02.isc");
			var_4317_object = 0;
			goto Label_14855;
		}
		var_4336_bool = var_4306_int == (int)3;
		if(var_4336_bool != 0) {
			Trace("Special diseased house: house7_03");
			GetSceneByName(var_4318_object, "house7_03");
			ReplaceScene(var_4318_object, "s_house7_03.isc");
			var_4318_object = 0;
			goto Label_14855;
		}
		var_4341_bool = var_4306_int == (int)4;
		if(var_4341_bool != 0) {
			GetSceneByName(var_4319_object, "theater");
			ReplaceScene(var_4319_object, "dtheater_danko.isc");
			var_4319_object = 0;
			goto Label_14855;
		}
		var_4345_bool = var_4306_int == (int)5;
		if(var_4345_bool != 0) {
			Trace("Special house: sobor (with corpses)");
			GetSceneByName(var_4320_object, "sobor");
			ReplaceScene(var_4320_object, "sobor_trup.isc");
			var_4320_object = 0;
			goto Label_14855;
		}
		var_4350_bool = var_4306_int == (int)6;
		if(var_4350_bool != 0) {
			Trace("Special house: sobor (normal)");
			GetSceneByName(var_4321_object, "sobor");
			ReplaceScene(var_4321_object, "sobor_danko.isc");
			var_4321_object = 0;
			goto Label_14855;
		}
		var_4355_bool = var_4306_int == (int)7;
		if(var_4355_bool != 0) {
			Trace("Special diseased house: r4_house_2_02");
			GetSceneByName(var_4322_object, "r4_house_2_02");
			ReplaceScene(var_4322_object, "s_r4_house_2_02.isc");
			var_4322_object = 0;
			goto Label_14855;
		}
		var_4360_bool = var_4306_int == (int)8;
		if(var_4360_bool != 0) {
			Trace("Special replaced house: uprava_admin");
			GetSceneByName(var_4323_object, "uprava_admin");
			ReplaceScene(var_4323_object, "uprava_admin_army_danko.isc");
			var_4323_object = 0;
			goto Label_14855;
		}
		var_4365_bool = var_4306_int == (int)11;
		if(var_4365_bool == 0) goto Label_14855;
		GetSceneByName(var_4324_object, "theater");
		ReplaceScene(var_4324_object, "theater_danko.isc");
		var_4324_object = 0;
	}
Label_14855:
	return 18;
	
}


func_4497(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object)
{
	var_3194_bool = var_3188_int == (int)0;
	if(var_3194_bool != 0) {
		var_3195_int = 0; var_3196_bool = 0;
		func_802((int)0, (bool)0);
		var_3197_int = 0; var_3198_bool = 0; var_3199_int = 0;
		func_819((int)0, (bool)0, (int)1);
		var_3200_int = 0; var_3201_int = 0; var_3202_object = Obj(); var_3203_object = Obj(); var_3204_object = Obj();
		var_3187_int = var_3201_int;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		var_3191_object = var_3204_object;
		func_726((int)0, var_3201_int, var_3202_object, var_3203_object, var_3204_object);
		var_3239_object = Obj(); var_3240_int = 0;
		var_3192_object = var_3239_object;
		func_311(var_3239_object, (int)2);
		var_3241_int = 0; var_3242_bool = 0; var_3243_int = 0;
		func_876((int)0, (bool)0, (int)4);
		var_3244_int = 0; var_3245_bool = 0; var_3246_int = 0;
		func_938((int)0, (bool)1, (int)4);
	}
	var_3247_int = 0; var_3248_bool = 0;
	func_785((int)0, (bool)0);
	var_3249_int = 0; var_3250_int = 0; var_3251_int = 0;
	var_3187_int = var_3250_int;
	var_3188_int = var_3251_int;
	func_4041((int)0, var_3250_int, var_3251_int);
	return 0;
}


func_3477(var_4158_int, var_4159_int, var_4160_int)
{
	var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0; var_4168_int = 0;
	var_4169_bool = 0;
	var_4169_bool = 0;
	var_4171_bool = var_4160_int > (int)8;
	if(var_4171_bool != 0) {
		var_4173_bool = var_4160_int < (int)21;
		if(var_4173_bool != 0) {
			var_4169_bool = 1;
		}
	}
	if(var_4169_bool != 0) {
		var_4174_int = 0; var_4175_string = ""; var_4176_string = ""; var_4177_int = 0;
		var_4158_int = var_4174_int;
		func_509(var_4174_int, "pers_rat", "rat.xml", (int)3);
		var_4178_int = 0; var_4179_string = ""; var_4180_string = ""; var_4181_int = 0;
		var_4158_int = var_4178_int;
		func_509(var_4178_int, "pers_alkash", "alkash.xml", (int)2);
		var_4182_int = 0; var_4183_string = ""; var_4184_string = ""; var_4185_int = 0;
		var_4158_int = var_4182_int;
		func_509(var_4182_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_4187_float = 0; var_4188_int = 0;
		var_4159_int = var_4188_int;
		func_1171(var_4187_float, var_4188_int);
		var_4165_int = (int)2 * var_4187_float;
		var_4189_int = var_4165_int;
		if(var_4189_int != 0) {
			var_4190_int = 0; var_4191_string = ""; var_4192_string = ""; var_4193_int = 0;
			var_4158_int = var_4190_int;
			var_4165_int = var_4193_int;
			func_509(var_4190_int, "pers_grabitel", "grabitel.xml", var_4193_int);
		}
		var_4195_int = var_4159_int + (int)1;
		var_4197_bool = var_4195_int >= (int)2;
		if(var_4197_bool != 0) {
			var_4198_int = 0; var_4199_string = ""; var_4200_string = ""; var_4201_int = 0;
			var_4158_int = var_4198_int;
			func_509(var_4198_int, "pers_patrool", "patrol.xml", (int)2);
			var_4202_bool = 0; var_4203_int = 0;
			var_4159_int = var_4203_int;
			func_1378(var_4202_bool, var_4203_int);
			if(var_4202_bool != 0) {
				var_4204_int = 0; var_4205_string = ""; var_4206_string = ""; var_4207_int = 0;
				var_4158_int = var_4204_int;
				func_509(var_4204_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_4209_float = 0; var_4210_int = 0;
		var_4159_int = var_4210_int;
		func_1261(var_4209_float, var_4210_int);
		var_4166_int = (int)1 * var_4209_float;
		var_4211_int = var_4166_int;
		if(var_4211_int != 0) {
			var_4212_int = 0; var_4213_string = ""; var_4214_string = ""; var_4215_int = 0;
			var_4158_int = var_4212_int;
			var_4166_int = var_4215_int;
			func_509(var_4212_int, "pers_bomber", "bomber.xml", var_4215_int);
		}
	} else {
		var_4229_int = 0; var_4230_string = ""; var_4231_string = ""; var_4232_int = 0;
		var_4158_int = var_4229_int;
		func_509(var_4229_int, "pers_rat", "rat.xml", (int)5);
		var_4233_int = 0; var_4234_string = ""; var_4235_string = ""; var_4236_int = 0;
		var_4158_int = var_4233_int;
		func_509(var_4233_int, "pers_alkash", "alkash.xml", (int)1);
		var_4238_int = var_4159_int + (int)1;
		var_4240_bool = var_4238_int >= (int)2;
		if(var_4240_bool != 0) {
			var_4241_int = 0; var_4242_string = ""; var_4243_string = ""; var_4244_int = 0;
			var_4158_int = var_4241_int;
			func_509(var_4241_int, "pers_patrool", "patrol.xml", (int)1);
			var_4245_bool = 0; var_4246_int = 0;
			var_4159_int = var_4246_int;
			func_1378(var_4245_bool, var_4246_int);
			if(var_4245_bool != 0) {
				var_4247_int = 0; var_4248_string = ""; var_4249_string = ""; var_4250_int = 0;
				var_4158_int = var_4247_int;
				func_509(var_4247_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_4251_int = 0; var_4252_string = ""; var_4253_string = ""; var_4254_int = 0;
		var_4158_int = var_4251_int;
		func_509(var_4251_int, "pers_rat", "rat.xml", (int)2);
		var_4256_float = 0; var_4257_int = 0;
		var_4159_int = var_4257_int;
		func_1171(var_4256_float, var_4257_int);
		var_4167_int = (int)3 * var_4256_float;
		var_4258_int = var_4167_int;
		if(var_4258_int != 0) {
			var_4259_int = 0; var_4260_string = ""; var_4261_string = ""; var_4262_int = 0;
			var_4158_int = var_4259_int;
			var_4167_int = var_4262_int;
			func_509(var_4259_int, "pers_grabitel", "grabitel.xml", var_4262_int);
		}
		var_4264_float = 0; var_4265_int = 0;
		var_4159_int = var_4265_int;
		func_1261(var_4264_float, var_4265_int);
		var_4168_int = (int)1 * var_4264_float;
		var_4266_int = var_4168_int;
		if(var_4266_int == 0) goto Label_3639;
		var_4267_int = 0; var_4268_string = ""; var_4269_string = ""; var_4270_int = 0;
		var_4158_int = var_4267_int;
		var_4168_int = var_4270_int;
		func_509(var_4267_int, "pers_bomber", "bomber.xml", var_4270_int);
	}
Label_3639:
	var_4216_bool = 0; var_4217_int = 0; var_4218_int = 0;
	var_4159_int = var_4217_int;
	var_4160_int = var_4218_int;
	func_1351(var_4216_bool, var_4217_int, var_4218_int);
	if(var_4216_bool != 0) {
		var_4219_int = 0; var_4220_string = ""; var_4221_string = ""; var_4222_int = 0;
		var_4158_int = var_4219_int;
		func_509(var_4219_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_4223_bool = 0; var_4224_int = 0;
	var_4159_int = var_4224_int;
	func_1378(var_4223_bool, var_4224_int);
	if(var_4223_bool != 0) {
		var_4225_int = 0; var_4226_string = ""; var_4227_string = ""; var_4228_int = 0;
		var_4158_int = var_4225_int;
		func_509(var_4225_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_406(var_493_bool, var_494_int)
{
	var_495_int = 0; var_496_int = 0;
	var_497_string = ""; var_498_int = 0;
	var_494_int = var_498_int;
	func_305(var_497_string, var_498_int);
	GetVariable(var_497_string, var_496_int);
	var_500_int = var_496_int & (int)3;
	var_493_bool = var_500_int == (int)0;
	return 2;
}


func_10650()
{
	var_4964_object = Obj(); var_4965_object = Obj();
	func_12503(Obj());
	var_4966_object = var_4965_object;
	var_4971_float = 0;
	func_290(var_4971_float);
	@@var_4965_object:AddMark("d9q04GotoAnna", "pt_map_anna", (int)0, (int)511375, var_4971_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11679()
{
	var_5875_object = Obj(); var_5876_object = Obj(); var_5877_object = Obj(); var_5878_object = Obj();
	func_12503(Obj());
	var_5879_object = var_5877_object;
	@@var_5877_object:FindMark(var_5878_object, "d7q01AglajaFindLierSelf");
	var_5881_object = var_5878_object;
	if(var_5881_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q01AglajaGotoBirdmaskSelf");
	var_5883_object = var_5878_object;
	if(var_5883_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q01BirdmaskD");
	var_5885_object = var_5878_object;
	if(var_5885_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q01BirdmaskM");
	var_5887_object = var_5878_object;
	if(var_5887_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q01BirdmaskU");
	var_5889_object = var_5878_object;
	if(var_5889_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q02AlexandrGotoPetr");
	var_5891_object = var_5878_object;
	if(var_5891_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q02MarkGotoAlexandr");
	var_5893_object = var_5878_object;
	if(var_5893_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q02MarkGotoCemetery");
	var_5895_object = var_5878_object;
	if(var_5895_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q04WastedGotoGatherer");
	var_5897_object = var_5878_object;
	if(var_5897_object != 0) {
		@@var_5878_object:Remove();
	}
	@@var_5877_object:FindMark(var_5878_object, "d7q04NudeGotoAndrei");
	var_5899_object = var_5878_object;
	if(var_5899_object != 0) {
		@@var_5878_object:Remove();
	}
	var_5900_bool = 0; var_5901_int = 0;
	func_12478(var_5900_bool, (int)165);
	var_5902_bool = 0; var_5903_int = 0;
	func_12478(var_5902_bool, (int)170);
	var_5904_bool = 0; var_5905_int = 0;
	func_12478(var_5904_bool, (int)637);
	var_5906_bool = 0; var_5907_int = 0;
	func_12478(var_5906_bool, (int)641);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_418(var_81_int)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0;
	var_86_string = ""; var_87_int = 0;
	var_81_int = var_87_int;
	func_305(var_86_string, var_87_int);
	GetVariable(var_86_string, var_84_int);
	var_89_int = var_84_int & (int)252;
	var_85_int = var_89_int | (int)0;
	var_91_string = ""; var_92_int = 0;
	var_81_int = var_92_int;
	func_305(var_91_string, var_92_int);
	SetVariable(var_91_string, var_85_int);
	return 4;
}


func_5541(var_2620_int, var_2621_int, var_2622_object, var_2623_object, var_2624_object, var_2625_object)
{
	var_2627_bool = var_2621_int == (int)0;
	if(var_2627_bool != 0) {
		var_2628_int = 0; var_2629_bool = 0;
		func_802((int)5, (bool)1);
		var_2630_int = 0; var_2631_bool = 0; var_2632_int = 0;
		func_819((int)5, (bool)1, (int)1);
		var_2633_int = 0; var_2634_int = 0; var_2635_object = Obj(); var_2636_object = Obj(); var_2637_object = Obj();
		var_2620_int = var_2634_int;
		var_2622_object = var_2635_object;
		var_2623_object = var_2636_object;
		var_2624_object = var_2637_object;
		func_647((int)5, var_2634_int, var_2635_object, var_2636_object, var_2637_object);
		var_2638_object = Obj(); var_2639_int = 0;
		var_2625_object = var_2638_object;
		func_311(var_2638_object, (int)1);
		var_2640_int = 0; var_2641_bool = 0; var_2642_int = 0;
		func_876((int)5, (bool)1, (int)4);
		var_2643_int = 0; var_2644_bool = 0; var_2645_int = 0;
		func_938((int)5, (bool)0, (int)4);
	}
	var_2646_int = 0; var_2647_bool = 0;
	func_785((int)5, (bool)0);
	var_2648_int = 0; var_2649_int = 0; var_2650_int = 0;
	var_2620_int = var_2649_int;
	var_2621_int = var_2650_int;
	func_2950((int)5, var_2649_int, var_2650_int);
	return 0;
}


func_10666()
{
	SetVariable("d8BurahLetter", (int)1);
	return 0;
}


func_10672()
{
	var_5106_int = 0; var_5107_string = "";
	func_138(var_5106_int, "map_chertez_state");
	var_5109_bool = var_5106_int <= (int)1;
	if(var_5109_bool != 0) {
		SetVariable("map_chertez_state", (int)1);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_436(var_1980_bool, var_1981_int)
{
	var_1982_int = 0; var_1983_int = 0;
	var_1984_string = ""; var_1985_int = 0;
	var_1981_int = var_1985_int;
	func_305(var_1984_string, var_1985_int);
	GetVariable(var_1984_string, var_1983_int);
	var_1987_int = var_1983_int & (int)3;
	var_1980_bool = var_1987_int == (int)1;
	return 2;
}


func_6588(var_2901_int, var_2902_int, var_2903_object, var_2904_object, var_2905_object, var_2906_object)
{
	var_2908_bool = var_2902_int == (int)0;
	if(var_2908_bool != 0) {
		var_2909_int = 0; var_2910_bool = 0;
		func_802((int)11, (bool)0);
		var_2911_int = 0; var_2912_bool = 0; var_2913_int = 0;
		func_819((int)11, (bool)1, (int)1);
		var_2914_int = 0; var_2915_int = 0; var_2916_object = Obj(); var_2917_object = Obj(); var_2918_object = Obj();
		var_2901_int = var_2915_int;
		var_2903_object = var_2916_object;
		var_2904_object = var_2917_object;
		var_2905_object = var_2918_object;
		func_647((int)11, var_2915_int, var_2916_object, var_2917_object, var_2918_object);
		var_2919_object = Obj(); var_2920_int = 0;
		var_2906_object = var_2919_object;
		func_311(var_2919_object, (int)1);
		var_2921_int = 0; var_2922_bool = 0; var_2923_int = 0;
		func_876((int)11, (bool)1, (int)5);
		var_2924_int = 0; var_2925_bool = 0; var_2926_int = 0;
		func_938((int)11, (bool)0, (int)5);
	}
	var_2927_int = 0; var_2928_bool = 0;
	func_785((int)11, (bool)0);
	var_2929_int = 0; var_2930_int = 0; var_2931_int = 0;
	var_2901_int = var_2930_int;
	var_2902_int = var_2931_int;
	func_2770((int)11, var_2930_int, var_2931_int);
	return 0;
}


func_7614(var_10_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj();
	var_28_object = GlobalVars[14];
	@@var_28_object:size(var_20_int);
	var_29_bool = 0;
	var_29_bool = 1;
	var_30_bool = var_10_int >= var_20_int;
	if(var_30_bool != 1) {
		var_32_bool = var_10_int == (int)-1;
		if(var_32_bool != 1) {
			var_29_bool = 0;
		}
	}
	if(var_29_bool != 0) {
		var_34_int = "Wrong bonfire index " + var_10_int;
		Trace(var_34_int);
		return 16;
	}
	var_35_object = GlobalVars[14];
	@@var_35_object:get(var_21_object, var_10_int);
	var_38_int = var_10_int + (int)1;
	var_39_int = "bonfire_light" + var_38_int;
	FindActor(var_22_object, var_39_int);
	var_40_bool = var_22_object == 0; //@nz
	if(var_40_bool != 0) {
		var_43_int = var_10_int + (int)1;
		var_44_int = "Bofire  light " + var_43_int;
		var_46_int = var_44_int + " not found";
		Trace(var_46_int);
	} else {
		@@var_22_object:Switch((bool)1);
	}
	GetMainOutdoorScene(var_23_object);
	var_49_int = var_10_int + (int)1;
	var_50_int = "pt_bonfire" + var_49_int;
	@@var_23_object:GetLocator(var_50_int, var_26_bool, var_24_cvector, var_25_cvector);
	var_51_bool = var_26_bool == 0; //@nz
	if(var_51_bool != 0) {
		Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	var_53_bool = var_21_object == 0; //@nz
	if(var_53_bool != 0) {
		AddActorByType(var_27_object, "scripted", var_23_object, var_24_cvector, var_25_cvector, "bonfire_big.xml");
		var_56_object = GlobalVars[14];
		@@var_56_object:set(var_10_int, var_27_object);
		var_27_object = 0;
	}
	var_59_int = var_10_int + (int)1;
	var_60_int = "Setting bonfire " + var_59_int;
	var_62_int = var_60_int + "... ok";
	Trace(var_62_int);
	return 16;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_448(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0;
	var_29_string = ""; var_30_int = 0;
	var_24_int = var_30_int;
	func_305(var_29_string, var_30_int);
	GetVariable(var_29_string, var_27_int);
	var_35_int = var_27_int & (int)252;
	var_28_int = var_35_int | (int)1;
	var_37_string = ""; var_38_int = 0;
	var_24_int = var_38_int;
	func_305(var_37_string, var_38_int);
	SetVariable(var_37_string, var_28_int);
	return 4;
}


func_10689()
{
	var_4665_int = 0; var_4666_string = "";
	func_138(var_4665_int, "map_chertez_state");
	var_4670_bool = var_4665_int <= (int)2;
	if(var_4670_bool != 0) {
		SetVariable("map_chertez_state", (int)2);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_4549(var_64_object)
{
	@@var_64_object:add("dt_house3_05_i2");
	@@var_64_object:add("dt_house3_05");
	@@var_64_object:add("dt_house3_06_i2");
	@@var_64_object:add("dt_house_1_10");
	@@var_64_object:add("house5_10");
	@@var_64_object:add("house5_07");
	@@var_64_object:add("dt_house_1_03");
	@@var_64_object:add("dt_house1_union2_04l");
	@@var_64_object:add("dt_house1_union2_04r");
	@@var_64_object:add("house5_22");
	@@var_64_object:add("house5_08");
	@@var_64_object:add("dt_house1_union2_02l");
	@@var_64_object:add("dt_house1_union2_02r");
	return 0;
}


func_10706()
{
	var_4744_int = 0; var_4745_string = "";
	func_138(var_4744_int, "map_chertez_state");
	var_4747_bool = var_4744_int <= (int)3;
	if(var_4747_bool != 0) {
		SetVariable("map_chertez_state", (int)3);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_466(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	var_76_string = ""; var_77_int = 0;
	var_73_int = var_77_int;
	func_305(var_76_string, var_77_int);
	GetVariable(var_76_string, var_75_int);
	var_79_int = var_75_int & (int)3;
	var_72_bool = var_79_int == (int)2;
	return 2;
}


func_5593(var_3746_int, var_3747_int, var_3748_object, var_3749_object, var_3750_object, var_3751_object)
{
	var_3753_bool = var_3747_int == (int)0;
	if(var_3753_bool != 0) {
		var_3754_int = 0; var_3755_bool = 0;
		func_802((int)5, (bool)0);
		var_3756_int = 0; var_3757_bool = 0; var_3758_int = 0;
		func_819((int)5, (bool)0, (int)1);
		var_3759_int = 0; var_3760_int = 0; var_3761_object = Obj(); var_3762_object = Obj(); var_3763_object = Obj();
		var_3746_int = var_3760_int;
		var_3748_object = var_3761_object;
		var_3749_object = var_3762_object;
		var_3750_object = var_3763_object;
		func_726((int)5, var_3760_int, var_3761_object, var_3762_object, var_3763_object);
		var_3764_object = Obj(); var_3765_int = 0;
		var_3751_object = var_3764_object;
		func_311(var_3764_object, (int)2);
		var_3766_int = 0; var_3767_bool = 0; var_3768_int = 0;
		func_876((int)5, (bool)0, (int)4);
		var_3769_int = 0; var_3770_bool = 0; var_3771_int = 0;
		func_938((int)5, (bool)1, (int)4);
	}
	var_3772_int = 0; var_3773_bool = 0;
	func_785((int)5, (bool)0);
	var_3774_int = 0; var_3775_int = 0; var_3776_int = 0;
	var_3746_int = var_3775_int;
	var_3747_int = var_3776_int;
	func_3853((int)5, var_3775_int, var_3776_int);
	return 0;
}


func_478(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0;
	var_81_string = ""; var_82_int = 0;
	var_76_int = var_82_int;
	func_305(var_81_string, var_82_int);
	GetVariable(var_81_string, var_79_int);
	var_84_int = var_79_int & (int)252;
	var_80_int = var_84_int | (int)2;
	var_86_string = ""; var_87_int = 0;
	var_76_int = var_87_int;
	func_305(var_86_string, var_87_int);
	SetVariable(var_86_string, var_80_int);
	return 4;
}


func_10723()
{
	var_4859_int = 0; var_4860_string = "";
	func_138(var_4859_int, "map_chertez_state");
	var_4862_bool = var_4859_int <= (int)4;
	if(var_4862_bool != 0) {
		SetVariable("map_chertez_state", (int)4);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_4590(var_887_int, var_888_int, var_889_object, var_890_object, var_891_object, var_892_object)
{
	var_894_bool = var_888_int == (int)0;
	if(var_894_bool != 0) {
		var_895_int = 0; var_896_bool = 0;
		func_802((int)1, (bool)0);
		var_897_int = 0; var_898_bool = 0; var_899_int = 0;
		func_819((int)1, (bool)0, (int)1);
		var_900_int = 0; var_901_int = 0; var_902_object = Obj(); var_903_object = Obj(); var_904_object = Obj();
		var_900_int = 1;
		var_887_int = var_901_int;
		var_889_object = var_902_object;
		var_890_object = var_903_object;
		var_891_object = var_904_object;
		func_628(var_901_int, var_902_object, var_903_object, var_904_object);
		var_905_object = Obj(); var_906_int = 0;
		var_892_object = var_905_object;
		func_311(var_905_object, (int)0);
		var_907_int = 0; var_908_bool = 0; var_909_int = 0;
		func_876((int)1, (bool)0, (int)8);
		var_910_int = 0; var_911_bool = 0; var_912_int = 0;
		func_938((int)1, (bool)0, (int)8);
	}
	var_913_int = 0; var_914_int = 0;
	var_888_int = var_914_int;
	func_1056((int)1, var_914_int);
	var_915_int = 0; var_916_int = 0; var_917_int = 0;
	var_887_int = var_916_int;
	var_888_int = var_917_int;
	func_2389((int)1, var_916_int, var_917_int);
	return 0;
}


func_496(var_488_int)
{
	var_489_object = Obj(); var_490_object = Obj();
	GetMainOutdoorScene(var_490_object);
	var_491_bool = var_490_object == 0; //@ne
	if(var_491_bool != 0) {
		Trace("City manager: main outdoor scene not found");
		return 2;
	}
	@@var_490_object:RemoveAllRegionActors(var_488_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6640(var_4031_int, var_4032_int, var_4033_object, var_4034_object, var_4035_object, var_4036_object)
{
	var_4038_bool = var_4032_int == (int)0;
	if(var_4038_bool != 0) {
		var_4039_int = 0; var_4040_bool = 0;
		func_802((int)11, (bool)1);
		var_4041_int = 0; var_4042_bool = 0; var_4043_int = 0;
		func_819((int)11, (bool)0, (int)1);
		var_4044_int = 0; var_4045_int = 0; var_4046_object = Obj(); var_4047_object = Obj(); var_4048_object = Obj();
		var_4031_int = var_4045_int;
		var_4033_object = var_4046_object;
		var_4034_object = var_4047_object;
		var_4035_object = var_4048_object;
		func_726((int)11, var_4045_int, var_4046_object, var_4047_object, var_4048_object);
		var_4049_object = Obj(); var_4050_int = 0;
		var_4036_object = var_4049_object;
		func_311(var_4049_object, (int)2);
		var_4051_int = 0; var_4052_bool = 0; var_4053_int = 0;
		func_876((int)11, (bool)0, (int)5);
		var_4054_int = 0; var_4055_bool = 0; var_4056_int = 0;
		func_938((int)11, (bool)1, (int)5);
	}
	var_4057_int = 0; var_4058_bool = 0;
	func_785((int)11, (bool)0);
	var_4059_int = 0; var_4060_int = 0; var_4061_int = 0;
	var_4031_int = var_4060_int;
	var_4032_int = var_4061_int;
	func_3665((int)11, var_4060_int, var_4061_int);
	return 0;
}


func_10740()
{
	var_4794_int = 0; var_4795_string = "";
	func_138(var_4794_int, "map_chertez_state");
	var_4797_bool = var_4794_int <= (int)6;
	if(var_4797_bool != 0) {
		SetVariable("map_chertez_state", (int)6);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_509(var_784_int, var_785_string, var_786_string, var_787_int)
{
	var_788_object = Obj(); var_789_object = Obj();
	GetMainOutdoorScene(var_789_object);
	var_790_bool = var_789_object == 0; //@ne
	if(var_790_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_789_object:SetRegionActorCount(var_784_int, var_785_string, var_786_string, var_787_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11773()
{
	var_4788_string = ""; var_4789_bool = 0;
	func_183("mnogogrannik@door1", (bool)1);
	return 0;
}


func_11780()
{
	var_5765_object = Obj(); var_5766_object = Obj(); var_5767_object = Obj(); var_5768_object = Obj();
	func_12503(Obj());
	var_5769_object = var_5767_object;
	@@var_5767_object:FindMark(var_5768_object, "d9q01GotoViktor");
	var_5771_object = var_5768_object;
	if(var_5771_object != 0) {
		@@var_5768_object:Remove();
	}
	@@var_5767_object:FindMark(var_5768_object, "d9q02GotoJulia");
	var_5773_object = var_5768_object;
	if(var_5773_object != 0) {
		@@var_5768_object:Remove();
	}
	@@var_5767_object:FindMark(var_5768_object, "d9q03GotoLara");
	var_5775_object = var_5768_object;
	if(var_5775_object != 0) {
		@@var_5768_object:Remove();
	}
	@@var_5767_object:FindMark(var_5768_object, "d9q04GotoAnna");
	var_5777_object = var_5768_object;
	if(var_5777_object != 0) {
		@@var_5768_object:Remove();
	}
	@@var_5767_object:FindMark(var_5768_object, "d9q05AglajaGotoBurah");
	var_5779_object = var_5768_object;
	if(var_5779_object != 0) {
		@@var_5768_object:Remove();
	}
	var_5780_bool = 0; var_5781_int = 0;
	func_12478(var_5780_bool, (int)182);
	var_5782_bool = 0; var_5783_int = 0;
	func_12478(var_5782_bool, (int)655);
	var_5784_bool = 0; var_5785_int = 0;
	func_12478(var_5784_bool, (int)659);
	var_5786_bool = 0; var_5787_int = 0;
	func_12478(var_5786_bool, (int)662);
	var_5788_bool = 0; var_5789_int = 0;
	func_12478(var_5788_bool, (int)764);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10757()
{
	var_4749_string = ""; var_4750_bool = 0;
	func_183("theater@door1", (bool)1);
	return 0;
}


func_14856(var_4366_object, var_4367_object, var_4368_cvector, var_4369_cvector)
{
	var_4370_object = Obj(); var_4371_object = Obj();
	@@var_4367_object:AddStationaryActor(var_4371_object, var_4368_cvector, var_4369_cvector, "pers_morlok", "Danko_arena_manager.xml");
	var_4371_object = var_4366_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_522(var_2216_int, var_2217_string, var_2218_string, var_2219_int, var_2220_int, var_2221_int)
{
	var_2222_object = Obj(); var_2223_object = Obj();
	GetMainOutdoorScene(var_2223_object);
	var_2224_bool = var_2223_object == 0; //@ne
	if(var_2224_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_2223_object:SetRegionActorCount(var_2216_int, var_2217_string, var_2218_string, var_2219_int, var_2220_int, var_2221_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7691(var_380_int)
{
	var_381_int = 0; var_382_object = Obj(); var_383_object = Obj(); var_384_int = 0; var_385_object = Obj(); var_386_object = Obj();
	var_387_object = GlobalVars[14];
	@@var_387_object:size(var_384_int);
	var_388_bool = 0;
	var_388_bool = 1;
	var_389_bool = var_380_int >= var_384_int;
	if(var_389_bool != 1) {
		var_391_bool = var_380_int == (int)-1;
		if(var_391_bool != 1) {
			var_388_bool = 0;
		}
	}
	if(var_388_bool != 0) {
		var_393_int = "Wrong bonfire index " + var_380_int;
		Trace(var_393_int);
		return 6;
	}
	var_394_object = GlobalVars[14];
	@@var_394_object:get(var_385_object, var_380_int);
	var_397_int = var_380_int + (int)1;
	var_398_int = "bonfire_light" + var_397_int;
	FindActor(var_386_object, var_398_int);
	var_399_bool = var_386_object == 0; //@nz
	if(var_399_bool != 0) {
		var_402_int = var_380_int + (int)1;
		var_403_int = "Bofire  light " + var_402_int;
		var_405_int = var_403_int + " not found";
		Trace(var_405_int);
	} else {
		@@var_386_object:Switch((bool)0);
	}
	var_406_object = var_385_object;
	if(var_406_object != 0) {
		RemoveActor(var_385_object);
	}
	var_407_object = GlobalVars[14];
	@@var_407_object:set(var_380_int, Obj());
	var_410_int = var_380_int + (int)1;
	var_411_int = "Cleanup bonfire " + var_410_int;
	var_413_int = var_411_int + "... ok";
	Trace(var_413_int);
	return 6;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10764()
{
	var_5859_string = ""; var_5860_bool = 0;
	func_183("theater@door1", (bool)0);
	return 0;
}


func_5645()
{
	return 0;
}


func_5647(var_1376_int)
{
	var_1381_int = 0; var_1382_int = 0;
	var_1376_int = var_1382_int;
	func_1056((int)6, var_1382_int);
	return 0;
}


func_10771()
{
	func_12424();
	return 0;
}


func_5654()
{
	var_2659_int = 0; var_2660_bool = 0;
	func_785((int)6, (bool)0);
	return 0;
}


func_535(var_2143_int, var_2144_string, var_2145_string, var_2146_int)
{
	var_2147_object = Obj(); var_2148_object = Obj();
	GetMainOutdoorScene(var_2148_object);
	var_2149_bool = var_2148_object == 0; //@ne
	if(var_2149_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_2148_object:SetRegionActorCountByType(var_2143_int, var_2144_string, var_2145_string, var_2146_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10776(var_4811_object)
{
	var_4815_bool = 0; var_4816_object = Obj(); var_4817_float = 0;
	var_4811_object = var_4816_object;
	func_200(var_4815_bool, var_4816_object, (float)-0.30000001192092896);
	return 0;
}


func_5661()
{
	var_3785_int = 0; var_3786_bool = 0;
	func_785((int)6, (bool)0);
	return 0;
}


func_2590(var_3028_int, var_3029_int, var_3030_int)
{
	var_3031_int = 0; var_3032_int = 0; var_3033_int = 0; var_3034_int = 0;
	var_3035_bool = 0;
	var_3035_bool = 0;
	var_3037_bool = var_3030_int > (int)8;
	if(var_3037_bool != 0) {
		var_3039_bool = var_3030_int < (int)21;
		if(var_3039_bool != 0) {
			var_3035_bool = 1;
		}
	}
	if(var_3035_bool != 0) {
		var_3040_int = 0; var_3041_string = ""; var_3042_string = ""; var_3043_int = 0;
		var_3028_int = var_3040_int;
		func_509(var_3040_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_3044_int = 0; var_3045_string = ""; var_3046_string = ""; var_3047_int = 0;
		var_3028_int = var_3044_int;
		func_509(var_3044_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)6);
		var_3048_int = 0; var_3049_string = ""; var_3050_string = ""; var_3051_int = 0;
		var_3028_int = var_3048_int;
		func_509(var_3048_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_3052_int = 0; var_3053_string = ""; var_3054_string = ""; var_3055_int = 0;
		var_3028_int = var_3052_int;
		func_535(var_3052_int, "fog", "fog.xml", (int)8);
		var_3057_bool = var_3029_int >= (int)5;
		if(var_3057_bool != 0) {
			var_3058_int = 0; var_3059_string = ""; var_3060_string = ""; var_3061_int = 0;
			var_3028_int = var_3058_int;
			func_535(var_3058_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_3063_float = 0; var_3064_int = 0;
		var_3029_int = var_3064_int;
		func_1261(var_3063_float, var_3064_int);
		var_3033_int = (int)1 * var_3063_float;
		var_3065_int = var_3033_int;
		if(var_3065_int != 0) {
			var_3066_int = 0; var_3067_string = ""; var_3068_string = ""; var_3069_int = 0;
			var_3028_int = var_3066_int;
			var_3033_int = var_3069_int;
			func_509(var_3066_int, "pers_bomber", "bomber.xml", var_3069_int);
		}
	} else {
		var_3107_int = 0; var_3108_string = ""; var_3109_string = ""; var_3110_int = 0;
		var_3028_int = var_3107_int;
		func_509(var_3107_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_3111_int = 0; var_3112_string = ""; var_3113_string = ""; var_3114_int = 0;
		var_3028_int = var_3111_int;
		func_509(var_3111_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_3115_int = 0; var_3116_string = ""; var_3117_string = ""; var_3118_int = 0;
		var_3028_int = var_3115_int;
		func_509(var_3115_int, "pers_rat_big", "rat_big.xml", (int)4);
		var_3119_int = 0; var_3120_string = ""; var_3121_string = ""; var_3122_int = 0;
		var_3028_int = var_3119_int;
		func_535(var_3119_int, "fog", "fog.xml", (int)6);
		var_3124_bool = var_3029_int >= (int)5;
		if(var_3124_bool != 0) {
			var_3125_int = 0; var_3126_string = ""; var_3127_string = ""; var_3128_int = 0;
			var_3028_int = var_3125_int;
			func_535(var_3125_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_3130_float = 0; var_3131_int = 0;
		var_3029_int = var_3131_int;
		func_1261(var_3130_float, var_3131_int);
		var_3034_int = (int)1 * var_3130_float;
		var_3132_int = var_3034_int;
		if(var_3132_int == 0) goto Label_2708;
		var_3133_int = 0; var_3134_string = ""; var_3135_string = ""; var_3136_int = 0;
		var_3028_int = var_3133_int;
		var_3034_int = var_3136_int;
		func_509(var_3133_int, "pers_bomber", "bomber.xml", var_3136_int);
	}
Label_2708:
	var_3070_int = 0; var_3071_string = ""; var_3072_string = ""; var_3073_int = 0; var_3074_int = 0; var_3075_int = 0;
	var_3028_int = var_3070_int;
	func_522(var_3070_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_3076_int = 0; var_3077_string = ""; var_3078_string = ""; var_3079_int = 0; var_3080_int = 0; var_3081_int = 0;
	var_3028_int = var_3076_int;
	func_522(var_3076_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_3082_int = 0; var_3083_string = ""; var_3084_string = ""; var_3085_int = 0; var_3086_int = 0; var_3087_int = 0;
	var_3028_int = var_3082_int;
	func_522(var_3082_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_3088_int = 0; var_3089_string = ""; var_3090_string = ""; var_3091_int = 0; var_3092_int = 0; var_3093_int = 0;
	var_3028_int = var_3088_int;
	func_522(var_3088_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_3094_bool = 0; var_3095_int = 0; var_3096_int = 0;
	var_3029_int = var_3095_int;
	var_3030_int = var_3096_int;
	func_1351(var_3094_bool, var_3095_int, var_3096_int);
	if(var_3094_bool != 0) {
		var_3097_int = 0; var_3098_string = ""; var_3099_string = ""; var_3100_int = 0;
		var_3028_int = var_3097_int;
		func_509(var_3097_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3101_bool = 0; var_3102_int = 0;
	var_3029_int = var_3102_int;
	func_1378(var_3101_bool, var_3102_int);
	if(var_3101_bool != 0) {
		var_3103_int = 0; var_3104_string = ""; var_3105_string = ""; var_3106_int = 0;
		var_3028_int = var_3103_int;
		func_509(var_3103_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	return 4;
	
}


func_10783()
{
	var_4782_string = ""; var_4783_bool = 0;
	func_183("termitnik@door1", (bool)1);
	return 0;
}


func_4642(var_2276_int, var_2277_int, var_2278_object, var_2279_object, var_2280_object, var_2281_object)
{
	var_2283_bool = var_2277_int == (int)0;
	if(var_2283_bool != 0) {
		var_2284_int = 0; var_2285_bool = 0;
		func_802((int)1, (bool)1);
		var_2286_int = 0; var_2287_bool = 0; var_2288_int = 0;
		func_819((int)1, (bool)1, (int)1);
		var_2289_int = 0; var_2290_int = 0; var_2291_object = Obj(); var_2292_object = Obj(); var_2293_object = Obj();
		var_2276_int = var_2290_int;
		var_2278_object = var_2291_object;
		var_2279_object = var_2292_object;
		var_2280_object = var_2293_object;
		func_647((int)1, var_2290_int, var_2291_object, var_2292_object, var_2293_object);
		var_2294_object = Obj(); var_2295_int = 0;
		var_2281_object = var_2294_object;
		func_311(var_2294_object, (int)1);
		var_2296_int = 0; var_2297_bool = 0; var_2298_int = 0;
		func_876((int)1, (bool)1, (int)8);
		var_2299_int = 0; var_2300_bool = 0; var_2301_int = 0;
		func_938((int)1, (bool)0, (int)8);
	}
	var_2302_int = 0; var_2303_bool = 0;
	func_785((int)1, (bool)0);
	var_2304_int = 0; var_2305_int = 0; var_2306_int = 0;
	var_2276_int = var_2305_int;
	var_2277_int = var_2306_int;
	func_3310((int)1, var_2305_int, var_2306_int);
	return 0;
}


func_548(var_572_int, var_573_bool)
{
	var_574_object = Obj(); var_575_object = Obj(); var_576_bool = 0; var_577_object = Obj(); var_578_object = Obj(); var_579_object = Obj(); var_580_bool = 0; var_581_object = Obj();
	GetMainOutdoorScene(var_578_object);
	var_583_int = (int)101 + var_572_int;
	@@var_578_object:GetGroupActors(var_579_object, var_583_int);
	var_584_object = var_579_object;
	if(var_584_object != 0) {

	Label_557:
		@@var_579_object:Next(var_580_bool, var_581_object);
		var_585_bool = var_580_bool;
		if(var_585_bool != 0) {
			var_586_bool = 0; var_587_object = Obj(); var_588_string = "";
			var_581_object = var_587_object;
			func_87(var_586_bool, var_587_object, "locked");
			if(var_586_bool != 0) {
				@@var_581_object:SetProperty("locked", var_573_bool);
			} else {
				var_597_int = "Actor \"" + var_581_object;
				var_599_int = var_597_int + "\" can't be locked";
				Trace(var_599_int);
		}
			var_581_object = 0;
	}
		return 8;
	}
	goto Label_557;
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_6692(var_266_object)
{
	@@var_266_object:add("r6_house2_03");
	@@var_266_object:add("r6_house4_01_i2");
	@@var_266_object:add("r6_house4_02_i2");
	@@var_266_object:add("r6_house4_02");
	@@var_266_object:add("r6_house3_02_i2");
	@@var_266_object:add("r6_house3_02");
	@@var_266_object:add("r6_house3_01_i2");
	@@var_266_object:add("r6_house3_01");
	@@var_266_object:add("r6_house2_01");
	@@var_266_object:add("r6_house7_01");
	@@var_266_object:add("r6_house7_02");
	@@var_266_object:add("r6_House6_01");
	@@var_266_object:add("r6_house2_02");
	return 0;
}


func_10790()
{
	var_5912_string = ""; var_5913_bool = 0;
	func_183("termitnik@door1", (bool)0);
	return 0;
}


func_5668(var_178_object)
{
	@@var_178_object:add("House6_02");
	@@var_178_object:add("House6_01");
	@@var_178_object:add("house_2_01");
	@@var_178_object:add("house7_03");
	@@var_178_object:add("house7_02");
	@@var_178_object:add("house3_01_i2");
	@@var_178_object:add("house3_01");
	@@var_178_object:add("house_2_03");
	@@var_178_object:add("house_2_02");
	@@var_178_object:add("house4_01_i2");
	@@var_178_object:add("house4_01");
	@@var_178_object:add("House6_05");
	@@var_178_object:add("House6_04");
	@@var_178_object:add("House6_03");
	return 0;
}


func_10797()
{
	SetVariable("resque_list", (int)1);
	func_14467();
	return 0;
}


func_8754()
{
	var_4466_int = 0; var_4467_object = Obj(); var_4468_int = 0; var_4469_object = Obj(); var_4470_bool = 0; var_4471_cvector = CVector(0,0,0); var_4472_cvector = CVector(0,0,0); var_4473_string = ""; var_4474_int = 0; var_4475_object = Obj(); var_4476_int = 0; var_4477_object = Obj(); var_4478_bool = 0; var_4479_cvector = CVector(0,0,0); var_4480_cvector = CVector(0,0,0); var_4481_string = "";
	var_4482_int = 0;
	func_12520(var_4482_int);
	var_4484_bool = var_4482_int == (int)0;
	if(var_4484_bool != 0) {
		return 16;
	}
	var_4485_object = GlobalVars[6];
	@@var_4485_object:size(var_4474_int);
	GetMainOutdoorScene(var_4475_object);
	var_4476_int = 0;
	
Label_8768:
	var_4486_bool = var_4476_int < var_4474_int;
	if(var_4486_bool != 0) {
		var_4487_object = GlobalVars[6];
		@@var_4487_object:get(var_4477_object, var_4476_int);
		var_4488_object = var_4477_object;
		if(var_4488_object != 0) {
		} else {
			var_4492_int = var_4476_int + (int)1;
			var_4493_int = "pt_plant" + var_4492_int;
			@@var_4475_object:GetLocator(var_4493_int, var_4478_bool, var_4479_cvector, var_4480_cvector);
			var_4494_bool = var_4478_bool == 0; //@nz
			if(var_4494_bool != 0) {
				Trace("Plant point not found");
				goto Label_8824;
			}
			RandOneOf(var_4481_string, (int)6, (int)3, (int)3, (int)3, (int)1, (int)1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			var_4508_string = var_4481_string;
			if(var_4508_string != 0) {
				var_4511_int = "item_" + var_4481_string;
				var_4513_int = var_4511_int + "_stat.xml";
				@@var_4475_object:AddStationaryActorByType(var_4477_object, var_4479_cvector, var_4480_cvector, "scripted", var_4513_int);
				var_4514_object = GlobalVars[6];
				@@var_4514_object:set(var_4476_int, var_4477_object);
				var_4516_int = "New plant: \"" + var_4481_string;
				var_4518_int = var_4516_int + "\" at location #";
				var_4520_int = var_4476_int + (int)1;
				var_4521_int = var_4518_int + var_4520_int;
				Trace(var_4521_int);
			}
			var_4477_object = 0;
	}
		var_4476_int = var_4476_int + (int)1;
		goto Label_8768;
	}
	return 16;
	
}
EMIT "Stack[-7] = 0";


func_10806()
{
	var_5679_string = ""; var_5680_bool = 0;
	func_183("factory@door1", (bool)0);
	return 0;
}


func_10813()
{
	var_4735_string = ""; var_4736_bool = 0;
	func_183("icot_eva@door1", (bool)1);
	return 0;
}


func_11843()
{
	var_5978_object = Obj(); var_5979_object = Obj(); var_5980_object = Obj(); var_5981_object = Obj();
	func_12503(Obj());
	var_5982_object = var_5980_object;
	@@var_5980_object:FindMark(var_5981_object, "d10q01AglajaGotoPetr");
	var_5984_object = var_5981_object;
	if(var_5984_object != 0) {
		@@var_5981_object:Remove();
	}
	@@var_5980_object:FindMark(var_5981_object, "d10q02KaterinaGotoRubin");
	var_5986_object = var_5981_object;
	if(var_5986_object != 0) {
		@@var_5981_object:Remove();
	}
	@@var_5980_object:FindMark(var_5981_object, "d10q02RubinGotoMaria");
	var_5988_object = var_5981_object;
	if(var_5988_object != 0) {
		@@var_5981_object:Remove();
	}
	@@var_5980_object:FindMark(var_5981_object, "d10q02GeorgGotoAglaja");
	var_5990_object = var_5981_object;
	if(var_5990_object != 0) {
		@@var_5981_object:Remove();
	}
	@@var_5980_object:FindMark(var_5981_object, "d10q03GotoMark");
	var_5992_object = var_5981_object;
	if(var_5992_object != 0) {
		@@var_5981_object:Remove();
	}
	@@var_5980_object:FindMark(var_5981_object, "d10q03MarkGotoBlock");
	var_5994_object = var_5981_object;
	if(var_5994_object != 0) {
		@@var_5981_object:Remove();
	}
	var_5995_bool = 0; var_5996_int = 0;
	func_12478(var_5995_bool, (int)186);
	var_5997_bool = 0; var_5998_int = 0;
	func_12478(var_5997_bool, (int)666);
	var_5999_bool = 0; var_6000_int = 0;
	func_12478(var_5999_bool, (int)672);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10820()
{
	var_6101_object = Obj(); var_6102_object = Obj(); var_6103_object = Obj(); var_6104_object = Obj();
	func_12503(Obj());
	var_6105_object = var_6103_object;
	@@var_6103_object:FindMark(var_6104_object, "d1EvaGotoMaria");
	var_6107_object = var_6104_object;
	if(var_6107_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1EvaInfo");
	var_6109_object = var_6104_object;
	if(var_6109_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1GeorgInfo");
	var_6111_object = var_6104_object;
	if(var_6111_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1JuliaMapMarkEva");
	var_6113_object = var_6104_object;
	if(var_6113_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1JuliaMapMarkLara");
	var_6115_object = var_6104_object;
	if(var_6115_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1KaterinaMapMark");
	var_6117_object = var_6104_object;
	if(var_6117_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01AlexandrGotoJulia");
	var_6119_object = var_6104_object;
	if(var_6119_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01AnnaMapMarkMladVlad");
	var_6121_object = var_6104_object;
	if(var_6121_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01EvaGotoSimon");
	var_6123_object = var_6104_object;
	if(var_6123_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01EvaMapMarkMladVlad");
	var_6125_object = var_6104_object;
	if(var_6125_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01GeorgGotoViktor");
	var_6127_object = var_6104_object;
	if(var_6127_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01JuliaGotoBigVlad");
	var_6129_object = var_6104_object;
	if(var_6129_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01LaraMarkMladVlad");
	var_6131_object = var_6104_object;
	if(var_6131_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01PatrolGotoAlexandr");
	var_6133_object = var_6104_object;
	if(var_6133_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q01ViktorGotoIsidor");
	var_6135_object = var_6104_object;
	if(var_6135_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q02AnnaGotoLaska");
	var_6137_object = var_6104_object;
	if(var_6137_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q02JuliaGotoAnna");
	var_6139_object = var_6104_object;
	if(var_6139_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q03KapellaGotoOspina");
	var_6141_object = var_6104_object;
	if(var_6141_object != 0) {
		@@var_6104_object:Remove();
	}
	@@var_6103_object:FindMark(var_6104_object, "d1q03MladVladGotoOspina");
	var_6143_object = var_6104_object;
	if(var_6143_object != 0) {
		@@var_6104_object:Remove();
	}
	var_6144_bool = 0; var_6145_int = 0;
	func_12478(var_6144_bool, (int)2);
	var_6146_bool = 0; var_6147_int = 0;
	func_12478(var_6146_bool, (int)7);
	var_6148_bool = 0; var_6149_int = 0;
	func_12478(var_6148_bool, (int)37);
	var_6150_bool = 0; var_6151_int = 0;
	func_12478(var_6150_bool, (int)43);
	Trace("Day1 cleanup");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_582(var_2031_string, var_2032_object, var_2033_string, var_2034_string)
{
	var_2040_object = Obj(); var_2041_int = 0; var_2042_bool = 0; var_2043_cvector = CVector(0,0,0); var_2044_cvector = CVector(0,0,0); var_2045_object = Obj(); var_2046_object = Obj(); var_2047_int = 0; var_2048_bool = 0; var_2049_cvector = CVector(0,0,0); var_2050_cvector = CVector(0,0,0); var_2051_object = Obj();
	GetMainOutdoorScene(var_2046_object);
	var_2047_int = 0;
	
Label_586:
	var_2053_int = var_2047_int + (int)1;
	var_2054_int = var_2031_string + var_2053_int;
	@@var_2046_object:GetLocator(var_2054_int, var_2048_bool, var_2049_cvector, var_2050_cvector);
	var_2055_bool = var_2048_bool == 0; //@nz
	if(var_2055_bool != 0) {
	} else {
		@@var_2046_object:AddStationaryActor(var_2051_object, var_2049_cvector, var_2050_cvector, var_2033_string, var_2034_string);
		@@var_2032_object:add(var_2051_object);
		var_2051_object = 0;
		var_2047_int = var_2047_int + (int)1;
		goto Label_586;
	}
	return 12;
	
}
EMIT "Stack[-6] = 0";


func_7751(var_4421_object, var_4422_object, var_4423_string, var_4424_string, var_4425_string)
{
	var_4427_bool = 0; var_4428_cvector = CVector(0,0,0); var_4429_cvector = CVector(0,0,0); var_4430_object = Obj(); var_4431_bool = 0; var_4432_cvector = CVector(0,0,0); var_4433_cvector = CVector(0,0,0); var_4434_object = Obj();
	var_4436_int = "pt_guard_" + var_4423_string;
	@@var_4422_object:GetLocator(var_4436_int, var_4431_bool, var_4432_cvector, var_4433_cvector);
	var_4437_bool = var_4431_bool == 0; //@nz
	if(var_4437_bool != 0) {
		var_4439_int = "Locator doesn't exist for guard " + var_4423_string;
		Trace(var_4439_int);
	} else {
		@@var_4422_object:AddStationaryActor(var_4434_object, var_4432_cvector, var_4433_cvector, var_4424_string, var_4425_string);
	}
	var_4434_object = var_4421_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_6733(var_1704_int, var_1705_int, var_1706_object, var_1707_object, var_1708_object, var_1709_object)
{
	var_1711_bool = var_1705_int == (int)0;
	if(var_1711_bool != 0) {
		var_1712_int = 0; var_1713_bool = 0;
		func_802((int)12, (bool)0);
		var_1714_int = 0; var_1715_bool = 0; var_1716_int = 0;
		func_819((int)12, (bool)0, (int)1);
		var_1717_int = 0; var_1718_int = 0; var_1719_object = Obj(); var_1720_object = Obj(); var_1721_object = Obj();
		var_1717_int = 12;
		var_1704_int = var_1718_int;
		var_1706_object = var_1719_object;
		var_1707_object = var_1720_object;
		var_1708_object = var_1721_object;
		func_628(var_1718_int, var_1719_object, var_1720_object, var_1721_object);
		var_1722_object = Obj(); var_1723_int = 0;
		var_1709_object = var_1722_object;
		func_311(var_1722_object, (int)0);
		var_1724_int = 0; var_1725_bool = 0; var_1726_int = 0;
		func_876((int)12, (bool)0, (int)4);
		var_1727_int = 0; var_1728_bool = 0; var_1729_int = 0;
		func_938((int)12, (bool)0, (int)4);
	}
	var_1730_int = 0; var_1731_int = 0;
	var_1705_int = var_1731_int;
	func_1026((int)12, var_1731_int);
	var_1732_int = 0; var_1733_int = 0; var_1734_int = 0;
	var_1704_int = var_1733_int;
	var_1705_int = var_1734_int;
	func_1630((int)12, var_1733_int, var_1734_int);
	return 0;
}


func_5712(var_1385_int, var_1386_int, var_1387_object, var_1388_object, var_1389_object, var_1390_object)
{
	var_1392_bool = var_1386_int == (int)0;
	if(var_1392_bool != 0) {
		var_1393_int = 0; var_1394_bool = 0;
		func_802((int)7, (bool)0);
		var_1395_int = 0; var_1396_bool = 0; var_1397_int = 0;
		func_819((int)7, (bool)0, (int)1);
		var_1398_int = 0; var_1399_int = 0; var_1400_object = Obj(); var_1401_object = Obj(); var_1402_object = Obj();
		var_1398_int = 7;
		var_1385_int = var_1399_int;
		var_1387_object = var_1400_object;
		var_1388_object = var_1401_object;
		var_1389_object = var_1402_object;
		func_628(var_1399_int, var_1400_object, var_1401_object, var_1402_object);
		var_1403_object = Obj(); var_1404_int = 0;
		var_1390_object = var_1403_object;
		func_311(var_1403_object, (int)0);
		var_1405_int = 0; var_1406_bool = 0; var_1407_int = 0;
		func_876((int)7, (bool)0, (int)6);
		var_1408_int = 0; var_1409_bool = 0; var_1410_int = 0;
		func_938((int)7, (bool)0, (int)6);
	}
	var_1411_int = 0; var_1412_int = 0;
	var_1386_int = var_1412_int;
	func_1026((int)7, var_1412_int);
	var_1413_int = 0; var_1414_int = 0; var_1415_int = 0;
	var_1385_int = var_1414_int;
	var_1386_int = var_1415_int;
	func_1630((int)7, var_1414_int, var_1415_int);
	return 0;
}


func_3665(var_3817_int, var_3818_int, var_3819_int)
{
	var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0; var_3827_int = 0;
	var_3828_bool = 0;
	var_3828_bool = 0;
	var_3830_bool = var_3819_int > (int)8;
	if(var_3830_bool != 0) {
		var_3832_bool = var_3819_int < (int)21;
		if(var_3832_bool != 0) {
			var_3828_bool = 1;
		}
	}
	if(var_3828_bool != 0) {
		var_3833_int = 0; var_3834_string = ""; var_3835_string = ""; var_3836_int = 0;
		var_3817_int = var_3833_int;
		func_509(var_3833_int, "pers_rat", "rat.xml", (int)1);
		var_3837_int = 0; var_3838_string = ""; var_3839_string = ""; var_3840_int = 0;
		var_3817_int = var_3837_int;
		func_509(var_3837_int, "pers_alkash", "alkash.xml", (int)2);
		var_3841_int = 0; var_3842_string = ""; var_3843_string = ""; var_3844_int = 0;
		var_3817_int = var_3841_int;
		func_509(var_3841_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3846_float = 0; var_3847_int = 0;
		var_3818_int = var_3847_int;
		func_1171(var_3846_float, var_3847_int);
		var_3824_int = (int)2 * var_3846_float;
		var_3848_int = var_3824_int;
		if(var_3848_int != 0) {
			var_3849_int = 0; var_3850_string = ""; var_3851_string = ""; var_3852_int = 0;
			var_3817_int = var_3849_int;
			var_3824_int = var_3852_int;
			func_509(var_3849_int, "pers_grabitel", "grabitel.xml", var_3852_int);
		}
		var_3854_int = var_3818_int + (int)1;
		var_3856_bool = var_3854_int >= (int)2;
		if(var_3856_bool != 0) {
			var_3857_int = 0; var_3858_string = ""; var_3859_string = ""; var_3860_int = 0;
			var_3817_int = var_3857_int;
			func_509(var_3857_int, "pers_patrool", "patrol.xml", (int)1);
			var_3861_bool = 0; var_3862_int = 0;
			var_3818_int = var_3862_int;
			func_1378(var_3861_bool, var_3862_int);
			if(var_3861_bool != 0) {
				var_3863_int = 0; var_3864_string = ""; var_3865_string = ""; var_3866_int = 0;
				var_3817_int = var_3863_int;
				func_509(var_3863_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3868_float = 0; var_3869_int = 0;
		var_3818_int = var_3869_int;
		func_1261(var_3868_float, var_3869_int);
		var_3825_int = (int)1 * var_3868_float;
		var_3870_int = var_3825_int;
		if(var_3870_int != 0) {
			var_3871_int = 0; var_3872_string = ""; var_3873_string = ""; var_3874_int = 0;
			var_3817_int = var_3871_int;
			var_3825_int = var_3874_int;
			func_509(var_3871_int, "pers_bomber", "bomber.xml", var_3874_int);
		}
	} else {
		var_3888_int = 0; var_3889_string = ""; var_3890_string = ""; var_3891_int = 0;
		var_3817_int = var_3888_int;
		func_509(var_3888_int, "pers_rat", "rat.xml", (int)3);
		var_3892_int = 0; var_3893_string = ""; var_3894_string = ""; var_3895_int = 0;
		var_3817_int = var_3892_int;
		func_509(var_3892_int, "pers_alkash", "alkash.xml", (int)1);
		var_3896_int = 0; var_3897_string = ""; var_3898_string = ""; var_3899_int = 0;
		var_3817_int = var_3896_int;
		func_509(var_3896_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3901_float = 0; var_3902_int = 0;
		var_3818_int = var_3902_int;
		func_1171(var_3901_float, var_3902_int);
		var_3826_int = (int)3 * var_3901_float;
		var_3903_int = var_3826_int;
		if(var_3903_int != 0) {
			var_3904_int = 0; var_3905_string = ""; var_3906_string = ""; var_3907_int = 0;
			var_3817_int = var_3904_int;
			var_3826_int = var_3907_int;
			func_509(var_3904_int, "pers_grabitel", "grabitel.xml", var_3907_int);
		}
		var_3909_int = var_3818_int + (int)1;
		var_3911_bool = var_3909_int >= (int)2;
		if(var_3911_bool != 0) {
			var_3912_int = 0; var_3913_string = ""; var_3914_string = ""; var_3915_int = 0;
			var_3817_int = var_3912_int;
			func_509(var_3912_int, "pers_patrool", "patrol.xml", (int)1);
			var_3916_bool = 0; var_3917_int = 0;
			var_3818_int = var_3917_int;
			func_1378(var_3916_bool, var_3917_int);
			if(var_3916_bool != 0) {
				var_3918_int = 0; var_3919_string = ""; var_3920_string = ""; var_3921_int = 0;
				var_3817_int = var_3918_int;
				func_509(var_3918_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3923_float = 0; var_3924_int = 0;
		var_3818_int = var_3924_int;
		func_1261(var_3923_float, var_3924_int);
		var_3827_int = (int)1 * var_3923_float;
		var_3925_int = var_3827_int;
		if(var_3925_int == 0) goto Label_3827;
		var_3926_int = 0; var_3927_string = ""; var_3928_string = ""; var_3929_int = 0;
		var_3817_int = var_3926_int;
		var_3827_int = var_3929_int;
		func_509(var_3926_int, "pers_bomber", "bomber.xml", var_3929_int);
	}
Label_3827:
	var_3875_bool = 0; var_3876_int = 0; var_3877_int = 0;
	var_3818_int = var_3876_int;
	var_3819_int = var_3877_int;
	func_1351(var_3875_bool, var_3876_int, var_3877_int);
	if(var_3875_bool != 0) {
		var_3878_int = 0; var_3879_string = ""; var_3880_string = ""; var_3881_int = 0;
		var_3817_int = var_3878_int;
		func_509(var_3878_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3882_bool = 0; var_3883_int = 0;
	var_3818_int = var_3883_int;
	func_1378(var_3882_bool, var_3883_int);
	if(var_3882_bool != 0) {
		var_3884_int = 0; var_3885_string = ""; var_3886_string = ""; var_3887_int = 0;
		var_3817_int = var_3884_int;
		func_509(var_3884_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_4694(var_3401_int, var_3402_int, var_3403_object, var_3404_object, var_3405_object, var_3406_object)
{
	var_3408_bool = var_3402_int == (int)0;
	if(var_3408_bool != 0) {
		var_3409_int = 0; var_3410_bool = 0;
		func_802((int)1, (bool)0);
		var_3411_int = 0; var_3412_bool = 0; var_3413_int = 0;
		func_819((int)1, (bool)0, (int)1);
		var_3414_int = 0; var_3415_int = 0; var_3416_object = Obj(); var_3417_object = Obj(); var_3418_object = Obj();
		var_3401_int = var_3415_int;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		var_3405_object = var_3418_object;
		func_726((int)1, var_3415_int, var_3416_object, var_3417_object, var_3418_object);
		var_3419_object = Obj(); var_3420_int = 0;
		var_3406_object = var_3419_object;
		func_311(var_3419_object, (int)2);
		var_3421_int = 0; var_3422_bool = 0; var_3423_int = 0;
		func_876((int)1, (bool)0, (int)8);
		var_3424_int = 0; var_3425_bool = 0; var_3426_int = 0;
		func_938((int)1, (bool)1, (int)8);
	}
	var_3427_int = 0; var_3428_bool = 0;
	func_785((int)1, (bool)0);
	var_3429_int = 0; var_3430_int = 0; var_3431_int = 0;
	var_3401_int = var_3430_int;
	var_3402_int = var_3431_int;
	func_4216((int)1, var_3430_int, var_3431_int);
	return 0;
}


func_7768(var_4418_object, var_4419_object, var_4420_int)
{
	var_4421_object = Obj(); var_4422_object = Obj(); var_4423_string = ""; var_4424_string = ""; var_4425_string = "";
	var_4419_object = var_4422_object;
	var_4423_string = "term" + var_4420_int;
	func_7751(var_4421_object, var_4422_object, var_4423_string, "pers_patrool", "guard_term.xml");
	var_4421_object = var_4418_object;
	return 0;
}


func_604(var_2057_string, var_2058_object)
{
	var_2064_object = Obj(); var_2065_int = 0; var_2066_bool = 0; var_2067_cvector = CVector(0,0,0); var_2068_cvector = CVector(0,0,0); var_2069_object = Obj(); var_2070_string = ""; var_2071_object = Obj(); var_2072_int = 0; var_2073_bool = 0; var_2074_cvector = CVector(0,0,0); var_2075_cvector = CVector(0,0,0); var_2076_object = Obj(); var_2077_string = "";
	GetMainOutdoorScene(var_2071_object);
	var_2072_int = 0;
	
Label_608:
	var_2079_int = var_2072_int + (int)1;
	var_2080_int = var_2057_string + var_2079_int;
	@@var_2071_object:GetLocator(var_2080_int, var_2073_bool, var_2074_cvector, var_2075_cvector);
	var_2081_bool = var_2073_bool == 0; //@nz
	if(var_2081_bool != 0) {
	} else {
		@@var_2071_object:AddStationaryActorByType(var_2076_object, var_2074_cvector, var_2075_cvector, "fog", "fog_stat.xml");
		@@var_2058_object:add(var_2076_object);
		var_2076_object = 0;
		var_2072_int = var_2072_int + (int)1;
		goto Label_608;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_1630(var_1413_int, var_1414_int, var_1415_int)
{
	var_1416_int = 0; var_1417_int = 0;
	var_1419_int = var_1414_int + (int)1;
	var_1421_bool = var_1419_int == (int)12;
	if(var_1421_bool != 0) {
		return 2;
	}
	var_1422_bool = 0;
	var_1422_bool = 0;
	var_1423_bool = 0;
	var_1423_bool = 1;
	var_1425_bool = var_1415_int < (int)7;
	if(var_1425_bool != 1) {
		var_1427_bool = var_1415_int > (int)21;
		if(var_1427_bool != 1) {
			var_1423_bool = 0;
		}
	}
	if(var_1423_bool != 0) {
		var_1429_bool = var_1414_int != (int)0;
		if(var_1429_bool != 0) {
			var_1422_bool = 1;
		}
	}
	if(var_1422_bool != 0) {
		var_1431_float = 0; var_1432_int = 0;
		var_1414_int = var_1432_int;
		func_1147(var_1431_float, var_1432_int);
		var_1417_int = (int)1 * var_1431_float;
		var_1433_int = var_1417_int;
		if(var_1433_int != 0) {
			var_1434_int = 0; var_1435_string = ""; var_1436_string = ""; var_1437_int = 0;
			var_1413_int = var_1434_int;
			var_1417_int = var_1437_int;
			func_509(var_1434_int, "pers_grabitel", "grabitel.xml", var_1437_int);
		}
	}
	var_1438_bool = 0; var_1439_int = 0; var_1440_int = 0;
	var_1414_int = var_1439_int;
	var_1415_int = var_1440_int;
	func_1116(var_1438_bool, var_1439_int, var_1440_int);
	if(var_1438_bool != 0) {
		var_1441_int = 0; var_1442_string = ""; var_1443_string = ""; var_1444_int = 0;
		var_1413_int = var_1441_int;
		func_509(var_1441_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1445_int = 0; var_1446_string = ""; var_1447_string = ""; var_1448_int = 0;
		var_1413_int = var_1445_int;
		func_509(var_1445_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1449_int = 0; var_1450_string = ""; var_1451_string = ""; var_1452_int = 0;
		var_1413_int = var_1449_int;
		func_509(var_1449_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1453_int = 0; var_1454_string = ""; var_1455_string = ""; var_1456_int = 0;
		var_1413_int = var_1453_int;
		func_509(var_1453_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1457_int = 0; var_1458_string = ""; var_1459_string = ""; var_1460_int = 0;
		var_1413_int = var_1457_int;
		func_509(var_1457_int, "pers_woman", "woman.xml", (int)1);
		var_1461_int = 0; var_1462_string = ""; var_1463_string = ""; var_1464_int = 0;
		var_1413_int = var_1461_int;
		func_509(var_1461_int, "pers_alkash", "alkash.xml", (int)1);
		var_1465_bool = 0;
		var_1465_bool = 0;
		var_1467_bool = var_1415_int > (int)8;
		if(var_1467_bool != 0) {
			var_1469_bool = var_1415_int < (int)21;
			if(var_1469_bool != 0) {
				var_1465_bool = 1;
			}
		}
		if(var_1465_bool != 0) {
			var_1470_int = 0; var_1471_string = ""; var_1472_string = ""; var_1473_int = 0;
			var_1413_int = var_1470_int;
			func_509(var_1470_int, "pers_boy", "boy.xml", (int)1);
			var_1474_int = 0; var_1475_string = ""; var_1476_string = ""; var_1477_int = 0;
			var_1413_int = var_1474_int;
			func_509(var_1474_int, "pers_girl", "girl.xml", (int)1);
			var_1478_int = 0; var_1479_string = ""; var_1480_string = ""; var_1481_int = 0;
			var_1413_int = var_1478_int;
			func_509(var_1478_int, "pers_girl", "girl2.xml", (int)1);
			var_1482_int = 0; var_1483_string = ""; var_1484_string = ""; var_1485_int = 0;
			var_1413_int = var_1482_int;
			func_509(var_1482_int, "pers_littleboy", "littleboy.xml", (int)1);
			var_1486_int = 0; var_1487_string = ""; var_1488_string = ""; var_1489_int = 0;
			var_1413_int = var_1486_int;
			func_509(var_1486_int, "pers_littlegirl", "littlegirl.xml", (int)1);
		}
	} else {
		var_1497_bool = 0;
		var_1497_bool = 0;
		var_1499_bool = var_1415_int > (int)8;
		if(var_1499_bool != 0) {
			var_1501_bool = var_1415_int < (int)21;
			if(var_1501_bool != 0) {
				var_1497_bool = 1;
			}
		}
		if(var_1497_bool != 0) {
			var_1502_int = 0; var_1503_string = ""; var_1504_string = ""; var_1505_int = 0;
			var_1413_int = var_1502_int;
			func_509(var_1502_int, "pers_woman", "woman.xml", (int)1);
			var_1506_int = 0; var_1507_string = ""; var_1508_string = ""; var_1509_int = 0;
			var_1413_int = var_1506_int;
			func_509(var_1506_int, "pers_unosha", "unosha.xml", (int)1);
			var_1510_int = 0; var_1511_string = ""; var_1512_string = ""; var_1513_int = 0;
			var_1413_int = var_1510_int;
			func_509(var_1510_int, "pers_unosha", "unosha2.xml", (int)1);
			var_1514_int = 0; var_1515_string = ""; var_1516_string = ""; var_1517_int = 0;
			var_1413_int = var_1514_int;
			func_509(var_1514_int, "pers_boy", "boy.xml", (int)1);
			var_1518_int = 0; var_1519_string = ""; var_1520_string = ""; var_1521_int = 0;
			var_1413_int = var_1518_int;
			func_509(var_1518_int, "pers_girl", "girl.xml", (int)1);
			var_1522_int = 0; var_1523_string = ""; var_1524_string = ""; var_1525_int = 0;
			var_1413_int = var_1522_int;
			func_509(var_1522_int, "pers_girl", "girl2.xml", (int)1);
			var_1526_int = 0; var_1527_string = ""; var_1528_string = ""; var_1529_int = 0;
			var_1413_int = var_1526_int;
			func_509(var_1526_int, "pers_littleboy", "littleboy.xml", (int)1);
			var_1530_int = 0; var_1531_string = ""; var_1532_string = ""; var_1533_int = 0;
			var_1413_int = var_1530_int;
			func_509(var_1530_int, "pers_littlegirl", "littlegirl.xml", (int)1);
			var_1534_int = 0; var_1535_string = ""; var_1536_string = ""; var_1537_int = 0;
			var_1413_int = var_1534_int;
			func_509(var_1534_int, "pers_alkash", "alkash.xml", (int)1);
			var_1539_int = var_1414_int + (int)1;
			var_1541_bool = var_1539_int >= (int)3;
			if(var_1541_bool != 0) {
				var_1542_int = 0; var_1543_string = ""; var_1544_string = ""; var_1545_int = 0;
				var_1413_int = var_1542_int;
				func_509(var_1542_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
			}
			goto Label_1889;
		}
		var_1546_int = 0; var_1547_string = ""; var_1548_string = ""; var_1549_int = 0;
		var_1413_int = var_1546_int;
		func_509(var_1546_int, "pers_woman", "woman.xml", (int)1);
		var_1550_int = 0; var_1551_string = ""; var_1552_string = ""; var_1553_int = 0;
		var_1413_int = var_1550_int;
		func_509(var_1550_int, "pers_unosha", "unosha.xml", (int)1);
		var_1554_int = 0; var_1555_string = ""; var_1556_string = ""; var_1557_int = 0;
		var_1413_int = var_1554_int;
		func_509(var_1554_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1558_int = 0; var_1559_string = ""; var_1560_string = ""; var_1561_int = 0;
		var_1413_int = var_1558_int;
		func_509(var_1558_int, "pers_alkash", "alkash.xml", (int)1);
		var_1563_int = var_1414_int + (int)1;
		var_1565_bool = var_1563_int >= (int)3;
		if(var_1565_bool == 0) goto Label_1889;
		var_1566_int = 0; var_1567_string = ""; var_1568_string = ""; var_1569_int = 0;
		var_1413_int = var_1566_int;
		func_509(var_1566_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
	}
Label_1889:
	var_1490_bool = 0; var_1491_int = 0; var_1492_int = 0;
	var_1414_int = var_1491_int;
	var_1415_int = var_1492_int;
	func_1351(var_1490_bool, var_1491_int, var_1492_int);
	if(var_1490_bool != 0) {
		var_1493_int = 0; var_1494_string = ""; var_1495_string = ""; var_1496_int = 0;
		var_1413_int = var_1493_int;
		func_509(var_1493_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 2;
	
}


func_7779(var_4462_bool)
{
	var_4463_object = Obj(); var_4464_object = Obj();
	FindActor(var_4464_object, "arena_light");
	@@var_4464_object:Switch(var_4462_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9832(var_5197_int, var_5198_float)
{
	var_5199_int = 0; var_5200_int = 0; var_5201_int = 0; var_5202_float = 0;
	var_5198_float = var_5202_float;
	func_12495(var_5199_int, (int)530554, (int)530553, var_5202_float);
	var_5199_int = var_5197_int;
	return 0;
}


func_7787()
{
	var_4328_object = Obj(); var_4329_bool = 0; var_4330_cvector = CVector(0,0,0); var_4331_cvector = CVector(0,0,0); var_4332_int = 0; var_4333_object = Obj(); var_4334_object = Obj(); var_4335_bool = 0; var_4336_cvector = CVector(0,0,0); var_4337_cvector = CVector(0,0,0); var_4338_int = 0; var_4339_object = Obj();
	Trace("Setting arena...");
	var_4341_object = GlobalVars[11];
	var_4342_bool = var_4341_object == 0; //@ne
	if(var_4342_bool != 0) {
		GetMainOutdoorScene(var_4334_object);
		@@var_4334_object:GetLocator("pt_arena_manager", var_4335_bool, var_4336_cvector, var_4337_cvector);
		var_4344_bool = var_4335_bool == 0; //@nz
		if(var_4344_bool != 0) {
			Trace("Locator doesn't exist for arena manager");
		} else {
				var_4365_object = GlobalVars[11];
				var_4366_object = Obj(); var_4367_object = Obj(); var_4368_cvector = CVector(0,0,0); var_4369_cvector = CVector(0,0,0);
				var_4334_object = var_4367_object;
				var_4336_cvector = var_4368_cvector;
				var_4337_cvector = var_4369_cvector;
				func_14856(var_4366_object, var_4367_object, var_4368_cvector, var_4369_cvector);
				var_4366_object = var_4365_object;
				GlobalVars[11] = var_4365_object;
		}
		var_4338_int = 0;

	Label_7815:
		var_4347_bool = var_4338_int < (int)6;
		if(var_4347_bool != 0) {
			var_4350_int = var_4338_int + (int)1;
			var_4351_int = "pt_arena_torch" + var_4350_int;
			@@var_4334_object:GetLocator(var_4351_int, var_4335_bool, var_4336_cvector, var_4337_cvector);
			var_4352_bool = var_4335_bool == 0; //@nz
			if(var_4352_bool != 0) {
				var_4355_int = var_4338_int + (int)1;
				var_4356_int = "Locator doesn't exist for arena torch " + var_4355_int;
				Trace(var_4356_int);
			} else {
				AddActorByType(var_4339_object, "scripted", var_4334_object, var_4336_cvector, var_4337_cvector, "torch.xml");
				var_4360_object = GlobalVars[12];
				@@var_4360_object:add(var_4339_object);
				var_4339_object = 0;
		}
			var_4361_bool = 0;
			func_7779((bool)1);
			var_4334_object = 0;
	}
		return 12;

	}
	var_4338_int = var_4338_int + (int)1;
	goto Label_7815;
	
}


func_9841(var_5422_int, var_5423_float)
{
	var_5424_int = 0; var_5425_int = 0; var_5426_int = 0; var_5427_float = 0;
	var_5423_float = var_5427_float;
	func_12495(var_5424_int, (int)530556, (int)530555, var_5427_float);
	var_5424_int = var_5422_int;
	return 0;
}


func_628(var_567_int, var_569_object, var_570_object, var_571_object)
{
	var_572_int = 0; var_573_bool = 0;
	var_567_int = var_572_int;
	func_548(var_572_int, (bool)1);
	var_600_object = Obj();
	var_569_object = var_600_object;
	func_269(var_600_object);
	var_611_object = Obj();
	var_570_object = var_611_object;
	func_269(var_611_object);
	var_612_object = Obj();
	var_571_object = var_612_object;
	func_269(var_612_object);
	return 0;
}


func_9850(var_5268_int, var_5269_float)
{
	var_5270_int = 0; var_5271_int = 0; var_5272_int = 0; var_5273_float = 0;
	var_5269_float = var_5273_float;
	func_12495(var_5270_int, (int)530558, (int)530557, var_5273_float);
	var_5270_int = var_5268_int;
	return 0;
}


func_13947(var_4560_float)
{
	var_4564_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	SetTimeEvent((int)45268, (float)192.0);
	SetTimeEvent((int)45261, (float)199.5);
	SetTimeEvent((int)45230, (float)64.25);
	SetTimeEvent((int)45218, (float)228.0);
	SetTimeEvent((int)45269, (float)216.0);
	SetTimeEvent((int)45231, (float)90.0);
	SetTimeEvent((int)45227, (float)203.0);
	SetTimeEvent((int)45271, (float)264.0);
	SetTimeEvent((int)45282, (float)58.0);
	SetTimeEvent((int)45270, (float)240.0);
	SetTimeEvent((int)45229, (float)64.0);
	SetTimeEvent((int)45222, (float)24.0);
	SetTimeEvent((int)45260, (float)199.1699981689453);
	SetTimeEvent((int)45226, (float)202.0);
	SetTimeEvent((int)45224, (float)180.5);
	SetTimeEvent((int)45221, (float)272.2900085449219);
	SetTimeEvent((int)45239, (float)182.5);
	SetTimeEvent((int)45220, (float)271.5400085449219);
	SetTimeEvent((int)45228, (float)223.9600067138672);
	SetTimeEvent((int)45219, (float)230.0);
	SetTimeEvent((int)45232, (float)250.5);
	SetTimeEvent((int)45267, (float)168.0);
	SetTimeEvent((int)45223, (float)80.25);
	SetTimeEvent((int)45225, (float)201.0);
	SetTimeEvent((int)45214, (float)192.0800018310547);
	SetTimeEvent((int)45215, (float)216.0800018310547);
	SetTimeEvent((int)45216, (float)240.0800018310547);
	SetTimeEvent((int)45217, (float)264.0799865722656);
	SetTimeEvent((int)45174, (float)31.020000457763672);
	SetTimeEvent((int)45178, (float)127.0199966430664);
	SetTimeEvent((int)45179, (float)151.02000427246094);
	SetTimeEvent((int)45200, (float)39.5);
	SetTimeEvent((int)45180, (float)175.02000427246094);
	SetTimeEvent((int)45182, (float)223.02000427246094);
	SetTimeEvent((int)45176, (float)79.0199966430664);
	SetTimeEvent((int)45063, (float)144.0);
	SetTimeEvent((int)45177, (float)103.0199966430664);
	SetTimeEvent((int)45183, (float)247.02000427246094);
	SetTimeEvent((int)45202, (float)85.0);
	SetTimeEvent((int)45205, (float)175.25);
	SetTimeEvent((int)45209, (float)72.08000183105469);
	SetTimeEvent((int)45207, (float)24.329999923706055);
	SetTimeEvent((int)45208, (float)48.08000183105469);
	SetTimeEvent((int)45181, (float)199.02000427246094);
	SetTimeEvent((int)45210, (float)96.08000183105469);
	SetTimeEvent((int)45211, (float)120.08000183105469);
	SetTimeEvent((int)45064, (float)192.0);
	SetTimeEvent((int)45212, (float)144.0800018310547);
	SetTimeEvent((int)45213, (float)168.0800018310547);
	SetTimeEvent((int)45203, (float)103.25);
	SetTimeEvent((int)45175, (float)55.02000045776367);
	SetTimeEvent((int)45054, (float)273.0);
	SetTimeEvent((int)45199, (float)37.0);
	SetTimeEvent((int)45201, (float)86.5);
	SetTimeEvent((int)45184, (float)271.0199890136719);
	SetTimeEvent((int)45206, (float)210.0);
	SetTimeEvent((int)45050, (float)151.25);
	SetTimeEvent((int)45051, (float)249.35000610351562);
	SetTimeEvent((int)45042, (float)264.0);
	SetTimeEvent((int)45040, (float)55.25);
	SetTimeEvent((int)45039, (float)60.0);
	SetTimeEvent((int)45038, (float)31.25);
	SetTimeEvent((int)45041, (float)79.25);
	SetTimeEvent((int)45045, (float)128.25);
	SetTimeEvent((int)45047, (float)127.25);
	SetTimeEvent((int)45036, (float)255.0);
	SetTimeEvent((int)45043, (float)108.0);
	SetTimeEvent((int)45046, (float)128.0);
	SetTimeEvent((int)45044, (float)128.6699981689453);
	SetTimeEvent((int)45048, (float)154.0);
	SetTimeEvent((int)45049, (float)152.0);
	SetTimeEvent((int)45018, (float)216.0);
	SetTimeEvent((int)45005, (float)48.0);
	SetTimeEvent((int)45007, (float)17.920000076293945);
	SetTimeEvent((int)45009, (float)23.5);
	SetTimeEvent((int)45016, (float)168.0);
	SetTimeEvent((int)45017, (float)192.0);
	SetTimeEvent((int)45015, (float)132.0);
	SetTimeEvent((int)45031, (float)240.0);
	SetTimeEvent((int)45011, (float)96.0);
	SetTimeEvent((int)45032, (float)245.0);
	SetTimeEvent((int)45008, (float)10.0);
	SetTimeEvent((int)45003, (float)24.0);
	var_4731_object = Obj(); var_4732_object = Obj();
	var_4733_object = GlobalVars[16];
	var_4733_object = var_4731_object;
	var_4734_object = GlobalVars[16];
	var_4734_object = var_4732_object;
	func_10813();
	var_4745_object = Obj(); var_4746_object = Obj();
	var_4747_object = GlobalVars[16];
	var_4747_object = var_4745_object;
	var_4748_object = GlobalVars[16];
	var_4748_object = var_4746_object;
	func_10757();
	var_4751_object = Obj(); var_4752_object = Obj();
	var_4753_object = GlobalVars[16];
	var_4753_object = var_4751_object;
	var_4754_object = GlobalVars[16];
	var_4754_object = var_4752_object;
	func_10771();
	var_4778_object = Obj(); var_4779_object = Obj();
	var_4780_object = GlobalVars[16];
	var_4780_object = var_4778_object;
	var_4781_object = GlobalVars[16];
	var_4781_object = var_4779_object;
	func_10783();
	var_4784_object = Obj(); var_4785_object = Obj();
	var_4786_object = GlobalVars[16];
	var_4786_object = var_4784_object;
	var_4787_object = GlobalVars[16];
	var_4787_object = var_4785_object;
	func_11773();
	var_4790_object = Obj(); var_4791_object = Obj();
	var_4792_object = GlobalVars[16];
	var_4792_object = var_4790_object;
	var_4793_object = GlobalVars[16];
	var_4793_object = var_4791_object;
	func_10469();
	var_4796_object = Obj(); var_4797_object = Obj();
	var_4798_object = GlobalVars[16];
	var_4798_object = var_4796_object;
	var_4799_object = GlobalVars[16];
	var_4799_object = var_4797_object;
	func_10572();
	var_4802_object = Obj(); var_4803_object = Obj();
	var_4804_object = GlobalVars[16];
	var_4804_object = var_4802_object;
	var_4805_object = GlobalVars[16];
	var_4805_object = var_4803_object;
	func_10579();
	var_4808_object = Obj(); var_4809_object = Obj();
	var_4810_object = GlobalVars[16];
	var_4810_object = var_4808_object;
	var_4811_object = GlobalVars[16];
	var_4811_object = var_4809_object;
	func_10462();
	var_4814_int = 0; var_4815_float = 0;
	var_4560_float = var_4815_float;
	func_10066(var_4814_int, var_4815_float);
	var_4823_object = Obj(); var_4824_string = "";
	func_143(var_4823_object, "volonteers_danko");
	var_4831_object = Obj(); var_4832_string = "";
	func_143(var_4831_object, "quest_d1_01");
	SetTimeEvent((int)45006, (float)72.0);
	SetTimeEvent((int)45012, (float)120.0);
	SetTimeEvent((int)45013, (float)144.0);
	SetTimeEvent((int)45035, (float)261.5);
	SetTimeEvent((int)45010, (float)16.0);
	return 0;
}


func_8829()
{
	var_4522_object = Obj(); var_4523_int = 0; var_4524_int = 0; var_4525_object = Obj(); var_4526_bool = 0; var_4527_cvector = CVector(0,0,0); var_4528_cvector = CVector(0,0,0); var_4529_string = ""; var_4530_object = Obj(); var_4531_int = 0; var_4532_int = 0; var_4533_object = Obj(); var_4534_bool = 0; var_4535_cvector = CVector(0,0,0); var_4536_cvector = CVector(0,0,0); var_4537_string = "";
	GetMainOutdoorScene(var_4530_object);
	var_4538_object = GlobalVars[7];
	@@var_4538_object:size(var_4531_int);
	var_4532_int = 0;
	
Label_8836:
	var_4539_bool = var_4532_int < var_4531_int;
	if(var_4539_bool != 0) {
		var_4540_object = GlobalVars[7];
		@@var_4540_object:get(var_4533_object, var_4532_int);
		var_4541_object = var_4533_object;
		if(var_4541_object != 0) {
		} else {
			var_4545_int = var_4532_int + (int)1;
			var_4546_int = "pt_grave_supply" + var_4545_int;
			@@var_4530_object:GetLocator(var_4546_int, var_4534_bool, var_4535_cvector, var_4536_cvector);
			var_4547_bool = var_4534_bool == 0; //@nz
			if(var_4547_bool != 0) {
				Trace("Grave supply point not found");
				goto Label_8873;
			}
			RandOneOf(var_4537_string, (int)1, (int)1, "bread", "milk");
			var_4555_int = "item_" + var_4537_string;
			var_4557_int = var_4555_int + "_stat.xml";
			@@var_4530_object:AddStationaryActorByType(var_4533_object, var_4535_cvector, var_4536_cvector, "scripted", var_4557_int);
			var_4558_object = GlobalVars[7];
			@@var_4558_object:set(var_4532_int, var_4533_object);
			var_4533_object = 0;
	}
		var_4532_int = var_4532_int + (int)1;
		goto Label_8836;
	}
	return 16;
	
}
EMIT "Stack[-8] = 0";


func_6785(var_2934_int, var_2935_int, var_2936_object, var_2937_object, var_2938_object, var_2939_object)
{
	var_2941_bool = var_2935_int == (int)0;
	if(var_2941_bool != 0) {
		var_2942_int = 0; var_2943_bool = 0;
		func_802((int)12, (bool)1);
		var_2944_int = 0; var_2945_bool = 0; var_2946_int = 0;
		func_819((int)12, (bool)1, (int)1);
		var_2947_int = 0; var_2948_int = 0; var_2949_object = Obj(); var_2950_object = Obj(); var_2951_object = Obj();
		var_2934_int = var_2948_int;
		var_2936_object = var_2949_object;
		var_2937_object = var_2950_object;
		var_2938_object = var_2951_object;
		func_647((int)12, var_2948_int, var_2949_object, var_2950_object, var_2951_object);
		var_2952_object = Obj(); var_2953_int = 0;
		var_2939_object = var_2952_object;
		func_311(var_2952_object, (int)1);
		var_2954_int = 0; var_2955_bool = 0; var_2956_int = 0;
		func_876((int)12, (bool)1, (int)4);
		var_2957_int = 0; var_2958_bool = 0; var_2959_int = 0;
		func_938((int)12, (bool)0, (int)4);
	}
	var_2960_int = 0; var_2961_bool = 0;
	func_785((int)12, (bool)0);
	var_2962_int = 0; var_2963_int = 0; var_2964_int = 0;
	var_2934_int = var_2963_int;
	var_2935_int = var_2964_int;
	func_2770((int)12, var_2963_int, var_2964_int);
	return 0;
}


func_11905()
{
	var_5517_object = Obj(); var_5518_object = Obj(); var_5519_object = Obj(); var_5520_object = Obj();
	func_12503(Obj());
	var_5521_object = var_5519_object;
	@@var_5519_object:FindMark(var_5520_object, "d11q01NudeGotoRastrel");
	var_5523_object = var_5520_object;
	if(var_5523_object != 0) {
		@@var_5520_object:Remove();
	}
	@@var_5519_object:FindMark(var_5520_object, "d11q01NudeGotoBlock");
	var_5525_object = var_5520_object;
	if(var_5525_object != 0) {
		@@var_5520_object:Remove();
	}
	var_5526_bool = 0; var_5527_int = 0;
	func_12478(var_5526_bool, (int)192);
	var_5538_bool = 0; var_5539_int = 0;
	func_12478(var_5538_bool, (int)197);
	var_5540_bool = 0; var_5541_int = 0;
	func_12478(var_5540_bool, (int)682);
	var_5542_bool = 0; var_5543_int = 0;
	func_12478(var_5542_bool, (int)686);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9859(var_5282_int, var_5283_float)
{
	var_5284_int = 0; var_5285_int = 0; var_5286_int = 0; var_5287_float = 0;
	var_5283_float = var_5287_float;
	func_12495(var_5284_int, (int)530560, (int)530559, var_5287_float);
	var_5284_int = var_5282_int;
	return 0;
}


func_5764(var_2663_int, var_2664_int, var_2665_object, var_2666_object, var_2667_object, var_2668_object)
{
	var_2670_bool = var_2664_int == (int)0;
	if(var_2670_bool != 0) {
		var_2671_int = 0; var_2672_bool = 0;
		func_802((int)7, (bool)1);
		var_2673_int = 0; var_2674_bool = 0; var_2675_int = 0;
		func_819((int)7, (bool)1, (int)1);
		var_2676_int = 0; var_2677_int = 0; var_2678_object = Obj(); var_2679_object = Obj(); var_2680_object = Obj();
		var_2663_int = var_2677_int;
		var_2665_object = var_2678_object;
		var_2666_object = var_2679_object;
		var_2667_object = var_2680_object;
		func_647((int)7, var_2677_int, var_2678_object, var_2679_object, var_2680_object);
		var_2681_object = Obj(); var_2682_int = 0;
		var_2668_object = var_2681_object;
		func_311(var_2681_object, (int)1);
		var_2683_int = 0; var_2684_bool = 0; var_2685_int = 0;
		func_876((int)7, (bool)1, (int)6);
		var_2686_int = 0; var_2687_bool = 0; var_2688_int = 0;
		func_938((int)7, (bool)0, (int)6);
	}
	var_2689_int = 0; var_2690_bool = 0;
	func_785((int)7, (bool)0);
	var_2691_int = 0; var_2692_int = 0; var_2693_int = 0;
	var_2663_int = var_2692_int;
	var_2664_int = var_2693_int;
	func_2770((int)7, var_2692_int, var_2693_int);
	return 0;
}


func_647(var_2019_int, var_2020_int, var_2021_object, var_2022_object, var_2023_object)
{
	var_2024_int = 0; var_2025_bool = 0;
	var_2019_int = var_2024_int;
	func_548(var_2024_int, (bool)0);
	var_2026_object = Obj();
	var_2021_object = var_2026_object;
	func_269(var_2026_object);
	var_2027_object = Obj();
	var_2022_object = var_2027_object;
	func_269(var_2027_object);
	var_2028_object = Obj();
	var_2023_object = var_2028_object;
	func_269(var_2028_object);
	var_2030_bool = var_2020_int < (int)8;
	if(var_2030_bool != 0) {
		var_2031_string = ""; var_2032_object = Obj(); var_2033_string = ""; var_2034_string = "";
		var_2037_int = var_2019_int + (int)1;
		var_2038_int = "pt_blockpost" + var_2037_int;
		var_2031_string = var_2038_int + "_1_";
		var_2021_object = var_2032_object;
		func_582(var_2031_string, var_2032_object, "pers_patrool", "patrol_stat.xml");
		var_2057_string = ""; var_2058_object = Obj();
		var_2061_int = var_2019_int + (int)1;
		var_2062_int = "pt_fog" + var_2061_int;
		var_2057_string = var_2062_int + "_";
		var_2023_object = var_2058_object;
		func_604(var_2057_string, var_2058_object);
	} else {
		var_2084_string = ""; var_2085_object = Obj(); var_2086_string = ""; var_2087_string = "";
		var_2090_int = var_2019_int + (int)1;
		var_2091_int = "pt_blockpost" + var_2090_int;
		var_2084_string = var_2091_int + "_1_";
		var_2021_object = var_2085_object;
		func_582(var_2084_string, var_2085_object, "pers_soldat", "soldier.xml");
		var_2093_string = ""; var_2094_object = Obj(); var_2095_string = ""; var_2096_string = "";
		var_2099_int = var_2019_int + (int)1;
		var_2100_int = "pt_blockpost" + var_2099_int;
		var_2093_string = var_2100_int + "_2_";
		var_2022_object = var_2094_object;
		func_582(var_2093_string, var_2094_object, "pers_sanitar", "sanitar_stat.xml");
		var_2102_string = ""; var_2103_object = Obj();
		var_2106_int = var_2019_int + (int)1;
		var_2107_int = "pt_fog" + var_2106_int;
		var_2102_string = var_2107_int + "_";
		var_2023_object = var_2103_object;
		func_604(var_2102_string, var_2103_object);
	}
	return 0;
	
}


func_4746(var_79_object)
{
	@@var_79_object:add("dt_house1_union2_05l");
	@@var_79_object:add("dt_house1_union2_05r");
	@@var_79_object:add("dt_house2_01");
	@@var_79_object:add("dt_house2_02");
	@@var_79_object:add("dt_house2_03");
	@@var_79_object:add("dt_house2_04");
	@@var_79_object:add("dt_house2_05");
	@@var_79_object:add("dt_house3_10_i2");
	@@var_79_object:add("dt_house3_10");
	@@var_79_object:add("dt_house3_11_i2");
	@@var_79_object:add("dt_house3_11");
	@@var_79_object:add("dt_house3_12_i2");
	@@var_79_object:add("dt_house3_12");
	@@var_79_object:add("dt_house_1_06");
	@@var_79_object:add("dt_house3_07_i2");
	@@var_79_object:add("dt_house3_07");
	return 0;
}


func_9868(var_5208_int, var_5209_float)
{
	var_5210_int = 0; var_5211_int = 0; var_5212_int = 0; var_5213_float = 0;
	var_5209_float = var_5213_float;
	func_12495(var_5210_int, (int)530562, (int)530561, var_5213_float);
	var_5210_int = var_5208_int;
	return 0;
}


func_9877(var_5219_int, var_5220_float)
{
	var_5221_int = 0; var_5222_int = 0; var_5223_int = 0; var_5224_float = 0;
	var_5220_float = var_5224_float;
	func_12495(var_5221_int, (int)530564, (int)530563, var_5224_float);
	var_5221_int = var_5219_int;
	return 0;
}


func_9886(var_5246_int, var_5247_float)
{
	var_5248_int = 0; var_5249_int = 0; var_5250_int = 0; var_5251_float = 0;
	var_5247_float = var_5251_float;
	func_12495(var_5248_int, (int)530566, (int)530565, var_5251_float);
	var_5248_int = var_5246_int;
	return 0;
}


func_9895(var_5360_int, var_5361_float)
{
	var_5362_int = 0; var_5363_int = 0; var_5364_int = 0; var_5365_float = 0;
	var_5361_float = var_5365_float;
	func_12495(var_5362_int, (int)530568, (int)530567, var_5365_float);
	var_5362_int = var_5360_int;
	return 0;
}


func_11943(var_6367_bool)
{
	var_6370_int = 0; var_6371_string = "";
	func_138(var_6370_int, "d1q01");
	var_6373_bool = var_6370_int == (int)1000;
	if(var_6373_bool != 0) {
		var_6367_bool = 1;
		return 0;
	}
	var_6367_bool = 0;
	return 0;
}


func_7850()
{
	var_4610_int = 0; var_4611_int = 0; var_4612_object = Obj(); var_4613_int = 0; var_4614_int = 0; var_4615_object = Obj();
	Trace("Cleaning arena...");
	var_4617_object = GlobalVars[11];
	var_4618_bool = var_4617_object != 0; //@nn
	if(var_4618_bool != 0) {
		var_4619_object = GlobalVars[11];
		@@var_4619_object:Remove();
		var_4620_object = GlobalVars[12];
		@@var_4620_object:size(var_4613_int);
		var_4614_int = 0;

	Label_7864:
		var_4621_bool = var_4614_int < var_4613_int;
		if(var_4621_bool != 0) {
			var_4622_object = GlobalVars[12];
			@@var_4622_object:get(var_4615_object, var_4614_int);
			Trigger(var_4615_object, "remove");
			var_4615_object = 0;
			var_4614_int = var_4614_int + (int)1;
			goto Label_7864;
		}
		var_4625_object = GlobalVars[12];
		@@var_4625_object:clear();
		var_4626_bool = 0;
		func_7779((bool)0);
	}
	return 6;
}


func_8878()
{
	var_4482_object = Obj(); var_4483_object = Obj(); var_4484_object = Obj(); var_4485_object = Obj();
	GetMainOutdoorScene(var_4484_object);
	AddScriptedActor(var_4485_object, "big_gun", "big_gun.bin", var_4484_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4485_object, "vagon_martira", "big_gun.bin", var_4484_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4485_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4484_object, CVector(0.0, 0.0, 0.0));
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9904(var_5050_int, var_5051_float)
{
	var_5052_int = 0; var_5053_int = 0; var_5054_int = 0; var_5055_float = 0;
	var_5051_float = var_5055_float;
	func_12495(var_5052_int, (int)536379, (int)536378, var_5055_float);
	var_5052_int = var_5050_int;
	return 0;
}


func_11955(var_6082_bool)
{
	var_6085_int = 0; var_6086_string = "";
	func_138(var_6085_int, "d1q01");
	var_6088_bool = var_6085_int == (int)0;
	if(var_6088_bool != 0) {
		var_6082_bool = 1;
		return 0;
	}
	var_6082_bool = 0;
	return 0;
}


func_6837(var_4064_int, var_4065_int, var_4066_object, var_4067_object, var_4068_object, var_4069_object)
{
	var_4071_bool = var_4065_int == (int)0;
	if(var_4071_bool != 0) {
		var_4072_int = 0; var_4073_bool = 0;
		func_802((int)12, (bool)0);
		var_4074_int = 0; var_4075_bool = 0; var_4076_int = 0;
		func_819((int)12, (bool)0, (int)1);
		var_4077_int = 0; var_4078_int = 0; var_4079_object = Obj(); var_4080_object = Obj(); var_4081_object = Obj();
		var_4064_int = var_4078_int;
		var_4066_object = var_4079_object;
		var_4067_object = var_4080_object;
		var_4068_object = var_4081_object;
		func_726((int)12, var_4078_int, var_4079_object, var_4080_object, var_4081_object);
		var_4082_object = Obj(); var_4083_int = 0;
		var_4069_object = var_4082_object;
		func_311(var_4082_object, (int)2);
		var_4084_int = 0; var_4085_bool = 0; var_4086_int = 0;
		func_876((int)12, (bool)0, (int)4);
		var_4087_int = 0; var_4088_bool = 0; var_4089_int = 0;
		func_938((int)12, (bool)1, (int)4);
	}
	var_4090_int = 0; var_4091_bool = 0;
	func_785((int)12, (bool)0);
	var_4092_int = 0; var_4093_int = 0; var_4094_int = 0;
	var_4064_int = var_4093_int;
	var_4065_int = var_4094_int;
	func_3665((int)12, var_4093_int, var_4094_int);
	return 0;
}


func_5816(var_3789_int, var_3790_int, var_3791_object, var_3792_object, var_3793_object, var_3794_object)
{
	var_3796_bool = var_3790_int == (int)0;
	if(var_3796_bool != 0) {
		var_3797_int = 0; var_3798_bool = 0;
		func_802((int)7, (bool)0);
		var_3799_int = 0; var_3800_bool = 0; var_3801_int = 0;
		func_819((int)7, (bool)0, (int)1);
		var_3802_int = 0; var_3803_int = 0; var_3804_object = Obj(); var_3805_object = Obj(); var_3806_object = Obj();
		var_3789_int = var_3803_int;
		var_3791_object = var_3804_object;
		var_3792_object = var_3805_object;
		var_3793_object = var_3806_object;
		func_726((int)7, var_3803_int, var_3804_object, var_3805_object, var_3806_object);
		var_3807_object = Obj(); var_3808_int = 0;
		var_3794_object = var_3807_object;
		func_311(var_3807_object, (int)2);
		var_3809_int = 0; var_3810_bool = 0; var_3811_int = 0;
		func_876((int)7, (bool)0, (int)6);
		var_3812_int = 0; var_3813_bool = 0; var_3814_int = 0;
		func_938((int)7, (bool)1, (int)6);
	}
	var_3815_int = 0; var_3816_bool = 0;
	func_785((int)7, (bool)0);
	var_3817_int = 0; var_3818_int = 0; var_3819_int = 0;
	var_3789_int = var_3818_int;
	var_3790_int = var_3819_int;
	func_3665((int)7, var_3818_int, var_3819_int);
	return 0;
}


func_9913(var_5176_int, var_5177_float)
{
	var_5178_int = 0; var_5179_int = 0; var_5180_int = 0; var_5181_float = 0;
	var_5177_float = var_5181_float;
	func_12495(var_5178_int, (int)522212, (int)522211, var_5181_float);
	var_5178_int = var_5176_int;
	return 0;
}


func_4796(var_1030_int, var_1031_int, var_1032_object, var_1033_object, var_1034_object, var_1035_object)
{
	var_1037_bool = var_1031_int == (int)0;
	if(var_1037_bool != 0) {
		var_1038_int = 0; var_1039_bool = 0;
		func_802((int)2, (bool)0);
		var_1040_int = 0; var_1041_bool = 0; var_1042_int = 0;
		func_819((int)2, (bool)0, (int)1);
		var_1043_int = 0; var_1044_int = 0; var_1045_object = Obj(); var_1046_object = Obj(); var_1047_object = Obj();
		var_1043_int = 2;
		var_1030_int = var_1044_int;
		var_1032_object = var_1045_object;
		var_1033_object = var_1046_object;
		var_1034_object = var_1047_object;
		func_628(var_1044_int, var_1045_object, var_1046_object, var_1047_object);
		var_1048_object = Obj(); var_1049_int = 0;
		var_1035_object = var_1048_object;
		func_311(var_1048_object, (int)0);
		var_1050_int = 0; var_1051_bool = 0; var_1052_int = 0;
		func_876((int)2, (bool)0, (int)5);
		var_1053_int = 0; var_1054_bool = 0; var_1055_int = 0;
		func_938((int)2, (bool)0, (int)5);
	}
	var_1056_int = 0; var_1057_int = 0;
	var_1031_int = var_1057_int;
	func_1056((int)2, var_1057_int);
	var_1058_int = 0; var_1059_int = 0; var_1060_int = 0;
	var_1030_int = var_1059_int;
	var_1031_int = var_1060_int;
	func_1903((int)2, var_1059_int, var_1060_int);
	return 0;
}


func_11967(var_4877_bool)
{
	var_4880_int = 0; var_4881_string = "";
	func_138(var_4880_int, "resque_list");
	var_4883_bool = var_4880_int != (int)0;
	if(var_4883_bool != 0) {
		var_4877_bool = 1;
		return 0;
	}
	var_4877_bool = 0;
	return 0;
}


func_9922(var_4732_int, var_4733_float)
{
	var_4734_int = 0; var_4735_int = 0; var_4736_int = 0; var_4737_float = 0;
	var_4733_float = var_4737_float;
	func_12495(var_4734_int, (int)534077, (int)534076, var_4737_float);
	var_4734_int = var_4732_int;
	return 0;
}


func_8899(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_19_bool = var_3_int > (int)16384;
	if(var_19_bool != 0) {
		var_21_bool = var_3_int < (int)16396;
		if(var_21_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - (int)16384;
		var_23_int = 0;
		var_11_int = var_23_int;
		func_14563(var_23_int);
		var_2_bool = 1;
		return 12;
	}
	var_205_bool = 0;
	var_205_bool = 0;
	var_207_bool = var_3_int > (int)32768;
	if(var_207_bool != 0) {
		var_209_bool = var_3_int < (int)33056;
		if(var_209_bool != 0) {
			var_205_bool = 1;
		}
	}
	if(var_205_bool != 0) {
		var_211_int = var_3_int - (int)32768;
		var_12_int = var_211_int / (int)24;
		var_214_int = var_3_int - (int)32768;
		var_13_int = var_214_int % (int)24;
		GetGameTime(var_14_float);
		var_15_int = var_14_float / (int)24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % (int)24;
		var_218_int = 0; var_219_int = 0; var_220_int = 0; var_221_int = 0;
		var_12_int = var_218_int;
		var_13_int = var_219_int;
		var_15_int = var_220_int;
		var_16_int = var_221_int;
		func_9037(var_218_int, var_219_int, var_220_int, var_221_int);
		var_2_bool = 1;
		return 12;
	}
	var_2_bool = 0;
	return 12;
}


func_9931(var_5078_int, var_5079_float)
{
	var_5080_int = 0; var_5081_int = 0; var_5082_int = 0; var_5083_float = 0;
	var_5079_float = var_5083_float;
	func_12495(var_5080_int, (int)534163, (int)534162, var_5083_float);
	var_5080_int = var_5078_int;
	return 0;
}


func_7884()
{
	var_323_object = Obj(); var_324_int = 0; var_325_object = Obj(); var_326_int = 0;
	GetMainOutdoorScene(var_325_object);
	var_326_int = 1;
	
Label_7888:
	var_328_bool = var_326_int <= (int)17;
	if(var_328_bool != 0) {
		var_329_object = GlobalVars[15];
		var_330_object = Obj(); var_331_object = Obj(); var_332_string = ""; var_333_string = ""; var_334_string = "";
		var_325_object = var_331_object;
		var_332_string = "pt_bull" + var_326_int;
		func_165(var_330_object, var_331_object, var_332_string, "pers_bull", "bull.xml");
		@@var_329_object:add(var_330_object);
		var_326_int = var_326_int + (int)1;
		goto Label_7888;
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_11979(var_5227_bool)
{
	var_5230_int = 0; var_5231_string = "";
	func_138(var_5230_int, "d2EvaVisit");
	var_5233_bool = var_5230_int != (int)0;
	if(var_5233_bool != 0) {
		var_5227_bool = 1;
		return 0;
	}
	var_5227_bool = 0;
	return 0;
}


func_2770(var_2691_int, var_2692_int, var_2693_int)
{
	var_2694_int = 0; var_2695_int = 0; var_2696_int = 0; var_2697_int = 0;
	var_2698_bool = 0;
	var_2698_bool = 0;
	var_2700_bool = var_2693_int > (int)8;
	if(var_2700_bool != 0) {
		var_2702_bool = var_2693_int < (int)21;
		if(var_2702_bool != 0) {
			var_2698_bool = 1;
		}
	}
	if(var_2698_bool != 0) {
		var_2703_int = 0; var_2704_string = ""; var_2705_string = ""; var_2706_int = 0;
		var_2691_int = var_2703_int;
		func_509(var_2703_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_2707_int = 0; var_2708_string = ""; var_2709_string = ""; var_2710_int = 0;
		var_2691_int = var_2707_int;
		func_509(var_2707_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2711_int = 0; var_2712_string = ""; var_2713_string = ""; var_2714_int = 0;
		var_2691_int = var_2711_int;
		func_509(var_2711_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2715_int = 0; var_2716_string = ""; var_2717_string = ""; var_2718_int = 0;
		var_2691_int = var_2715_int;
		func_535(var_2715_int, "fog", "fog.xml", (int)6);
		var_2720_bool = var_2692_int >= (int)5;
		if(var_2720_bool != 0) {
			var_2721_int = 0; var_2722_string = ""; var_2723_string = ""; var_2724_int = 0;
			var_2691_int = var_2721_int;
			func_535(var_2721_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2726_float = 0; var_2727_int = 0;
		var_2692_int = var_2727_int;
		func_1261(var_2726_float, var_2727_int);
		var_2696_int = (int)1 * var_2726_float;
		var_2728_int = var_2696_int;
		if(var_2728_int != 0) {
			var_2729_int = 0; var_2730_string = ""; var_2731_string = ""; var_2732_int = 0;
			var_2691_int = var_2729_int;
			var_2696_int = var_2732_int;
			func_509(var_2729_int, "pers_bomber", "bomber.xml", var_2732_int);
		}
	} else {
		var_2770_int = 0; var_2771_string = ""; var_2772_string = ""; var_2773_int = 0;
		var_2691_int = var_2770_int;
		func_509(var_2770_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)4);
		var_2774_int = 0; var_2775_string = ""; var_2776_string = ""; var_2777_int = 0;
		var_2691_int = var_2774_int;
		func_509(var_2774_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)4);
		var_2778_int = 0; var_2779_string = ""; var_2780_string = ""; var_2781_int = 0;
		var_2691_int = var_2778_int;
		func_509(var_2778_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2782_int = 0; var_2783_string = ""; var_2784_string = ""; var_2785_int = 0;
		var_2691_int = var_2782_int;
		func_535(var_2782_int, "fog", "fog.xml", (int)6);
		var_2787_bool = var_2692_int >= (int)5;
		if(var_2787_bool != 0) {
			var_2788_int = 0; var_2789_string = ""; var_2790_string = ""; var_2791_int = 0;
			var_2691_int = var_2788_int;
			func_535(var_2788_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2793_float = 0; var_2794_int = 0;
		var_2692_int = var_2794_int;
		func_1261(var_2793_float, var_2794_int);
		var_2697_int = (int)1 * var_2793_float;
		var_2795_int = var_2697_int;
		if(var_2795_int == 0) goto Label_2888;
		var_2796_int = 0; var_2797_string = ""; var_2798_string = ""; var_2799_int = 0;
		var_2691_int = var_2796_int;
		var_2697_int = var_2799_int;
		func_509(var_2796_int, "pers_bomber", "bomber.xml", var_2799_int);
	}
Label_2888:
	var_2733_int = 0; var_2734_string = ""; var_2735_string = ""; var_2736_int = 0; var_2737_int = 0; var_2738_int = 0;
	var_2691_int = var_2733_int;
	func_522(var_2733_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2739_int = 0; var_2740_string = ""; var_2741_string = ""; var_2742_int = 0; var_2743_int = 0; var_2744_int = 0;
	var_2691_int = var_2739_int;
	func_522(var_2739_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2745_int = 0; var_2746_string = ""; var_2747_string = ""; var_2748_int = 0; var_2749_int = 0; var_2750_int = 0;
	var_2691_int = var_2745_int;
	func_522(var_2745_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2751_int = 0; var_2752_string = ""; var_2753_string = ""; var_2754_int = 0; var_2755_int = 0; var_2756_int = 0;
	var_2691_int = var_2751_int;
	func_522(var_2751_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2757_bool = 0; var_2758_int = 0; var_2759_int = 0;
	var_2692_int = var_2758_int;
	var_2693_int = var_2759_int;
	func_1351(var_2757_bool, var_2758_int, var_2759_int);
	if(var_2757_bool != 0) {
		var_2760_int = 0; var_2761_string = ""; var_2762_string = ""; var_2763_int = 0;
		var_2691_int = var_2760_int;
		func_509(var_2760_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_2764_bool = 0; var_2765_int = 0;
	var_2692_int = var_2765_int;
	func_1378(var_2764_bool, var_2765_int);
	if(var_2764_bool != 0) {
		var_2766_int = 0; var_2767_string = ""; var_2768_string = ""; var_2769_int = 0;
		var_2691_int = var_2766_int;
		func_509(var_2766_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 4;
	
}


func_9940(var_5257_int, var_5258_float)
{
	var_5259_int = 0; var_5260_int = 0; var_5261_int = 0; var_5262_float = 0;
	var_5258_float = var_5262_float;
	func_12495(var_5259_int, (int)530570, (int)530569, var_5262_float);
	var_5259_int = var_5257_int;
	return 0;
}


func_726(var_3200_int, var_3201_int, var_3202_object, var_3203_object, var_3204_object)
{
	var_3205_int = 0; var_3206_bool = 0;
	var_3200_int = var_3205_int;
	func_548(var_3205_int, (bool)0);
	var_3207_object = Obj();
	var_3202_object = var_3207_object;
	func_269(var_3207_object);
	var_3208_object = Obj();
	var_3203_object = var_3208_object;
	func_269(var_3208_object);
	var_3209_object = Obj();
	var_3204_object = var_3209_object;
	func_269(var_3209_object);
	var_3211_bool = var_3201_int < (int)8;
	if(var_3211_bool != 0) {
		var_3212_string = ""; var_3213_object = Obj(); var_3214_string = ""; var_3215_string = "";
		var_3218_int = var_3200_int + (int)1;
		var_3219_int = "pt_blockpost" + var_3218_int;
		var_3212_string = var_3219_int + "_1_";
		var_3202_object = var_3213_object;
		func_582(var_3212_string, var_3213_object, "pers_patrool", "patrol_stat.xml");
	} else {
		var_3221_string = ""; var_3222_object = Obj(); var_3223_string = ""; var_3224_string = "";
		var_3227_int = var_3200_int + (int)1;
		var_3228_int = "pt_blockpost" + var_3227_int;
		var_3221_string = var_3228_int + "_1_";
		var_3202_object = var_3222_object;
		func_582(var_3221_string, var_3222_object, "pers_soldat", "soldier.xml");
		var_3230_string = ""; var_3231_object = Obj(); var_3232_string = ""; var_3233_string = "";
		var_3236_int = var_3200_int + (int)1;
		var_3237_int = "pt_blockpost" + var_3236_int;
		var_3230_string = var_3237_int + "_2_";
		var_3203_object = var_3231_object;
		func_582(var_3230_string, var_3231_object, "pers_sanitar", "sanitar_stat.xml");
	}
	return 0;
	
}


func_11991(var_5438_bool)
{
	var_5441_int = 0; var_5442_string = "";
	func_138(var_5441_int, "d2LaraVisit");
	var_5444_bool = var_5441_int != (int)0;
	if(var_5444_bool != 0) {
		var_5438_bool = 1;
		return 0;
	}
	var_5438_bool = 0;
	return 0;
}


func_9949(var_5505_int, var_5506_float)
{
	var_5507_int = 0; var_5508_int = 0; var_5509_int = 0; var_5510_float = 0;
	var_5506_float = var_5510_float;
	func_12495(var_5507_int, (int)515484, (int)515483, var_5510_float);
	var_5507_int = var_5505_int;
	return 0;
}


func_7907()
{
	var_4524_object = Obj();
	var_4525_object = GlobalVars[15];
	var_4525_object = var_4524_object;
	func_269(var_4524_object);
	return 0;
}


func_10980()
{
	var_5801_object = Obj(); var_5802_object = Obj(); var_5803_object = Obj(); var_5804_object = Obj();
	func_12503(Obj());
	var_5805_object = var_5803_object;
	@@var_5803_object:FindMark(var_5804_object, "d2q01AlexandrGotoAnna");
	var_5807_object = var_5804_object;
	if(var_5807_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q01AlexandrGotoBigVlad");
	var_5809_object = var_5804_object;
	if(var_5809_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q01AlexandrGotoGeorg");
	var_5811_object = var_5804_object;
	if(var_5811_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q01AnnaGotoKapella");
	var_5813_object = var_5804_object;
	if(var_5813_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q01KapellaGotoSpi4ka");
	var_5815_object = var_5804_object;
	if(var_5815_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q01WomanDGotoAlexandr");
	var_5817_object = var_5804_object;
	if(var_5817_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q02AndreiGotoGrif");
	var_5819_object = var_5804_object;
	if(var_5819_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q02AndreiGotoPetr");
	var_5821_object = var_5804_object;
	if(var_5821_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q02EvaGotoAndrei");
	var_5823_object = var_5804_object;
	if(var_5823_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q02EvaGotoMaria");
	var_5825_object = var_5804_object;
	if(var_5825_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q02MariaGotoPetr");
	var_5827_object = var_5804_object;
	if(var_5827_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q02PetrGotoAndrei");
	var_5829_object = var_5804_object;
	if(var_5829_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q03BirdmaskGotoLara");
	var_5831_object = var_5804_object;
	if(var_5831_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q03LaraGotoJulia");
	var_5833_object = var_5804_object;
	if(var_5833_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q03LaraGotoMaria");
	var_5835_object = var_5804_object;
	if(var_5835_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q03LaraGotoMladVlad");
	var_5837_object = var_5804_object;
	if(var_5837_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q03LaraGotoMoneyFoodSelf");
	var_5839_object = var_5804_object;
	if(var_5839_object != 0) {
		@@var_5804_object:Remove();
	}
	@@var_5803_object:FindMark(var_5804_object, "d2q03LaraGotoSklad");
	var_5841_object = var_5804_object;
	if(var_5841_object != 0) {
		@@var_5804_object:Remove();
	}
	var_5842_bool = 0; var_5843_int = 0;
	func_12478(var_5842_bool, (int)10);
	var_5844_bool = 0; var_5845_int = 0;
	func_12478(var_5844_bool, (int)11);
	var_5846_bool = 0; var_5847_int = 0;
	func_12478(var_5846_bool, (int)12);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12003(var_5454_bool)
{
	var_5457_int = 0; var_5458_string = "";
	func_138(var_5457_int, "d4MladVladVisit");
	var_5460_bool = var_5457_int != (int)0;
	if(var_5460_bool != 0) {
		var_5454_bool = 1;
		return 0;
	}
	var_5454_bool = 0;
	return 0;
}


func_9958(var_5184_int, var_5185_float)
{
	var_5186_int = 0; var_5187_int = 0; var_5188_int = 0; var_5189_float = 0;
	var_5185_float = var_5189_float;
	func_12495(var_5186_int, (int)522214, (int)522213, var_5189_float);
	var_5186_int = var_5184_int;
	return 0;
}


func_6889(var_281_object)
{
	@@var_281_object:add("r7_house2_01");
	@@var_281_object:add("r7_house2_02");
	@@var_281_object:add("r7_house2_03");
	@@var_281_object:add("r7_house2_04");
	@@var_281_object:add("r7_house3_03_i2");
	@@var_281_object:add("r7_house3_03");
	@@var_281_object:add("r7_house3_04_i2");
	@@var_281_object:add("r7_house3_04");
	@@var_281_object:add("r7_house3_05_i2");
	@@var_281_object:add("r7_house3_05");
	@@var_281_object:add("r7_house3_06_i2");
	@@var_281_object:add("r7_house3_01_i2");
	@@var_281_object:add("r7_house3_01");
	@@var_281_object:add("r7_house3_02_i2");
	@@var_281_object:add("r7_house3_02");
	return 0;
}


func_7914()
{
	var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0; var_39_object = Obj();
	var_40_object = GlobalVars[15];
	func_132(Obj());
	var_41_object = var_40_object;
	GlobalVars[15] = var_40_object;
	var_44_object = GlobalVars[13];
	func_132(Obj());
	var_45_object = var_44_object;
	GlobalVars[13] = var_44_object;
	var_46_object = GlobalVars[8];
	func_132(Obj());
	var_47_object = var_46_object;
	GlobalVars[8] = var_46_object;
	var_48_object = GlobalVars[9];
	func_132(Obj());
	var_49_object = var_48_object;
	GlobalVars[9] = var_48_object;
	var_50_object = GlobalVars[10];
	func_132(Obj());
	var_51_object = var_50_object;
	GlobalVars[10] = var_50_object;
	var_30_int = 0;
	
Label_7946:
	var_53_bool = var_30_int < (int)16;
	if(var_53_bool != 0) {
		var_54_object = GlobalVars[8];
		var_55_object = Obj();
		func_132(var_55_object);
		@@var_54_object:add(var_55_object);
		var_56_object = GlobalVars[9];
		var_57_object = Obj();
		func_132(var_57_object);
		@@var_56_object:add(var_57_object);
		var_58_object = GlobalVars[10];
		var_59_object = Obj();
		func_132(var_59_object);
		@@var_58_object:add(var_59_object);
		var_30_int = var_30_int + (int)1;
		goto Label_7946;
	}
	CreateStringVector(var_31_object);
	var_61_object = GlobalVars[13];
	@@var_61_object:add(var_31_object);
	var_31_object = Obj();
	func_4391();
	CreateStringVector(var_31_object);
	var_63_object = GlobalVars[13];
	@@var_63_object:add(var_31_object);
	var_64_object = Obj();
	var_31_object = var_64_object;
	func_4549(var_64_object);
	CreateStringVector(var_31_object);
	var_78_object = GlobalVars[13];
	@@var_78_object:add(var_31_object);
	var_79_object = Obj();
	var_31_object = var_79_object;
	func_4746(var_79_object);
	CreateStringVector(var_31_object);
	var_96_object = GlobalVars[13];
	@@var_96_object:add(var_31_object);
	var_97_object = Obj();
	var_31_object = var_97_object;
	func_4952(var_97_object);
	CreateStringVector(var_31_object);
	var_122_object = GlobalVars[13];
	@@var_122_object:add(var_31_object);
	var_123_object = Obj();
	var_31_object = var_123_object;
	func_5182(var_123_object);
	CreateStringVector(var_31_object);
	var_144_object = GlobalVars[13];
	@@var_144_object:add(var_31_object);
	var_145_object = Obj();
	var_31_object = var_145_object;
	func_5400(var_145_object);
	CreateStringVector(var_31_object);
	var_175_object = GlobalVars[13];
	@@var_175_object:add(var_31_object);
	var_31_object = Obj();
	func_5645();
	CreateStringVector(var_31_object);
	var_177_object = GlobalVars[13];
	@@var_177_object:add(var_31_object);
	var_178_object = Obj();
	var_31_object = var_178_object;
	func_5668(var_178_object);
	CreateStringVector(var_31_object);
	var_193_object = GlobalVars[13];
	@@var_193_object:add(var_31_object);
	var_194_object = Obj();
	var_31_object = var_194_object;
	func_5868(var_194_object);
	CreateStringVector(var_31_object);
	var_209_object = GlobalVars[13];
	@@var_209_object:add(var_31_object);
	var_210_object = Obj();
	var_31_object = var_210_object;
	func_6068(var_210_object);
	CreateStringVector(var_31_object);
	var_226_object = GlobalVars[13];
	@@var_226_object:add(var_31_object);
	var_227_object = Obj();
	var_31_object = var_227_object;
	func_6271(var_227_object);
	CreateStringVector(var_31_object);
	var_245_object = GlobalVars[13];
	@@var_245_object:add(var_31_object);
	var_246_object = Obj();
	var_31_object = var_246_object;
	func_6480(var_246_object);
	CreateStringVector(var_31_object);
	var_265_object = GlobalVars[13];
	@@var_265_object:add(var_31_object);
	var_266_object = Obj();
	var_31_object = var_266_object;
	func_6692(var_266_object);
	CreateStringVector(var_31_object);
	var_280_object = GlobalVars[13];
	@@var_280_object:add(var_31_object);
	var_281_object = Obj();
	var_31_object = var_281_object;
	func_6889(var_281_object);
	CreateStringVector(var_31_object);
	var_297_object = GlobalVars[13];
	@@var_297_object:add(var_31_object);
	var_298_object = Obj();
	var_31_object = var_298_object;
	func_7092(var_298_object);
	CreateStringVector(var_31_object);
	var_313_object = GlobalVars[13];
	@@var_313_object:add(var_31_object);
	var_314_object = Obj();
	var_31_object = var_314_object;
	func_7292(var_314_object);
	func_7884();
	GetMainOutdoorScene(var_32_object);
	var_350_object = GlobalVars[6];
	func_132(Obj());
	var_351_object = var_350_object;
	GlobalVars[6] = var_350_object;
	var_33_int = 0;
	
Label_8126:
	var_354_int = var_33_int + (int)1;
	var_355_int = "pt_plant" + var_354_int;
	@@var_32_object:GetLocator(var_355_int, var_34_bool);
	var_356_bool = var_34_bool == 0; //@nz
	if(var_356_bool != 0) {
	} else {
				var_33_int = var_33_int + (int)1;
				goto Label_8126;
	}
	var_357_object = GlobalVars[6];
	@@var_357_object:resize(var_33_int);
	var_359_int = "Total plants: " + var_33_int;
	Trace(var_359_int);
	var_360_object = GlobalVars[7];
	func_132(Obj());
	var_361_object = var_360_object;
	GlobalVars[7] = var_360_object;
	var_35_int = 0;
	
Label_8152:
	var_364_int = var_35_int + (int)1;
	var_365_int = "pt_grave_supply" + var_364_int;
	@@var_32_object:GetLocator(var_365_int, var_36_bool);
	var_366_bool = var_36_bool == 0; //@nz
	if(var_366_bool != 0) {
	} else {
			var_35_int = var_35_int + (int)1;
			goto Label_8152;

	}
	var_367_object = GlobalVars[7];
	@@var_367_object:resize(var_35_int);
	var_369_int = "Total grave supplies: " + var_35_int;
	Trace(var_369_int);
	var_370_object = GlobalVars[14];
	func_132(Obj());
	var_371_object = var_370_object;
	GlobalVars[14] = var_370_object;
	
Label_8178:
	var_374_int = (int)0 + (int)1;
	var_375_int = "pt_bonfire" + var_374_int;
	@@var_32_object:GetLocator(var_375_int, var_38_bool);
	var_376_bool = var_38_bool == 0; //@nz
	if(var_376_bool != 0) {
	} else {
		var_379_object = GlobalVars[14];
		@@var_379_object:add(Obj());
		var_380_int = 0;
		var_37_int = var_380_int;
		func_7691(var_380_int);
		var_39_object = 0;
		var_37_int = var_37_int + (int)1;
		goto Label_8178;

	}
	var_378_int = "Total bonfires: " + var_37_int;
	Trace(var_378_int);
	return 20;
	
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_5868(var_194_object)
{
	@@var_194_object:add("r2_house_2_01");
	@@var_194_object:add("r2_house_2_02");
	@@var_194_object:add("r2_house_2_03");
	@@var_194_object:add("r2_house7_02");
	@@var_194_object:add("r2_house01_01");
	@@var_194_object:add("r2_house7_01");
	@@var_194_object:add("r2_house3_01_i2");
	@@var_194_object:add("r2_house3_01");
	@@var_194_object:add("r2_house3_02_i2");
	@@var_194_object:add("r2_house3_02");
	@@var_194_object:add("r2_house3_03_i2");
	@@var_194_object:add("r2_house3_03");
	@@var_194_object:add("r3_house7_01");
	@@var_194_object:add("r3_house7_02");
	return 0;
}


func_12015(var_5301_bool)
{
	var_5304_int = 0; var_5305_string = "";
	func_138(var_5304_int, "d4AlexandrVisit");
	var_5307_bool = var_5304_int != (int)0;
	if(var_5307_bool != 0) {
		var_5301_bool = 1;
		return 0;
	}
	var_5301_bool = 0;
	return 0;
}


func_4848(var_2408_int, var_2409_int, var_2410_object, var_2411_object, var_2412_object, var_2413_object)
{
	var_2415_bool = var_2409_int == (int)0;
	if(var_2415_bool != 0) {
		var_2416_int = 0; var_2417_bool = 0;
		func_802((int)2, (bool)1);
		var_2418_int = 0; var_2419_bool = 0; var_2420_int = 0;
		func_819((int)2, (bool)1, (int)1);
		var_2421_int = 0; var_2422_int = 0; var_2423_object = Obj(); var_2424_object = Obj(); var_2425_object = Obj();
		var_2408_int = var_2422_int;
		var_2410_object = var_2423_object;
		var_2411_object = var_2424_object;
		var_2412_object = var_2425_object;
		func_647((int)2, var_2422_int, var_2423_object, var_2424_object, var_2425_object);
		var_2426_object = Obj(); var_2427_int = 0;
		var_2413_object = var_2426_object;
		func_311(var_2426_object, (int)1);
		var_2428_int = 0; var_2429_bool = 0; var_2430_int = 0;
		func_876((int)2, (bool)1, (int)5);
		var_2431_int = 0; var_2432_bool = 0; var_2433_int = 0;
		func_938((int)2, (bool)0, (int)5);
	}
	var_2434_int = 0; var_2435_bool = 0;
	func_785((int)2, (bool)0);
	var_2436_int = 0; var_2437_int = 0; var_2438_int = 0;
	var_2408_int = var_2437_int;
	var_2409_int = var_2438_int;
	func_2950((int)2, var_2437_int, var_2438_int);
	return 0;
}


func_9967(var_5681_int, var_5682_float)
{
	var_5683_int = 0; var_5684_int = 0; var_5685_int = 0; var_5686_float = 0;
	var_5682_float = var_5686_float;
	func_12495(var_5683_int, (int)514529, (int)514528, var_5686_float);
	var_5683_int = var_5681_int;
	return 0;
}


func_9976(var_6350_int, var_6351_float)
{
	var_6352_int = 0; var_6353_int = 0; var_6354_int = 0; var_6355_float = 0;
	var_6351_float = var_6355_float;
	func_12495(var_6352_int, (int)514531, (int)514530, var_6355_float);
	var_6352_int = var_6350_int;
	return 0;
}


func_8954()
{
	var_418_float = 0; var_419_int = 0; var_420_int = 0; var_421_float = 0; var_422_int = 0; var_423_object = Obj(); var_424_object = Obj(); var_425_float = 0; var_426_int = 0; var_427_int = 0; var_428_float = 0; var_429_int = 0; var_430_object = Obj(); var_431_object = Obj();
	GetGameTime(var_425_float);
	var_426_int = 1;
	
Label_8958:
	var_433_bool = var_426_int < (int)12;
	if(var_433_bool != 0) {
		var_435_int = (int)16384 + var_426_int;
		var_437_float = (int)24 * var_426_int;
		SetTimeEvent(var_435_int, var_437_float);
		var_426_int = var_426_int + (int)1;
		goto Label_8958;
	}
	
Label_8971:
	var_440_bool = (int)0 < (int)288;
	if(var_440_bool != 0) {
		var_427_int = var_428_float;
		var_441_bool = var_428_float < var_425_float;
		if(var_441_bool != 0) {
		} else {
			var_444_int = (int)32768 + var_427_int;
			SetTimeEvent(var_444_int, var_428_float);
	}

	Label_8986:
		var_446_bool = (int)0 < (int)16;
		if(var_446_bool != 0) {
			var_447_string = ""; var_448_int = 0;
			var_429_int = var_448_int;
			func_305(var_447_string, var_448_int);
			SetVariable(var_447_string, (int)0);
			var_453_int = 0; var_454_bool = 0;
			var_429_int = var_453_int;
			func_802(var_453_int, (bool)0);
			var_429_int = var_429_int + (int)1;
			goto Label_8986;
		}
		var_465_int = 0; var_466_int = 0; var_467_int = 0; var_468_int = 0;
		var_466_int = var_425_float % (int)24;
		var_468_int = var_425_float % (int)24;
		func_9037((int)0, var_466_int, (int)0, var_468_int);
		FindActor(var_430_object, "dt_house_1_07");
		@@var_430_object:EnableSubset((int)200, (bool)0);
		GetMainOutdoorScene(var_431_object);
		var_4393_bool = 0;
		var_4393_bool = 1;
		var_4395_bool = var_425_float < (int)7;
		if(var_4395_bool != 1) {
			var_4397_bool = var_425_float >= (int)20;
			if(var_4397_bool != 1) {
				var_4393_bool = 0;
			}
		}
		@@var_431_object:SwitchLights((int)0, var_4393_bool);
		var_427_int = var_427_int + (int)1;
		goto Label_8971;
	}
	return 14;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12027(var_5403_bool)
{
	var_5406_int = 0; var_5407_string = "";
	func_138(var_5406_int, "d5AnnaVisit");
	var_5409_bool = var_5406_int != (int)0;
	if(var_5409_bool != 0) {
		var_5403_bool = 1;
		return 0;
	}
	var_5403_bool = 0;
	return 0;
}


func_9985(var_5094_int, var_5095_float)
{
	var_5096_int = 0; var_5097_int = 0; var_5098_int = 0; var_5099_float = 0;
	var_5095_float = var_5099_float;
	func_12495(var_5096_int, (int)538404, (int)538403, var_5099_float);
	var_5096_int = var_5094_int;
	return 0;
}


func_12039(var_5317_bool)
{
	var_5320_int = 0; var_5321_string = "";
	func_138(var_5320_int, "d8MladVladVisit");
	var_5323_bool = var_5320_int != (int)0;
	if(var_5323_bool != 0) {
		var_5317_bool = 1;
		return 0;
	}
	var_5317_bool = 0;
	return 0;
}


func_9994(var_5293_int, var_5294_float)
{
	var_5295_int = 0; var_5296_int = 0; var_5297_int = 0; var_5298_float = 0;
	var_5294_float = var_5298_float;
	func_12495(var_5295_int, (int)530572, (int)530571, var_5298_float);
	var_5295_int = var_5293_int;
	return 0;
}


func_3853(var_3565_int, var_3566_int, var_3567_int)
{
	var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0; var_3575_int = 0;
	var_3576_bool = 0;
	var_3576_bool = 0;
	var_3578_bool = var_3567_int > (int)8;
	if(var_3578_bool != 0) {
		var_3580_bool = var_3567_int < (int)21;
		if(var_3580_bool != 0) {
			var_3576_bool = 1;
		}
	}
	if(var_3576_bool != 0) {
		var_3581_int = 0; var_3582_string = ""; var_3583_string = ""; var_3584_int = 0;
		var_3565_int = var_3581_int;
		func_509(var_3581_int, "pers_rat", "rat.xml", (int)2);
		var_3585_int = 0; var_3586_string = ""; var_3587_string = ""; var_3588_int = 0;
		var_3565_int = var_3585_int;
		func_509(var_3585_int, "pers_alkash", "alkash.xml", (int)2);
		var_3589_int = 0; var_3590_string = ""; var_3591_string = ""; var_3592_int = 0;
		var_3565_int = var_3589_int;
		func_509(var_3589_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3594_float = 0; var_3595_int = 0;
		var_3566_int = var_3595_int;
		func_1171(var_3594_float, var_3595_int);
		var_3572_int = (int)2 * var_3594_float;
		var_3596_int = var_3572_int;
		if(var_3596_int != 0) {
			var_3597_int = 0; var_3598_string = ""; var_3599_string = ""; var_3600_int = 0;
			var_3565_int = var_3597_int;
			var_3572_int = var_3600_int;
			func_509(var_3597_int, "pers_grabitel", "grabitel.xml", var_3600_int);
		}
		var_3602_int = var_3566_int + (int)1;
		var_3604_bool = var_3602_int >= (int)2;
		if(var_3604_bool != 0) {
			var_3605_int = 0; var_3606_string = ""; var_3607_string = ""; var_3608_int = 0;
			var_3565_int = var_3605_int;
			func_509(var_3605_int, "pers_patrool", "patrol.xml", (int)2);
			var_3609_bool = 0; var_3610_int = 0;
			var_3566_int = var_3610_int;
			func_1378(var_3609_bool, var_3610_int);
			if(var_3609_bool != 0) {
				var_3611_int = 0; var_3612_string = ""; var_3613_string = ""; var_3614_int = 0;
				var_3565_int = var_3611_int;
				func_509(var_3611_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3616_float = 0; var_3617_int = 0;
		var_3566_int = var_3617_int;
		func_1261(var_3616_float, var_3617_int);
		var_3573_int = (int)1 * var_3616_float;
		var_3618_int = var_3573_int;
		if(var_3618_int != 0) {
			var_3619_int = 0; var_3620_string = ""; var_3621_string = ""; var_3622_int = 0;
			var_3565_int = var_3619_int;
			var_3573_int = var_3622_int;
			func_509(var_3619_int, "pers_bomber", "bomber.xml", var_3622_int);
		}
	} else {
		var_3636_int = 0; var_3637_string = ""; var_3638_string = ""; var_3639_int = 0;
		var_3565_int = var_3636_int;
		func_509(var_3636_int, "pers_rat", "rat.xml", (int)4);
		var_3640_int = 0; var_3641_string = ""; var_3642_string = ""; var_3643_int = 0;
		var_3565_int = var_3640_int;
		func_509(var_3640_int, "pers_alkash", "alkash.xml", (int)1);
		var_3644_int = 0; var_3645_string = ""; var_3646_string = ""; var_3647_int = 0;
		var_3565_int = var_3644_int;
		func_509(var_3644_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3649_float = 0; var_3650_int = 0;
		var_3566_int = var_3650_int;
		func_1171(var_3649_float, var_3650_int);
		var_3574_int = (int)3 * var_3649_float;
		var_3651_int = var_3574_int;
		if(var_3651_int != 0) {
			var_3652_int = 0; var_3653_string = ""; var_3654_string = ""; var_3655_int = 0;
			var_3565_int = var_3652_int;
			var_3574_int = var_3655_int;
			func_509(var_3652_int, "pers_grabitel", "grabitel.xml", var_3655_int);
		}
		var_3657_int = var_3566_int + (int)1;
		var_3659_bool = var_3657_int >= (int)2;
		if(var_3659_bool != 0) {
			var_3660_int = 0; var_3661_string = ""; var_3662_string = ""; var_3663_int = 0;
			var_3565_int = var_3660_int;
			func_509(var_3660_int, "pers_patrool", "patrol.xml", (int)1);
			var_3664_bool = 0; var_3665_int = 0;
			var_3566_int = var_3665_int;
			func_1378(var_3664_bool, var_3665_int);
			if(var_3664_bool != 0) {
				var_3666_int = 0; var_3667_string = ""; var_3668_string = ""; var_3669_int = 0;
				var_3565_int = var_3666_int;
				func_509(var_3666_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3671_float = 0; var_3672_int = 0;
		var_3566_int = var_3672_int;
		func_1261(var_3671_float, var_3672_int);
		var_3575_int = (int)1 * var_3671_float;
		var_3673_int = var_3575_int;
		if(var_3673_int == 0) goto Label_4015;
		var_3674_int = 0; var_3675_string = ""; var_3676_string = ""; var_3677_int = 0;
		var_3565_int = var_3674_int;
		var_3575_int = var_3677_int;
		func_509(var_3674_int, "pers_bomber", "bomber.xml", var_3677_int);
	}
Label_4015:
	var_3623_bool = 0; var_3624_int = 0; var_3625_int = 0;
	var_3566_int = var_3624_int;
	var_3567_int = var_3625_int;
	func_1351(var_3623_bool, var_3624_int, var_3625_int);
	if(var_3623_bool != 0) {
		var_3626_int = 0; var_3627_string = ""; var_3628_string = ""; var_3629_int = 0;
		var_3565_int = var_3626_int;
		func_509(var_3626_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3630_bool = 0; var_3631_int = 0;
	var_3566_int = var_3631_int;
	func_1378(var_3630_bool, var_3631_int);
	if(var_3630_bool != 0) {
		var_3632_int = 0; var_3633_string = ""; var_3634_string = ""; var_3635_int = 0;
		var_3565_int = var_3632_int;
		func_509(var_3632_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_785(var_738_int, var_739_bool)
{
	var_740_object = Obj(); var_741_int = 0; var_742_object = Obj(); var_743_int = 0;
	GetMainOutdoorScene(var_742_object);
	var_744_bool = var_742_object == 0; //@ne
	if(var_744_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_743_int = var_738_int + (int)1;
	@@var_742_object:EnableSubsets(var_743_int, (int)100, var_739_bool, (bool)1);
	return 4;
}
EMIT "Stack[-2] = 0";


func_12051(var_4952_bool)
{
	var_4955_int = 0; var_4956_string = "";
	func_138(var_4955_int, "d9q03");
	var_4958_bool = var_4955_int == (int)1000;
	if(var_4958_bool != 0) {
		var_4952_bool = 1;
		return 0;
	}
	var_4952_bool = 0;
	return 0;
}


func_10003(var_5430_int, var_5431_float)
{
	var_5432_int = 0; var_5433_int = 0; var_5434_int = 0; var_5435_float = 0;
	var_5431_float = var_5435_float;
	func_12495(var_5432_int, (int)515493, (int)515492, var_5435_float);
	var_5432_int = var_5430_int;
	return 0;
}


func_6936(var_1737_int, var_1738_int, var_1739_object, var_1740_object, var_1741_object, var_1742_object)
{
	var_1744_bool = var_1738_int == (int)0;
	if(var_1744_bool != 0) {
		var_1745_int = 0; var_1746_bool = 0;
		func_802((int)13, (bool)0);
		var_1747_int = 0; var_1748_bool = 0; var_1749_int = 0;
		func_819((int)13, (bool)0, (int)1);
		var_1750_int = 0; var_1751_int = 0; var_1752_object = Obj(); var_1753_object = Obj(); var_1754_object = Obj();
		var_1750_int = 13;
		var_1737_int = var_1751_int;
		var_1739_object = var_1752_object;
		var_1740_object = var_1753_object;
		var_1741_object = var_1754_object;
		func_628(var_1751_int, var_1752_object, var_1753_object, var_1754_object);
		var_1755_object = Obj(); var_1756_int = 0;
		var_1742_object = var_1755_object;
		func_311(var_1755_object, (int)0);
		var_1757_int = 0; var_1758_bool = 0; var_1759_int = 0;
		func_876((int)13, (bool)0, (int)4);
		var_1760_int = 0; var_1761_bool = 0; var_1762_int = 0;
		func_938((int)13, (bool)0, (int)4);
	}
	var_1763_int = 0; var_1764_int = 0;
	var_1738_int = var_1764_int;
	func_1056((int)13, var_1764_int);
	var_1765_int = 0; var_1766_int = 0; var_1767_int = 0;
	var_1737_int = var_1766_int;
	var_1738_int = var_1767_int;
	func_1630((int)13, var_1766_int, var_1767_int);
	return 0;
}


func_5912(var_1572_int, var_1573_int, var_1574_object, var_1575_object, var_1576_object, var_1577_object)
{
	var_1579_bool = var_1573_int == (int)0;
	if(var_1579_bool != 0) {
		var_1580_int = 0; var_1581_bool = 0;
		func_802((int)8, (bool)0);
		var_1582_int = 0; var_1583_bool = 0; var_1584_int = 0;
		func_819((int)8, (bool)0, (int)1);
		var_1585_int = 0; var_1586_int = 0; var_1587_object = Obj(); var_1588_object = Obj(); var_1589_object = Obj();
		var_1585_int = 8;
		var_1572_int = var_1586_int;
		var_1574_object = var_1587_object;
		var_1575_object = var_1588_object;
		var_1576_object = var_1589_object;
		func_628(var_1586_int, var_1587_object, var_1588_object, var_1589_object);
		var_1590_object = Obj(); var_1591_int = 0;
		var_1577_object = var_1590_object;
		func_311(var_1590_object, (int)0);
		var_1592_int = 0; var_1593_bool = 0; var_1594_int = 0;
		func_876((int)8, (bool)0, (int)4);
		var_1595_int = 0; var_1596_bool = 0; var_1597_int = 0;
		func_938((int)8, (bool)0, (int)4);
	}
	var_1598_int = 0; var_1599_int = 0;
	var_1573_int = var_1599_int;
	func_989((int)8, var_1599_int);
	var_1600_int = 0; var_1601_int = 0; var_1602_int = 0;
	var_1572_int = var_1601_int;
	var_1573_int = var_1602_int;
	func_1630((int)8, var_1601_int, var_1602_int);
	return 0;
}


func_10012(var_5034_int, var_5035_float)
{
	var_5036_int = 0; var_5037_int = 0; var_5038_int = 0; var_5039_float = 0;
	var_5035_float = var_5039_float;
	func_12495(var_5036_int, (int)535696, (int)535695, var_5039_float);
	var_5036_int = var_5034_int;
	return 0;
}


func_12063(var_4724_bool)
{
	var_4727_int = 0; var_4728_string = "";
	func_138(var_4727_int, "d10KaterinaVisit");
	var_4730_bool = var_4727_int != (int)0;
	if(var_4730_bool != 0) {
		var_4724_bool = 1;
		return 0;
	}
	var_4724_bool = 0;
	return 0;
}


func_802(var_453_int, var_454_bool)
{
	var_455_object = Obj(); var_456_int = 0; var_457_object = Obj(); var_458_int = 0;
	GetMainOutdoorScene(var_457_object);
	var_459_bool = var_457_object == 0; //@ne
	if(var_459_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_458_int = var_453_int + (int)1;
	@@var_457_object:EnableSubsets(var_458_int, (int)200, var_454_bool, (bool)0);
	return 4;
}
EMIT "Stack[-2] = 0";


func_4900(var_3537_int, var_3538_int, var_3539_object, var_3540_object, var_3541_object, var_3542_object)
{
	var_3544_bool = var_3538_int == (int)0;
	if(var_3544_bool != 0) {
		var_3545_int = 0; var_3546_bool = 0;
		func_802((int)2, (bool)0);
		var_3547_int = 0; var_3548_bool = 0; var_3549_int = 0;
		func_819((int)2, (bool)0, (int)1);
		var_3550_int = 0; var_3551_int = 0; var_3552_object = Obj(); var_3553_object = Obj(); var_3554_object = Obj();
		var_3537_int = var_3551_int;
		var_3539_object = var_3552_object;
		var_3540_object = var_3553_object;
		var_3541_object = var_3554_object;
		func_726((int)2, var_3551_int, var_3552_object, var_3553_object, var_3554_object);
		var_3555_object = Obj(); var_3556_int = 0;
		var_3542_object = var_3555_object;
		func_311(var_3555_object, (int)2);
		var_3557_int = 0; var_3558_bool = 0; var_3559_int = 0;
		func_876((int)2, (bool)0, (int)5);
		var_3560_int = 0; var_3561_bool = 0; var_3562_int = 0;
		func_938((int)2, (bool)1, (int)5);
	}
	var_3563_int = 0; var_3564_bool = 0;
	func_785((int)2, (bool)0);
	var_3565_int = 0; var_3566_int = 0; var_3567_int = 0;
	var_3537_int = var_3566_int;
	var_3538_int = var_3567_int;
	func_3853((int)2, var_3566_int, var_3567_int);
	return 0;
}


func_10021(var_5004_int, var_5005_float)
{
	var_5006_int = 0; var_5007_int = 0; var_5008_int = 0; var_5009_float = 0;
	var_5005_float = var_5009_float;
	func_12495(var_5006_int, (int)535694, (int)535693, var_5009_float);
	var_5006_int = var_5004_int;
	return 0;
}


func_12075(var_5058_bool)
{
	var_5061_int = 0; var_5062_string = "";
	func_138(var_5061_int, "d10MarkVisit");
	var_5064_bool = var_5061_int != (int)0;
	if(var_5064_bool != 0) {
		var_5058_bool = 1;
		return 0;
	}
	var_5058_bool = 0;
	return 0;
}


func_10030(var_5473_int, var_5474_float)
{
	var_5475_int = 0; var_5476_int = 0; var_5477_int = 0; var_5478_float = 0;
	var_5474_float = var_5478_float;
	func_12495(var_5475_int, (int)530574, (int)530573, var_5478_float);
	var_5475_int = var_5473_int;
	return 0;
}


func_819(var_529_int, var_530_bool, var_531_int)
{
	var_532_string = ""; var_533_object = Obj(); var_534_int = 0; var_535_string = ""; var_536_object = Obj(); var_537_int = 0; var_538_object = Obj(); var_539_string = ""; var_540_object = Obj(); var_541_int = 0; var_542_string = ""; var_543_object = Obj(); var_544_int = 0; var_545_object = Obj();
	var_548_int = var_529_int + (int)1;
	var_539_string = "street_rags" + var_548_int;
	var_549_bool = var_530_bool;
	if(var_549_bool != 0) {
		GetMainOutdoorScene(var_540_object);
		var_550_bool = var_540_object == 0; //@ne
		if(var_550_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_541_int = 1;

	Label_835:
		var_552_bool = var_541_int <= var_531_int;
		if(var_552_bool != 0) {
			var_554_int = var_539_string + "_";
			var_542_string = var_554_int + var_541_int;
			FindActor(var_543_object, var_542_string);
			var_555_bool = var_543_object == 0; //@nz
			if(var_555_bool != 0) {
				AddActor(var_543_object, var_542_string, var_540_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "do_invis.xml");
			} else {
				@@var_543_object:RemoveOnUnload((bool)0);
		}
			var_540_object = 0;
	} else {
			var_544_int = 1;

		Label_860:
			var_561_bool = var_544_int <= var_531_int;
			if(var_561_bool == 0) goto Label_875;
			var_563_int = var_539_string + "_";
			var_564_int = var_563_int + var_544_int;
			FindActor(var_545_object, var_564_int);
			var_565_object = var_545_object;
			if(var_565_object != 0) {
				@@var_545_object:RemoveOnUnload();
			}
			var_545_object = 0;
			var_544_int = var_544_int + (int)1;
			goto Label_860;
	}
	Label_875:
		return 14;

	}
	var_543_object = 0;
	var_541_int = var_541_int + (int)1;
	goto Label_835;
	
}


func_12087(var_5026_bool)
{
	var_5029_int = 0; var_5030_string = "";
	func_138(var_5029_int, "d12q01BurahVisit");
	var_5032_bool = var_5029_int != (int)0;
	if(var_5032_bool != 0) {
		var_5026_bool = 1;
		return 0;
	}
	var_5026_bool = 0;
	return 0;
}


func_10039(var_6153_int, var_6154_float)
{
	var_6155_int = 0; var_6156_int = 0; var_6157_int = 0; var_6158_float = 0;
	var_6154_float = var_6158_float;
	func_12495(var_6155_int, (int)501160, (int)501159, var_6158_float);
	var_6155_int = var_6153_int;
	return 0;
}


func_10048(var_5863_int, var_5864_float)
{
	var_5865_int = 0; var_5866_int = 0; var_5867_int = 0; var_5868_float = 0;
	var_5864_float = var_5868_float;
	func_12495(var_5865_int, (int)501158, (int)501157, var_5868_float);
	var_5865_int = var_5863_int;
	return 0;
}


func_12099(var_5116_bool)
{
	var_5119_int = 0; var_5120_string = "";
	func_138(var_5119_int, "d4ViktorVisit");
	var_5122_bool = var_5119_int != (int)0;
	if(var_5122_bool != 0) {
		var_5116_bool = 1;
		return 0;
	}
	var_5116_bool = 0;
	return 0;
}


func_10057(var_6089_int, var_6090_float)
{
	var_6091_int = 0; var_6092_int = 0; var_6093_int = 0; var_6094_float = 0;
	var_6090_float = var_6094_float;
	func_12495(var_6091_int, (int)501154, (int)501153, var_6094_float);
	var_6091_int = var_6089_int;
	return 0;
}


func_6988(var_2967_int, var_2968_int, var_2969_object, var_2970_object, var_2971_object, var_2972_object)
{
	var_2974_bool = var_2968_int == (int)0;
	if(var_2974_bool != 0) {
		var_2975_int = 0; var_2976_bool = 0;
		func_802((int)13, (bool)1);
		var_2977_int = 0; var_2978_bool = 0; var_2979_int = 0;
		func_819((int)13, (bool)1, (int)1);
		var_2980_int = 0; var_2981_int = 0; var_2982_object = Obj(); var_2983_object = Obj(); var_2984_object = Obj();
		var_2967_int = var_2981_int;
		var_2969_object = var_2982_object;
		var_2970_object = var_2983_object;
		var_2971_object = var_2984_object;
		func_647((int)13, var_2981_int, var_2982_object, var_2983_object, var_2984_object);
		var_2985_object = Obj(); var_2986_int = 0;
		var_2972_object = var_2985_object;
		func_311(var_2985_object, (int)1);
		var_2987_int = 0; var_2988_bool = 0; var_2989_int = 0;
		func_876((int)13, (bool)1, (int)4);
		var_2990_int = 0; var_2991_bool = 0; var_2992_int = 0;
		func_938((int)13, (bool)0, (int)4);
	}
	var_2993_int = 0; var_2994_bool = 0;
	func_785((int)13, (bool)0);
	var_2995_int = 0; var_2996_int = 0; var_2997_int = 0;
	var_2967_int = var_2996_int;
	var_2968_int = var_2997_int;
	func_2770((int)13, var_2996_int, var_2997_int);
	return 0;
}


func_9037(var_465_int, var_466_int, var_467_int, var_468_int)
{
	var_471_int = 0; var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_object = Obj(); var_476_int = 0; var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj();
	Trace("City update");
	var_482_bool = 0;
	var_482_bool = 0;
	var_483_bool = var_465_int == var_467_int;
	if(var_483_bool != 0) {
		var_484_bool = var_466_int == var_468_int;
		if(var_484_bool != 0) {
			var_482_bool = 1;
		}
	}
	if(var_482_bool != 0) {
		PlaySound("kolokol");
	}
	
Label_9053:
	var_487_bool = (int)0 < (int)16;
	if(var_487_bool != 0) {
		var_488_int = 0;
		var_476_int = var_488_int;
		func_496(var_488_int);
		var_493_bool = 0; var_494_int = 0;
		var_476_int = var_494_int;
		func_406(var_493_bool, var_494_int);
		if(var_493_bool != 0) {
			var_502_int = 0; var_503_int = 0; var_504_int = 0;
			var_476_int = var_502_int;
			var_465_int = var_503_int;
			var_466_int = var_504_int;
			func_9157(var_502_int, var_503_int, var_504_int);
		} else {
			var_1980_bool = 0; var_1981_int = 0;
			var_476_int = var_1981_int;
			func_436(var_1980_bool, var_1981_int);
			if(var_1980_bool != 0) {
				var_1989_int = 0; var_1990_int = 0; var_1991_int = 0;
				var_476_int = var_1989_int;
				var_465_int = var_1990_int;
				var_466_int = var_1991_int;
				func_9382(var_1989_int, var_1990_int, var_1991_int);
				goto Label_9090;
			}
			var_3170_int = 0; var_3171_int = 0; var_3172_int = 0;
			var_476_int = var_3170_int;
			var_465_int = var_3171_int;
			var_466_int = var_3172_int;
			func_9607(var_3170_int, var_3171_int, var_3172_int);
	}
		var_4305_bool = var_466_int == (int)0;
		if(var_4305_bool != 0) {
			var_4306_int = 0;
			var_465_int = var_4306_int;
			func_14735(var_4306_int);
			var_4368_bool = 0;
			var_4368_bool = 1;
			var_4370_bool = var_465_int == (int)1;
			if(var_4370_bool != 1) {
				var_4371_bool = 0; var_4372_int = 0;
				func_436(var_4371_bool, (int)5);
				if(var_4371_bool != 1) {
					var_4368_bool = 0;
				}
			}
			if(var_4368_bool != 0) {
				FindActor(var_477_object, "dt_house_1_07");
				@@var_477_object:EnableSubset((int)200, (bool)1);
				var_477_object = 0;
			} else {
					FindActor(var_478_object, "dt_house_1_07");
					@@var_478_object:EnableSubset((int)200, (bool)0);
					var_478_object = 0;
			}
		}
		var_4377_bool = var_466_int == (int)7;
		if(var_4377_bool != 0) {
			Trace("day time");
			GetMainOutdoorScene(var_479_object);
			@@var_479_object:SwitchLights((int)0, (bool)0);
			var_479_object = 0;
		} else {
			var_4382_bool = var_466_int == (int)20;
			if(var_4382_bool == 0) goto Label_9156;
			Trace("night time");
			GetMainOutdoorScene(var_480_object);
			@@var_480_object:SwitchLights((int)0, (bool)1);
			var_480_object = 0;

		}
	Label_9156:
		var_476_int = var_476_int + (int)1;
		goto Label_9053;
	}
	return 10;
	
}


func_5964(var_2802_int, var_2803_int, var_2804_object, var_2805_object, var_2806_object, var_2807_object)
{
	var_2809_bool = var_2803_int == (int)0;
	if(var_2809_bool != 0) {
		var_2810_int = 0; var_2811_bool = 0;
		func_802((int)8, (bool)1);
		var_2812_int = 0; var_2813_bool = 0; var_2814_int = 0;
		func_819((int)8, (bool)1, (int)1);
		var_2815_int = 0; var_2816_int = 0; var_2817_object = Obj(); var_2818_object = Obj(); var_2819_object = Obj();
		var_2802_int = var_2816_int;
		var_2804_object = var_2817_object;
		var_2805_object = var_2818_object;
		var_2806_object = var_2819_object;
		func_647((int)8, var_2816_int, var_2817_object, var_2818_object, var_2819_object);
		var_2820_object = Obj(); var_2821_int = 0;
		var_2807_object = var_2820_object;
		func_311(var_2820_object, (int)1);
		var_2822_int = 0; var_2823_bool = 0; var_2824_int = 0;
		func_876((int)8, (bool)1, (int)4);
		var_2825_int = 0; var_2826_bool = 0; var_2827_int = 0;
		func_938((int)8, (bool)0, (int)4);
	}
	var_2828_int = 0; var_2829_bool = 0;
	func_785((int)8, (bool)0);
	var_2830_int = 0; var_2831_int = 0; var_2832_int = 0;
	var_2802_int = var_2831_int;
	var_2803_int = var_2832_int;
	func_2770((int)8, var_2831_int, var_2832_int);
	return 0;
}


func_12111(var_4980_bool)
{
	var_4983_int = 0; var_4984_string = "";
	func_138(var_4983_int, "d8AglajaVisit");
	var_4986_bool = var_4983_int != (int)0;
	if(var_4986_bool != 0) {
		var_4980_bool = 1;
		return 0;
	}
	var_4980_bool = 0;
	return 0;
}


func_10066(var_4814_int, var_4815_float)
{
	var_4816_int = 0; var_4817_int = 0; var_4818_int = 0; var_4819_float = 0;
	var_4815_float = var_4819_float;
	func_12495(var_4816_int, (int)501152, (int)501151, var_4819_float);
	var_4816_int = var_4814_int;
	return 0;
}


func_4952(var_97_object)
{
	@@var_97_object:add("house5_02");
	@@var_97_object:add("dt_house1_union2_03l");
	@@var_97_object:add("dt_house1_union2_03r");
	@@var_97_object:add("dt_house1_union2_01l");
	@@var_97_object:add("dt_house1_union2_01r");
	@@var_97_object:add("house5_unoinl");
	@@var_97_object:add("house5_unoinr");
	@@var_97_object:add("dt_house_1_01");
	@@var_97_object:add("house5_05");
	@@var_97_object:add("house5_06");
	@@var_97_object:add("dt_house_1_02");
	@@var_97_object:add("house5_unoin_solid01l");
	@@var_97_object:add("house5_unoin_solid01r");
	@@var_97_object:add("house5_03");
	@@var_97_object:add("house5_04");
	@@var_97_object:add("house1_se_02l");
	@@var_97_object:add("house1_se_02r");
	@@var_97_object:add("dt_house3_01_i2");
	@@var_97_object:add("dt_house3_02_i2");
	@@var_97_object:add("dt_house3_02");
	@@var_97_object:add("dt_house3_03_i2");
	@@var_97_object:add("dt_house3_03");
	@@var_97_object:add("dt_house3_04_i2");
	@@var_97_object:add("house5_21");
	return 0;
}


func_12123(var_4944_bool)
{
	var_4947_int = 0; var_4948_string = "";
	func_138(var_4947_int, "d9AnnaVisit");
	var_4950_bool = var_4947_int != (int)0;
	if(var_4950_bool != 0) {
		var_4944_bool = 1;
		return 0;
	}
	var_4944_bool = 0;
	return 0;
}


func_10075(var_6387_int, var_6388_float)
{
	var_6389_int = 0; var_6390_int = 0; var_6391_int = 0; var_6392_float = 0;
	var_6388_float = var_6392_float;
	func_12495(var_6389_int, (int)501156, (int)501155, var_6392_float);
	var_6389_int = var_6387_int;
	return 0;
}


func_10084(var_5341_int, var_5342_float)
{
	var_5343_int = 0; var_5344_int = 0; var_5345_int = 0; var_5346_float = 0;
	var_5342_float = var_5346_float;
	func_12495(var_5343_int, (int)501413, (int)501412, var_5346_float);
	var_5343_int = var_5341_int;
	return 0;
}


func_12135(var_5132_bool)
{
	var_5135_int = 0; var_5136_string = "";
	func_138(var_5135_int, "d9LaraVisit");
	var_5138_bool = var_5135_int != (int)0;
	if(var_5138_bool != 0) {
		var_5132_bool = 1;
		return 0;
	}
	var_5132_bool = 0;
	return 0;
}


func_876(var_640_int, var_641_bool, var_642_int)
{
	var_643_string = ""; var_644_object = Obj(); var_645_int = 0; var_646_string = ""; var_647_object = Obj(); var_648_int = 0; var_649_string = ""; var_650_object = Obj(); var_651_string = ""; var_652_object = Obj(); var_653_int = 0; var_654_string = ""; var_655_object = Obj(); var_656_int = 0; var_657_string = ""; var_658_object = Obj();
	var_661_int = var_640_int + (int)1;
	var_651_string = "dr_mark" + var_661_int;
	var_662_bool = var_641_bool;
	if(var_662_bool != 0) {
		GetMainOutdoorScene(var_652_object);
		var_663_bool = var_652_object == 0; //@ne
		if(var_663_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_653_int = 1;

	Label_892:
		var_665_bool = var_653_int <= var_642_int;
		if(var_665_bool != 0) {
			var_667_int = var_651_string + "_";
			var_654_string = var_667_int + var_653_int;
			FindActor(var_655_object, var_654_string);
			var_668_bool = var_655_object == 0; //@nz
			if(var_668_bool != 0) {
				AddActor(var_655_object, var_654_string, var_652_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "disease_object.xml");
			} else {
				var_673_bool = 0; var_674_string = ""; var_675_string = "";
				var_654_string = var_674_string;
				func_245(var_673_bool, var_674_string, "restore");
		}
			var_652_object = 0;
	} else {
			var_656_int = 1;

		Label_919:
			var_679_bool = var_656_int <= var_642_int;
			if(var_679_bool == 0) goto Label_937;
			var_681_int = var_651_string + "_";
			var_657_string = var_681_int + var_656_int;
			FindActor(var_658_object, var_657_string);
			var_682_object = var_658_object;
			if(var_682_object != 0) {
				var_683_bool = 0; var_684_string = ""; var_685_string = "";
				var_657_string = var_684_string;
				func_245(var_683_bool, var_684_string, "cleanup");
			}
			var_658_object = 0;
			var_656_int = var_656_int + (int)1;
			goto Label_919;
	}
	Label_937:
		return 16;

	}
	var_655_object = 0;
	var_653_int = var_653_int + (int)1;
	goto Label_892;
	
}


func_10093(var_5349_int, var_5350_float)
{
	var_5351_int = 0; var_5352_int = 0; var_5353_int = 0; var_5354_float = 0;
	var_5350_float = var_5354_float;
	func_12495(var_5351_int, (int)502662, (int)502661, var_5354_float);
	var_5351_int = var_5349_int;
	return 0;
}


func_1903(var_1058_int, var_1059_int, var_1060_int)
{
	var_1061_int = 0; var_1062_int = 0;
	var_1064_int = var_1059_int + (int)1;
	var_1066_bool = var_1064_int == (int)12;
	if(var_1066_bool != 0) {
		return 2;
	}
	var_1067_bool = 0;
	var_1067_bool = 0;
	var_1068_bool = 0;
	var_1068_bool = 1;
	var_1070_bool = var_1060_int < (int)7;
	if(var_1070_bool != 1) {
		var_1072_bool = var_1060_int > (int)21;
		if(var_1072_bool != 1) {
			var_1068_bool = 0;
		}
	}
	if(var_1068_bool != 0) {
		var_1074_bool = var_1059_int != (int)0;
		if(var_1074_bool != 0) {
			var_1067_bool = 1;
		}
	}
	if(var_1067_bool != 0) {
		var_1075_float = 0; var_1076_int = 0;
		var_1059_int = var_1076_int;
		func_1147(var_1075_float, var_1076_int);
		var_1075_float = var_1062_int;
		var_1077_int = var_1062_int;
		if(var_1077_int != 0) {
			var_1078_int = 0; var_1079_string = ""; var_1080_string = ""; var_1081_int = 0;
			var_1058_int = var_1078_int;
			var_1062_int = var_1081_int;
			func_509(var_1078_int, "pers_grabitel", "grabitel.xml", var_1081_int);
		}
	}
	var_1082_bool = 0; var_1083_int = 0; var_1084_int = 0;
	var_1059_int = var_1083_int;
	var_1060_int = var_1084_int;
	func_1116(var_1082_bool, var_1083_int, var_1084_int);
	if(var_1082_bool != 0) {
		var_1085_int = 0; var_1086_string = ""; var_1087_string = ""; var_1088_int = 0;
		var_1058_int = var_1085_int;
		func_509(var_1085_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1089_int = 0; var_1090_string = ""; var_1091_string = ""; var_1092_int = 0;
		var_1058_int = var_1089_int;
		func_509(var_1089_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1093_int = 0; var_1094_string = ""; var_1095_string = ""; var_1096_int = 0;
		var_1058_int = var_1093_int;
		func_509(var_1093_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1097_int = 0; var_1098_string = ""; var_1099_string = ""; var_1100_int = 0;
		var_1058_int = var_1097_int;
		func_509(var_1097_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1101_int = 0; var_1102_string = ""; var_1103_string = ""; var_1104_int = 0;
		var_1058_int = var_1101_int;
		func_509(var_1101_int, "pers_woman", "woman.xml", (int)1);
		var_1105_int = 0; var_1106_string = ""; var_1107_string = ""; var_1108_int = 0;
		var_1058_int = var_1105_int;
		func_509(var_1105_int, "pers_alkash", "alkash.xml", (int)1);
		var_1109_int = 0; var_1110_string = ""; var_1111_string = ""; var_1112_int = 0;
		var_1058_int = var_1109_int;
		func_509(var_1109_int, "pers_girl", "girl.xml", (int)1);
		var_1113_int = 0; var_1114_string = ""; var_1115_string = ""; var_1116_int = 0;
		var_1058_int = var_1113_int;
		func_509(var_1113_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_1154_bool = 0;
		var_1154_bool = 0;
		var_1156_bool = var_1060_int > (int)8;
		if(var_1156_bool != 0) {
			var_1158_bool = var_1060_int < (int)21;
			if(var_1158_bool != 0) {
				var_1154_bool = 1;
			}
		}
		if(var_1154_bool != 0) {
			var_1159_int = 0; var_1160_string = ""; var_1161_string = ""; var_1162_int = 0;
			var_1058_int = var_1159_int;
			func_509(var_1159_int, "pers_woman", "woman.xml", (int)1);
			var_1163_int = 0; var_1164_string = ""; var_1165_string = ""; var_1166_int = 0;
			var_1058_int = var_1163_int;
			func_509(var_1163_int, "pers_unosha", "unosha.xml", (int)1);
			var_1167_int = 0; var_1168_string = ""; var_1169_string = ""; var_1170_int = 0;
			var_1058_int = var_1167_int;
			func_509(var_1167_int, "pers_unosha", "unosha2.xml", (int)1);
			var_1171_int = 0; var_1172_string = ""; var_1173_string = ""; var_1174_int = 0;
			var_1058_int = var_1171_int;
			func_509(var_1171_int, "pers_worker", "worker.xml", (int)1);
			var_1175_int = 0; var_1176_string = ""; var_1177_string = ""; var_1178_int = 0;
			var_1058_int = var_1175_int;
			func_509(var_1175_int, "pers_worker", "worker2.xml", (int)1);
			var_1179_int = 0; var_1180_string = ""; var_1181_string = ""; var_1182_int = 0;
			var_1058_int = var_1179_int;
			func_509(var_1179_int, "pers_alkash", "alkash.xml", (int)1);
			var_1183_int = 0; var_1184_string = ""; var_1185_string = ""; var_1186_int = 0;
			var_1058_int = var_1183_int;
			func_509(var_1183_int, "pers_girl", "girl.xml", (int)1);
			var_1187_int = 0; var_1188_string = ""; var_1189_string = ""; var_1190_int = 0;
			var_1058_int = var_1187_int;
			func_509(var_1187_int, "pers_girl", "girl2.xml", (int)1);
			var_1192_int = var_1059_int + (int)1;
			var_1194_bool = var_1192_int >= (int)3;
			if(var_1194_bool != 0) {
				var_1195_int = 0; var_1196_string = ""; var_1197_string = ""; var_1198_int = 0;
				var_1058_int = var_1195_int;
				func_509(var_1195_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
			}
			var_1200_int = var_1059_int + (int)1;
			var_1202_bool = var_1200_int >= (int)7;
			if(var_1202_bool != 0) {
				var_1203_int = 0; var_1204_string = ""; var_1205_string = ""; var_1206_int = 0;
				var_1058_int = var_1203_int;
				func_509(var_1203_int, "pers_butcher", "butcher.xml", (int)2);
			}
			goto Label_2161;
		}
		var_1207_int = 0; var_1208_string = ""; var_1209_string = ""; var_1210_int = 0;
		var_1058_int = var_1207_int;
		func_509(var_1207_int, "pers_woman", "woman.xml", (int)1);
		var_1211_int = 0; var_1212_string = ""; var_1213_string = ""; var_1214_int = 0;
		var_1058_int = var_1211_int;
		func_509(var_1211_int, "pers_unosha", "unosha.xml", (int)1);
		var_1215_int = 0; var_1216_string = ""; var_1217_string = ""; var_1218_int = 0;
		var_1058_int = var_1215_int;
		func_509(var_1215_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1219_int = 0; var_1220_string = ""; var_1221_string = ""; var_1222_int = 0;
		var_1058_int = var_1219_int;
		func_509(var_1219_int, "pers_worker", "worker.xml", (int)1);
		var_1223_int = 0; var_1224_string = ""; var_1225_string = ""; var_1226_int = 0;
		var_1058_int = var_1223_int;
		func_509(var_1223_int, "pers_worker", "worker2.xml", (int)1);
		var_1227_int = 0; var_1228_string = ""; var_1229_string = ""; var_1230_int = 0;
		var_1058_int = var_1227_int;
		func_509(var_1227_int, "pers_alkash", "alkash.xml", (int)1);
		var_1232_int = var_1059_int + (int)1;
		var_1234_bool = var_1232_int >= (int)3;
		if(var_1234_bool != 0) {
			var_1235_int = 0; var_1236_string = ""; var_1237_string = ""; var_1238_int = 0;
			var_1058_int = var_1235_int;
			func_509(var_1235_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		}
		var_1240_int = var_1059_int + (int)1;
		var_1242_bool = var_1240_int >= (int)7;
		if(var_1242_bool == 0) goto Label_2161;
		var_1243_int = 0; var_1244_string = ""; var_1245_string = ""; var_1246_int = 0;
		var_1058_int = var_1243_int;
		func_509(var_1243_int, "pers_butcher", "butcher.xml", (int)3);
	}
Label_2161:
	var_1117_bool = 0;
	var_1117_bool = 0;
	var_1118_bool = 0;
	var_1118_bool = 0;
	var_1120_bool = var_1059_int == (int)0;
	if(var_1120_bool != 0) {
		var_1122_bool = var_1060_int > (int)12;
		if(var_1122_bool != 0) {
			var_1118_bool = 1;
		}
	}
	if(var_1118_bool != 0) {
		var_1124_bool = var_1060_int < (int)22;
		if(var_1124_bool != 0) {
			var_1117_bool = 1;
		}
	}
	if(var_1117_bool != 0) {
		var_1125_int = 0; var_1126_string = ""; var_1127_string = ""; var_1128_int = 0;
		var_1058_int = var_1125_int;
		func_509(var_1125_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	var_1129_bool = 0; var_1130_int = 0; var_1131_int = 0;
	var_1059_int = var_1130_int;
	var_1060_int = var_1131_int;
	func_1351(var_1129_bool, var_1130_int, var_1131_int);
	if(var_1129_bool != 0) {
		var_1136_int = 0; var_1137_string = ""; var_1138_string = ""; var_1139_int = 0;
		var_1058_int = var_1136_int;
		func_509(var_1136_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_1140_bool = 0; var_1141_int = 0; var_1142_int = 0;
	var_1059_int = var_1141_int;
	var_1060_int = var_1142_int;
	func_1361(var_1140_bool, var_1141_int, var_1142_int);
	if(var_1140_bool != 0) {
		var_1150_int = 0; var_1151_string = ""; var_1152_string = ""; var_1153_int = 0;
		var_1058_int = var_1150_int;
		func_509(var_1150_int, "pers_nudegirl", "nudegirl.xml", (int)1);
	}
	return 2;
	
}


func_12147(var_4762_bool)
{
	var_4765_int = 0; var_4766_string = "";
	func_138(var_4765_int, "d9JuliaVisit");
	var_4768_bool = var_4765_int != (int)0;
	if(var_4768_bool != 0) {
		var_4762_bool = 1;
		return 0;
	}
	var_4762_bool = 0;
	return 0;
}


func_11126()
{
	var_6176_object = Obj(); var_6177_object = Obj(); var_6178_object = Obj(); var_6179_object = Obj();
	func_12503(Obj());
	var_6180_object = var_6178_object;
	@@var_6178_object:FindMark(var_6179_object, "d3q01AlexandrGotoOspina");
	var_6182_object = var_6179_object;
	if(var_6182_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q01BigVladAgreed");
	var_6184_object = var_6179_object;
	if(var_6184_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q01OspinaGotoBigVlad");
	var_6186_object = var_6179_object;
	if(var_6186_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q01RubinGotoAlexandr");
	var_6188_object = var_6179_object;
	if(var_6188_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02GeorgGotoViktor");
	var_6190_object = var_6179_object;
	if(var_6190_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02HanGotoMladVlad");
	var_6192_object = var_6179_object;
	if(var_6192_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02MishkaGotoMladVlad");
	var_6194_object = var_6179_object;
	if(var_6194_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02MladVladGotoButcher");
	var_6196_object = var_6179_object;
	if(var_6196_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02MladVladGotoViktor");
	var_6198_object = var_6179_object;
	if(var_6198_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02ViktorGotoHan");
	var_6200_object = var_6179_object;
	if(var_6200_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q02ViktorGotoMladVlad");
	var_6202_object = var_6179_object;
	if(var_6202_object != 0) {
		@@var_6179_object:Remove();
	}
	@@var_6178_object:FindMark(var_6179_object, "d3q03KapellaBoyLocation");
	var_6204_object = var_6179_object;
	if(var_6204_object != 0) {
		@@var_6179_object:Remove();
	}
	var_6205_bool = 0; var_6206_int = 0;
	func_12478(var_6205_bool, (int)25);
	var_6207_bool = 0; var_6208_int = 0;
	func_12478(var_6207_bool, (int)26);
	var_6209_bool = 0; var_6210_int = 0;
	func_12478(var_6209_bool, (int)27);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10102(var_5235_int, var_5236_float)
{
	var_5237_int = 0; var_5238_int = 0; var_5239_int = 0; var_5240_float = 0;
	var_5236_float = var_5240_float;
	func_12495(var_5237_int, (int)532770, (int)532769, var_5240_float);
	var_5237_int = var_5235_int;
	return 0;
}


func_12159(var_5042_bool)
{
	var_5045_int = 0; var_5046_string = "";
	func_138(var_5045_int, "d10AglajaVisit");
	var_5048_bool = var_5045_int != (int)0;
	if(var_5048_bool != 0) {
		var_5042_bool = 1;
		return 0;
	}
	var_5042_bool = 0;
	return 0;
}


func_7040(var_4097_int, var_4098_int, var_4099_object, var_4100_object, var_4101_object, var_4102_object)
{
	var_4104_bool = var_4098_int == (int)0;
	if(var_4104_bool != 0) {
		var_4105_int = 0; var_4106_bool = 0;
		func_802((int)13, (bool)0);
		var_4107_int = 0; var_4108_bool = 0; var_4109_int = 0;
		func_819((int)13, (bool)0, (int)1);
		var_4110_int = 0; var_4111_int = 0; var_4112_object = Obj(); var_4113_object = Obj(); var_4114_object = Obj();
		var_4097_int = var_4111_int;
		var_4099_object = var_4112_object;
		var_4100_object = var_4113_object;
		var_4101_object = var_4114_object;
		func_726((int)13, var_4111_int, var_4112_object, var_4113_object, var_4114_object);
		var_4115_object = Obj(); var_4116_int = 0;
		var_4102_object = var_4115_object;
		func_311(var_4115_object, (int)2);
		var_4117_int = 0; var_4118_bool = 0; var_4119_int = 0;
		func_876((int)13, (bool)0, (int)4);
		var_4120_int = 0; var_4121_bool = 0; var_4122_int = 0;
		func_938((int)13, (bool)1, (int)4);
	}
	var_4123_int = 0; var_4124_bool = 0;
	func_785((int)13, (bool)0);
	var_4125_int = 0; var_4126_int = 0; var_4127_int = 0;
	var_4097_int = var_4126_int;
	var_4098_int = var_4127_int;
	func_3665((int)13, var_4126_int, var_4127_int);
	return 0;
}


func_6016(var_3932_int, var_3933_int, var_3934_object, var_3935_object, var_3936_object, var_3937_object)
{
	var_3939_bool = var_3933_int == (int)0;
	if(var_3939_bool != 0) {
		var_3940_int = 0; var_3941_bool = 0;
		func_802((int)8, (bool)0);
		var_3942_int = 0; var_3943_bool = 0; var_3944_int = 0;
		func_819((int)8, (bool)0, (int)1);
		var_3945_int = 0; var_3946_int = 0; var_3947_object = Obj(); var_3948_object = Obj(); var_3949_object = Obj();
		var_3932_int = var_3946_int;
		var_3934_object = var_3947_object;
		var_3935_object = var_3948_object;
		var_3936_object = var_3949_object;
		func_726((int)8, var_3946_int, var_3947_object, var_3948_object, var_3949_object);
		var_3950_object = Obj(); var_3951_int = 0;
		var_3937_object = var_3950_object;
		func_311(var_3950_object, (int)2);
		var_3952_int = 0; var_3953_bool = 0; var_3954_int = 0;
		func_876((int)8, (bool)0, (int)4);
		var_3955_int = 0; var_3956_bool = 0; var_3957_int = 0;
		func_938((int)8, (bool)1, (int)4);
	}
	var_3958_int = 0; var_3959_bool = 0;
	func_785((int)8, (bool)0);
	var_3960_int = 0; var_3961_int = 0; var_3962_int = 0;
	var_3932_int = var_3961_int;
	var_3933_int = var_3962_int;
	func_3665((int)8, var_3961_int, var_3962_int);
	return 0;
}


func_10111(var_5446_int, var_5447_float)
{
	var_5448_int = 0; var_5449_int = 0; var_5450_int = 0; var_5451_float = 0;
	var_5447_float = var_5451_float;
	func_12495(var_5448_int, (int)532768, (int)532767, var_5451_float);
	var_5448_int = var_5446_int;
	return 0;
}


func_2950(var_2436_int, var_2437_int, var_2438_int)
{
	var_2439_int = 0; var_2440_int = 0; var_2441_int = 0; var_2442_int = 0;
	var_2443_bool = 0;
	var_2443_bool = 0;
	var_2445_bool = var_2438_int > (int)8;
	if(var_2445_bool != 0) {
		var_2447_bool = var_2438_int < (int)21;
		if(var_2447_bool != 0) {
			var_2443_bool = 1;
		}
	}
	if(var_2443_bool != 0) {
		var_2448_int = 0; var_2449_string = ""; var_2450_string = ""; var_2451_int = 0;
		var_2436_int = var_2448_int;
		func_509(var_2448_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_2452_int = 0; var_2453_string = ""; var_2454_string = ""; var_2455_int = 0;
		var_2436_int = var_2452_int;
		func_509(var_2452_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)6);
		var_2456_int = 0; var_2457_string = ""; var_2458_string = ""; var_2459_int = 0;
		var_2436_int = var_2456_int;
		func_509(var_2456_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2460_int = 0; var_2461_string = ""; var_2462_string = ""; var_2463_int = 0;
		var_2436_int = var_2460_int;
		func_535(var_2460_int, "fog", "fog.xml", (int)6);
		var_2465_bool = var_2437_int >= (int)5;
		if(var_2465_bool != 0) {
			var_2466_int = 0; var_2467_string = ""; var_2468_string = ""; var_2469_int = 0;
			var_2436_int = var_2466_int;
			func_535(var_2466_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2471_float = 0; var_2472_int = 0;
		var_2437_int = var_2472_int;
		func_1261(var_2471_float, var_2472_int);
		var_2441_int = (int)1 * var_2471_float;
		var_2473_int = var_2441_int;
		if(var_2473_int != 0) {
			var_2474_int = 0; var_2475_string = ""; var_2476_string = ""; var_2477_int = 0;
			var_2436_int = var_2474_int;
			var_2441_int = var_2477_int;
			func_509(var_2474_int, "pers_bomber", "bomber.xml", var_2477_int);
		}
	} else {
		var_2522_int = 0; var_2523_string = ""; var_2524_string = ""; var_2525_int = 0;
		var_2436_int = var_2522_int;
		func_509(var_2522_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2526_int = 0; var_2527_string = ""; var_2528_string = ""; var_2529_int = 0;
		var_2436_int = var_2526_int;
		func_509(var_2526_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2530_int = 0; var_2531_string = ""; var_2532_string = ""; var_2533_int = 0;
		var_2436_int = var_2530_int;
		func_509(var_2530_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2534_int = 0; var_2535_string = ""; var_2536_string = ""; var_2537_int = 0;
		var_2436_int = var_2534_int;
		func_535(var_2534_int, "fog", "fog.xml", (int)6);
		var_2539_bool = var_2437_int >= (int)5;
		if(var_2539_bool != 0) {
			var_2540_int = 0; var_2541_string = ""; var_2542_string = ""; var_2543_int = 0;
			var_2436_int = var_2540_int;
			func_535(var_2540_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2545_float = 0; var_2546_int = 0;
		var_2437_int = var_2546_int;
		func_1261(var_2545_float, var_2546_int);
		var_2442_int = (int)1 * var_2545_float;
		var_2547_int = var_2442_int;
		if(var_2547_int == 0) goto Label_3068;
		var_2548_int = 0; var_2549_string = ""; var_2550_string = ""; var_2551_int = 0;
		var_2436_int = var_2548_int;
		var_2442_int = var_2551_int;
		func_509(var_2548_int, "pers_bomber", "bomber.xml", var_2551_int);
	}
Label_3068:
	var_2478_int = 0; var_2479_string = ""; var_2480_string = ""; var_2481_int = 0; var_2482_int = 0; var_2483_int = 0;
	var_2436_int = var_2478_int;
	func_522(var_2478_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2484_int = 0; var_2485_string = ""; var_2486_string = ""; var_2487_int = 0; var_2488_int = 0; var_2489_int = 0;
	var_2436_int = var_2484_int;
	func_522(var_2484_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2490_int = 0; var_2491_string = ""; var_2492_string = ""; var_2493_int = 0; var_2494_int = 0; var_2495_int = 0;
	var_2436_int = var_2490_int;
	func_522(var_2490_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2496_int = 0; var_2497_string = ""; var_2498_string = ""; var_2499_int = 0; var_2500_int = 0; var_2501_int = 0;
	var_2436_int = var_2496_int;
	func_522(var_2496_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2502_bool = 0; var_2503_int = 0; var_2504_int = 0;
	var_2437_int = var_2503_int;
	var_2438_int = var_2504_int;
	func_1351(var_2502_bool, var_2503_int, var_2504_int);
	if(var_2502_bool != 0) {
		var_2505_int = 0; var_2506_string = ""; var_2507_string = ""; var_2508_int = 0;
		var_2436_int = var_2505_int;
		func_509(var_2505_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_2509_bool = 0; var_2510_int = 0; var_2511_int = 0;
	var_2437_int = var_2510_int;
	var_2438_int = var_2511_int;
	func_1361(var_2509_bool, var_2510_int, var_2511_int);
	if(var_2509_bool != 0) {
		var_2512_int = 0; var_2513_string = ""; var_2514_string = ""; var_2515_int = 0;
		var_2436_int = var_2512_int;
		func_509(var_2512_int, "pers_nudegirl", "nudegirl.xml", (int)1);
	}
	var_2516_bool = 0; var_2517_int = 0;
	var_2437_int = var_2517_int;
	func_1378(var_2516_bool, var_2517_int);
	if(var_2516_bool != 0) {
		var_2518_int = 0; var_2519_string = ""; var_2520_string = ""; var_2521_int = 0;
		var_2436_int = var_2518_int;
		func_509(var_2518_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 4;
	
}


func_10120(var_4847_int, var_4848_float)
{
	var_4849_int = 0; var_4850_int = 0; var_4851_int = 0; var_4852_float = 0;
	var_4848_float = var_4852_float;
	func_12495(var_4849_int, (int)541589, (int)541588, var_4852_float);
	var_4849_int = var_4847_int;
	return 0;
}


func_12171(var_5086_bool)
{
	var_5089_int = 0; var_5090_string = "";
	func_138(var_5089_int, "d11ViktorVisit");
	var_5092_bool = var_5089_int != (int)0;
	if(var_5092_bool != 0) {
		var_5086_bool = 1;
		return 0;
	}
	var_5086_bool = 0;
	return 0;
}


func_10129(var_5611_int, var_5612_float)
{
	var_5613_int = 0; var_5614_int = 0; var_5615_int = 0; var_5616_float = 0;
	var_5612_float = var_5616_float;
	func_12495(var_5613_int, (int)501175, (int)501174, var_5616_float);
	var_5613_int = var_5611_int;
	return 0;
}


func_12183(var_4927_bool)
{
	var_4930_int = 0; var_4931_string = "";
	func_138(var_4930_int, "d9AglajaVisit");
	var_4933_bool = var_4930_int != (int)0;
	if(var_4933_bool != 0) {
		var_4927_bool = 1;
		return 0;
	}
	var_4927_bool = 0;
	return 0;
}


func_10138(var_5333_int, var_5334_float)
{
	var_5335_int = 0; var_5336_int = 0; var_5337_int = 0; var_5338_float = 0;
	var_5334_float = var_5338_float;
	func_12495(var_5335_int, (int)522198, (int)522197, var_5338_float);
	var_5335_int = var_5333_int;
	return 0;
}


func_5026(var_1249_int, var_1250_int, var_1251_object, var_1252_object, var_1253_object, var_1254_object)
{
	var_1256_bool = var_1250_int == (int)0;
	if(var_1256_bool != 0) {
		var_1257_int = 0; var_1258_bool = 0;
		func_802((int)3, (bool)0);
		var_1259_int = 0; var_1260_bool = 0; var_1261_int = 0;
		func_819((int)3, (bool)0, (int)1);
		var_1262_int = 0; var_1263_int = 0; var_1264_object = Obj(); var_1265_object = Obj(); var_1266_object = Obj();
		var_1262_int = 3;
		var_1249_int = var_1263_int;
		var_1251_object = var_1264_object;
		var_1252_object = var_1265_object;
		var_1253_object = var_1266_object;
		func_628(var_1263_int, var_1264_object, var_1265_object, var_1266_object);
		var_1267_object = Obj(); var_1268_int = 0;
		var_1254_object = var_1267_object;
		func_311(var_1267_object, (int)0);
		var_1269_int = 0; var_1270_bool = 0; var_1271_int = 0;
		func_876((int)3, (bool)0, (int)7);
		var_1272_int = 0; var_1273_bool = 0; var_1274_int = 0;
		func_938((int)3, (bool)0, (int)7);
	}
	var_1275_int = 0; var_1276_int = 0;
	var_1250_int = var_1276_int;
	func_989((int)3, var_1276_int);
	var_1292_int = 0; var_1293_int = 0; var_1294_int = 0;
	var_1249_int = var_1293_int;
	var_1250_int = var_1294_int;
	func_1903((int)3, var_1293_int, var_1294_int);
	return 0;
}


func_12195(var_4677_bool)
{
	var_4680_int = 0; var_4681_string = "";
	func_138(var_4680_int, "d9ViktorVisit");
	var_4683_bool = var_4680_int != (int)0;
	if(var_4683_bool != 0) {
		var_4677_bool = 1;
		return 0;
	}
	var_4677_bool = 0;
	return 0;
}


func_10147(var_4869_int, var_4870_float)
{
	var_4871_int = 0; var_4872_int = 0; var_4873_int = 0; var_4874_float = 0;
	var_4870_float = var_4874_float;
	func_12495(var_4871_int, (int)538398, (int)538397, var_4874_float);
	var_4871_int = var_4869_int;
	return 0;
}


func_938(var_687_int, var_688_bool, var_689_int)
{
	var_690_string = ""; var_691_object = Obj(); var_692_object = Obj(); var_693_int = 0; var_694_string = ""; var_695_object = Obj(); var_696_string = ""; var_697_object = Obj(); var_698_object = Obj(); var_699_int = 0; var_700_string = ""; var_701_object = Obj();
	var_704_int = var_687_int + (int)1;
	var_696_string = "dr_mark" + var_704_int;
	var_707_int = var_687_int + (int)1;
	var_708_int = "br_" + var_707_int;
	FindActor(var_697_object, var_708_int);
	var_709_bool = var_688_bool;
	if(var_709_bool != 0) {
		var_710_bool = var_697_object == 0; //@nz
		if(var_710_bool != 0) {
			GetMainOutdoorScene(var_698_object);
			var_713_int = var_687_int + (int)1;
			var_714_int = "br_" + var_713_int;
			AddActor(var_697_object, var_714_int, var_698_object, CVector(0.0, 0.0, 0.0));
			var_698_object = 0;
		}
	} else {
		var_724_object = var_697_object;
		if(var_724_object == 0) goto Label_968;
		RemoveActor(var_697_object);
	}
Label_968:
	var_699_int = 1;
	
Label_969:
	var_716_bool = var_699_int <= var_689_int;
	if(var_716_bool != 0) {
		var_718_int = var_696_string + "_";
		var_700_string = var_718_int + var_699_int;
		FindActor(var_701_object, var_700_string);
		var_719_object = var_701_object;
		if(var_719_object != 0) {
			var_720_bool = 0; var_721_string = ""; var_722_string = "";
			var_700_string = var_721_string;
			func_245(var_720_bool, var_721_string, "cleanup");
		}
		var_701_object = 0;
		var_699_int = var_699_int + (int)1;
		goto Label_969;
	}
	return 12;
	
}
EMIT "Stack[-5] = 0";


func_10156(var_4716_int, var_4717_float)
{
	var_4718_int = 0; var_4719_int = 0; var_4720_int = 0; var_4721_float = 0;
	var_4717_float = var_4721_float;
	func_12495(var_4718_int, (int)538400, (int)538399, var_4721_float);
	var_4718_int = var_4716_int;
	return 0;
}


func_12207(var_4804_bool)
{
	var_4807_int = 0; var_4808_string = "";
	func_138(var_4807_int, "d2q03RepDown");
	var_4810_bool = var_4807_int != (int)0;
	if(var_4810_bool != 0) {
		var_4804_bool = 1;
		return 0;
	}
	var_4804_bool = 0;
	return 0;
}


func_7092(var_298_object)
{
	@@var_298_object:add("lc_house7_02");
	@@var_298_object:add("lc_house7_03");
	@@var_298_object:add("lc_house7_04");
	@@var_298_object:add("lc_house7_05");
	@@var_298_object:add("lc_house7_06");
	@@var_298_object:add("lc_house7_07");
	@@var_298_object:add("lc_House6_02");
	@@var_298_object:add("lc_house7_01");
	@@var_298_object:add("lc_house_2_02");
	@@var_298_object:add("lc_House6_01");
	@@var_298_object:add("lc_house3_03_i2");
	@@var_298_object:add("lc_house3_03");
	@@var_298_object:add("lc_House6_03");
	@@var_298_object:add("lc_House6_04");
	return 0;
}


func_6068(var_210_object)
{
	@@var_210_object:add("r3_house_2_02");
	@@var_210_object:add("r3_house3_02_i2");
	@@var_210_object:add("r3_house3_02");
	@@var_210_object:add("r3_house4_05_i2");
	@@var_210_object:add("r3_house4_05");
	@@var_210_object:add("r3_house4_03_i2");
	@@var_210_object:add("r3_house4_04_i2");
	@@var_210_object:add("r3_house4_04");
	@@var_210_object:add("r3_house4_01_i2");
	@@var_210_object:add("r3_house4_01");
	@@var_210_object:add("r3_house_2_01");
	@@var_210_object:add("r3_house4_02_i2");
	@@var_210_object:add("r3_house4_02");
	@@var_210_object:add("r3_house3_01_i2");
	@@var_210_object:add("r3_house3_01");
	return 0;
}


func_10165(var_5565_int, var_5566_float)
{
	var_5567_int = 0; var_5568_int = 0; var_5569_int = 0; var_5570_float = 0;
	var_5566_float = var_5570_float;
	func_12495(var_5567_int, (int)515303, (int)515302, var_5570_float);
	var_5567_int = var_5565_int;
	return 0;
}


func_12219(var_5192_bool, var_5193_object)
{
	var_5195_bool = 0; var_5196_object = Obj();
	var_5193_object = var_5196_object;
	func_12421(var_5196_object);
	if(var_5195_bool != 0) {
		var_5192_bool = 1;
		return 0;
	}
	var_5192_bool = 0;
	return 0;
}


func_10174(var_5595_int, var_5596_float)
{
	var_5597_int = 0; var_5598_int = 0; var_5599_int = 0; var_5600_float = 0;
	var_5596_float = var_5600_float;
	func_12495(var_5597_int, (int)502851, (int)502850, var_5600_float);
	var_5597_int = var_5595_int;
	return 0;
}


func_9157(var_502_int, var_503_int, var_504_int)
{
	var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj(); var_512_object = Obj();
	var_513_object = GlobalVars[8];
	@@var_513_object:get(var_509_object, var_502_int);
	var_514_object = GlobalVars[9];
	@@var_514_object:get(var_510_object, var_502_int);
	var_515_object = GlobalVars[10];
	@@var_515_object:get(var_511_object, var_502_int);
	var_516_object = GlobalVars[13];
	@@var_516_object:get(var_512_object, var_502_int);
	var_518_bool = var_502_int == (int)0;
	if(var_518_bool != 0) {
		var_519_int = 0; var_520_int = 0; var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj(); var_524_object = Obj();
		var_503_int = var_519_int;
		var_504_int = var_520_int;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		var_511_object = var_523_object;
		var_512_object = var_524_object;
		func_4393(var_519_int, var_520_int, var_521_object, var_522_object, var_523_object, var_524_object);
	} else {
		var_886_bool = var_502_int == (int)1;
		if(var_886_bool != 0) {
			var_887_int = 0; var_888_int = 0; var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj(); var_892_object = Obj();
			var_503_int = var_887_int;
			var_504_int = var_888_int;
			var_509_object = var_889_object;
			var_510_object = var_890_object;
			var_511_object = var_891_object;
			var_512_object = var_892_object;
			func_4590(var_887_int, var_888_int, var_889_object, var_890_object, var_891_object, var_892_object);
			goto Label_9377;
		}
		var_1029_bool = var_502_int == (int)2;
		if(var_1029_bool != 0) {
			var_1030_int = 0; var_1031_int = 0; var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj(); var_1035_object = Obj();
			var_503_int = var_1030_int;
			var_504_int = var_1031_int;
			var_509_object = var_1032_object;
			var_510_object = var_1033_object;
			var_511_object = var_1034_object;
			var_512_object = var_1035_object;
			func_4796(var_1030_int, var_1031_int, var_1032_object, var_1033_object, var_1034_object, var_1035_object);
			goto Label_9377;
		}
		var_1248_bool = var_502_int == (int)3;
		if(var_1248_bool != 0) {
			var_1249_int = 0; var_1250_int = 0; var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj(); var_1254_object = Obj();
			var_503_int = var_1249_int;
			var_504_int = var_1250_int;
			var_509_object = var_1251_object;
			var_510_object = var_1252_object;
			var_511_object = var_1253_object;
			var_512_object = var_1254_object;
			func_5026(var_1249_int, var_1250_int, var_1251_object, var_1252_object, var_1253_object, var_1254_object);
			goto Label_9377;
		}
		var_1296_bool = var_502_int == (int)4;
		if(var_1296_bool != 0) {
			var_1297_int = 0; var_1298_int = 0; var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj(); var_1302_object = Obj();
			var_503_int = var_1297_int;
			var_504_int = var_1298_int;
			var_509_object = var_1299_object;
			var_510_object = var_1300_object;
			var_511_object = var_1301_object;
			var_512_object = var_1302_object;
			func_5244(var_1297_int, var_1298_int, var_1299_object, var_1300_object, var_1301_object, var_1302_object);
			goto Label_9377;
		}
		var_1341_bool = var_502_int == (int)5;
		if(var_1341_bool != 0) {
			var_1342_int = 0; var_1343_int = 0; var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj(); var_1347_object = Obj();
			var_503_int = var_1342_int;
			var_504_int = var_1343_int;
			var_509_object = var_1344_object;
			var_510_object = var_1345_object;
			var_511_object = var_1346_object;
			var_512_object = var_1347_object;
			func_5489(var_1342_int, var_1343_int, var_1344_object, var_1345_object, var_1346_object, var_1347_object);
			goto Label_9377;
		}
		var_1374_bool = var_502_int == (int)6;
		if(var_1374_bool != 0) {
			var_1375_int = 0; var_1376_int = 0; var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj(); var_1380_object = Obj();
			var_503_int = var_1375_int;
			var_504_int = var_1376_int;
			var_509_object = var_1377_object;
			var_510_object = var_1378_object;
			var_511_object = var_1379_object;
			var_512_object = var_1380_object;
			func_5647(var_1380_object);
			goto Label_9377;
		}
		var_1384_bool = var_502_int == (int)7;
		if(var_1384_bool != 0) {
			var_1385_int = 0; var_1386_int = 0; var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj(); var_1390_object = Obj();
			var_503_int = var_1385_int;
			var_504_int = var_1386_int;
			var_509_object = var_1387_object;
			var_510_object = var_1388_object;
			var_511_object = var_1389_object;
			var_512_object = var_1390_object;
			func_5712(var_1385_int, var_1386_int, var_1387_object, var_1388_object, var_1389_object, var_1390_object);
			goto Label_9377;
		}
		var_1571_bool = var_502_int == (int)8;
		if(var_1571_bool != 0) {
			var_1572_int = 0; var_1573_int = 0; var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj(); var_1577_object = Obj();
			var_503_int = var_1572_int;
			var_504_int = var_1573_int;
			var_509_object = var_1574_object;
			var_510_object = var_1575_object;
			var_511_object = var_1576_object;
			var_512_object = var_1577_object;
			func_5912(var_1572_int, var_1573_int, var_1574_object, var_1575_object, var_1576_object, var_1577_object);
			goto Label_9377;
		}
		var_1604_bool = var_502_int == (int)9;
		if(var_1604_bool != 0) {
			var_1605_int = 0; var_1606_int = 0; var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj(); var_1610_object = Obj();
			var_503_int = var_1605_int;
			var_504_int = var_1606_int;
			var_509_object = var_1607_object;
			var_510_object = var_1608_object;
			var_511_object = var_1609_object;
			var_512_object = var_1610_object;
			func_6115(var_1605_int, var_1606_int, var_1607_object, var_1608_object, var_1609_object, var_1610_object);
			goto Label_9377;
		}
		var_1637_bool = var_502_int == (int)10;
		if(var_1637_bool != 0) {
			var_1638_int = 0; var_1639_int = 0; var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj(); var_1643_object = Obj();
			var_503_int = var_1638_int;
			var_504_int = var_1639_int;
			var_509_object = var_1640_object;
			var_510_object = var_1641_object;
			var_511_object = var_1642_object;
			var_512_object = var_1643_object;
			func_6324(var_1638_int, var_1639_int, var_1640_object, var_1641_object, var_1642_object, var_1643_object);
			goto Label_9377;
		}
		var_1670_bool = var_502_int == (int)11;
		if(var_1670_bool != 0) {
			var_1671_int = 0; var_1672_int = 0; var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj(); var_1676_object = Obj();
			var_503_int = var_1671_int;
			var_504_int = var_1672_int;
			var_509_object = var_1673_object;
			var_510_object = var_1674_object;
			var_511_object = var_1675_object;
			var_512_object = var_1676_object;
			func_6536(var_1671_int, var_1672_int, var_1673_object, var_1674_object, var_1675_object, var_1676_object);
			goto Label_9377;
		}
		var_1703_bool = var_502_int == (int)12;
		if(var_1703_bool != 0) {
			var_1704_int = 0; var_1705_int = 0; var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj(); var_1709_object = Obj();
			var_503_int = var_1704_int;
			var_504_int = var_1705_int;
			var_509_object = var_1706_object;
			var_510_object = var_1707_object;
			var_511_object = var_1708_object;
			var_512_object = var_1709_object;
			func_6733(var_1704_int, var_1705_int, var_1706_object, var_1707_object, var_1708_object, var_1709_object);
			goto Label_9377;
		}
		var_1736_bool = var_502_int == (int)13;
		if(var_1736_bool != 0) {
			var_1737_int = 0; var_1738_int = 0; var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj(); var_1742_object = Obj();
			var_503_int = var_1737_int;
			var_504_int = var_1738_int;
			var_509_object = var_1739_object;
			var_510_object = var_1740_object;
			var_511_object = var_1741_object;
			var_512_object = var_1742_object;
			func_6936(var_1737_int, var_1738_int, var_1739_object, var_1740_object, var_1741_object, var_1742_object);
			goto Label_9377;
		}
		var_1769_bool = var_502_int == (int)14;
		if(var_1769_bool != 0) {
			var_1770_int = 0; var_1771_int = 0; var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj(); var_1775_object = Obj();
			var_503_int = var_1770_int;
			var_504_int = var_1771_int;
			var_509_object = var_1772_object;
			var_510_object = var_1773_object;
			var_511_object = var_1774_object;
			var_512_object = var_1775_object;
			func_7136(var_1770_int, var_1771_int, var_1772_object, var_1773_object, var_1774_object, var_1775_object);
			goto Label_9377;
		}
		var_1947_bool = var_502_int == (int)15;
		if(var_1947_bool == 0) goto Label_9377;
		var_1948_int = 0; var_1949_int = 0; var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj(); var_1953_object = Obj();
		var_503_int = var_1948_int;
		var_504_int = var_1949_int;
		var_509_object = var_1950_object;
		var_510_object = var_1951_object;
		var_511_object = var_1952_object;
		var_512_object = var_1953_object;
		func_7318(var_1948_int, var_1949_int, var_1950_object, var_1951_object, var_1952_object, var_1953_object);
	}
Label_9377:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_12229(var_6359_bool)
{
	var_6362_int = 0; var_6363_string = "";
	func_138(var_6362_int, "d1q01KaterinaUHave1day");
	var_6365_bool = var_6362_int == (int)1;
	if(var_6365_bool != 0) {
		var_6359_bool = 1;
		return 0;
	}
	var_6359_bool = 0;
	return 0;
}


func_10183(var_5309_int, var_5310_float)
{
	var_5311_int = 0; var_5312_int = 0; var_5313_int = 0; var_5314_float = 0;
	var_5310_float = var_5314_float;
	func_12495(var_5311_int, (int)532895, (int)532894, var_5314_float);
	var_5311_int = var_5309_int;
	return 0;
}


func_4041(var_3249_int, var_3250_int, var_3251_int)
{
	var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0; var_3259_int = 0;
	var_3260_bool = 0;
	var_3260_bool = 0;
	var_3262_bool = var_3251_int > (int)8;
	if(var_3262_bool != 0) {
		var_3264_bool = var_3251_int < (int)21;
		if(var_3264_bool != 0) {
			var_3260_bool = 1;
		}
	}
	if(var_3260_bool != 0) {
		var_3265_int = 0; var_3266_string = ""; var_3267_string = ""; var_3268_int = 0;
		var_3249_int = var_3265_int;
		func_509(var_3265_int, "pers_rat", "rat.xml", (int)4);
		var_3269_int = 0; var_3270_string = ""; var_3271_string = ""; var_3272_int = 0;
		var_3249_int = var_3269_int;
		func_509(var_3269_int, "pers_alkash", "alkash.xml", (int)2);
		var_3273_int = 0; var_3274_string = ""; var_3275_string = ""; var_3276_int = 0;
		var_3249_int = var_3273_int;
		func_509(var_3273_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3278_float = 0; var_3279_int = 0;
		var_3250_int = var_3279_int;
		func_1171(var_3278_float, var_3279_int);
		var_3256_int = (int)2 * var_3278_float;
		var_3324_int = var_3256_int;
		if(var_3324_int != 0) {
			var_3325_int = 0; var_3326_string = ""; var_3327_string = ""; var_3328_int = 0;
			var_3249_int = var_3325_int;
			var_3256_int = var_3328_int;
			func_509(var_3325_int, "pers_grabitel", "grabitel.xml", var_3328_int);
		}
		var_3330_int = var_3250_int + (int)1;
		var_3332_bool = var_3330_int >= (int)2;
		if(var_3332_bool != 0) {
			var_3333_int = 0; var_3334_string = ""; var_3335_string = ""; var_3336_int = 0;
			var_3249_int = var_3333_int;
			func_509(var_3333_int, "pers_patrool", "patrol.xml", (int)2);
			var_3337_bool = 0; var_3338_int = 0;
			var_3250_int = var_3338_int;
			func_1378(var_3337_bool, var_3338_int);
			if(var_3337_bool != 0) {
				var_3339_int = 0; var_3340_string = ""; var_3341_string = ""; var_3342_int = 0;
				var_3249_int = var_3339_int;
				func_509(var_3339_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3344_float = 0; var_3345_int = 0;
		var_3250_int = var_3345_int;
		func_1261(var_3344_float, var_3345_int);
		var_3257_int = (int)1 * var_3344_float;
		var_3346_int = var_3257_int;
		if(var_3346_int != 0) {
			var_3347_int = 0; var_3348_string = ""; var_3349_string = ""; var_3350_int = 0;
			var_3249_int = var_3347_int;
			var_3257_int = var_3350_int;
			func_509(var_3347_int, "pers_bomber", "bomber.xml", var_3350_int);
		}
	} else {
		var_3357_int = 0; var_3358_string = ""; var_3359_string = ""; var_3360_int = 0;
		var_3249_int = var_3357_int;
		func_509(var_3357_int, "pers_rat", "rat.xml", (int)7);
		var_3361_int = 0; var_3362_string = ""; var_3363_string = ""; var_3364_int = 0;
		var_3249_int = var_3361_int;
		func_509(var_3361_int, "pers_alkash", "alkash.xml", (int)1);
		var_3365_int = 0; var_3366_string = ""; var_3367_string = ""; var_3368_int = 0;
		var_3249_int = var_3365_int;
		func_509(var_3365_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3370_float = 0; var_3371_int = 0;
		var_3250_int = var_3371_int;
		func_1171(var_3370_float, var_3371_int);
		var_3258_int = (int)2 * var_3370_float;
		var_3372_int = var_3258_int;
		if(var_3372_int != 0) {
			var_3373_int = 0; var_3374_string = ""; var_3375_string = ""; var_3376_int = 0;
			var_3249_int = var_3373_int;
			var_3258_int = var_3376_int;
			func_509(var_3373_int, "pers_grabitel", "grabitel.xml", var_3376_int);
		}
		var_3378_int = var_3250_int + (int)1;
		var_3380_bool = var_3378_int >= (int)2;
		if(var_3380_bool != 0) {
			var_3381_int = 0; var_3382_string = ""; var_3383_string = ""; var_3384_int = 0;
			var_3249_int = var_3381_int;
			func_509(var_3381_int, "pers_patrool", "patrol.xml", (int)1);
			var_3385_bool = 0; var_3386_int = 0;
			var_3250_int = var_3386_int;
			func_1378(var_3385_bool, var_3386_int);
			if(var_3385_bool != 0) {
				var_3387_int = 0; var_3388_string = ""; var_3389_string = ""; var_3390_int = 0;
				var_3249_int = var_3387_int;
				func_509(var_3387_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3392_float = 0; var_3393_int = 0;
		var_3250_int = var_3393_int;
		func_1261(var_3392_float, var_3393_int);
		var_3259_int = (int)1 * var_3392_float;
		var_3394_int = var_3259_int;
		if(var_3394_int == 0) goto Label_4203;
		var_3395_int = 0; var_3396_string = ""; var_3397_string = ""; var_3398_int = 0;
		var_3249_int = var_3395_int;
		var_3259_int = var_3398_int;
		func_509(var_3395_int, "pers_bomber", "bomber.xml", var_3398_int);
	}
Label_4203:
	var_3351_bool = 0; var_3352_int = 0;
	var_3250_int = var_3352_int;
	func_1378(var_3351_bool, var_3352_int);
	if(var_3351_bool != 0) {
		var_3353_int = 0; var_3354_string = ""; var_3355_string = ""; var_3356_int = 0;
		var_3249_int = var_3353_int;
		func_509(var_3353_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_10192(var_5368_int, var_5369_float)
{
	var_5370_int = 0; var_5371_int = 0; var_5372_int = 0; var_5373_float = 0;
	var_5369_float = var_5373_float;
	func_12495(var_5370_int, (int)522200, (int)522199, var_5373_float);
	var_5370_int = var_5368_int;
	return 0;
}


func_12241(var_5959_bool)
{
	var_5962_int = 0; var_5963_string = "";
	func_138(var_5962_int, "d6q03");
	var_5965_bool = var_5962_int == (int)0;
	if(var_5965_bool != 0) {
		var_5959_bool = 1;
		return 0;
	}
	var_5959_bool = 0;
	return 0;
}


func_5078(var_2554_int, var_2555_int, var_2556_object, var_2557_object, var_2558_object, var_2559_object)
{
	var_2561_bool = var_2555_int == (int)0;
	if(var_2561_bool != 0) {
		var_2562_int = 0; var_2563_bool = 0;
		func_802((int)3, (bool)1);
		var_2564_int = 0; var_2565_bool = 0; var_2566_int = 0;
		func_819((int)3, (bool)1, (int)1);
		var_2567_int = 0; var_2568_int = 0; var_2569_object = Obj(); var_2570_object = Obj(); var_2571_object = Obj();
		var_2554_int = var_2568_int;
		var_2556_object = var_2569_object;
		var_2557_object = var_2570_object;
		var_2558_object = var_2571_object;
		func_647((int)3, var_2568_int, var_2569_object, var_2570_object, var_2571_object);
		var_2572_object = Obj(); var_2573_int = 0;
		var_2559_object = var_2572_object;
		func_311(var_2572_object, (int)1);
		var_2574_int = 0; var_2575_bool = 0; var_2576_int = 0;
		func_876((int)3, (bool)1, (int)7);
		var_2577_int = 0; var_2578_bool = 0; var_2579_int = 0;
		func_938((int)3, (bool)0, (int)7);
	}
	var_2580_int = 0; var_2581_bool = 0;
	func_785((int)3, (bool)0);
	var_2582_int = 0; var_2583_int = 0; var_2584_int = 0;
	var_2554_int = var_2583_int;
	var_2555_int = var_2584_int;
	func_2950((int)3, var_2583_int, var_2584_int);
	return 0;
}


func_10201(var_4754_int, var_4755_float)
{
	var_4756_int = 0; var_4757_int = 0; var_4758_int = 0; var_4759_float = 0;
	var_4755_float = var_4759_float;
	func_12495(var_4756_int, (int)538402, (int)538401, var_4759_float);
	var_4756_int = var_4754_int;
	return 0;
}


func_989(var_1275_int, var_1276_int)
{
	var_1277_bool = 0;
	var_1277_bool = 1;
	var_1278_bool = 0;
	var_1278_bool = 1;
	var_1280_bool = var_1276_int >= (int)20;
	if(var_1280_bool != 1) {
		var_1282_bool = var_1276_int < (int)2;
		if(var_1282_bool != 1) {
			var_1278_bool = 0;
		}
	}
	if(var_1278_bool != 1) {
		var_1283_bool = 0;
		var_1283_bool = 0;
		var_1285_bool = var_1276_int >= (int)6;
		if(var_1285_bool != 0) {
			var_1287_bool = var_1276_int < (int)10;
			if(var_1287_bool != 0) {
				var_1283_bool = 1;
			}
		}
		if(var_1283_bool != 1) {
			var_1277_bool = 0;
		}
	}
	if(var_1277_bool != 0) {
		var_1288_int = 0; var_1289_bool = 0;
		var_1275_int = var_1288_int;
		func_785(var_1288_int, (bool)1);
	} else {
		var_1290_int = 0; var_1291_bool = 0;
		var_1275_int = var_1290_int;
		func_785(var_1290_int, (bool)0);
	}
	return 0;
	
}


func_11230()
{
	var_6012_object = Obj(); var_6013_object = Obj(); var_6014_object = Obj(); var_6015_object = Obj();
	func_12503(Obj());
	var_6016_object = var_6014_object;
	@@var_6014_object:FindMark(var_6015_object, "d4q01BigVladGotoLara");
	var_6018_object = var_6015_object;
	if(var_6018_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01BigVladGotoSklad");
	var_6020_object = var_6015_object;
	if(var_6020_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01BigVladGotoSobor");
	var_6022_object = var_6015_object;
	if(var_6022_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01BigVladGotoTheater");
	var_6024_object = var_6015_object;
	if(var_6024_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01LaraGotoMladVlad");
	var_6026_object = var_6015_object;
	if(var_6026_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01LaraGotoMladVladSelf");
	var_6028_object = var_6015_object;
	if(var_6028_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01LaraGotoOspina");
	var_6030_object = var_6015_object;
	if(var_6030_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01MladVladGotoBigVlad");
	var_6032_object = var_6015_object;
	if(var_6032_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01MladVladGotoOspina");
	var_6034_object = var_6015_object;
	if(var_6034_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01OspinaGotoLara");
	var_6036_object = var_6015_object;
	if(var_6036_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01WastedMale");
	var_6038_object = var_6015_object;
	if(var_6038_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q01Whitemask");
	var_6040_object = var_6015_object;
	if(var_6040_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q02BirdmaskNearHome");
	var_6042_object = var_6015_object;
	if(var_6042_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q02MladVladGotoAnna");
	var_6044_object = var_6015_object;
	if(var_6044_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q02MladVladGotoJulia");
	var_6046_object = var_6015_object;
	if(var_6046_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q02MladVladGotoLara");
	var_6048_object = var_6015_object;
	if(var_6048_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q03AlexandrAboutVolnica");
	var_6050_object = var_6015_object;
	if(var_6050_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q03AlexandrGotoGrif");
	var_6052_object = var_6015_object;
	if(var_6052_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q03GrifGotoAlexandr");
	var_6054_object = var_6015_object;
	if(var_6054_object != 0) {
		@@var_6015_object:Remove();
	}
	@@var_6014_object:FindMark(var_6015_object, "d4q03GrifGotoAlexandrSelf");
	var_6056_object = var_6015_object;
	if(var_6056_object != 0) {
		@@var_6015_object:Remove();
	}
	var_6057_bool = 0; var_6058_int = 0;
	func_12478(var_6057_bool, (int)20);
	var_6059_bool = 0; var_6060_int = 0;
	func_12478(var_6059_bool, (int)21);
	var_6061_bool = 0; var_6062_int = 0;
	func_12478(var_6061_bool, (int)22);
	var_6063_bool = 0; var_6064_int = 0;
	func_12478(var_6063_bool, (int)710);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12253(var_5667_bool)
{
	var_5670_int = 0; var_5671_string = "";
	func_138(var_5670_int, "d11q03BurahVisit");
	var_5673_bool = var_5670_int != (int)0;
	if(var_5673_bool != 0) {
		var_5667_bool = 1;
		return 0;
	}
	var_5667_bool = 0;
	return 0;
}


func_7136(var_1770_int, var_1771_int, var_1772_object, var_1773_object, var_1774_object, var_1775_object)
{
	var_1777_bool = var_1771_int == (int)0;
	if(var_1777_bool != 0) {
		var_1778_int = 0; var_1779_bool = 0;
		func_802((int)14, (bool)0);
		var_1780_int = 0; var_1781_bool = 0; var_1782_int = 0;
		func_819((int)14, (bool)0, (int)1);
		var_1783_int = 0; var_1784_int = 0; var_1785_object = Obj(); var_1786_object = Obj(); var_1787_object = Obj();
		var_1783_int = 14;
		var_1770_int = var_1784_int;
		var_1772_object = var_1785_object;
		var_1773_object = var_1786_object;
		var_1774_object = var_1787_object;
		func_628(var_1784_int, var_1785_object, var_1786_object, var_1787_object);
		var_1788_object = Obj(); var_1789_int = 0;
		var_1775_object = var_1788_object;
		func_311(var_1788_object, (int)0);
		var_1790_int = 0; var_1791_bool = 0; var_1792_int = 0;
		func_876((int)14, (bool)0, (int)5);
		var_1793_int = 0; var_1794_bool = 0; var_1795_int = 0;
		func_938((int)14, (bool)0, (int)5);
	}
	var_1796_int = 0; var_1797_int = 0;
	var_1771_int = var_1797_int;
	func_1093((int)14, var_1797_int);
	var_1807_int = 0; var_1808_int = 0; var_1809_int = 0;
	var_1770_int = var_1808_int;
	var_1771_int = var_1809_int;
	func_1382((int)14, var_1808_int, var_1809_int);
	return 0;
}


func_10210(var_5462_int, var_5463_float)
{
	var_5464_int = 0; var_5465_int = 0; var_5466_int = 0; var_5467_float = 0;
	var_5463_float = var_5467_float;
	func_12495(var_5464_int, (int)503307, (int)503306, var_5467_float);
	var_5464_int = var_5462_int;
	return 0;
}


func_6115(var_1605_int, var_1606_int, var_1607_object, var_1608_object, var_1609_object, var_1610_object)
{
	var_1612_bool = var_1606_int == (int)0;
	if(var_1612_bool != 0) {
		var_1613_int = 0; var_1614_bool = 0;
		func_802((int)9, (bool)0);
		var_1615_int = 0; var_1616_bool = 0; var_1617_int = 0;
		func_819((int)9, (bool)0, (int)1);
		var_1618_int = 0; var_1619_int = 0; var_1620_object = Obj(); var_1621_object = Obj(); var_1622_object = Obj();
		var_1618_int = 9;
		var_1605_int = var_1619_int;
		var_1607_object = var_1620_object;
		var_1608_object = var_1621_object;
		var_1609_object = var_1622_object;
		func_628(var_1619_int, var_1620_object, var_1621_object, var_1622_object);
		var_1623_object = Obj(); var_1624_int = 0;
		var_1610_object = var_1623_object;
		func_311(var_1623_object, (int)0);
		var_1625_int = 0; var_1626_bool = 0; var_1627_int = 0;
		func_876((int)9, (bool)0, (int)7);
		var_1628_int = 0; var_1629_bool = 0; var_1630_int = 0;
		func_938((int)9, (bool)0, (int)7);
	}
	var_1631_int = 0; var_1632_int = 0;
	var_1606_int = var_1632_int;
	func_1056((int)9, var_1632_int);
	var_1633_int = 0; var_1634_int = 0; var_1635_int = 0;
	var_1605_int = var_1634_int;
	var_1606_int = var_1635_int;
	func_1630((int)9, var_1634_int, var_1635_int);
	return 0;
}


func_12265(var_6338_bool)
{
	var_6341_int = 0; var_6342_string = "";
	func_138(var_6341_int, "d11q04KlaraVisit");
	var_6344_bool = var_6341_int != (int)0;
	if(var_6344_bool != 0) {
		var_6338_bool = 1;
		return 0;
	}
	var_6338_bool = 0;
	return 0;
}


func_10219(var_5124_int, var_5125_float)
{
	var_5126_int = 0; var_5127_int = 0; var_5128_int = 0; var_5129_float = 0;
	var_5125_float = var_5129_float;
	func_12495(var_5126_int, (int)536320, (int)536319, var_5129_float);
	var_5126_int = var_5124_int;
	return 0;
}


func_10228(var_5627_int, var_5628_float)
{
	var_5629_int = 0; var_5630_int = 0; var_5631_int = 0; var_5632_float = 0;
	var_5628_float = var_5632_float;
	func_12495(var_5629_int, (int)515334, (int)515333, var_5632_float);
	var_5629_int = var_5627_int;
	return 0;
}


func_12277(var_5603_bool)
{
	var_5606_int = 0; var_5607_string = "";
	func_138(var_5606_int, "d2TalkToAlexandr");
	var_5609_bool = var_5606_int != (int)0;
	if(var_5609_bool != 0) {
		var_5603_bool = 1;
		return 0;
	}
	var_5603_bool = 0;
	return 0;
}


func_10237(var_5411_int, var_5412_float)
{
	var_5413_int = 0; var_5414_int = 0; var_5415_int = 0; var_5416_float = 0;
	var_5412_float = var_5416_float;
	func_12495(var_5413_int, (int)533079, (int)533078, var_5416_float);
	var_5413_int = var_5411_int;
	return 0;
}


