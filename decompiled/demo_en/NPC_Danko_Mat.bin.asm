GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Untrust
	Rage
	Discontent
	Patronage
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	HasItem
	reputation
	add
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png
	d8q01MladVladIsVictim
	volonteers_danko
	kill
	mladvlad
	d8q01BigVladIsVictim
	bigvlad
	toy_horse
	RemoveItemByType
	pt_map_boiny_main_entrance
	ShowMap
	playsound
	giveitem
	ood8Mat1
	d8q01BringBadBoy
	d8q01MatBringToy
	d8q01MatGotoToyHouse
	pt_map_d8q01_toyhouse
	AddMark
	quest_d8_01
	place_toy
	ood8Mat2
	d8q01MatGotoBoiny
	unlock_boiny
	ood8Mat4
	ood8Mat5
	ood8Mat6
	ood8Mat7
	d8TalkToMat
	quest_d8_02
	completed
	d8q02
	feromicin
	d8q04
	d8q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x827
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x242 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7fd Vars = (int, int)
	GTASK_6 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x870 Vars = (int)
		EVENT_6 Op = 0x896 Vars = ()
		EVENT_5 Op = 0x8a5 Vars = ()
		EVENT_45 Op = 0x8b2 Vars = (bool)
		EVENT_0 Op = 0x8be Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x969

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb17

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb15

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb19

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb1b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd3a

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xa7d

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x9be

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x9ad

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 535284)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535285)
0x61: Push((int) 36962)
0x62: Push((int) 36961)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535292)
0x66: Push((int) -1)
0x67: Push((int) 36968)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535293)
0x6b: Push((int) -1)
0x6c: Push((int) 36969)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xb1d

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xa48

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0xb1d

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0xa58

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xa76

0xab: Pop(0)
0xac: Push((int) 36960)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535284)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535285)
0xb9: Push((int) 36962)
0xba: Push((int) 36961)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535292)
0xbe: Push((int) -1)
0xbf: Push((int) 36968)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535293)
0xc3: Push((int) -1)
0xc4: Push((int) 36969)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36962)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535286)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535287)
0xd5: Push((int) 36964)
0xd6: Push((int) 36963)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535291)
0xda: Push((int) -1)
0xdb: Push((int) 36967)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36964)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535288)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535289)
0xec: Push((int) -1)
0xed: Push((int) 36965)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535290)
0xf1: Push((int) -1)
0xf2: Push((int) 36966)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0xb1d

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x969

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0xb17

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0xb15

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0xb19

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0xb1b

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xd3a

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0xa7d

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x9be

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x9ad

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x15a: PushEmpty(bool)
0x15b: Stack[-1] = (bool) 0
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0xc04

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0xc10

0x164: Pop(1)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 1
0x167: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x168: PushEmpty(object, object)
0x169: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16b: Call2 0xb5c

0x16c: Pop(2)
0x16d: PushEmpty(object, object)
0x16e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x170: Call2 0xbbd

0x171: Pop(2)
0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x22c

0x175: Pop(1)
0x176: Push((int) 513496)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 513504)
0x17c: Push((int) 14773)
0x17d: Push((int) 14746)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 513505)
0x181: Push((int) 14748)
0x182: Push((int) 14747)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: GOTO 0x20e

0x186: PushEmpty(object, object)
0x187: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x188: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x189: Call2 0xbbd

0x18a: Pop(2)
0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0x22c

0x18e: Pop(1)
0x18f: Push((int) 512350)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 0
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 0
0x198: PushEmpty(bool, object)
0x199: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19a: Call2 0xc1c

0x19b: Pop(1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0xc28

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call2 0xc33

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = (bool) 1
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: Push((int) 513563)
0x1ac: Push((int) 14813)
0x1ad: Push((int) 14812)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0xc3f

0x1b5: Pop(1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b7: PushEmpty(bool, object)
0x1b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Call2 0xbf8

0x1ba: Pop(1)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 1
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: Push((int) 512366)
0x1bf: Push((int) 13527)
0x1c0: Push((int) 13526)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Call2 0xc4b

0x1c6: Pop(1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: Push((int) 512357)
0x1c9: Push((int) 13518)
0x1ca: Push((int) 13517)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: PushEmpty(bool)
0x1ce: Stack[-1] = (bool) 0
0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call2 0xc57

0x1d2: Pop(1)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call2 0xc6f

0x1d7: Pop(1)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = (bool) 1
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: Push((int) 513752)
0x1dc: Push((int) 14997)
0x1dd: Push((int) 14996)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: PushEmpty(bool)
0x1e1: Stack[-1] = (bool) 0
0x1e2: PushEmpty(bool, object)
0x1e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Call2 0xc63

0x1e5: Pop(1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Call2 0xc7b

0x1ea: Pop(1)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = (bool) 1
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ee: Push((int) 513568)
0x1ef: Push((int) 14818)
0x1f0: Push((int) 14817)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: PushEmpty(bool)
0x1f4: Stack[-1] = (bool) 0
0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Call2 0xc93

0x1f8: Pop(1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Call2 0xbec

0x1fd: Pop(1)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[-1] = (bool) 1
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: Push((int) 513766)
0x202: Push((int) 15006)
0x203: Push((int) 15005)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Push((int) 512351)
0x207: Push((int) -1)
0x208: Push((int) 13510)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: GOTO 0x20e

0x20c: Return(); Pop(0)

0x20d: GOTO 0x158

0x20e: PushEmpty(bool)
0x20f: Call2 0xb1d

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x212: @ lshWaitForAnimEnd()
0x213: Pop(0)
0x214: Push( Stack[3 + Tasks[-1].StackPointer] )
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: GOTO 0x21c

0x217: PushEmpty(string)
0x218: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x219: Call2 0xa48

0x21a: Pop(1)
0x21b: GOTO 0x212

0x21c: GOTO 0x22b

0x21d: Push("all")
0x21e: Push("idle")
0x21f: @ PlayAnimation(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: @ WaitForAnimEnd()
0x222: Pop(0)
0x223: Push( Stack[3 + Tasks[-1].StackPointer] )
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x22b

0x226: Push("all")
0x227: Push("idle")
0x228: @ PlayAnimation(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: GOTO 0x221

0x22b: Return(); Pop(0)

0x22c: PushEmpty()
0x22d: PushEmpty(bool)
0x22e: Call2 0xb1d

0x22f: Pop(0)
0x230: Pop(1); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Return(); Pop(0)

0x233: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Return(); Pop(0)

0x236: PushEmpty(string, bool)
0x237: Stack[-2] = Stack[-3]
0x238: Push("")
0x239: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-1] = (bool) 0
0x23c: GOTO 0x23e

0x23d: Stack[-1] = (bool) 1
0x23e: Call2 0xa58

0x23f: Pop(2)
0x240: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x241: Return(); Pop(0)

0x242: PushEmpty()
0x243: Push((int) 1)
0x244: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x245: PushEmpty()
0x246: Call2 0xa76

0x247: Pop(0)
0x248: Push((int) 14805)
0x249: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(object, object)
0x24c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24e: Call2 0xb62

0x24f: Pop(2)
0x250: Push((int) 14811)
0x251: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x253: PushEmpty(object, object)
0x254: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x255: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x256: Call2 0xb6b

0x257: Pop(2)
0x258: PushEmpty(object, object)
0x259: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25b: Call2 0xbdc

0x25c: Pop(2)
0x25d: Push((int) 14812)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: PushEmpty(object, object)
0x261: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x262: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x263: Call2 0xb87

0x264: Pop(2)
0x265: Push((int) 14816)
0x266: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x268: PushEmpty(object, object)
0x269: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26b: Call2 0xb8d

0x26c: Pop(2)
0x26d: PushEmpty(object, object)
0x26e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x270: Call2 0xb39

0x271: Pop(2)
0x272: PushEmpty(object, object)
0x273: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x274: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x275: Call2 0xb4f

0x276: Pop(2)
0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call2 0xb3f

0x27b: Pop(2)
0x27c: Push((int) 13526)
0x27d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object, object)
0x280: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x281: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x282: Call2 0xba5

0x283: Pop(2)
0x284: Push((int) 13517)
0x285: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(object, object)
0x288: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x289: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28a: Call2 0xbab

0x28b: Pop(2)
0x28c: Push((int) 14996)
0x28d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28f: PushEmpty(object, object)
0x290: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x291: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x292: Call2 0xbb1

0x293: Pop(2)
0x294: PushEmpty(object, object)
0x295: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x296: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x297: Call2 0xb1f

0x298: Pop(2)
0x299: Push((int) 15004)
0x29a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29c: PushEmpty(object, object)
0x29d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29f: Call2 0xb8d

0x2a0: Pop(2)
0x2a1: Push((int) 14817)
0x2a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a4: PushEmpty(object, object)
0x2a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a7: Call2 0xbb7

0x2a8: Pop(2)
0x2a9: PushEmpty(object, object)
0x2aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0xb1f

0x2ad: Pop(2)
0x2ae: Push((int) 15002)
0x2af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b1: PushEmpty(object, object)
0x2b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0xb8d

0x2b5: Pop(2)
0x2b6: PushEmpty(object, object)
0x2b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b9: Call2 0xb3f

0x2ba: Pop(2)
0x2bb: Push((int) 15007)
0x2bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2be: PushEmpty(object, object)
0x2bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call2 0xbd6

0x2c2: Pop(2)
0x2c3: PushEmpty(object, object)
0x2c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c6: Call2 0xb4f

0x2c7: Pop(2)
0x2c8: PushEmpty(object, object)
0x2c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cb: Call2 0xbc3

0x2cc: Pop(2)
0x2cd: PushEmpty(object, object)
0x2ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call2 0xb55

0x2d1: Pop(2)
0x2d2: Push((int) 37663)
0x2d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: PushEmpty(object, object)
0x2d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d8: Call2 0xbcd

0x2d9: Pop(2)
0x2da: Push((int) 37664)
0x2db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: PushEmpty(object, object)
0x2de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e0: Call2 0xbcd

0x2e1: Pop(2)
0x2e2: Push((int) 14737)
0x2e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x2e5: PushEmpty(bool)
0x2e6: Stack[-1] = (bool) 0
0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Call2 0xc04

0x2ea: Pop(1)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ec: PushEmpty(bool, object)
0x2ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ee: Call2 0xc10

0x2ef: Pop(1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = (bool) 1
0x2f2: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2f3: PushEmpty(object, object)
0x2f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f6: Call2 0xb5c

0x2f7: Pop(2)
0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fb: Call2 0xbbd

0x2fc: Pop(2)
0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral"
0x2ff: Call2 0x22c

0x300: Pop(1)
0x301: Push((int) 513496)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 513504)
0x307: Push((int) 14773)
0x308: Push((int) 14746)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Push((int) 513505)
0x30c: Push((int) 14748)
0x30d: Push((int) 14747)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: PushEmpty(object, object)
0x312: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x313: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x314: Call2 0xbbd

0x315: Pop(2)
0x316: PushEmpty(string)
0x317: Stack[-1] = "Neutral"
0x318: Call2 0x22c

0x319: Pop(1)
0x31a: Push((int) 512350)
0x31b: @@ SetMessage(Stack[-1])
0x31c: Pop(1)
0x31d: @@ ClearReplies()
0x31e: Pop(0)
0x31f: PushEmpty(bool)
0x320: Stack[-1] = (bool) 0
0x321: PushEmpty(bool)
0x322: Stack[-1] = (bool) 0
0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x325: Call2 0xc1c

0x326: Pop(1)
0x327: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x328: PushEmpty(bool, object)
0x329: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32a: Call2 0xc28

0x32b: Pop(1)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: Stack[-1] = (bool) 1
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0xc33

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Stack[-1] = (bool) 1
0x335: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x336: Push((int) 513563)
0x337: Push((int) 14813)
0x338: Push((int) 14812)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: PushEmpty(bool)
0x33c: Stack[-1] = (bool) 0
0x33d: PushEmpty(bool, object)
0x33e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33f: Call2 0xc3f

0x340: Pop(1)
0x341: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x342: PushEmpty(bool, object)
0x343: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x344: Call2 0xbf8

0x345: Pop(1)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: Stack[-1] = (bool) 1
0x348: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x349: Push((int) 512366)
0x34a: Push((int) 13527)
0x34b: Push((int) 13526)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: PushEmpty(bool, object)
0x34f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x350: Call2 0xc4b

0x351: Pop(1)
0x352: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x353: Push((int) 512357)
0x354: Push((int) 13518)
0x355: Push((int) 13517)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: PushEmpty(bool)
0x359: Stack[-1] = (bool) 0
0x35a: PushEmpty(bool, object)
0x35b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35c: Call2 0xc57

0x35d: Pop(1)
0x35e: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x35f: PushEmpty(bool, object)
0x360: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x361: Call2 0xc6f

0x362: Pop(1)
0x363: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x364: Stack[-1] = (bool) 1
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: Push((int) 513752)
0x367: Push((int) 14997)
0x368: Push((int) 14996)
0x369: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36a: Pop(3)
0x36b: PushEmpty(bool)
0x36c: Stack[-1] = (bool) 0
0x36d: PushEmpty(bool, object)
0x36e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36f: Call2 0xc63

0x370: Pop(1)
0x371: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x372: PushEmpty(bool, object)
0x373: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x374: Call2 0xc7b

0x375: Pop(1)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: Stack[-1] = (bool) 1
0x378: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x379: Push((int) 513568)
0x37a: Push((int) 14818)
0x37b: Push((int) 14817)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: PushEmpty(bool)
0x37f: Stack[-1] = (bool) 0
0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x382: Call2 0xc93

0x383: Pop(1)
0x384: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x385: PushEmpty(bool, object)
0x386: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x387: Call2 0xbec

0x388: Pop(1)
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: Stack[-1] = (bool) 1
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: Push((int) 513766)
0x38d: Push((int) 15006)
0x38e: Push((int) 15005)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 512351)
0x392: Push((int) -1)
0x393: Push((int) 13510)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 15006)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Untrust"
0x39c: Call2 0x22c

0x39d: Pop(1)
0x39e: Push((int) 513767)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 535938)
0x3a4: Push((int) 37660)
0x3a5: Push((int) 37659)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Push((int) 535937)
0x3a9: Push((int) 37662)
0x3aa: Push((int) 37658)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Return(); Pop(0)

0x3ae: Push((int) 37662)
0x3af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b1: PushEmpty(string)
0x3b2: Stack[-1] = "Untrust"
0x3b3: Call2 0x22c

0x3b4: Pop(1)
0x3b5: Push((int) 535941)
0x3b6: @@ SetMessage(Stack[-1])
0x3b7: Pop(1)
0x3b8: @@ ClearReplies()
0x3b9: Pop(0)
0x3ba: Push((int) 535942)
0x3bb: Push((int) -1)
0x3bc: Push((int) 37663)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Push((int) 535943)
0x3c0: Push((int) -1)
0x3c1: Push((int) 37664)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Return(); Pop(0)

0x3c5: Push((int) 37660)
0x3c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c8: PushEmpty(string)
0x3c9: Stack[-1] = "Neutral"
0x3ca: Call2 0x22c

0x3cb: Pop(1)
0x3cc: Push((int) 535939)
0x3cd: @@ SetMessage(Stack[-1])
0x3ce: Pop(1)
0x3cf: @@ ClearReplies()
0x3d0: Pop(0)
0x3d1: Push((int) 513768)
0x3d2: Push((int) -1)
0x3d3: Push((int) 15007)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 14818)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Neutral"
0x3dc: Call2 0x22c

0x3dd: Pop(1)
0x3de: Push((int) 513569)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 513570)
0x3e4: Push((int) 14820)
0x3e5: Push((int) 14819)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 14820)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Rage"
0x3ee: Call2 0x22c

0x3ef: Pop(1)
0x3f0: Push((int) 513571)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 513572)
0x3f6: Push((int) 15001)
0x3f7: Push((int) 14821)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Push((int) 535934)
0x3fb: Push((int) 37654)
0x3fc: Push((int) 37653)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Return(); Pop(0)

0x400: Push((int) 37654)
0x401: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x403: PushEmpty(string)
0x404: Stack[-1] = "Neutral"
0x405: Call2 0x22c

0x406: Pop(1)
0x407: Push((int) 535935)
0x408: @@ SetMessage(Stack[-1])
0x409: Pop(1)
0x40a: @@ ClearReplies()
0x40b: Pop(0)
0x40c: Push((int) 535936)
0x40d: Push((int) 15001)
0x40e: Push((int) 37655)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Push((int) 15001)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Neutral"
0x417: Call2 0x22c

0x418: Pop(1)
0x419: Push((int) 513757)
0x41a: @@ SetMessage(Stack[-1])
0x41b: Pop(1)
0x41c: @@ ClearReplies()
0x41d: Pop(0)
0x41e: Push((int) 513758)
0x41f: Push((int) -1)
0x420: Push((int) 15002)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 14997)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral"
0x429: Call2 0x22c

0x42a: Pop(1)
0x42b: Push((int) 513753)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 513754)
0x431: Push((int) 14999)
0x432: Push((int) 14998)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 14999)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Rage"
0x43b: Call2 0x22c

0x43c: Pop(1)
0x43d: Push((int) 513755)
0x43e: @@ SetMessage(Stack[-1])
0x43f: Pop(1)
0x440: @@ ClearReplies()
0x441: Pop(0)
0x442: Push((int) 513756)
0x443: Push((int) 15003)
0x444: Push((int) 15000)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Push((int) 535931)
0x448: Push((int) 37650)
0x449: Push((int) 37649)
0x44a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: Push((int) 37650)
0x44e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x450: PushEmpty(string)
0x451: Stack[-1] = "Neutral"
0x452: Call2 0x22c

0x453: Pop(1)
0x454: Push((int) 535932)
0x455: @@ SetMessage(Stack[-1])
0x456: Pop(1)
0x457: @@ ClearReplies()
0x458: Pop(0)
0x459: Push((int) 535933)
0x45a: Push((int) 15003)
0x45b: Push((int) 37651)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Return(); Pop(0)

0x45f: Push((int) 15003)
0x460: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x462: PushEmpty(string)
0x463: Stack[-1] = "Neutral"
0x464: Call2 0x22c

0x465: Pop(1)
0x466: Push((int) 513759)
0x467: @@ SetMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ ClearReplies()
0x46a: Pop(0)
0x46b: Push((int) 513760)
0x46c: Push((int) -1)
0x46d: Push((int) 15004)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 13518)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Untrust"
0x476: Call2 0x22c

0x477: Pop(1)
0x478: Push((int) 512358)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 512359)
0x47e: Push((int) 13520)
0x47f: Push((int) 13519)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Push((int) 513497)
0x483: Push((int) 14739)
0x484: Push((int) 14738)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 14739)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Untrust"
0x48d: Call2 0x22c

0x48e: Pop(1)
0x48f: Push((int) 513498)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 513499)
0x495: Push((int) 14741)
0x496: Push((int) 14740)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Return(); Pop(0)

0x49a: Push((int) 14741)
0x49b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "Neutral"
0x49f: Call2 0x22c

0x4a0: Pop(1)
0x4a1: Push((int) 513500)
0x4a2: @@ SetMessage(Stack[-1])
0x4a3: Pop(1)
0x4a4: @@ ClearReplies()
0x4a5: Pop(0)
0x4a6: Push((int) 513501)
0x4a7: Push((int) 14743)
0x4a8: Push((int) 14742)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Return(); Pop(0)

0x4ac: Push((int) 14743)
0x4ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Neutral"
0x4b1: Call2 0x22c

0x4b2: Pop(1)
0x4b3: Push((int) 513502)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 513503)
0x4b9: Push((int) 13524)
0x4ba: Push((int) 14744)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: Push((int) 13520)
0x4bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c1: PushEmpty(string)
0x4c2: Stack[-1] = "Neutral"
0x4c3: Call2 0x22c

0x4c4: Pop(1)
0x4c5: Push((int) 512360)
0x4c6: @@ SetMessage(Stack[-1])
0x4c7: Pop(1)
0x4c8: @@ ClearReplies()
0x4c9: Pop(0)
0x4ca: Push((int) 512361)
0x4cb: Push((int) 13522)
0x4cc: Push((int) 13521)
0x4cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(3)
0x4cf: Return(); Pop(0)

0x4d0: Push((int) 13522)
0x4d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d3: PushEmpty(string)
0x4d4: Stack[-1] = "Neutral"
0x4d5: Call2 0x22c

0x4d6: Pop(1)
0x4d7: Push((int) 512362)
0x4d8: @@ SetMessage(Stack[-1])
0x4d9: Pop(1)
0x4da: @@ ClearReplies()
0x4db: Pop(0)
0x4dc: Push((int) 512363)
0x4dd: Push((int) 13524)
0x4de: Push((int) 13523)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: Push((int) 13524)
0x4e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Discontent"
0x4e7: Call2 0x22c

0x4e8: Pop(1)
0x4e9: Push((int) 512364)
0x4ea: @@ SetMessage(Stack[-1])
0x4eb: Pop(1)
0x4ec: @@ ClearReplies()
0x4ed: Pop(0)
0x4ee: Push((int) 512365)
0x4ef: Push((int) -1)
0x4f0: Push((int) 13525)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Return(); Pop(0)

0x4f4: Push((int) 13527)
0x4f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "Discontent"
0x4f9: Call2 0x22c

0x4fa: Pop(1)
0x4fb: Push((int) 512367)
0x4fc: @@ SetMessage(Stack[-1])
0x4fd: Pop(1)
0x4fe: @@ ClearReplies()
0x4ff: Pop(0)
0x500: Push((int) 512368)
0x501: Push((int) 13529)
0x502: Push((int) 13528)
0x503: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x504: Pop(3)
0x505: Push((int) 535986)
0x506: Push((int) 37715)
0x507: Push((int) 37714)
0x508: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: Return(); Pop(0)

0x50b: Push((int) 37715)
0x50c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x50e: PushEmpty(string)
0x50f: Stack[-1] = "Untrust"
0x510: Call2 0x22c

0x511: Pop(1)
0x512: Push((int) 535987)
0x513: @@ SetMessage(Stack[-1])
0x514: Pop(1)
0x515: @@ ClearReplies()
0x516: Pop(0)
0x517: Push((int) 535988)
0x518: Push((int) 37717)
0x519: Push((int) 37716)
0x51a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51b: Pop(3)
0x51c: Return(); Pop(0)

0x51d: Push((int) 37717)
0x51e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x520: PushEmpty(string)
0x521: Stack[-1] = "Untrust"
0x522: Call2 0x22c

0x523: Pop(1)
0x524: Push((int) 535989)
0x525: @@ SetMessage(Stack[-1])
0x526: Pop(1)
0x527: @@ ClearReplies()
0x528: Pop(0)
0x529: Push((int) 535990)
0x52a: Push((int) 13531)
0x52b: Push((int) 37718)
0x52c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52d: Pop(3)
0x52e: Return(); Pop(0)

0x52f: Push((int) 13529)
0x530: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x532: PushEmpty(string)
0x533: Stack[-1] = "Discontent"
0x534: Call2 0x22c

0x535: Pop(1)
0x536: Push((int) 512369)
0x537: @@ SetMessage(Stack[-1])
0x538: Pop(1)
0x539: @@ ClearReplies()
0x53a: Pop(0)
0x53b: Push((int) 512370)
0x53c: Push((int) 13531)
0x53d: Push((int) 13530)
0x53e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53f: Pop(3)
0x540: Push((int) 535930)
0x541: Push((int) -1)
0x542: Push((int) 37648)
0x543: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x544: Pop(3)
0x545: Return(); Pop(0)

0x546: Push((int) 13531)
0x547: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x549: PushEmpty(string)
0x54a: Stack[-1] = "Discontent"
0x54b: Call2 0x22c

0x54c: Pop(1)
0x54d: Push((int) 512371)
0x54e: @@ SetMessage(Stack[-1])
0x54f: Pop(1)
0x550: @@ ClearReplies()
0x551: Pop(0)
0x552: Push((int) 512372)
0x553: Push((int) -1)
0x554: Push((int) 13532)
0x555: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x556: Pop(3)
0x557: Return(); Pop(0)

0x558: Push((int) 13512)
0x559: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x55b: Push((int) 14775)
0x55c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x55e: PushEmpty(string)
0x55f: Stack[-1] = "Discontent"
0x560: Call2 0x22c

0x561: Pop(1)
0x562: Push((int) 513530)
0x563: @@ SetMessage(Stack[-1])
0x564: Pop(1)
0x565: @@ ClearReplies()
0x566: Pop(0)
0x567: Push((int) 513531)
0x568: Push((int) 14777)
0x569: Push((int) 14776)
0x56a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56b: Pop(3)
0x56c: Return(); Pop(0)

0x56d: Push((int) 14777)
0x56e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x570: PushEmpty(string)
0x571: Stack[-1] = "Discontent"
0x572: Call2 0x22c

0x573: Pop(1)
0x574: Push((int) 513532)
0x575: @@ SetMessage(Stack[-1])
0x576: Pop(1)
0x577: @@ ClearReplies()
0x578: Pop(0)
0x579: Push((int) 513533)
0x57a: Push((int) 14779)
0x57b: Push((int) 14778)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Push((int) 513536)
0x57f: Push((int) 14782)
0x580: Push((int) 14781)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Return(); Pop(0)

0x584: Push((int) 14782)
0x585: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x587: PushEmpty(string)
0x588: Stack[-1] = "Discontent"
0x589: Call2 0x22c

0x58a: Pop(1)
0x58b: Push((int) 513537)
0x58c: @@ SetMessage(Stack[-1])
0x58d: Pop(1)
0x58e: @@ ClearReplies()
0x58f: Pop(0)
0x590: Push((int) 513538)
0x591: Push((int) 14784)
0x592: Push((int) 14783)
0x593: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x594: Pop(3)
0x595: Return(); Pop(0)

0x596: Push((int) 14784)
0x597: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x599: PushEmpty(string)
0x59a: Stack[-1] = "Discontent"
0x59b: Call2 0x22c

0x59c: Pop(1)
0x59d: Push((int) 513539)
0x59e: @@ SetMessage(Stack[-1])
0x59f: Pop(1)
0x5a0: @@ ClearReplies()
0x5a1: Pop(0)
0x5a2: Push((int) 513540)
0x5a3: Push((int) 14786)
0x5a4: Push((int) 14785)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 14786)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Discontent"
0x5ad: Call2 0x22c

0x5ae: Pop(1)
0x5af: Push((int) 513541)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 513542)
0x5b5: Push((int) -1)
0x5b6: Push((int) 14787)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 14779)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Discontent"
0x5bf: Call2 0x22c

0x5c0: Pop(1)
0x5c1: Push((int) 513534)
0x5c2: @@ SetMessage(Stack[-1])
0x5c3: Pop(1)
0x5c4: @@ ClearReplies()
0x5c5: Pop(0)
0x5c6: Push((int) 513535)
0x5c7: Push((int) 14788)
0x5c8: Push((int) 14780)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 14788)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Discontent"
0x5d1: Call2 0x22c

0x5d2: Pop(1)
0x5d3: Push((int) 513543)
0x5d4: @@ SetMessage(Stack[-1])
0x5d5: Pop(1)
0x5d6: @@ ClearReplies()
0x5d7: Pop(0)
0x5d8: Push((int) 513544)
0x5d9: Push((int) 14790)
0x5da: Push((int) 14789)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: Push((int) 14790)
0x5df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5e1: PushEmpty(string)
0x5e2: Stack[-1] = "Discontent"
0x5e3: Call2 0x22c

0x5e4: Pop(1)
0x5e5: Push((int) 513545)
0x5e6: @@ SetMessage(Stack[-1])
0x5e7: Pop(1)
0x5e8: @@ ClearReplies()
0x5e9: Pop(0)
0x5ea: Push((int) 513546)
0x5eb: Push((int) -1)
0x5ec: Push((int) 14791)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Return(); Pop(0)

0x5f0: Push((int) 14813)
0x5f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f2: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5f3: PushEmpty(string)
0x5f4: Stack[-1] = "Neutral"
0x5f5: Call2 0x22c

0x5f6: Pop(1)
0x5f7: Push((int) 513564)
0x5f8: @@ SetMessage(Stack[-1])
0x5f9: Pop(1)
0x5fa: @@ ClearReplies()
0x5fb: Pop(0)
0x5fc: Push((int) 513565)
0x5fd: Push((int) 14815)
0x5fe: Push((int) 14814)
0x5ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(3)
0x601: Return(); Pop(0)

0x602: Push((int) 14815)
0x603: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x605: PushEmpty(string)
0x606: Stack[-1] = "Neutral"
0x607: Call2 0x22c

0x608: Pop(1)
0x609: Push((int) 513566)
0x60a: @@ SetMessage(Stack[-1])
0x60b: Pop(1)
0x60c: @@ ClearReplies()
0x60d: Pop(0)
0x60e: Push((int) 513567)
0x60f: Push((int) -1)
0x610: Push((int) 14816)
0x611: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(3)
0x613: Return(); Pop(0)

0x614: Push((int) 14748)
0x615: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x617: PushEmpty(string)
0x618: Stack[-1] = "Discontent"
0x619: Call2 0x22c

0x61a: Pop(1)
0x61b: Push((int) 513506)
0x61c: @@ SetMessage(Stack[-1])
0x61d: Pop(1)
0x61e: @@ ClearReplies()
0x61f: Pop(0)
0x620: Push((int) 513507)
0x621: Push((int) 14750)
0x622: Push((int) 14749)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: Push((int) 513513)
0x626: Push((int) 14756)
0x627: Push((int) 14755)
0x628: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x629: Pop(3)
0x62a: Return(); Pop(0)

0x62b: Push((int) 14756)
0x62c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x62e: PushEmpty(string)
0x62f: Stack[-1] = "Patronage"
0x630: Call2 0x22c

0x631: Pop(1)
0x632: Push((int) 513514)
0x633: @@ SetMessage(Stack[-1])
0x634: Pop(1)
0x635: @@ ClearReplies()
0x636: Pop(0)
0x637: Push((int) 513515)
0x638: Push((int) 14758)
0x639: Push((int) 14757)
0x63a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(3)
0x63c: Push((int) 513517)
0x63d: Push((int) 14760)
0x63e: Push((int) 14759)
0x63f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(3)
0x641: Return(); Pop(0)

0x642: Push((int) 14760)
0x643: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x645: PushEmpty(string)
0x646: Stack[-1] = "Patronage"
0x647: Call2 0x22c

0x648: Pop(1)
0x649: Push((int) 513518)
0x64a: @@ SetMessage(Stack[-1])
0x64b: Pop(1)
0x64c: @@ ClearReplies()
0x64d: Pop(0)
0x64e: Push((int) 513520)
0x64f: Push((int) 14750)
0x650: Push((int) 14763)
0x651: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x652: Pop(3)
0x653: Return(); Pop(0)

0x654: Push((int) 14758)
0x655: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x657: PushEmpty(string)
0x658: Stack[-1] = "Patronage"
0x659: Call2 0x22c

0x65a: Pop(1)
0x65b: Push((int) 513516)
0x65c: @@ SetMessage(Stack[-1])
0x65d: Pop(1)
0x65e: @@ ClearReplies()
0x65f: Pop(0)
0x660: Push((int) 513519)
0x661: Push((int) 14750)
0x662: Push((int) 14761)
0x663: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x664: Pop(3)
0x665: Return(); Pop(0)

0x666: Push((int) 14750)
0x667: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x668: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x669: PushEmpty(string)
0x66a: Stack[-1] = "Discontent"
0x66b: Call2 0x22c

0x66c: Pop(1)
0x66d: Push((int) 513508)
0x66e: @@ SetMessage(Stack[-1])
0x66f: Pop(1)
0x670: @@ ClearReplies()
0x671: Pop(0)
0x672: Push((int) 513521)
0x673: Push((int) 14766)
0x674: Push((int) 14765)
0x675: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x676: Pop(3)
0x677: Push((int) 513509)
0x678: Push((int) 14752)
0x679: Push((int) 14751)
0x67a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(3)
0x67c: Return(); Pop(0)

0x67d: Push((int) 14752)
0x67e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x680: PushEmpty(string)
0x681: Stack[-1] = "Patronage"
0x682: Call2 0x22c

0x683: Pop(1)
0x684: Push((int) 513510)
0x685: @@ SetMessage(Stack[-1])
0x686: Pop(1)
0x687: @@ ClearReplies()
0x688: Pop(0)
0x689: Push((int) 513511)
0x68a: Push((int) 14754)
0x68b: Push((int) 14753)
0x68c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(3)
0x68e: Return(); Pop(0)

0x68f: Push((int) 14754)
0x690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x692: PushEmpty(string)
0x693: Stack[-1] = "Patronage"
0x694: Call2 0x22c

0x695: Pop(1)
0x696: Push((int) 513512)
0x697: @@ SetMessage(Stack[-1])
0x698: Pop(1)
0x699: @@ ClearReplies()
0x69a: Pop(0)
0x69b: Push((int) 513547)
0x69c: Push((int) 14773)
0x69d: Push((int) 14792)
0x69e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Return(); Pop(0)

0x6a1: Push((int) 14766)
0x6a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6a4: PushEmpty(string)
0x6a5: Stack[-1] = "Discontent"
0x6a6: Call2 0x22c

0x6a7: Pop(1)
0x6a8: Push((int) 513522)
0x6a9: @@ SetMessage(Stack[-1])
0x6aa: Pop(1)
0x6ab: @@ ClearReplies()
0x6ac: Pop(0)
0x6ad: Push((int) 513523)
0x6ae: Push((int) 14769)
0x6af: Push((int) 14767)
0x6b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(3)
0x6b2: PushEmpty(bool, object)
0x6b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b4: Call2 0xc87

0x6b5: Pop(1)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b7: Push((int) 513524)
0x6b8: Push((int) 14769)
0x6b9: Push((int) 14768)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Return(); Pop(0)

0x6bd: Push((int) 14769)
0x6be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "Discontent"
0x6c2: Call2 0x22c

0x6c3: Pop(1)
0x6c4: Push((int) 513525)
0x6c5: @@ SetMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ ClearReplies()
0x6c8: Pop(0)
0x6c9: Push((int) 513526)
0x6ca: Push((int) 14773)
0x6cb: Push((int) 14770)
0x6cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: Push((int) 513527)
0x6cf: Push((int) -1)
0x6d0: Push((int) 14772)
0x6d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: Return(); Pop(0)

0x6d4: Push((int) 14773)
0x6d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6d7: PushEmpty(string)
0x6d8: Stack[-1] = "Rage"
0x6d9: Call2 0x22c

0x6da: Pop(1)
0x6db: Push((int) 513528)
0x6dc: @@ SetMessage(Stack[-1])
0x6dd: Pop(1)
0x6de: @@ ClearReplies()
0x6df: Pop(0)
0x6e0: Push((int) 513548)
0x6e1: Push((int) 14796)
0x6e2: Push((int) 14795)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Return(); Pop(0)

0x6e6: Push((int) 14796)
0x6e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6e9: PushEmpty(string)
0x6ea: Stack[-1] = "Rage"
0x6eb: Call2 0x22c

0x6ec: Pop(1)
0x6ed: Push((int) 513549)
0x6ee: @@ SetMessage(Stack[-1])
0x6ef: Pop(1)
0x6f0: @@ ClearReplies()
0x6f1: Pop(0)
0x6f2: Push((int) 513550)
0x6f3: Push((int) 14800)
0x6f4: Push((int) 14797)
0x6f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f6: Pop(3)
0x6f7: Push((int) 513551)
0x6f8: Push((int) 14799)
0x6f9: Push((int) 14798)
0x6fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fb: Pop(3)
0x6fc: Return(); Pop(0)

0x6fd: Push((int) 14799)
0x6fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x700: PushEmpty(string)
0x701: Stack[-1] = "Rage"
0x702: Call2 0x22c

0x703: Pop(1)
0x704: Push((int) 513552)
0x705: @@ SetMessage(Stack[-1])
0x706: Pop(1)
0x707: @@ ClearReplies()
0x708: Pop(0)
0x709: Push((int) 513554)
0x70a: Push((int) 14800)
0x70b: Push((int) 14801)
0x70c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70d: Pop(3)
0x70e: Return(); Pop(0)

0x70f: Push((int) 14800)
0x710: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x712: PushEmpty(string)
0x713: Stack[-1] = "Rage"
0x714: Call2 0x22c

0x715: Pop(1)
0x716: Push((int) 513553)
0x717: @@ SetMessage(Stack[-1])
0x718: Pop(1)
0x719: @@ ClearReplies()
0x71a: Pop(0)
0x71b: Push((int) 513556)
0x71c: Push((int) -1)
0x71d: Push((int) 14805)
0x71e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71f: Pop(3)
0x720: Push((int) 513557)
0x721: Push((int) 14807)
0x722: Push((int) 14806)
0x723: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x724: Pop(3)
0x725: Return(); Pop(0)

0x726: Push((int) 14807)
0x727: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x729: PushEmpty(string)
0x72a: Stack[-1] = "Discontent"
0x72b: Call2 0x22c

0x72c: Pop(1)
0x72d: Push((int) 513558)
0x72e: @@ SetMessage(Stack[-1])
0x72f: Pop(1)
0x730: @@ ClearReplies()
0x731: Pop(0)
0x732: Push((int) 513559)
0x733: Push((int) 14810)
0x734: Push((int) 14808)
0x735: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(3)
0x737: Push((int) 513560)
0x738: Push((int) -1)
0x739: Push((int) 14809)
0x73a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(3)
0x73c: Return(); Pop(0)

0x73d: Push((int) 14810)
0x73e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x740: PushEmpty(string)
0x741: Stack[-1] = "Discontent"
0x742: Call2 0x22c

0x743: Pop(1)
0x744: Push((int) 513561)
0x745: @@ SetMessage(Stack[-1])
0x746: Pop(1)
0x747: @@ ClearReplies()
0x748: Pop(0)
0x749: Push((int) 513562)
0x74a: Push((int) -1)
0x74b: Push((int) 14811)
0x74c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74d: Pop(3)
0x74e: Return(); Pop(0)

0x74f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x750: PushEmpty(bool)
0x751: Call2 0xb1d

0x752: Pop(0)
0x753: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x754: @ lshStopAnimation()
0x755: Pop(0)
0x756: GOTO 0x759

0x757: @ StopAnimation()
0x758: Pop(0)
0x759: Return(); Pop(0)

0x75a: GOTO 0x243

0x75b: Return(); Pop(0)

0x75c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x75d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x75e: PushEmpty(bool, object, float)
0x75f: Stack[-2] = Stack[-12]
0x760: Stack[-1] = (float) 70.0
0x761: Call2 0x969

0x762: Pop(2)
0x763: Pop(1); Push((bool) Stack[-1] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: Stack[-10] = (int) -2
0x766: Return(); Pop(8)

0x767: @ CreateDialog(Stack[-4])
0x768: Pop(0)
0x769: PushEmpty(int)
0x76a: Call2 0xb17

0x76b: Pop(0)
0x76c: @@ SetNPCName(Stack[-1])
0x76d: Pop(1)
0x76e: PushEmpty(int)
0x76f: Call2 0xb15

0x770: Pop(0)
0x771: @@ SetNPCDescription(Stack[-1])
0x772: Pop(1)
0x773: PushEmpty(string)
0x774: Call2 0xb19

0x775: Pop(0)
0x776: @@ SetPhoto(Stack[-1])
0x777: Pop(1)
0x778: PushEmpty(string)
0x779: Call2 0xb1b

0x77a: Pop(0)
0x77b: @@ SetPhoto2(Stack[-1])
0x77c: Pop(1)
0x77d: PushEmpty(int)
0x77e: Call2 0xd3a

0x77f: Pop(0)
0x780: @@ SetPlayerName(Stack[-1])
0x781: Pop(1)
0x782: Stack[-2] = (int) -1
0x783: @ IsOverrideActive(Stack[-3])
0x784: Pop(0)
0x785: Push(Stack[-3])
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-10] = (int) -2
0x788: Return(); Pop(8)

0x789: @ DoDialog(Stack[-4])
0x78a: Pop(0)
0x78b: PushEmpty(bool, object)
0x78c: PushEmpty(object)
0x78d: Call2 0xa7d

0x78e: Stack[-2] = Stack[-1]
0x78f: Pop(1)
0x790: Call2 0x9be

0x791: Pop(2)
0x792: PushEmpty(object, object)
0x793: Stack[-2] = Stack[-11]
0x794: Stack[-1] = Stack[-6]
0x795: Push(-2, 4); TaskCall(5)
0x796: Call2 0x7ad

0x797: Pop(-2, 4); TaskReturn
0x798: Pop(2)
0x799: @@ IsDialogEnd(Stack[-1])
0x79a: Pop(0)
0x79b: Pop(0); Push((bool) Stack[-1] == 0)
0x79c: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x79d: @ sync()
0x79e: Pop(0)
0x79f: @@ IsDialogEnd(Stack[-1])
0x7a0: Pop(0)
0x7a1: GOTO 0x79b

0x7a2: PushEmpty(object)
0x7a3: Stack[-1] = Stack[-10]
0x7a4: Call2 0x9ad

0x7a5: Pop(1)
0x7a6: @ StopDialog(Stack[-4])
0x7a7: Pop(0)
0x7a8: @@ GetReturnValue(Stack[-2])
0x7a9: Pop(0)
0x7aa: Stack[-10] = Stack[-2]
0x7ab: Return(); Pop(8)

0x7ac: Stack[-4] = 0
0x7ad: PushEmpty()
0x7ae: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7af: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7b0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7b1: Push((int) 1)
0x7b2: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7b3: PushEmpty(string)
0x7b4: Stack[-1] = "Neutral"
0x7b5: Call2 0x7e7

0x7b6: Pop(1)
0x7b7: Push((int) 540548)
0x7b8: @@ SetMessage(Stack[-1])
0x7b9: Pop(1)
0x7ba: @@ ClearReplies()
0x7bb: Pop(0)
0x7bc: Push((int) 540549)
0x7bd: Push((int) -1)
0x7be: Push((int) 42558)
0x7bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c0: Pop(3)
0x7c1: Push((int) 540797)
0x7c2: Push((int) -1)
0x7c3: Push((int) 42846)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: GOTO 0x7c9

0x7c7: Return(); Pop(0)

0x7c8: GOTO 0x7b1

0x7c9: PushEmpty(bool)
0x7ca: Call2 0xb1d

0x7cb: Pop(0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7cd: @ lshWaitForAnimEnd()
0x7ce: Pop(0)
0x7cf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d1: GOTO 0x7d7

0x7d2: PushEmpty(string)
0x7d3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d4: Call2 0xa48

0x7d5: Pop(1)
0x7d6: GOTO 0x7cd

0x7d7: GOTO 0x7e6

0x7d8: Push("all")
0x7d9: Push("idle")
0x7da: @ PlayAnimation(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: @ WaitForAnimEnd()
0x7dd: Pop(0)
0x7de: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7df: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7e0: GOTO 0x7e6

0x7e1: Push("all")
0x7e2: Push("idle")
0x7e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x7e4: Pop(2)
0x7e5: GOTO 0x7dc

0x7e6: Return(); Pop(0)

0x7e7: PushEmpty()
0x7e8: PushEmpty(bool)
0x7e9: Call2 0xb1d

0x7ea: Pop(0)
0x7eb: Pop(1); Push((bool) Stack[-1] == 0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ed: Return(); Pop(0)

0x7ee: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Return(); Pop(0)

0x7f1: PushEmpty(string, bool)
0x7f2: Stack[-2] = Stack[-3]
0x7f3: Push("")
0x7f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f6: Stack[-1] = (bool) 0
0x7f7: GOTO 0x7f9

0x7f8: Stack[-1] = (bool) 1
0x7f9: Call2 0xa58

0x7fa: Pop(2)
0x7fb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7fc: Return(); Pop(0)

0x7fd: PushEmpty()
0x7fe: Push((int) 1)
0x7ff: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x800: PushEmpty()
0x801: Call2 0xa76

0x802: Pop(0)
0x803: Push((int) 42557)
0x804: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x806: PushEmpty(string)
0x807: Stack[-1] = "Neutral"
0x808: Call2 0x7e7

0x809: Pop(1)
0x80a: Push((int) 540548)
0x80b: @@ SetMessage(Stack[-1])
0x80c: Pop(1)
0x80d: @@ ClearReplies()
0x80e: Pop(0)
0x80f: Push((int) 540549)
0x810: Push((int) -1)
0x811: Push((int) 42558)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Push((int) 540797)
0x815: Push((int) -1)
0x816: Push((int) 42846)
0x817: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x818: Pop(3)
0x819: Return(); Pop(0)

0x81a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x81b: PushEmpty(bool)
0x81c: Call2 0xb1d

0x81d: Pop(0)
0x81e: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x81f: @ lshStopAnimation()
0x820: Pop(0)
0x821: GOTO 0x824

0x822: @ StopAnimation()
0x823: Pop(0)
0x824: Return(); Pop(0)

0x825: GOTO 0x7fe

0x826: Return(); Pop(0)

0x827: PushEmpty()
0x828: Call2 0x82b

0x829: Pop(0)
0x82a: Return(); Pop(0)

0x82b: PushEmpty(bool)
0x82c: Call2 0x964

0x82d: Pop(0)
0x82e: Pop(1); Push((bool) Stack[-1] == 0)
0x82f: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x830: @ Hold()
0x831: Pop(0)
0x832: @ GetDirection(Stack[-0])
0x833: Pop(0)
0x834: PushEmpty()
0x835: Call2 0x8db

0x836: Pop(0)
0x837: GOTO 0x834

0x838: Return(); Pop(0)

0x839: PushEmpty(object, object)
0x83a: Push("player")
0x83b: @ FindActor(Stack[-2], Stack[-1])
0x83c: Pop(1)
0x83d: Pop(0); Push((bool) Stack[-1] == 0)
0x83e: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83f: Stack[-3] = (bool) 0
0x840: Return(); Pop(2)

0x841: PushEmpty(bool, object)
0x842: Stack[-1] = Stack[-3]
0x843: Call2 0x95b

0x844: Stack[-5] = Stack[-2]
0x845: Pop(2)
0x846: Return(); Pop(2)

0x847: Stack[-1] = 0
0x848: Push(CvectorIndex(Stack[-0], 0))
0x849: Push(CvectorIndex(Stack[-0], 2))
0x84a: @ RotateAsync(Stack[-2], Stack[-1])
0x84b: Pop(2)
0x84c: Return(); Pop(0)

0x84d: PushEmpty(object, bool, object, bool)
0x84e: Push("player")
0x84f: @ FindActor(Stack[-3], Stack[-1])
0x850: Pop(1)
0x851: Pop(0); Push((bool) Stack[-2] == 0)
0x852: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x853: Stack[-5] = (bool) 0
0x854: Return(); Pop(4)

0x855: PushEmpty(float, object)
0x856: Stack[-1] = Stack[-4]
0x857: Call2 0x927

0x858: Pop(1)
0x859: Push((float)90000.0)
0x85a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85c: Stack[-5] = (bool) 0
0x85d: Return(); Pop(4)

0x85e: @ CanSee(Stack[-1], Stack[-2])
0x85f: Pop(0)
0x860: Stack[-5] = Stack[-1]
0x861: Return(); Pop(4)

0x862: Stack[-2] = 0
0x863: PushEmpty(float, float)
0x864: Push((int) 8)
0x865: Push((int) 16)
0x866: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x867: Pop(2)
0x868: Push((int) 10)
0x869: @ SetTimer(Stack[-1], Stack[-2])
0x86a: Pop(1)
0x86b: Return(); Pop(2)

0x86c: Push((int) 10)
0x86d: @ KillTimer(Stack[-1])
0x86e: Pop(1)
0x86f: Return(); Pop(0)

0x870: PushEmpty()
0x871: Push((int) 10)
0x872: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x874: PushEmpty()
0x875: Call2 0x86c

0x876: Pop(0)
0x877: PushEmpty(bool)
0x878: Stack[-1] = (bool) 0
0x879: PushEmpty(bool)
0x87a: Call2 0x964

0x87b: Pop(0)
0x87c: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x87d: PushEmpty(bool)
0x87e: Call2 0x84d

0x87f: Pop(0)
0x880: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x881: Stack[-1] = (bool) 1
0x882: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x883: PushEmpty(bool)
0x884: Call2 0x839

0x885: Pop(0)
0x886: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x887: PushEmpty(bool, object)
0x888: PushEmpty(object)
0x889: Call2 0xa7d

0x88a: Stack[-2] = Stack[-1]
0x88b: Pop(1)
0x88c: Call2 0x9f8

0x88d: Pop(2)
0x88e: GOTO 0x895

0x88f: PushEmpty()
0x890: Call2 0x848

0x891: Pop(0)
0x892: PushEmpty()
0x893: Call2 0x863

0x894: Pop(0)
0x895: Return(); Pop(0)

0x896: PushEmpty()
0x897: Call2 0x922

0x898: Pop(0)
0x899: PushEmpty()
0x89a: Call2 0x86c

0x89b: Pop(0)
0x89c: @ lshStopSpeech()
0x89d: Pop(0)
0x89e: @ lshStopAnimation()
0x89f: Pop(0)
0x8a0: @ StopAsync()
0x8a1: Pop(0)
0x8a2: @ Hold()
0x8a3: Pop(0)
0x8a4: Return(); Pop(0)

0x8a5: @ StopGroup0()
0x8a6: Pop(0)
0x8a7: PushEmpty()
0x8a8: Call2 0x86c

0x8a9: Pop(0)
0x8aa: PushEmpty(string)
0x8ab: Stack[-1] = "Neutral"
0x8ac: Call2 0xa48

0x8ad: Pop(1)
0x8ae: PushEmpty()
0x8af: Call2 0x863

0x8b0: Pop(0)
0x8b1: Return(); Pop(0)

0x8b2: PushEmpty()
0x8b3: Push(Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b5: PushEmpty()
0x8b6: Call2 0x863

0x8b7: Pop(0)
0x8b8: GOTO 0x8bd

0x8b9: PushEmpty(string)
0x8ba: Stack[-1] = "Neutral"
0x8bb: Call2 0xa48

0x8bc: Pop(1)
0x8bd: Return(); Pop(0)

0x8be: PushEmpty(bool, bool)
0x8bf: @ IsOverrideActive(Stack[-1])
0x8c0: Pop(0)
0x8c1: Pop(0); Push((bool) Stack[-1] == 0)
0x8c2: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8c3: EventDisable(0)
0x8c4: PushEmpty()
0x8c5: Call2 0x922

0x8c6: Pop(0)
0x8c7: PushEmpty(bool, object)
0x8c8: Stack[-1] = Stack[-5]
0x8c9: Call2 0x95b

0x8ca: Pop(2)
0x8cb: EventEnable(0)
0x8cc: PushEmpty(object)
0x8cd: Stack[-1] = Stack[-4]
0x8ce: Call2 0xd4b

0x8cf: Pop(1)
0x8d0: PushEmpty(string)
0x8d1: Stack[-1] = "Neutral"
0x8d2: Call2 0xa48

0x8d3: Pop(1)
0x8d4: PushEmpty()
0x8d5: Call2 0x86c

0x8d6: Pop(0)
0x8d7: PushEmpty()
0x8d8: Call2 0x863

0x8d9: Pop(0)
0x8da: Return(); Pop(2)

0x8db: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x8dc: @ WaitForAnimEnd()
0x8dd: Pop(0)
0x8de: PushEmpty(bool)
0x8df: Call2 0x964

0x8e0: Pop(0)
0x8e1: Pop(1); Push((bool) Stack[-1] == 0)
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e3: Return(); Pop(12)

0x8e4: PushEmpty(int)
0x8e5: Call2 0xb04

0x8e6: Stack[-7] = Stack[-1]
0x8e7: Pop(1)
0x8e8: Stack[-5] = (int) 0
0x8e9: PushEmpty(bool)
0x8ea: Stack[-1] = (bool) 0
0x8eb: Push((int) 5)
0x8ec: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8ee: PushEmpty(bool)
0x8ef: Call2 0x964

0x8f0: Pop(0)
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f2: Stack[-1] = (bool) 1
0x8f3: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x8f4: Pop(0); Push((bool) Stack[-6] == 0)
0x8f5: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8f6: Push((int) 3)
0x8f7: @ Sleep(Stack[-1], Stack[-5])
0x8f8: Pop(1)
0x8f9: Pop(0); Push((bool) Stack[-4] == 0)
0x8fa: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8fb: GOTO 0x91d

0x8fc: GOTO 0x912

0x8fd: @ irand(Stack[-3], Stack[-6])
0x8fe: Pop(0)
0x8ff: Push((int) 5)
0x900: @ irand(Stack[-3], Stack[-1])
0x901: Pop(1)
0x902: Push((int) 0)
0x903: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x905: Stack[-3] = (int) 0
0x906: Push("all")
0x907: PushEmpty(string, int)
0x908: Stack[-1] = Stack[-6]
0x909: Call2 0xafd

0x90a: Pop(1)
0x90b: @ PlayAnimation(Stack[-2], Stack[-1])
0x90c: Pop(2)
0x90d: @ WaitForAnimEnd(Stack[-1])
0x90e: Pop(0)
0x90f: Pop(0); Push((bool) Stack[-1] == 0)
0x910: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x911: GOTO 0x91d

0x912: PushEmpty(bool)
0x913: Call2 0x920

0x914: Pop(0)
0x915: Pop(1); Push((bool) Stack[-1] == 0)
0x916: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x917: GOTO 0x91d

0x918: @ ResetAAS()
0x919: Pop(0)
0x91a: Push((int) 1)
0x91b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x91c: GOTO 0x8e9

0x91d: @ ResetAAS()
0x91e: Pop(0)
0x91f: Return(); Pop(12)

0x920: Stack[-1] = (bool) 1
0x921: Return(); Pop(0)

0x922: @ StopAnimation()
0x923: Pop(0)
0x924: @ StopGroup0()
0x925: Pop(0)
0x926: Return(); Pop(0)

0x927: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x928: @ GetPosition(Stack[-3])
0x929: Pop(0)
0x92a: @@ GetPosition(Stack[-2])
0x92b: Pop(0)
0x92c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x92d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x92e: Return(); Pop(6)

0x92f: PushEmpty(bool, bool)
0x930: Push("HasProperty")
0x931: Push((int) 2)
0x932: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x933: Pop(1); Push((bool) Stack[-1] == 0)
0x934: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x935: Stack[-5] = (bool) 0
0x936: Return(); Pop(2)

0x937: @@ HasProperty(Stack[-3], Stack[-1])
0x938: Pop(0)
0x939: Stack[-5] = Stack[-1]
0x93a: Return(); Pop(2)

0x93b: PushEmpty(float, float)
0x93c: PushEmpty(bool, object, string)
0x93d: Stack[-2] = Stack[-10]
0x93e: Stack[-1] = Stack[-9]
0x93f: Call2 0x92f

0x940: Pop(2)
0x941: Pop(1); Push((bool) Stack[-1] == 0)
0x942: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x943: Stack[-8] = (bool) 0
0x944: Return(); Pop(2)

0x945: @@ GetProperty(Stack[-6], Stack[-1])
0x946: Pop(0)
0x947: PushEmpty(float, float, float, float)
0x948: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x949: Stack[-2] = Stack[-8]
0x94a: Stack[-1] = Stack[-7]
0x94b: Call2 0xa8d

0x94c: Pop(3)
0x94d: @@ SetProperty(Stack[-7], Stack[-1])
0x94e: Pop(1)
0x94f: Stack[-8] = (bool) 1
0x950: Return(); Pop(2)

0x951: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x952: @ GetPosition(Stack[-3])
0x953: Pop(0)
0x954: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x955: Push(CvectorIndex(Stack[-2], 0))
0x956: Push(CvectorIndex(Stack[-3], 2))
0x957: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x958: Pop(2)
0x959: Stack[-8] = Stack[-1]
0x95a: Return(); Pop(6)

0x95b: PushEmpty(cvector, cvector)
0x95c: @@ GetPosition(Stack[-1])
0x95d: Pop(0)
0x95e: PushEmpty(bool, cvector)
0x95f: Stack[-1] = Stack[-3]
0x960: Call2 0x951

0x961: Stack[-6] = Stack[-2]
0x962: Pop(2)
0x963: Return(); Pop(2)

0x964: PushEmpty(bool, bool)
0x965: @ IsLoaded(Stack[-1])
0x966: Pop(0)
0x967: Stack[-3] = Stack[-1]
0x968: Return(); Pop(2)

0x969: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x96a: @@ GetPosition(Stack[-8])
0x96b: Pop(0)
0x96c: @@ GetEyesHeight(Stack[-9])
0x96d: Pop(0)
0x96e: Push(CvectorIndex(Stack[-8], 1))
0x96f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x970: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x971: @ GetPosition(Stack[-7])
0x972: Pop(0)
0x973: @ GetEyesHeight(Stack[-9])
0x974: Pop(0)
0x975: Push(CvectorIndex(Stack[-7], 1))
0x976: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x977: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x978: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x979: Push(CvectorIndex(Stack[-6], 1))
0x97a: Stack[-1] = (int) 0
0x97b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x97c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x97d: Pop(1); Push(Sqrt(Stack[-1]))
0x97e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x97f: Stack[-5] = -Stack[-6]; Pop(0);
0x980: Pop(0); Push(Stack[-6] * Stack[-19]);
0x981: PushEmpty(cvector, cvector)
0x982: Push(CVector(0.0, 1.0, 0.0))
0x983: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x984: Call2 0xa83

0x985: Pop(1)
0x986: Push((int) 25)
0x987: Pop(2); Push(Stack[-2] * Stack[-1]);
0x988: Pop(2); Push(Stack[-2] + Stack[-1]);
0x989: Push(CVector(0.0, 10.0, 0.0))
0x98a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x98b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x98c: @ IsOverrideActive(Stack[-2])
0x98d: Pop(0)
0x98e: Push(Stack[-2])
0x98f: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x990: Stack[-21] = (bool) 0
0x991: Return(); Pop(18)

0x992: @ StopWorld()
0x993: Pop(0)
0x994: @ CameraTransit(Stack[-3], Stack[-5])
0x995: Pop(0)
0x996: Push(CvectorIndex(Stack[-4], 0))
0x997: Push(CvectorIndex(Stack[-5], 2))
0x998: @ Rotate(Stack[-2], Stack[-1])
0x999: Pop(2)
0x99a: PushEmpty(bool)
0x99b: Call2 0xb1d

0x99c: Pop(0)
0x99d: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99e: GOTO 0x9a7

0x99f: Push("head")
0x9a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9a1: Pop(1)
0x9a2: Push(Stack[-1])
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a4: Push("head")
0x9a5: @ LookAsyncCamera(Stack[-1])
0x9a6: Pop(1)
0x9a7: @ CameraWaitForPlayFinish()
0x9a8: Pop(0)
0x9a9: @ ResumeWorld()
0x9aa: Pop(0)
0x9ab: Stack[-21] = (bool) 1
0x9ac: Return(); Pop(18)

0x9ad: PushEmpty(bool, bool)
0x9ae: @ CameraSwitchToNormal()
0x9af: Pop(0)
0x9b0: PushEmpty(bool)
0x9b1: Call2 0xb1d

0x9b2: Pop(0)
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b4: GOTO 0x9bd

0x9b5: Push("head")
0x9b6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9b7: Pop(1)
0x9b8: Push(Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9ba: Push("head")
0x9bb: @ UnlookAsync(Stack[-1])
0x9bc: Pop(1)
0x9bd: Return(); Pop(2)

0x9be: PushEmpty(int, int, int, int)
0x9bf: Push("voice_common")
0x9c0: @ GetVariable(Stack[-1], Stack[-3])
0x9c1: Pop(1)
0x9c2: Push(Stack[-2])
0x9c3: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9c4: PushEmpty(bool, object)
0x9c5: Stack[-1] = Stack[-7]
0x9c6: Call2 0x9f8

0x9c7: Pop(1)
0x9c8: Pop(1); Push((bool) Stack[-1] == 0)
0x9c9: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9ca: PushEmpty(bool, object)
0x9cb: Stack[-1] = Stack[-7]
0x9cc: Call2 0xa1d

0x9cd: Pop(1)
0x9ce: Pop(1); Push((bool) Stack[-1] == 0)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9d0: Stack[-6] = (bool) 0
0x9d1: Return(); Pop(4)

0x9d2: Push((int) 2)
0x9d3: @ irand(Stack[-2], Stack[-1])
0x9d4: Pop(1)
0x9d5: Push(Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9d7: Push("voice_common")
0x9d8: Push((int) 1)
0x9d9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x9da: Push((int) 3)
0x9db: Pop(2); Push(Stack[-2] % Stack[-1]);
0x9dc: @ SetVariable(Stack[-2], Stack[-1])
0x9dd: Pop(2)
0x9de: GOTO 0x9e3

0x9df: Push("voice_common")
0x9e0: Push((int) 0)
0x9e1: @ SetVariable(Stack[-2], Stack[-1])
0x9e2: Pop(2)
0x9e3: GOTO 0x9f6

0x9e4: PushEmpty(bool, object)
0x9e5: Stack[-1] = Stack[-7]
0x9e6: Call2 0xa1d

0x9e7: Pop(1)
0x9e8: Pop(1); Push((bool) Stack[-1] == 0)
0x9e9: IF (Stack[-1] == 0) GOTO 0x9f2; Pop(1)

0x9ea: PushEmpty(bool, object)
0x9eb: Stack[-1] = Stack[-7]
0x9ec: Call2 0x9f8

0x9ed: Pop(1)
0x9ee: Pop(1); Push((bool) Stack[-1] == 0)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f2; Pop(1)

0x9f0: Stack[-6] = (bool) 0
0x9f1: Return(); Pop(4)

0x9f2: Push("voice_common")
0x9f3: Push((int) 1)
0x9f4: @ SetVariable(Stack[-2], Stack[-1])
0x9f5: Pop(2)
0x9f6: Stack[-6] = (bool) 1
0x9f7: Return(); Pop(4)

0x9f8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9f9: Stack[-5] = "c"
0x9fa: Stack[-4] = (int) 0
0x9fb: Push((int) 1)
0x9fc: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0x9fd: Push((int) 1)
0x9fe: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9ff: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa00: @@ HasProperty(Stack[-1], Stack[-4])
0xa01: Pop(1)
0xa02: Pop(0); Push((bool) Stack[-3] == 0)
0xa03: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa04: GOTO 0xa08

0xa05: Push((int) 1)
0xa06: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa07: GOTO 0x9fb

0xa08: Pop(0); Push((bool) Stack[-4] == 0)
0xa09: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0a: Stack[-12] = (bool) 0
0xa0b: Return(); Pop(10)

0xa0c: Stack[-2] = (int) 0
0xa0d: Push((int) 1)
0xa0e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa0f: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa10: @ irand(Stack[-2], Stack[-4])
0xa11: Pop(0)
0xa12: Push((int) 1)
0xa13: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa14: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa15: @@ GetProperty(Stack[-1], Stack[-2])
0xa16: Pop(1)
0xa17: PushEmpty(bool, string)
0xa18: Stack[-1] = Stack[-3]
0xa19: Call2 0xa67

0xa1a: Stack[-14] = Stack[-2]
0xa1b: Pop(2)
0xa1c: Return(); Pop(10)

0xa1d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa1e: Push("d")
0xa1f: PushEmpty(int)
0xa20: Call2 0xaee

0xa21: Pop(0)
0xa22: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa23: Push("m")
0xa24: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa25: Stack[-4] = (int) 0
0xa26: Push((int) 1)
0xa27: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa28: Push((int) 1)
0xa29: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa2a: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa2b: @@ HasProperty(Stack[-1], Stack[-4])
0xa2c: Pop(1)
0xa2d: Pop(0); Push((bool) Stack[-3] == 0)
0xa2e: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa2f: GOTO 0xa33

0xa30: Push((int) 1)
0xa31: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa32: GOTO 0xa26

0xa33: Pop(0); Push((bool) Stack[-4] == 0)
0xa34: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa35: Stack[-12] = (bool) 0
0xa36: Return(); Pop(10)

0xa37: Stack[-2] = (int) 0
0xa38: Push((int) 1)
0xa39: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa3b: @ irand(Stack[-2], Stack[-4])
0xa3c: Pop(0)
0xa3d: Push((int) 1)
0xa3e: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa3f: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa40: @@ GetProperty(Stack[-1], Stack[-2])
0xa41: Pop(1)
0xa42: PushEmpty(bool, string)
0xa43: Stack[-1] = Stack[-3]
0xa44: Call2 0xa67

0xa45: Stack[-14] = Stack[-2]
0xa46: Pop(2)
0xa47: Return(); Pop(10)

0xa48: PushEmpty(bool, float, float, bool, float, float)
0xa49: @ lshHasAnimation(Stack[-3], Stack[-7])
0xa4a: Pop(0)
0xa4b: Push(Stack[-3])
0xa4c: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa4d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa4e: Pop(0)
0xa4f: Push((bool) 0)
0xa50: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa51: Pop(1)
0xa52: GOTO 0xa57

0xa53: Push("Can't find lsh animation : ")
0xa54: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa55: @ Trace(Stack[-1])
0xa56: Pop(1)
0xa57: Return(); Pop(6)

0xa58: PushEmpty(bool, float, float, bool, float, float)
0xa59: @ lshHasAnimation(Stack[-3], Stack[-8])
0xa5a: Pop(0)
0xa5b: Push(Stack[-3])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xa5e: Pop(0)
0xa5f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xa60: Pop(0)
0xa61: GOTO 0xa66

0xa62: Push("Can't find lsh animation : ")
0xa63: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa64: @ Trace(Stack[-1])
0xa65: Pop(1)
0xa66: Return(); Pop(6)

0xa67: PushEmpty(bool, bool)
0xa68: PushEmpty(bool)
0xa69: Call2 0xb1d

0xa6a: Pop(0)
0xa6b: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa6c: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa6d: Pop(0)
0xa6e: Push(Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa70: @ lshPlaySpeech(Stack[-3])
0xa71: Pop(0)
0xa72: Stack[-4] = (bool) 1
0xa73: Return(); Pop(2)

0xa74: Stack[-4] = (bool) 0
0xa75: Return(); Pop(2)

0xa76: PushEmpty(bool)
0xa77: Call2 0xb1d

0xa78: Pop(0)
0xa79: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7a: @ lshStopSpeech()
0xa7b: Pop(0)
0xa7c: Return(); Pop(0)

0xa7d: PushEmpty(object, object)
0xa7e: @ self(Stack[-1])
0xa7f: Pop(0)
0xa80: Stack[-3] = Stack[-1]
0xa81: Return(); Pop(2)

0xa82: Stack[-1] = 0
0xa83: PushEmpty(float, float)
0xa84: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa85: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa86: Push((float)0.0)
0xa87: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa88: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa89: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa8a: Return(); Pop(2)

0xa8b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa8c: Return(); Pop(2)

0xa8d: PushEmpty()
0xa8e: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xa8f: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa90: Stack[-4] = Stack[-2]
0xa91: Return(); Pop(0)

0xa92: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa94: Stack[-4] = Stack[-1]
0xa95: Return(); Pop(0)

0xa96: Stack[-4] = Stack[-3]
0xa97: Return(); Pop(0)

0xa98: PushEmpty(int, int)
0xa99: @ GetVariable(Stack[-3], Stack[-1])
0xa9a: Pop(0)
0xa9b: Stack[-4] = Stack[-1]
0xa9c: Return(); Pop(2)

0xa9d: PushEmpty(int, bool, int, bool)
0xa9e: @ GetInvItemByName(Stack[-2], Stack[-5])
0xa9f: Pop(0)
0xaa0: @@ HasItem(Stack[-2], Stack[-1])
0xaa1: Pop(0)
0xaa2: Stack[-7] = Stack[-1]
0xaa3: Return(); Pop(4)

0xaa4: PushEmpty()
0xaa5: Pop(0); Push((bool) Stack[-2] == 0)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa7: Stack[-3] = (bool) 0
0xaa8: Return(); Pop(0)

0xaa9: Push((int) 0)
0xaaa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xaab: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaac: Push((int) 8)
0xaad: @ SendWorldWndMessage(Stack[-1])
0xaae: Pop(1)
0xaaf: GOTO 0xab9

0xab0: Push((int) 0)
0xab1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xab2: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab3: Push((int) 9)
0xab4: @ SendWorldWndMessage(Stack[-1])
0xab5: Pop(1)
0xab6: GOTO 0xab9

0xab7: Stack[-3] = (bool) 0
0xab8: Return(); Pop(0)

0xab9: PushEmpty(float)
0xaba: Stack[-1] = Stack[-2]
0xabb: Call2 0xac7

0xabc: Pop(1)
0xabd: PushEmpty(bool, object, string, float, float, float)
0xabe: Stack[-5] = Stack[-8]
0xabf: Stack[-4] = "reputation"
0xac0: Stack[-3] = Stack[-7]
0xac1: Stack[-2] = (int) 0
0xac2: Stack[-1] = (int) 1
0xac3: Call2 0x93b

0xac4: Pop(6)
0xac5: Stack[-3] = (bool) 1
0xac6: Return(); Pop(0)

0xac7: PushEmpty(object, object)
0xac8: @ CreateFloatVector(Stack[-1])
0xac9: Pop(0)
0xaca: @@ add(Stack[-3])
0xacb: Pop(0)
0xacc: Push((int) 16)
0xacd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xace: Pop(1)
0xacf: Return(); Pop(2)

0xad0: Stack[-1] = 0
0xad1: PushEmpty(object, object)
0xad2: @ FindActor(Stack[-1], Stack[-4])
0xad3: Pop(0)
0xad4: Pop(0); Push((bool) Stack[-1] == 0)
0xad5: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad6: Stack[-5] = (bool) 0
0xad7: Return(); Pop(2)

0xad8: @ Trigger(Stack[-1], Stack[-3])
0xad9: Pop(0)
0xada: Stack[-5] = (bool) 1
0xadb: Return(); Pop(2)

0xadc: Stack[-1] = 0
0xadd: PushEmpty(object, object)
0xade: @ FindActor(Stack[-1], Stack[-5])
0xadf: Pop(0)
0xae0: Pop(0); Push((bool) Stack[-1] == 0)
0xae1: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xae2: Stack[-6] = (bool) 0
0xae3: Return(); Pop(2)

0xae4: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0xae5: Pop(0)
0xae6: Stack[-6] = (bool) 1
0xae7: Return(); Pop(2)

0xae8: Stack[-1] = 0
0xae9: PushEmpty(float, float)
0xaea: @ GetGameTime(Stack[-1])
0xaeb: Pop(0)
0xaec: Stack[-3] = Stack[-1]
0xaed: Return(); Pop(2)

0xaee: PushEmpty(float, float)
0xaef: @ GetGameTime(Stack[-1])
0xaf0: Pop(0)
0xaf1: Push((int) 1)
0xaf2: PushEmpty(int)
0xaf3: Push((int) 24)
0xaf4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xaf5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xaf6: Return(); Pop(2)

0xaf7: PushEmpty()
0xaf8: PushEmpty(int)
0xaf9: Call2 0xaee

0xafa: Pop(0)
0xafb: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xafc: Return(); Pop(0)

0xafd: PushEmpty(string, string)
0xafe: Stack[-1] = "idle"
0xaff: Push(Stack[-3])
0xb00: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xb01: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb02: Stack[-4] = Stack[-1]
0xb03: Return(); Pop(2)

0xb04: PushEmpty(int, bool, int, bool)
0xb05: Stack[-2] = (int) 0
0xb06: Push("all")
0xb07: PushEmpty(string, int)
0xb08: Stack[-1] = Stack[-5]
0xb09: Call2 0xafd

0xb0a: Pop(1)
0xb0b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb0c: Pop(2)
0xb0d: Pop(0); Push((bool) Stack[-1] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0f: GOTO 0xb13

0xb10: Push((int) 1)
0xb11: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb12: GOTO 0xb06

0xb13: Stack[-5] = Stack[-2]
0xb14: Return(); Pop(4)

0xb15: Stack[-1] = (int) 515545
0xb16: Return(); Pop(0)

0xb17: Stack[-1] = (int) 502870
0xb18: Return(); Pop(0)

0xb19: Stack[-1] = "ui/NPC_Mat.png"
0xb1a: Return(); Pop(0)

0xb1b: Stack[-1] = "ui/NPC_Mat_b.png"
0xb1c: Return(); Pop(0)

0xb1d: Stack[-1] = (bool) 1
0xb1e: Return(); Pop(0)

0xb1f: PushEmpty(int, int)
0xb20: Push("d8q01MladVladIsVictim")
0xb21: @ GetVariable(Stack[-1], Stack[-2])
0xb22: Pop(1)
0xb23: Push((int) 0)
0xb24: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb25: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb26: PushEmpty(bool, string, string, string)
0xb27: Stack[-3] = "volonteers_danko"
0xb28: Stack[-2] = "kill"
0xb29: Stack[-1] = "mladvlad"
0xb2a: Call2 0xadd

0xb2b: Pop(4)
0xb2c: Push("d8q01BigVladIsVictim")
0xb2d: @ GetVariable(Stack[-1], Stack[-2])
0xb2e: Pop(1)
0xb2f: Push((int) 0)
0xb30: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb31: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb32: PushEmpty(bool, string, string, string)
0xb33: Stack[-3] = "volonteers_danko"
0xb34: Stack[-2] = "kill"
0xb35: Stack[-1] = "bigvlad"
0xb36: Call2 0xadd

0xb37: Pop(4)
0xb38: Return(); Pop(2)

0xb39: PushEmpty(int, int)
0xb3a: Push("toy_horse")
0xb3b: Push((int) 1)
0xb3c: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xb3d: Pop(2)
0xb3e: Return(); Pop(2)

0xb3f: PushEmpty()
0xb40: PushEmpty(object, string, float)
0xb41: PushEmpty(object)
0xb42: Call2 0xd08

0xb43: Stack[-4] = Stack[-1]
0xb44: Pop(1)
0xb45: Stack[-2] = "pt_map_boiny_main_entrance"
0xb46: Stack[-1] = (int) 2
0xb47: Call2 0xd19

0xb48: Pop(3)
0xb49: PushEmpty(object)
0xb4a: Call2 0xd08

0xb4b: Pop(0)
0xb4c: @@ ShowMap(Stack[-1])
0xb4d: Pop(1)
0xb4e: Return(); Pop(0)

0xb4f: PushEmpty()
0xb50: Push("playsound")
0xb51: Push("giveitem")
0xb52: @ TriggerWorld(Stack[-2], Stack[-1])
0xb53: Pop(2)
0xb54: Return(); Pop(0)

0xb55: PushEmpty()
0xb56: PushEmpty(bool, object, float)
0xb57: Stack[-2] = Stack[-5]
0xb58: Stack[-1] = (float) 0.1
0xb59: Call2 0xaa4

0xb5a: Pop(3)
0xb5b: Return(); Pop(0)

0xb5c: PushEmpty()
0xb5d: Push("ood8Mat1")
0xb5e: Push((int) 1)
0xb5f: @ SetVariable(Stack[-2], Stack[-1])
0xb60: Pop(2)
0xb61: Return(); Pop(0)

0xb62: PushEmpty()
0xb63: Push("d8q01BringBadBoy")
0xb64: Push((int) 1)
0xb65: @ SetVariable(Stack[-2], Stack[-1])
0xb66: Pop(2)
0xb67: PushEmpty()
0xb68: Call2 0xc9e

0xb69: Pop(0)
0xb6a: Return(); Pop(0)

0xb6b: PushEmpty(object, object)
0xb6c: Push("d8q01MatBringToy")
0xb6d: Push((int) 1)
0xb6e: @ SetVariable(Stack[-2], Stack[-1])
0xb6f: Pop(2)
0xb70: PushEmpty(object)
0xb71: Call2 0xd08

0xb72: Stack[-2] = Stack[-1]
0xb73: Pop(1)
0xb74: Push("d8q01MatGotoToyHouse")
0xb75: Push("pt_map_d8q01_toyhouse")
0xb76: Push((int) 1)
0xb77: Push((int) 515444)
0xb78: PushEmpty(float)
0xb79: Call2 0xae9

0xb7a: Pop(0)
0xb7b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb7c: Pop(5)
0xb7d: PushEmpty()
0xb7e: Call2 0xcab

0xb7f: Pop(0)
0xb80: PushEmpty(bool, string, string)
0xb81: Stack[-2] = "quest_d8_01"
0xb82: Stack[-1] = "place_toy"
0xb83: Call2 0xad1

0xb84: Pop(3)
0xb85: Return(); Pop(2)

0xb86: Stack[-1] = 0
0xb87: PushEmpty()
0xb88: Push("ood8Mat2")
0xb89: Push((int) 1)
0xb8a: @ SetVariable(Stack[-2], Stack[-1])
0xb8b: Pop(2)
0xb8c: Return(); Pop(0)

0xb8d: PushEmpty(object, object)
0xb8e: PushEmpty(object)
0xb8f: Call2 0xd08

0xb90: Stack[-2] = Stack[-1]
0xb91: Pop(1)
0xb92: Push("d8q01MatGotoBoiny")
0xb93: Push("pt_map_boiny_main_entrance")
0xb94: Push((int) 1)
0xb95: Push((int) 515324)
0xb96: PushEmpty(float)
0xb97: Call2 0xae9

0xb98: Pop(0)
0xb99: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb9a: Pop(5)
0xb9b: PushEmpty()
0xb9c: Call2 0xcb8

0xb9d: Pop(0)
0xb9e: PushEmpty(bool, string, string)
0xb9f: Stack[-2] = "quest_d8_01"
0xba0: Stack[-1] = "unlock_boiny"
0xba1: Call2 0xad1

0xba2: Pop(3)
0xba3: Return(); Pop(2)

0xba4: Stack[-1] = 0
0xba5: PushEmpty()
0xba6: Push("ood8Mat4")
0xba7: Push((int) 1)
0xba8: @ SetVariable(Stack[-2], Stack[-1])
0xba9: Pop(2)
0xbaa: Return(); Pop(0)

0xbab: PushEmpty()
0xbac: Push("ood8Mat5")
0xbad: Push((int) 1)
0xbae: @ SetVariable(Stack[-2], Stack[-1])
0xbaf: Pop(2)
0xbb0: Return(); Pop(0)

0xbb1: PushEmpty()
0xbb2: Push("ood8Mat6")
0xbb3: Push((int) 1)
0xbb4: @ SetVariable(Stack[-2], Stack[-1])
0xbb5: Pop(2)
0xbb6: Return(); Pop(0)

0xbb7: PushEmpty()
0xbb8: Push("ood8Mat7")
0xbb9: Push((int) 1)
0xbba: @ SetVariable(Stack[-2], Stack[-1])
0xbbb: Pop(2)
0xbbc: Return(); Pop(0)

0xbbd: PushEmpty()
0xbbe: Push("d8TalkToMat")
0xbbf: Push((int) 1)
0xbc0: @ SetVariable(Stack[-2], Stack[-1])
0xbc1: Pop(2)
0xbc2: Return(); Pop(0)

0xbc3: PushEmpty()
0xbc4: PushEmpty()
0xbc5: Call2 0xcc5

0xbc6: Pop(0)
0xbc7: PushEmpty(bool, string, string)
0xbc8: Stack[-2] = "quest_d8_02"
0xbc9: Stack[-1] = "completed"
0xbca: Call2 0xad1

0xbcb: Pop(3)
0xbcc: Return(); Pop(0)

0xbcd: PushEmpty()
0xbce: Push("d8q02")
0xbcf: Push((int) -1)
0xbd0: @ SetVariable(Stack[-2], Stack[-1])
0xbd1: Pop(2)
0xbd2: PushEmpty()
0xbd3: Call2 0xcd2

0xbd4: Pop(0)
0xbd5: Return(); Pop(0)

0xbd6: PushEmpty(int, int)
0xbd7: Push("feromicin")
0xbd8: Push((int) 1)
0xbd9: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xbda: Pop(2)
0xbdb: Return(); Pop(2)

0xbdc: PushEmpty()
0xbdd: PushEmpty(object, string, float)
0xbde: PushEmpty(object)
0xbdf: Call2 0xd08

0xbe0: Stack[-4] = Stack[-1]
0xbe1: Pop(1)
0xbe2: Stack[-2] = "pt_map_d8q01_toyhouse"
0xbe3: Stack[-1] = (int) 2
0xbe4: Call2 0xd19

0xbe5: Pop(3)
0xbe6: PushEmpty(object)
0xbe7: Call2 0xd08

0xbe8: Pop(0)
0xbe9: @@ ShowMap(Stack[-1])
0xbea: Pop(1)
0xbeb: Return(); Pop(0)

0xbec: PushEmpty()
0xbed: PushEmpty(int, string)
0xbee: Stack[-1] = "d8q02"
0xbef: Call2 0xa98

0xbf0: Pop(1)
0xbf1: Push((int) 2)
0xbf2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf3: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbf4: Stack[-2] = (bool) 1
0xbf5: Return(); Pop(0)

0xbf6: Stack[-2] = (bool) 0
0xbf7: Return(); Pop(0)

0xbf8: PushEmpty()
0xbf9: PushEmpty(int, string)
0xbfa: Stack[-1] = "d8q04"
0xbfb: Call2 0xa98

0xbfc: Pop(1)
0xbfd: Push((int) 1)
0xbfe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbff: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xc00: Stack[-2] = (bool) 1
0xc01: Return(); Pop(0)

0xc02: Stack[-2] = (bool) 0
0xc03: Return(); Pop(0)

0xc04: PushEmpty()
0xc05: PushEmpty(int, string)
0xc06: Stack[-1] = "d8q01"
0xc07: Call2 0xa98

0xc08: Pop(1)
0xc09: Push((int) 1)
0xc0a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc0e; Pop(1)

0xc0c: Stack[-2] = (bool) 1
0xc0d: Return(); Pop(0)

0xc0e: Stack[-2] = (bool) 0
0xc0f: Return(); Pop(0)

0xc10: PushEmpty()
0xc11: PushEmpty(int, string)
0xc12: Stack[-1] = "ood8Mat1"
0xc13: Call2 0xa98

0xc14: Pop(1)
0xc15: Push((int) 0)
0xc16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc18: Stack[-2] = (bool) 1
0xc19: Return(); Pop(0)

0xc1a: Stack[-2] = (bool) 0
0xc1b: Return(); Pop(0)

0xc1c: PushEmpty()
0xc1d: PushEmpty(int, string)
0xc1e: Stack[-1] = "d8q01MatBringToy"
0xc1f: Call2 0xa98

0xc20: Pop(1)
0xc21: Push((int) 1)
0xc22: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc24: Stack[-2] = (bool) 1
0xc25: Return(); Pop(0)

0xc26: Stack[-2] = (bool) 0
0xc27: Return(); Pop(0)

0xc28: PushEmpty()
0xc29: PushEmpty(bool, object, string)
0xc2a: Stack[-2] = Stack[-4]
0xc2b: Stack[-1] = "toy_horse"
0xc2c: Call2 0xa9d

0xc2d: Pop(2)
0xc2e: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc2f: Stack[-2] = (bool) 1
0xc30: Return(); Pop(0)

0xc31: Stack[-2] = (bool) 0
0xc32: Return(); Pop(0)

0xc33: PushEmpty()
0xc34: PushEmpty(int, string)
0xc35: Stack[-1] = "ood8Mat2"
0xc36: Call2 0xa98

0xc37: Pop(1)
0xc38: Push((int) 0)
0xc39: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc3a: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc3b: Stack[-2] = (bool) 1
0xc3c: Return(); Pop(0)

0xc3d: Stack[-2] = (bool) 0
0xc3e: Return(); Pop(0)

0xc3f: PushEmpty()
0xc40: PushEmpty(int, string)
0xc41: Stack[-1] = "ood8Mat4"
0xc42: Call2 0xa98

0xc43: Pop(1)
0xc44: Push((int) 0)
0xc45: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc46: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc47: Stack[-2] = (bool) 1
0xc48: Return(); Pop(0)

0xc49: Stack[-2] = (bool) 0
0xc4a: Return(); Pop(0)

0xc4b: PushEmpty()
0xc4c: PushEmpty(int, string)
0xc4d: Stack[-1] = "ood8Mat5"
0xc4e: Call2 0xa98

0xc4f: Pop(1)
0xc50: Push((int) 0)
0xc51: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc52: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc53: Stack[-2] = (bool) 1
0xc54: Return(); Pop(0)

0xc55: Stack[-2] = (bool) 0
0xc56: Return(); Pop(0)

0xc57: PushEmpty()
0xc58: PushEmpty(int, string)
0xc59: Stack[-1] = "d8q01BigVladIsVictim"
0xc5a: Call2 0xa98

0xc5b: Pop(1)
0xc5c: Push((int) 1)
0xc5d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc5e: IF (Stack[-1] == 0) GOTO 0xc61; Pop(1)

0xc5f: Stack[-2] = (bool) 1
0xc60: Return(); Pop(0)

0xc61: Stack[-2] = (bool) 0
0xc62: Return(); Pop(0)

0xc63: PushEmpty()
0xc64: PushEmpty(int, string)
0xc65: Stack[-1] = "d8q01MladVladIsVictim"
0xc66: Call2 0xa98

0xc67: Pop(1)
0xc68: Push((int) 1)
0xc69: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6a: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc6b: Stack[-2] = (bool) 1
0xc6c: Return(); Pop(0)

0xc6d: Stack[-2] = (bool) 0
0xc6e: Return(); Pop(0)

0xc6f: PushEmpty()
0xc70: PushEmpty(int, string)
0xc71: Stack[-1] = "ood8Mat6"
0xc72: Call2 0xa98

0xc73: Pop(1)
0xc74: Push((int) 0)
0xc75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc77: Stack[-2] = (bool) 1
0xc78: Return(); Pop(0)

0xc79: Stack[-2] = (bool) 0
0xc7a: Return(); Pop(0)

0xc7b: PushEmpty()
0xc7c: PushEmpty(int, string)
0xc7d: Stack[-1] = "ood8Mat7"
0xc7e: Call2 0xa98

0xc7f: Pop(1)
0xc80: Push((int) 0)
0xc81: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc82: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc83: Stack[-2] = (bool) 1
0xc84: Return(); Pop(0)

0xc85: Stack[-2] = (bool) 0
0xc86: Return(); Pop(0)

0xc87: PushEmpty()
0xc88: PushEmpty(int, string)
0xc89: Stack[-1] = "d8q02"
0xc8a: Call2 0xa98

0xc8b: Pop(1)
0xc8c: Push((int) 1)
0xc8d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc8e: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc8f: Stack[-2] = (bool) 1
0xc90: Return(); Pop(0)

0xc91: Stack[-2] = (bool) 0
0xc92: Return(); Pop(0)

0xc93: PushEmpty()
0xc94: PushEmpty(bool, object, string)
0xc95: Stack[-2] = Stack[-4]
0xc96: Stack[-1] = "feromicin"
0xc97: Call2 0xa9d

0xc98: Pop(2)
0xc99: IF (Stack[-1] == 0) GOTO 0xc9c; Pop(1)

0xc9a: Stack[-2] = (bool) 1
0xc9b: Return(); Pop(0)

0xc9c: Stack[-2] = (bool) 0
0xc9d: Return(); Pop(0)

0xc9e: PushEmpty(object, object)
0xc9f: Push((int) 179)
0xca0: Push((int) 1)
0xca1: Push((int) 515441)
0xca2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca3: Pop(3)
0xca4: PushEmpty(bool, object, int)
0xca5: Stack[-2] = Stack[-4]
0xca6: Stack[-1] = (int) 175
0xca7: Call2 0xcec

0xca8: Pop(3)
0xca9: Return(); Pop(2)

0xcaa: Stack[-1] = 0
0xcab: PushEmpty(object, object)
0xcac: Push((int) 180)
0xcad: Push((int) 1)
0xcae: Push((int) 515442)
0xcaf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb0: Pop(3)
0xcb1: PushEmpty(bool, object, int)
0xcb2: Stack[-2] = Stack[-4]
0xcb3: Stack[-1] = (int) 175
0xcb4: Call2 0xcec

0xcb5: Pop(3)
0xcb6: Return(); Pop(2)

0xcb7: Stack[-1] = 0
0xcb8: PushEmpty(object, object)
0xcb9: Push((int) 181)
0xcba: Push((int) 1)
0xcbb: Push((int) 515443)
0xcbc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcbd: Pop(3)
0xcbe: PushEmpty(bool, object, int)
0xcbf: Stack[-2] = Stack[-4]
0xcc0: Stack[-1] = (int) 175
0xcc1: Call2 0xcec

0xcc2: Pop(3)
0xcc3: Return(); Pop(2)

0xcc4: Stack[-1] = 0
0xcc5: PushEmpty(object, object)
0xcc6: Push((int) 128)
0xcc7: Push((int) 2)
0xcc8: Push((int) 513773)
0xcc9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcca: Pop(3)
0xccb: PushEmpty(bool, object, int)
0xccc: Stack[-2] = Stack[-4]
0xccd: Stack[-1] = (int) 127
0xcce: Call2 0xcec

0xccf: Pop(3)
0xcd0: Return(); Pop(2)

0xcd1: Stack[-1] = 0
0xcd2: PushEmpty(object, object)
0xcd3: Push((int) 129)
0xcd4: Push((int) 2)
0xcd5: Push((int) 513774)
0xcd6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcd7: Pop(3)
0xcd8: PushEmpty(bool, object, int)
0xcd9: Stack[-2] = Stack[-4]
0xcda: Stack[-1] = (int) 127
0xcdb: Call2 0xcec

0xcdc: Pop(3)
0xcdd: Return(); Pop(2)

0xcde: Stack[-1] = 0
0xcdf: PushEmpty(object, object)
0xce0: @ GetDiaryRoot(Stack[-1])
0xce1: Pop(0)
0xce2: Pop(0); Push((bool) Stack[-1] == 0)
0xce3: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xce4: Push("Can't retrieve diary root")
0xce5: @ Trace(Stack[-1])
0xce6: Pop(1)
0xce7: Stack[-3] = (bool) 0
0xce8: Return(); Pop(2)

0xce9: Stack[-3] = Stack[-1]
0xcea: Return(); Pop(2)

0xceb: Stack[-1] = 0
0xcec: PushEmpty(object, object, int, object, object, int)
0xced: PushEmpty(object)
0xcee: Call2 0xcdf

0xcef: Stack[-4] = Stack[-1]
0xcf0: Pop(1)
0xcf1: @@ Find(Stack[-7], Stack[-2])
0xcf2: Pop(0)
0xcf3: Pop(0); Push((bool) Stack[-2] == 0)
0xcf4: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf5: Push("Can't find diary parent with id: ")
0xcf6: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcf7: @ Trace(Stack[-1])
0xcf8: Pop(1)
0xcf9: Stack[-9] = (bool) 0
0xcfa: Return(); Pop(6)

0xcfb: @@ AddChild(Stack[-8])
0xcfc: Pop(0)
0xcfd: Push((int) 7)
0xcfe: @ SendWorldWndMessage(Stack[-1])
0xcff: Pop(1)
0xd00: @@ GetCategory(Stack[-1])
0xd01: Pop(0)
0xd02: @ SetDiarySection(Stack[-1])
0xd03: Pop(0)
0xd04: Stack[-9] = (bool) 0
0xd05: Return(); Pop(6)

0xd06: Stack[-2] = 0
0xd07: Stack[-3] = 0
0xd08: PushEmpty(object, object, object, object)
0xd09: @ GetMainOutdoorScene(Stack[-2])
0xd0a: Pop(0)
0xd0b: Pop(0); Push((bool) Stack[-2] == 0)
0xd0c: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xd0d: Push("Can't find main outdoor scene")
0xd0e: @ Trace(Stack[-1])
0xd0f: Pop(1)
0xd10: Stack[-1] = 0
0xd11: Stack[-5] = Stack[-1]
0xd12: Return(); Pop(4)

0xd13: @@ GetMap(Stack[-1])
0xd14: Pop(0)
0xd15: Stack[-5] = Stack[-1]
0xd16: Return(); Pop(4)

0xd17: Stack[-1] = 0
0xd18: Stack[-2] = 0
0xd19: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd1a: @ GetMainOutdoorScene(Stack[-2])
0xd1b: Pop(0)
0xd1c: Pop(0); Push((bool) Stack[-2] == 0)
0xd1d: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd1e: Push("Can't find main outdoor scene")
0xd1f: @ Trace(Stack[-1])
0xd20: Pop(1)
0xd21: Return(); Pop(8)

0xd22: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd23: Pop(0)
0xd24: Pop(0); Push((bool) Stack[-1] == 0)
0xd25: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd26: Push("Warning: outdoor scene locator ")
0xd27: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd28: Push(" doesnt exist")
0xd29: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd2a: @ Trace(Stack[-1])
0xd2b: Pop(1)
0xd2c: @@ GetMap(Stack[-11])
0xd2d: Pop(0)
0xd2e: Pop(0); Push((bool) Stack[-11] == 0)
0xd2f: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd30: Push("Can't find map")
0xd31: @ Trace(Stack[-1])
0xd32: Pop(1)
0xd33: Return(); Pop(8)

0xd34: Push(CvectorIndex(Stack[-4], 0))
0xd35: Push(CvectorIndex(Stack[-5], 2))
0xd36: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xd37: Pop(2)
0xd38: Return(); Pop(8)

0xd39: Stack[-2] = 0
0xd3a: PushEmpty(int, int)
0xd3b: Push("branch")
0xd3c: @ GetVariable(Stack[-1], Stack[-2])
0xd3d: Pop(1)
0xd3e: Push((int) 0)
0xd3f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd40: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd41: Stack[-3] = (int) 1
0xd42: Return(); Pop(2)

0xd43: GOTO 0xd49

0xd44: Push((int) 1)
0xd45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd46: IF (Stack[-1] == 0) GOTO 0xd49; Pop(1)

0xd47: Stack[-3] = (int) 2
0xd48: Return(); Pop(2)

0xd49: Stack[-3] = (int) 3
0xd4a: Return(); Pop(2)

0xd4b: PushEmpty()
0xd4c: PushEmpty(bool, int)
0xd4d: Stack[-1] = (int) 8
0xd4e: Call2 0xaf7

0xd4f: Pop(1)
0xd50: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd51: PushEmpty(int, object)
0xd52: Stack[-1] = Stack[-3]
0xd53: Push(-2, 1); TaskCall(2)
0xd54: Call2 0x103

0xd55: Pop(-2, 1); TaskReturn
0xd56: Pop(2)
0xd57: Return(); Pop(0)

0xd58: PushEmpty(bool, int)
0xd59: Stack[-1] = (int) 12
0xd5a: Call2 0xaf7

0xd5b: Pop(1)
0xd5c: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd5d: PushEmpty(int, object)
0xd5e: Stack[-1] = Stack[-3]
0xd5f: Push(-2, 1); TaskCall(0)
0xd60: Call2 0x0

0xd61: Pop(-2, 1); TaskReturn
0xd62: Pop(2)
0xd63: Return(); Pop(0)

0xd64: PushEmpty(int, object)
0xd65: Stack[-1] = Stack[-3]
0xd66: Push(-2, 1); TaskCall(4)
0xd67: Call2 0x75c

0xd68: Pop(-2, 1); TaskReturn
0xd69: Pop(2)
0xd6a: Return(); Pop(0)

