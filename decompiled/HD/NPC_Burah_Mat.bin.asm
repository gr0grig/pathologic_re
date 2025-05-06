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
	Rage
	Discontent
	Untrust
	Patronage
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	.bin
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png
	b7q01
	b7q01MatGotoPrison
	pt_map_uprava_prison
	AddMark
	quest_b7_01
	init_prison
	ShowMap
	b7q02
	quest_b7_02
	init_termitnik2
	completed
	b8q01
	quest_b8_01
	place_klara
	remove_klara
	unlock_boiny
	b8q03
	b8q03MladVladIsVictim
	oob10Mat1
	oob10Mat2
	b10q04
	b10q04MatGotoMorlok
	pt_b10q04_morlok
	quest_b10_04
	place_morloks
	b10MatVisit
	fail
	oob12Mat1
	b10q01
	b10q04PlennikTalk
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
	mt_mat

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xae3
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1f8 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3da Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x70d Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x980 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab9 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb2c Vars = (int)
		EVENT_6 Op = 0xb52 Vars = ()
		EVENT_5 Op = 0xb61 Vars = ()
		EVENT_45 Op = 0xb6e Vars = (bool)
		EVENT_0 Op = 0xb7a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc03

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xd7b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xd79

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xd7d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xd7f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1020

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
0x31: Call2 0xd19

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc5a

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
0x48: Call2 0xc48

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 518060)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518061)
0x61: Push((int) 29781)
0x62: Push((int) 19194)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 528400)
0x66: Push((int) 29777)
0x67: Push((int) 29776)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xd81

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xce4

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0xd81

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0xcf4

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xd12

0xa6: Pop(0)
0xa7: Push((int) 19193)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518060)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518061)
0xb4: Push((int) 29781)
0xb5: Push((int) 19194)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 528400)
0xb9: Push((int) 29777)
0xba: Push((int) 29776)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 29777)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 528401)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 528402)
0xcb: Push((int) 29779)
0xcc: Push((int) 29778)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 29779)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x8b

0xd6: Pop(1)
0xd7: Push((int) 528403)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 528404)
0xdd: Push((int) 29781)
0xde: Push((int) 29780)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 29781)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x8b

0xe8: Pop(1)
0xe9: Push((int) 528405)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 528406)
0xef: Push((int) 29784)
0xf0: Push((int) 29782)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 528407)
0xf4: Push((int) 29786)
0xf5: Push((int) 29783)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 29786)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x8b

0xff: Pop(1)
0x100: Push((int) 528409)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 528410)
0x106: Push((int) 29784)
0x107: Push((int) 29787)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Push((int) 528411)
0x10b: Push((int) 29784)
0x10c: Push((int) 29788)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 29784)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call2 0x8b

0x116: Pop(1)
0x117: Push((int) 528408)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 528412)
0x11d: Push((int) -1)
0x11e: Push((int) 29791)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Push((int) 528413)
0x122: Push((int) -1)
0x123: Push((int) 29792)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x128: PushEmpty(bool)
0x129: Call2 0xd81

0x12a: Pop(0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12c: @ lshStopAnimation()
0x12d: Pop(0)
0x12e: GOTO 0x131

0x12f: @ StopAnimation()
0x130: Pop(0)
0x131: Return(); Pop(0)

0x132: GOTO 0xa2

0x133: Return(); Pop(0)

0x134: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x135: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x136: PushEmpty(bool, object, float)
0x137: Stack[-2] = Stack[-12]
0x138: Stack[-1] = (float) 70.0
0x139: Call2 0xc03

0x13a: Pop(2)
0x13b: Pop(1); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13d: Stack[-10] = (int) -2
0x13e: Return(); Pop(8)

0x13f: @ CreateDialog(Stack[-4])
0x140: Pop(0)
0x141: PushEmpty(int)
0x142: Call2 0xd7b

0x143: Pop(0)
0x144: @@ SetNPCName(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(int)
0x147: Call2 0xd79

0x148: Pop(0)
0x149: @@ SetNPCDescription(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(string)
0x14c: Call2 0xd7d

0x14d: Pop(0)
0x14e: @@ SetPhoto(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(string)
0x151: Call2 0xd7f

0x152: Pop(0)
0x153: @@ SetPhoto2(Stack[-1])
0x154: Pop(1)
0x155: PushEmpty(int)
0x156: Call2 0x1020

0x157: Pop(0)
0x158: @@ SetPlayerName(Stack[-1])
0x159: Pop(1)
0x15a: Stack[-2] = (int) -1
0x15b: @ IsOverrideActive(Stack[-3])
0x15c: Pop(0)
0x15d: Push(Stack[-3])
0x15e: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15f: Stack[-10] = (int) -2
0x160: Return(); Pop(8)

0x161: @ DoDialog(Stack[-4])
0x162: Pop(0)
0x163: PushEmpty(bool, object)
0x164: PushEmpty(object)
0x165: Call2 0xd19

0x166: Stack[-2] = Stack[-1]
0x167: Pop(1)
0x168: Call2 0xc5a

0x169: Pop(2)
0x16a: PushEmpty(object, object)
0x16b: Stack[-2] = Stack[-11]
0x16c: Stack[-1] = Stack[-6]
0x16d: Push(-2, 4); TaskCall(3)
0x16e: Call2 0x185

0x16f: Pop(-2, 4); TaskReturn
0x170: Pop(2)
0x171: @@ IsDialogEnd(Stack[-1])
0x172: Pop(0)
0x173: Pop(0); Push((bool) Stack[-1] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: @ sync()
0x176: Pop(0)
0x177: @@ IsDialogEnd(Stack[-1])
0x178: Pop(0)
0x179: GOTO 0x173

0x17a: PushEmpty(object)
0x17b: Stack[-1] = Stack[-10]
0x17c: Call2 0xc48

0x17d: Pop(1)
0x17e: @ StopDialog(Stack[-4])
0x17f: Pop(0)
0x180: @@ GetReturnValue(Stack[-2])
0x181: Pop(0)
0x182: Stack[-10] = Stack[-2]
0x183: Return(); Pop(8)

0x184: Stack[-4] = 0
0x185: PushEmpty()
0x186: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x187: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x188: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x189: Push((int) 1)
0x18a: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0xf0a

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Rage"
0x192: Call2 0x1e2

0x193: Pop(1)
0x194: Push((int) 520984)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 528518)
0x19a: Push((int) 29911)
0x19b: Push((int) 29910)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: GOTO 0x1c4

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0x1e2

0x1a2: Pop(1)
0x1a3: Push((int) 520986)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: PushEmpty(bool, object)
0x1a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Call2 0xe5a

0x1ab: Pop(1)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: Push((int) 521209)
0x1ae: Push((int) 29920)
0x1af: Push((int) 22405)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0xe66

0x1b5: Pop(1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: Push((int) 521216)
0x1b8: Push((int) 22411)
0x1b9: Push((int) 22410)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Push((int) 520987)
0x1bd: Push((int) -1)
0x1be: Push((int) 22200)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: GOTO 0x1c4

0x1c2: Return(); Pop(0)

0x1c3: GOTO 0x189

0x1c4: PushEmpty(bool)
0x1c5: Call2 0xd81

0x1c6: Pop(0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c8: @ lshWaitForAnimEnd()
0x1c9: Pop(0)
0x1ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: GOTO 0x1d2

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1cf: Call2 0xce4

0x1d0: Pop(1)
0x1d1: GOTO 0x1c8

0x1d2: GOTO 0x1e1

0x1d3: Push("all")
0x1d4: Push("idle")
0x1d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: @ WaitForAnimEnd()
0x1d8: Pop(0)
0x1d9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: GOTO 0x1e1

0x1dc: Push("all")
0x1dd: Push("idle")
0x1de: @ PlayAnimation(Stack[-2], Stack[-1])
0x1df: Pop(2)
0x1e0: GOTO 0x1d7

0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: PushEmpty(bool)
0x1e4: Call2 0xd81

0x1e5: Pop(0)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(0)

0x1e9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Return(); Pop(0)

0x1ec: PushEmpty(string, bool)
0x1ed: Stack[-2] = Stack[-3]
0x1ee: Push("")
0x1ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f1: Stack[-1] = (bool) 0
0x1f2: GOTO 0x1f4

0x1f3: Stack[-1] = (bool) 1
0x1f4: Call2 0xcf4

0x1f5: Pop(2)
0x1f6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty()
0x1f9: Push((int) 1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x1fb: PushEmpty()
0x1fc: Call2 0xd12

0x1fd: Pop(0)
0x1fe: Push((int) 22198)
0x1ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x201: PushEmpty(object, object)
0x202: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x203: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x204: Call2 0xd83

0x205: Pop(2)
0x206: PushEmpty(object, object)
0x207: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x208: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x209: Call2 0xd9f

0x20a: Pop(2)
0x20b: Push((int) 22409)
0x20c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: PushEmpty(object, object)
0x20f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x210: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x211: Call2 0xdaf

0x212: Pop(2)
0x213: Push((int) 22412)
0x214: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x216: PushEmpty(object, object)
0x217: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x218: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x219: Call2 0xdc4

0x21a: Pop(2)
0x21b: Push((int) 22197)
0x21c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x21e: PushEmpty(bool, object)
0x21f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x220: Call2 0xf0a

0x221: Pop(1)
0x222: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Rage"
0x225: Call2 0x1e2

0x226: Pop(1)
0x227: Push((int) 520984)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: Push((int) 528518)
0x22d: Push((int) 29911)
0x22e: Push((int) 29910)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Return(); Pop(0)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0x1e2

0x235: Pop(1)
0x236: Push((int) 520986)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: PushEmpty(bool, object)
0x23c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Call2 0xe5a

0x23e: Pop(1)
0x23f: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x240: Push((int) 521209)
0x241: Push((int) 29920)
0x242: Push((int) 22405)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x247: Call2 0xe66

0x248: Pop(1)
0x249: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24a: Push((int) 521216)
0x24b: Push((int) 22411)
0x24c: Push((int) 22410)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Push((int) 520987)
0x250: Push((int) -1)
0x251: Push((int) 22200)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 22411)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Rage"
0x25a: Call2 0x1e2

0x25b: Pop(1)
0x25c: Push((int) 521217)
0x25d: @@ SetMessage(Stack[-1])
0x25e: Pop(1)
0x25f: @@ ClearReplies()
0x260: Pop(0)
0x261: Push((int) 521218)
0x262: Push((int) -1)
0x263: Push((int) 22412)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 29920)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Rage"
0x26c: Call2 0x1e2

0x26d: Pop(1)
0x26e: Push((int) 528528)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 528529)
0x274: Push((int) 29922)
0x275: Push((int) 29921)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 29922)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Discontent"
0x27e: Call2 0x1e2

0x27f: Pop(1)
0x280: Push((int) 528530)
0x281: @@ SetMessage(Stack[-1])
0x282: Pop(1)
0x283: @@ ClearReplies()
0x284: Pop(0)
0x285: Push((int) 528548)
0x286: Push((int) 29942)
0x287: Push((int) 29940)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Push((int) 528531)
0x28b: Push((int) 29924)
0x28c: Push((int) 29923)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 29924)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Discontent"
0x295: Call2 0x1e2

0x296: Pop(1)
0x297: Push((int) 528532)
0x298: @@ SetMessage(Stack[-1])
0x299: Pop(1)
0x29a: @@ ClearReplies()
0x29b: Pop(0)
0x29c: Push((int) 528533)
0x29d: Push((int) 22406)
0x29e: Push((int) 29925)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Push((int) 22406)
0x2a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Discontent"
0x2a7: Call2 0x1e2

0x2a8: Pop(1)
0x2a9: Push((int) 521210)
0x2aa: @@ SetMessage(Stack[-1])
0x2ab: Pop(1)
0x2ac: @@ ClearReplies()
0x2ad: Pop(0)
0x2ae: Push((int) 528549)
0x2af: Push((int) 29942)
0x2b0: Push((int) 29941)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 29942)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Discontent"
0x2b9: Call2 0x1e2

0x2ba: Pop(1)
0x2bb: Push((int) 528550)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: Push((int) 521211)
0x2c1: Push((int) 22408)
0x2c2: Push((int) 22407)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Push((int) 528524)
0x2c6: Push((int) 22408)
0x2c7: Push((int) 29916)
0x2c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 22408)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Discontent"
0x2d0: Call2 0x1e2

0x2d1: Pop(1)
0x2d2: Push((int) 521212)
0x2d3: @@ SetMessage(Stack[-1])
0x2d4: Pop(1)
0x2d5: @@ ClearReplies()
0x2d6: Pop(0)
0x2d7: Push((int) 521213)
0x2d8: Push((int) -1)
0x2d9: Push((int) 22409)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 29911)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Rage"
0x2e2: Call2 0x1e2

0x2e3: Pop(1)
0x2e4: Push((int) 528519)
0x2e5: @@ SetMessage(Stack[-1])
0x2e6: Pop(1)
0x2e7: @@ ClearReplies()
0x2e8: Pop(0)
0x2e9: Push((int) 528520)
0x2ea: Push((int) 29913)
0x2eb: Push((int) 29912)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Push((int) 29913)
0x2f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f2: PushEmpty(string)
0x2f3: Stack[-1] = "Rage"
0x2f4: Call2 0x1e2

0x2f5: Pop(1)
0x2f6: Push((int) 528521)
0x2f7: @@ SetMessage(Stack[-1])
0x2f8: Pop(1)
0x2f9: @@ ClearReplies()
0x2fa: Pop(0)
0x2fb: Push((int) 528522)
0x2fc: Push((int) 29915)
0x2fd: Push((int) 29914)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: Push((int) 29915)
0x302: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x304: PushEmpty(string)
0x305: Stack[-1] = "Rage"
0x306: Call2 0x1e2

0x307: Pop(1)
0x308: Push((int) 528523)
0x309: @@ SetMessage(Stack[-1])
0x30a: Pop(1)
0x30b: @@ ClearReplies()
0x30c: Pop(0)
0x30d: Push((int) 520985)
0x30e: Push((int) -1)
0x30f: Push((int) 22198)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Return(); Pop(0)

0x313: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x314: PushEmpty(bool)
0x315: Call2 0xd81

0x316: Pop(0)
0x317: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x318: @ lshStopAnimation()
0x319: Pop(0)
0x31a: GOTO 0x31d

0x31b: @ StopAnimation()
0x31c: Pop(0)
0x31d: Return(); Pop(0)

0x31e: GOTO 0x1f9

0x31f: Return(); Pop(0)

0x320: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x321: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x322: PushEmpty(bool, object, float)
0x323: Stack[-2] = Stack[-12]
0x324: Stack[-1] = (float) 70.0
0x325: Call2 0xc03

0x326: Pop(2)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-10] = (int) -2
0x32a: Return(); Pop(8)

0x32b: @ CreateDialog(Stack[-4])
0x32c: Pop(0)
0x32d: PushEmpty(int)
0x32e: Call2 0xd7b

0x32f: Pop(0)
0x330: @@ SetNPCName(Stack[-1])
0x331: Pop(1)
0x332: PushEmpty(int)
0x333: Call2 0xd79

0x334: Pop(0)
0x335: @@ SetNPCDescription(Stack[-1])
0x336: Pop(1)
0x337: PushEmpty(string)
0x338: Call2 0xd7d

0x339: Pop(0)
0x33a: @@ SetPhoto(Stack[-1])
0x33b: Pop(1)
0x33c: PushEmpty(string)
0x33d: Call2 0xd7f

0x33e: Pop(0)
0x33f: @@ SetPhoto2(Stack[-1])
0x340: Pop(1)
0x341: PushEmpty(int)
0x342: Call2 0x1020

0x343: Pop(0)
0x344: @@ SetPlayerName(Stack[-1])
0x345: Pop(1)
0x346: Stack[-2] = (int) -1
0x347: @ IsOverrideActive(Stack[-3])
0x348: Pop(0)
0x349: Push(Stack[-3])
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-10] = (int) -2
0x34c: Return(); Pop(8)

0x34d: @ DoDialog(Stack[-4])
0x34e: Pop(0)
0x34f: PushEmpty(bool, object)
0x350: PushEmpty(object)
0x351: Call2 0xd19

0x352: Stack[-2] = Stack[-1]
0x353: Pop(1)
0x354: Call2 0xc5a

0x355: Pop(2)
0x356: PushEmpty(object, object)
0x357: Stack[-2] = Stack[-11]
0x358: Stack[-1] = Stack[-6]
0x359: Push(-2, 4); TaskCall(5)
0x35a: Call2 0x371

0x35b: Pop(-2, 4); TaskReturn
0x35c: Pop(2)
0x35d: @@ IsDialogEnd(Stack[-1])
0x35e: Pop(0)
0x35f: Pop(0); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x361: @ sync()
0x362: Pop(0)
0x363: @@ IsDialogEnd(Stack[-1])
0x364: Pop(0)
0x365: GOTO 0x35f

0x366: PushEmpty(object)
0x367: Stack[-1] = Stack[-10]
0x368: Call2 0xc48

0x369: Pop(1)
0x36a: @ StopDialog(Stack[-4])
0x36b: Pop(0)
0x36c: @@ GetReturnValue(Stack[-2])
0x36d: Pop(0)
0x36e: Stack[-10] = Stack[-2]
0x36f: Return(); Pop(8)

0x370: Stack[-4] = 0
0x371: PushEmpty()
0x372: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x373: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x374: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x375: Push((int) 1)
0x376: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x377: PushEmpty(string)
0x378: Stack[-1] = "Neutral"
0x379: Call2 0x3c4

0x37a: Pop(1)
0x37b: Push((int) 521382)
0x37c: @@ SetMessage(Stack[-1])
0x37d: Pop(1)
0x37e: @@ ClearReplies()
0x37f: Pop(0)
0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x382: Call2 0xe72

0x383: Pop(1)
0x384: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x385: Push((int) 521383)
0x386: Push((int) 25136)
0x387: Push((int) 22561)
0x388: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: PushEmpty(bool, object)
0x38b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38c: Call2 0xe7e

0x38d: Pop(1)
0x38e: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38f: Push((int) 521412)
0x390: Push((int) 22591)
0x391: Push((int) 22590)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x396: Call2 0xe96

0x397: Pop(1)
0x398: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x399: Push((int) 521519)
0x39a: Push((int) 25119)
0x39b: Push((int) 22680)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Push((int) 521384)
0x39f: Push((int) -1)
0x3a0: Push((int) 22562)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: GOTO 0x3a6

0x3a4: Return(); Pop(0)

0x3a5: GOTO 0x375

0x3a6: PushEmpty(bool)
0x3a7: Call2 0xd81

0x3a8: Pop(0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3aa: @ lshWaitForAnimEnd()
0x3ab: Pop(0)
0x3ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: GOTO 0x3b4

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3b1: Call2 0xce4

0x3b2: Pop(1)
0x3b3: GOTO 0x3aa

0x3b4: GOTO 0x3c3

0x3b5: Push("all")
0x3b6: Push("idle")
0x3b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @ WaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3c3

0x3be: Push("all")
0x3bf: Push("idle")
0x3c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: GOTO 0x3b9

0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: PushEmpty(bool)
0x3c6: Call2 0xd81

0x3c7: Pop(0)
0x3c8: Pop(1); Push((bool) Stack[-1] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Return(); Pop(0)

0x3cb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: Return(); Pop(0)

0x3ce: PushEmpty(string, bool)
0x3cf: Stack[-2] = Stack[-3]
0x3d0: Push("")
0x3d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-1] = (bool) 0
0x3d4: GOTO 0x3d6

0x3d5: Stack[-1] = (bool) 1
0x3d6: Call2 0xcf4

0x3d7: Pop(2)
0x3d8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3d9: Return(); Pop(0)

0x3da: PushEmpty()
0x3db: Push((int) 1)
0x3dc: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x3dd: PushEmpty()
0x3de: Call2 0xd12

0x3df: Pop(0)
0x3e0: Push((int) 22564)
0x3e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e3: PushEmpty(object, object)
0x3e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e6: Call2 0xdce

0x3e7: Pop(2)
0x3e8: Push((int) 32575)
0x3e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3eb: PushEmpty(object, object)
0x3ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ee: Call2 0xe4a

0x3ef: Pop(2)
0x3f0: Push((int) 22594)
0x3f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f3: PushEmpty(object, object)
0x3f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f6: Call2 0xddc

0x3f7: Pop(2)
0x3f8: Push((int) 22682)
0x3f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fb: PushEmpty(object, object)
0x3fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fe: Call2 0xdef

0x3ff: Pop(2)
0x400: Push((int) 22683)
0x401: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x403: PushEmpty(object, object)
0x404: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x405: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x406: Call2 0xdfc

0x407: Pop(2)
0x408: Push((int) 22560)
0x409: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x40b: PushEmpty(string)
0x40c: Stack[-1] = "Neutral"
0x40d: Call2 0x3c4

0x40e: Pop(1)
0x40f: Push((int) 521382)
0x410: @@ SetMessage(Stack[-1])
0x411: Pop(1)
0x412: @@ ClearReplies()
0x413: Pop(0)
0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x416: Call2 0xe72

0x417: Pop(1)
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: Push((int) 521383)
0x41a: Push((int) 25136)
0x41b: Push((int) 22561)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: PushEmpty(bool, object)
0x41f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x420: Call2 0xe7e

0x421: Pop(1)
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: Push((int) 521412)
0x424: Push((int) 22591)
0x425: Push((int) 22590)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: PushEmpty(bool, object)
0x429: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Call2 0xe96

0x42b: Pop(1)
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: Push((int) 521519)
0x42e: Push((int) 25119)
0x42f: Push((int) 22680)
0x430: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(3)
0x432: Push((int) 521384)
0x433: Push((int) -1)
0x434: Push((int) 22562)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Return(); Pop(0)

0x438: Push((int) 25119)
0x439: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x43b: PushEmpty(string)
0x43c: Stack[-1] = "Rage"
0x43d: Call2 0x3c4

0x43e: Pop(1)
0x43f: Push((int) 523846)
0x440: @@ SetMessage(Stack[-1])
0x441: Pop(1)
0x442: @@ ClearReplies()
0x443: Pop(0)
0x444: Push((int) 523851)
0x445: Push((int) 25125)
0x446: Push((int) 25124)
0x447: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x448: Pop(3)
0x449: Push((int) 523847)
0x44a: Push((int) 25121)
0x44b: Push((int) 25120)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Return(); Pop(0)

0x44f: Push((int) 25121)
0x450: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x452: PushEmpty(string)
0x453: Stack[-1] = "Neutral"
0x454: Call2 0x3c4

0x455: Pop(1)
0x456: Push((int) 523848)
0x457: @@ SetMessage(Stack[-1])
0x458: Pop(1)
0x459: @@ ClearReplies()
0x45a: Pop(0)
0x45b: Push((int) 523855)
0x45c: Push((int) 25123)
0x45d: Push((int) 25128)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 25125)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Rage"
0x466: Call2 0x3c4

0x467: Pop(1)
0x468: Push((int) 523852)
0x469: @@ SetMessage(Stack[-1])
0x46a: Pop(1)
0x46b: @@ ClearReplies()
0x46c: Pop(0)
0x46d: Push((int) 523853)
0x46e: Push((int) 25127)
0x46f: Push((int) 25126)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Return(); Pop(0)

0x473: Push((int) 25127)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Rage"
0x478: Call2 0x3c4

0x479: Pop(1)
0x47a: Push((int) 523854)
0x47b: @@ SetMessage(Stack[-1])
0x47c: Pop(1)
0x47d: @@ ClearReplies()
0x47e: Pop(0)
0x47f: Push((int) 523849)
0x480: Push((int) 25123)
0x481: Push((int) 25122)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Return(); Pop(0)

0x485: Push((int) 25123)
0x486: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x488: PushEmpty(string)
0x489: Stack[-1] = "Neutral"
0x48a: Call2 0x3c4

0x48b: Pop(1)
0x48c: Push((int) 523850)
0x48d: @@ SetMessage(Stack[-1])
0x48e: Pop(1)
0x48f: @@ ClearReplies()
0x490: Pop(0)
0x491: Push((int) 523856)
0x492: Push((int) 22681)
0x493: Push((int) 25130)
0x494: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: Return(); Pop(0)

0x497: Push((int) 22681)
0x498: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Neutral"
0x49c: Call2 0x3c4

0x49d: Pop(1)
0x49e: Push((int) 521520)
0x49f: @@ SetMessage(Stack[-1])
0x4a0: Pop(1)
0x4a1: @@ ClearReplies()
0x4a2: Pop(0)
0x4a3: Push((int) 521521)
0x4a4: Push((int) 25132)
0x4a5: Push((int) 22682)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Push((int) 521522)
0x4a9: Push((int) 25134)
0x4aa: Push((int) 22683)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: Push((int) 523857)
0x4ae: Push((int) -1)
0x4af: Push((int) 25131)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 25134)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Neutral"
0x4b8: Call2 0x3c4

0x4b9: Pop(1)
0x4ba: Push((int) 523860)
0x4bb: @@ SetMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ ClearReplies()
0x4be: Pop(0)
0x4bf: Push((int) 523861)
0x4c0: Push((int) -1)
0x4c1: Push((int) 25135)
0x4c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c3: Pop(3)
0x4c4: Return(); Pop(0)

0x4c5: Push((int) 25132)
0x4c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c8: PushEmpty(string)
0x4c9: Stack[-1] = "Neutral"
0x4ca: Call2 0x3c4

0x4cb: Pop(1)
0x4cc: Push((int) 523858)
0x4cd: @@ SetMessage(Stack[-1])
0x4ce: Pop(1)
0x4cf: @@ ClearReplies()
0x4d0: Pop(0)
0x4d1: Push((int) 523859)
0x4d2: Push((int) -1)
0x4d3: Push((int) 25133)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Return(); Pop(0)

0x4d7: Push((int) 22591)
0x4d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Neutral"
0x4dc: Call2 0x3c4

0x4dd: Pop(1)
0x4de: Push((int) 521413)
0x4df: @@ SetMessage(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ ClearReplies()
0x4e2: Pop(0)
0x4e3: Push((int) 523877)
0x4e4: Push((int) 25154)
0x4e5: Push((int) 25153)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 25154)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Neutral"
0x4ee: Call2 0x3c4

0x4ef: Pop(1)
0x4f0: Push((int) 523878)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 523879)
0x4f6: Push((int) 25162)
0x4f7: Push((int) 25155)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Push((int) 523880)
0x4fb: Push((int) 25162)
0x4fc: Push((int) 25156)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Push((int) 523881)
0x500: Push((int) 25158)
0x501: Push((int) 25157)
0x502: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x503: Pop(3)
0x504: Return(); Pop(0)

0x505: Push((int) 25158)
0x506: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x508: PushEmpty(string)
0x509: Stack[-1] = "Untrust"
0x50a: Call2 0x3c4

0x50b: Pop(1)
0x50c: Push((int) 523882)
0x50d: @@ SetMessage(Stack[-1])
0x50e: Pop(1)
0x50f: @@ ClearReplies()
0x510: Pop(0)
0x511: Push((int) 523884)
0x512: Push((int) 25162)
0x513: Push((int) 25160)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Push((int) 523883)
0x517: Push((int) 25163)
0x518: Push((int) 25159)
0x519: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51a: Pop(3)
0x51b: Push((int) 523885)
0x51c: Push((int) 25162)
0x51d: Push((int) 25161)
0x51e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(3)
0x520: Return(); Pop(0)

0x521: Push((int) 25163)
0x522: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x524: PushEmpty(string)
0x525: Stack[-1] = "Discontent"
0x526: Call2 0x3c4

0x527: Pop(1)
0x528: Push((int) 523887)
0x529: @@ SetMessage(Stack[-1])
0x52a: Pop(1)
0x52b: @@ ClearReplies()
0x52c: Pop(0)
0x52d: Push((int) 521414)
0x52e: Push((int) 22593)
0x52f: Push((int) 22592)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Return(); Pop(0)

0x533: Push((int) 22593)
0x534: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x536: PushEmpty(string)
0x537: Stack[-1] = "Rage"
0x538: Call2 0x3c4

0x539: Pop(1)
0x53a: Push((int) 521415)
0x53b: @@ SetMessage(Stack[-1])
0x53c: Pop(1)
0x53d: @@ ClearReplies()
0x53e: Pop(0)
0x53f: Push((int) 521416)
0x540: Push((int) -1)
0x541: Push((int) 22594)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: PushEmpty(bool, object)
0x545: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x546: Call2 0xe8a

0x547: Pop(1)
0x548: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x549: Push((int) 541573)
0x54a: Push((int) -1)
0x54b: Push((int) 43744)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 25162)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Discontent"
0x554: Call2 0x3c4

0x555: Pop(1)
0x556: Push((int) 523886)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 531259)
0x55c: Push((int) -1)
0x55d: Push((int) 32575)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Return(); Pop(0)

0x561: Push((int) 25136)
0x562: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x564: PushEmpty(string)
0x565: Stack[-1] = "Patronage"
0x566: Call2 0x3c4

0x567: Pop(1)
0x568: Push((int) 523862)
0x569: @@ SetMessage(Stack[-1])
0x56a: Pop(1)
0x56b: @@ ClearReplies()
0x56c: Pop(0)
0x56d: Push((int) 523863)
0x56e: Push((int) 25138)
0x56f: Push((int) 25137)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Return(); Pop(0)

0x573: Push((int) 25138)
0x574: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x576: PushEmpty(string)
0x577: Stack[-1] = "Untrust"
0x578: Call2 0x3c4

0x579: Pop(1)
0x57a: Push((int) 523864)
0x57b: @@ SetMessage(Stack[-1])
0x57c: Pop(1)
0x57d: @@ ClearReplies()
0x57e: Pop(0)
0x57f: Push((int) 523865)
0x580: Push((int) 22563)
0x581: Push((int) 25139)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: Push((int) 523876)
0x585: Push((int) 22563)
0x586: Push((int) 25151)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Return(); Pop(0)

0x58a: Push((int) 22563)
0x58b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Untrust"
0x58f: Call2 0x3c4

0x590: Pop(1)
0x591: Push((int) 521385)
0x592: @@ SetMessage(Stack[-1])
0x593: Pop(1)
0x594: @@ ClearReplies()
0x595: Pop(0)
0x596: Push((int) 523866)
0x597: Push((int) 25141)
0x598: Push((int) 25140)
0x599: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59a: Pop(3)
0x59b: Return(); Pop(0)

0x59c: Push((int) 25141)
0x59d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x59f: PushEmpty(string)
0x5a0: Stack[-1] = "Untrust"
0x5a1: Call2 0x3c4

0x5a2: Pop(1)
0x5a3: Push((int) 523867)
0x5a4: @@ SetMessage(Stack[-1])
0x5a5: Pop(1)
0x5a6: @@ ClearReplies()
0x5a7: Pop(0)
0x5a8: Push((int) 523868)
0x5a9: Push((int) 25143)
0x5aa: Push((int) 25142)
0x5ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: Return(); Pop(0)

0x5ae: Push((int) 25143)
0x5af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5b1: PushEmpty(string)
0x5b2: Stack[-1] = "Neutral"
0x5b3: Call2 0x3c4

0x5b4: Pop(1)
0x5b5: Push((int) 523869)
0x5b6: @@ SetMessage(Stack[-1])
0x5b7: Pop(1)
0x5b8: @@ ClearReplies()
0x5b9: Pop(0)
0x5ba: Push((int) 523870)
0x5bb: Push((int) 25148)
0x5bc: Push((int) 25144)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Push((int) 523871)
0x5c0: Push((int) 25146)
0x5c1: Push((int) 25145)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Return(); Pop(0)

0x5c5: Push((int) 25146)
0x5c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5c8: PushEmpty(string)
0x5c9: Stack[-1] = "Neutral"
0x5ca: Call2 0x3c4

0x5cb: Pop(1)
0x5cc: Push((int) 523872)
0x5cd: @@ SetMessage(Stack[-1])
0x5ce: Pop(1)
0x5cf: @@ ClearReplies()
0x5d0: Pop(0)
0x5d1: Push((int) 523873)
0x5d2: Push((int) 25148)
0x5d3: Push((int) 25147)
0x5d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d5: Pop(3)
0x5d6: Return(); Pop(0)

0x5d7: Push((int) 25148)
0x5d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5da: PushEmpty(string)
0x5db: Stack[-1] = "Neutral"
0x5dc: Call2 0x3c4

0x5dd: Pop(1)
0x5de: Push((int) 523874)
0x5df: @@ SetMessage(Stack[-1])
0x5e0: Pop(1)
0x5e1: @@ ClearReplies()
0x5e2: Pop(0)
0x5e3: Push((int) 521386)
0x5e4: Push((int) -1)
0x5e5: Push((int) 22564)
0x5e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e7: Pop(3)
0x5e8: Push((int) 523875)
0x5e9: Push((int) -1)
0x5ea: Push((int) 25150)
0x5eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Return(); Pop(0)

0x5ee: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5ef: PushEmpty(bool)
0x5f0: Call2 0xd81

0x5f1: Pop(0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f3: @ lshStopAnimation()
0x5f4: Pop(0)
0x5f5: GOTO 0x5f8

0x5f6: @ StopAnimation()
0x5f7: Pop(0)
0x5f8: Return(); Pop(0)

0x5f9: GOTO 0x3db

0x5fa: Return(); Pop(0)

0x5fb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5fd: PushEmpty(bool, object, float)
0x5fe: Stack[-2] = Stack[-12]
0x5ff: Stack[-1] = (float) 70.0
0x600: Call2 0xc03

0x601: Pop(2)
0x602: Pop(1); Push((bool) Stack[-1] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-10] = (int) -2
0x605: Return(); Pop(8)

0x606: @ CreateDialog(Stack[-4])
0x607: Pop(0)
0x608: PushEmpty(int)
0x609: Call2 0xd7b

0x60a: Pop(0)
0x60b: @@ SetNPCName(Stack[-1])
0x60c: Pop(1)
0x60d: PushEmpty(int)
0x60e: Call2 0xd79

0x60f: Pop(0)
0x610: @@ SetNPCDescription(Stack[-1])
0x611: Pop(1)
0x612: PushEmpty(string)
0x613: Call2 0xd7d

0x614: Pop(0)
0x615: @@ SetPhoto(Stack[-1])
0x616: Pop(1)
0x617: PushEmpty(string)
0x618: Call2 0xd7f

0x619: Pop(0)
0x61a: @@ SetPhoto2(Stack[-1])
0x61b: Pop(1)
0x61c: PushEmpty(int)
0x61d: Call2 0x1020

0x61e: Pop(0)
0x61f: @@ SetPlayerName(Stack[-1])
0x620: Pop(1)
0x621: Stack[-2] = (int) -1
0x622: @ IsOverrideActive(Stack[-3])
0x623: Pop(0)
0x624: Push(Stack[-3])
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-10] = (int) -2
0x627: Return(); Pop(8)

0x628: @ DoDialog(Stack[-4])
0x629: Pop(0)
0x62a: PushEmpty(bool, object)
0x62b: PushEmpty(object)
0x62c: Call2 0xd19

0x62d: Stack[-2] = Stack[-1]
0x62e: Pop(1)
0x62f: Call2 0xc5a

0x630: Pop(2)
0x631: PushEmpty(object, object)
0x632: Stack[-2] = Stack[-11]
0x633: Stack[-1] = Stack[-6]
0x634: Push(-2, 4); TaskCall(7)
0x635: Call2 0x64c

0x636: Pop(-2, 4); TaskReturn
0x637: Pop(2)
0x638: @@ IsDialogEnd(Stack[-1])
0x639: Pop(0)
0x63a: Pop(0); Push((bool) Stack[-1] == 0)
0x63b: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63c: @ sync()
0x63d: Pop(0)
0x63e: @@ IsDialogEnd(Stack[-1])
0x63f: Pop(0)
0x640: GOTO 0x63a

0x641: PushEmpty(object)
0x642: Stack[-1] = Stack[-10]
0x643: Call2 0xc48

0x644: Pop(1)
0x645: @ StopDialog(Stack[-4])
0x646: Pop(0)
0x647: @@ GetReturnValue(Stack[-2])
0x648: Pop(0)
0x649: Stack[-10] = Stack[-2]
0x64a: Return(); Pop(8)

0x64b: Stack[-4] = 0
0x64c: PushEmpty()
0x64d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x64e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x64f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x650: Push((int) 1)
0x651: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x652: PushEmpty(object, object)
0x653: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x654: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x655: Call2 0xe44

0x656: Pop(2)
0x657: PushEmpty(string)
0x658: Stack[-1] = "Neutral"
0x659: Call2 0x6f7

0x65a: Pop(1)
0x65b: Push((int) 521951)
0x65c: @@ SetMessage(Stack[-1])
0x65d: Pop(1)
0x65e: @@ ClearReplies()
0x65f: Pop(0)
0x660: PushEmpty(bool)
0x661: Stack[-1] = (bool) 1
0x662: PushEmpty(bool)
0x663: Stack[-1] = (bool) 0
0x664: PushEmpty(bool, object)
0x665: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x666: Call2 0xea2

0x667: Pop(1)
0x668: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x669: PushEmpty(bool, object)
0x66a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66b: Call2 0xeba

0x66c: Pop(1)
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Stack[-1] = (bool) 1
0x66f: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x670: PushEmpty(bool)
0x671: Stack[-1] = (bool) 0
0x672: PushEmpty(bool, object)
0x673: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x674: Call2 0xeae

0x675: Pop(1)
0x676: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x677: PushEmpty(bool, object)
0x678: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x679: Call2 0xeba

0x67a: Pop(1)
0x67b: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67c: Stack[-1] = (bool) 1
0x67d: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67e: Stack[-1] = (bool) 0
0x67f: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x680: Push((int) 521952)
0x681: Push((int) 23688)
0x682: Push((int) 23126)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: PushEmpty(bool)
0x686: Stack[-1] = (bool) 1
0x687: PushEmpty(bool)
0x688: Stack[-1] = (bool) 0
0x689: PushEmpty(bool)
0x68a: Stack[-1] = (bool) 0
0x68b: PushEmpty(bool, object)
0x68c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68d: Call2 0xec6

0x68e: Pop(1)
0x68f: Pop(1); Push((bool) Stack[-1] == 0)
0x690: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x691: PushEmpty(bool, object)
0x692: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x693: Call2 0xed2

0x694: Pop(1)
0x695: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x696: Stack[-1] = (bool) 1
0x697: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x698: PushEmpty(bool, object)
0x699: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69a: Call2 0xf00

0x69b: Pop(1)
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: Stack[-1] = (bool) 1
0x69e: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x69f: PushEmpty(bool)
0x6a0: Stack[-1] = (bool) 0
0x6a1: PushEmpty(bool)
0x6a2: Stack[-1] = (bool) 0
0x6a3: PushEmpty(bool, object)
0x6a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a5: Call2 0xec6

0x6a6: Pop(1)
0x6a7: Pop(1); Push((bool) Stack[-1] == 0)
0x6a8: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6a9: PushEmpty(bool, object)
0x6aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ab: Call2 0xed2

0x6ac: Pop(1)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ae: Stack[-1] = (bool) 1
0x6af: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b0: PushEmpty(bool, object)
0x6b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b2: Call2 0xef6

0x6b3: Pop(1)
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b5: Stack[-1] = (bool) 1
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: Stack[-1] = (bool) 0
0x6b8: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b9: Push((int) 530373)
0x6ba: Push((int) 31746)
0x6bb: Push((int) 31745)
0x6bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bd: Pop(3)
0x6be: PushEmpty(bool)
0x6bf: Stack[-1] = (bool) 0
0x6c0: PushEmpty(bool, object)
0x6c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c2: Call2 0xec6

0x6c3: Pop(1)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c5: PushEmpty(bool, object)
0x6c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c7: Call2 0xede

0x6c8: Pop(1)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: Stack[-1] = (bool) 1
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cc: Push((int) 530376)
0x6cd: Push((int) 31749)
0x6ce: Push((int) 31748)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Push((int) 521955)
0x6d2: Push((int) -1)
0x6d3: Push((int) 23129)
0x6d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d5: Pop(3)
0x6d6: GOTO 0x6d9

0x6d7: Return(); Pop(0)

0x6d8: GOTO 0x650

0x6d9: PushEmpty(bool)
0x6da: Call2 0xd81

0x6db: Pop(0)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6dd: @ lshWaitForAnimEnd()
0x6de: Pop(0)
0x6df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: GOTO 0x6e7

0x6e2: PushEmpty(string)
0x6e3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6e4: Call2 0xce4

0x6e5: Pop(1)
0x6e6: GOTO 0x6dd

0x6e7: GOTO 0x6f6

0x6e8: Push("all")
0x6e9: Push("idle")
0x6ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x6eb: Pop(2)
0x6ec: @ WaitForAnimEnd()
0x6ed: Pop(0)
0x6ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6f0: GOTO 0x6f6

0x6f1: Push("all")
0x6f2: Push("idle")
0x6f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x6f4: Pop(2)
0x6f5: GOTO 0x6ec

0x6f6: Return(); Pop(0)

0x6f7: PushEmpty()
0x6f8: PushEmpty(bool)
0x6f9: Call2 0xd81

0x6fa: Pop(0)
0x6fb: Pop(1); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fd: Return(); Pop(0)

0x6fe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: Return(); Pop(0)

0x701: PushEmpty(string, bool)
0x702: Stack[-2] = Stack[-3]
0x703: Push("")
0x704: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x706: Stack[-1] = (bool) 0
0x707: GOTO 0x709

0x708: Stack[-1] = (bool) 1
0x709: Call2 0xcf4

0x70a: Pop(2)
0x70b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x70c: Return(); Pop(0)

0x70d: PushEmpty()
0x70e: Push((int) 1)
0x70f: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x710: PushEmpty()
0x711: Call2 0xd12

0x712: Pop(0)
0x713: Push((int) 23126)
0x714: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x716: PushEmpty(object, object)
0x717: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x718: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x719: Call2 0xe09

0x71a: Pop(2)
0x71b: Push((int) 31745)
0x71c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x71e: PushEmpty(object, object)
0x71f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x720: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x721: Call2 0xe0f

0x722: Pop(2)
0x723: Push((int) 32812)
0x724: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x726: PushEmpty(object, object)
0x727: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x728: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x729: Call2 0xe15

0x72a: Pop(2)
0x72b: PushEmpty(object, object)
0x72c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x72d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x72e: Call2 0xe34

0x72f: Pop(2)
0x730: Push((int) 31750)
0x731: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x732: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x733: PushEmpty(object, object)
0x734: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x735: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x736: Call2 0xe15

0x737: Pop(2)
0x738: PushEmpty(object, object)
0x739: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73b: Call2 0xe34

0x73c: Pop(2)
0x73d: Push((int) 23125)
0x73e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x740: PushEmpty(object, object)
0x741: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x742: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x743: Call2 0xe44

0x744: Pop(2)
0x745: PushEmpty(string)
0x746: Stack[-1] = "Neutral"
0x747: Call2 0x6f7

0x748: Pop(1)
0x749: Push((int) 521951)
0x74a: @@ SetMessage(Stack[-1])
0x74b: Pop(1)
0x74c: @@ ClearReplies()
0x74d: Pop(0)
0x74e: PushEmpty(bool)
0x74f: Stack[-1] = (bool) 1
0x750: PushEmpty(bool)
0x751: Stack[-1] = (bool) 0
0x752: PushEmpty(bool, object)
0x753: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x754: Call2 0xea2

0x755: Pop(1)
0x756: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x757: PushEmpty(bool, object)
0x758: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x759: Call2 0xeba

0x75a: Pop(1)
0x75b: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75c: Stack[-1] = (bool) 1
0x75d: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x75e: PushEmpty(bool)
0x75f: Stack[-1] = (bool) 0
0x760: PushEmpty(bool, object)
0x761: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x762: Call2 0xeae

0x763: Pop(1)
0x764: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x765: PushEmpty(bool, object)
0x766: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x767: Call2 0xeba

0x768: Pop(1)
0x769: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x76a: Stack[-1] = (bool) 1
0x76b: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76c: Stack[-1] = (bool) 0
0x76d: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x76e: Push((int) 521952)
0x76f: Push((int) 23688)
0x770: Push((int) 23126)
0x771: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x772: Pop(3)
0x773: PushEmpty(bool)
0x774: Stack[-1] = (bool) 1
0x775: PushEmpty(bool)
0x776: Stack[-1] = (bool) 0
0x777: PushEmpty(bool)
0x778: Stack[-1] = (bool) 0
0x779: PushEmpty(bool, object)
0x77a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77b: Call2 0xec6

0x77c: Pop(1)
0x77d: Pop(1); Push((bool) Stack[-1] == 0)
0x77e: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x77f: PushEmpty(bool, object)
0x780: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x781: Call2 0xed2

0x782: Pop(1)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Stack[-1] = (bool) 1
0x785: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x786: PushEmpty(bool, object)
0x787: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x788: Call2 0xf00

0x789: Pop(1)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Stack[-1] = (bool) 1
0x78c: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x78d: PushEmpty(bool)
0x78e: Stack[-1] = (bool) 0
0x78f: PushEmpty(bool)
0x790: Stack[-1] = (bool) 0
0x791: PushEmpty(bool, object)
0x792: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x793: Call2 0xec6

0x794: Pop(1)
0x795: Pop(1); Push((bool) Stack[-1] == 0)
0x796: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x797: PushEmpty(bool, object)
0x798: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x799: Call2 0xed2

0x79a: Pop(1)
0x79b: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79c: Stack[-1] = (bool) 1
0x79d: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x79e: PushEmpty(bool, object)
0x79f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a0: Call2 0xef6

0x7a1: Pop(1)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: Stack[-1] = (bool) 1
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a5: Stack[-1] = (bool) 0
0x7a6: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a7: Push((int) 530373)
0x7a8: Push((int) 31746)
0x7a9: Push((int) 31745)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: PushEmpty(bool)
0x7ad: Stack[-1] = (bool) 0
0x7ae: PushEmpty(bool, object)
0x7af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b0: Call2 0xec6

0x7b1: Pop(1)
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b3: PushEmpty(bool, object)
0x7b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b5: Call2 0xede

0x7b6: Pop(1)
0x7b7: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b8: Stack[-1] = (bool) 1
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7ba: Push((int) 530376)
0x7bb: Push((int) 31749)
0x7bc: Push((int) 31748)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Push((int) 521955)
0x7c0: Push((int) -1)
0x7c1: Push((int) 23129)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Return(); Pop(0)

0x7c5: Push((int) 31749)
0x7c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7c8: PushEmpty(string)
0x7c9: Stack[-1] = "Untrust"
0x7ca: Call2 0x6f7

0x7cb: Pop(1)
0x7cc: Push((int) 530377)
0x7cd: @@ SetMessage(Stack[-1])
0x7ce: Pop(1)
0x7cf: @@ ClearReplies()
0x7d0: Pop(0)
0x7d1: Push((int) 531437)
0x7d2: Push((int) 32785)
0x7d3: Push((int) 32783)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Push((int) 531438)
0x7d7: Push((int) -1)
0x7d8: Push((int) 32784)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: Return(); Pop(0)

0x7dc: Push((int) 32785)
0x7dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7df: PushEmpty(string)
0x7e0: Stack[-1] = "Untrust"
0x7e1: Call2 0x6f7

0x7e2: Pop(1)
0x7e3: Push((int) 531439)
0x7e4: @@ SetMessage(Stack[-1])
0x7e5: Pop(1)
0x7e6: @@ ClearReplies()
0x7e7: Pop(0)
0x7e8: Push((int) 531460)
0x7e9: Push((int) 32811)
0x7ea: Push((int) 32810)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: Push((int) 530378)
0x7ee: Push((int) -1)
0x7ef: Push((int) 31750)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Return(); Pop(0)

0x7f3: Push((int) 32811)
0x7f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7f6: PushEmpty(string)
0x7f7: Stack[-1] = "Untrust"
0x7f8: Call2 0x6f7

0x7f9: Pop(1)
0x7fa: Push((int) 531461)
0x7fb: @@ SetMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: @@ ClearReplies()
0x7fe: Pop(0)
0x7ff: Push((int) 531462)
0x800: Push((int) -1)
0x801: Push((int) 32812)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Return(); Pop(0)

0x805: Push((int) 31746)
0x806: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x808: PushEmpty(string)
0x809: Stack[-1] = "Neutral"
0x80a: Call2 0x6f7

0x80b: Pop(1)
0x80c: Push((int) 530374)
0x80d: @@ SetMessage(Stack[-1])
0x80e: Pop(1)
0x80f: @@ ClearReplies()
0x810: Pop(0)
0x811: Push((int) 530375)
0x812: Push((int) -1)
0x813: Push((int) 31747)
0x814: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x815: Pop(3)
0x816: Return(); Pop(0)

0x817: Push((int) 23688)
0x818: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x819: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x81a: PushEmpty(string)
0x81b: Stack[-1] = "Patronage"
0x81c: Call2 0x6f7

0x81d: Pop(1)
0x81e: Push((int) 522512)
0x81f: @@ SetMessage(Stack[-1])
0x820: Pop(1)
0x821: @@ ClearReplies()
0x822: Pop(0)
0x823: Push((int) 522513)
0x824: Push((int) 23690)
0x825: Push((int) 23689)
0x826: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(3)
0x828: Push((int) 522525)
0x829: Push((int) 23702)
0x82a: Push((int) 23701)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Return(); Pop(0)

0x82e: Push((int) 23702)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Neutral"
0x833: Call2 0x6f7

0x834: Pop(1)
0x835: Push((int) 522526)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: Push((int) 522527)
0x83b: Push((int) 23692)
0x83c: Push((int) 23703)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Return(); Pop(0)

0x840: Push((int) 23690)
0x841: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x842: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x843: PushEmpty(string)
0x844: Stack[-1] = "Patronage"
0x845: Call2 0x6f7

0x846: Pop(1)
0x847: Push((int) 522514)
0x848: @@ SetMessage(Stack[-1])
0x849: Pop(1)
0x84a: @@ ClearReplies()
0x84b: Pop(0)
0x84c: Push((int) 522515)
0x84d: Push((int) 23692)
0x84e: Push((int) 23691)
0x84f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x850: Pop(3)
0x851: Return(); Pop(0)

0x852: Push((int) 23692)
0x853: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x855: PushEmpty(string)
0x856: Stack[-1] = "Rage"
0x857: Call2 0x6f7

0x858: Pop(1)
0x859: Push((int) 522516)
0x85a: @@ SetMessage(Stack[-1])
0x85b: Pop(1)
0x85c: @@ ClearReplies()
0x85d: Pop(0)
0x85e: Push((int) 522517)
0x85f: Push((int) 23694)
0x860: Push((int) 23693)
0x861: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x862: Pop(3)
0x863: Push((int) 522528)
0x864: Push((int) 23706)
0x865: Push((int) 23705)
0x866: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x867: Pop(3)
0x868: Return(); Pop(0)

0x869: Push((int) 23706)
0x86a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x86c: PushEmpty(string)
0x86d: Stack[-1] = "Patronage"
0x86e: Call2 0x6f7

0x86f: Pop(1)
0x870: Push((int) 522529)
0x871: @@ SetMessage(Stack[-1])
0x872: Pop(1)
0x873: @@ ClearReplies()
0x874: Pop(0)
0x875: Push((int) 522530)
0x876: Push((int) 23709)
0x877: Push((int) 23707)
0x878: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x879: Pop(3)
0x87a: Return(); Pop(0)

0x87b: Push((int) 23709)
0x87c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x87e: PushEmpty(string)
0x87f: Stack[-1] = "Neutral"
0x880: Call2 0x6f7

0x881: Pop(1)
0x882: Push((int) 522531)
0x883: @@ SetMessage(Stack[-1])
0x884: Pop(1)
0x885: @@ ClearReplies()
0x886: Pop(0)
0x887: Push((int) 522532)
0x888: Push((int) 23694)
0x889: Push((int) 23710)
0x88a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88b: Pop(3)
0x88c: Return(); Pop(0)

0x88d: Push((int) 23694)
0x88e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88f: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x890: PushEmpty(string)
0x891: Stack[-1] = "Rage"
0x892: Call2 0x6f7

0x893: Pop(1)
0x894: Push((int) 522518)
0x895: @@ SetMessage(Stack[-1])
0x896: Pop(1)
0x897: @@ ClearReplies()
0x898: Pop(0)
0x899: Push((int) 522519)
0x89a: Push((int) 23696)
0x89b: Push((int) 23695)
0x89c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89d: Pop(3)
0x89e: Return(); Pop(0)

0x89f: Push((int) 23696)
0x8a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = "Neutral"
0x8a4: Call2 0x6f7

0x8a5: Pop(1)
0x8a6: Push((int) 522520)
0x8a7: @@ SetMessage(Stack[-1])
0x8a8: Pop(1)
0x8a9: @@ ClearReplies()
0x8aa: Pop(0)
0x8ab: Push((int) 522521)
0x8ac: Push((int) -1)
0x8ad: Push((int) 23697)
0x8ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8af: Pop(3)
0x8b0: Push((int) 522522)
0x8b1: Push((int) 23699)
0x8b2: Push((int) 23698)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Return(); Pop(0)

0x8b6: Push((int) 23699)
0x8b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8b9: PushEmpty(string)
0x8ba: Stack[-1] = "Neutral"
0x8bb: Call2 0x6f7

0x8bc: Pop(1)
0x8bd: Push((int) 522523)
0x8be: @@ SetMessage(Stack[-1])
0x8bf: Pop(1)
0x8c0: @@ ClearReplies()
0x8c1: Pop(0)
0x8c2: Push((int) 522524)
0x8c3: Push((int) -1)
0x8c4: Push((int) 23700)
0x8c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c6: Pop(3)
0x8c7: Return(); Pop(0)

0x8c8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8c9: PushEmpty(bool)
0x8ca: Call2 0xd81

0x8cb: Pop(0)
0x8cc: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cd: @ lshStopAnimation()
0x8ce: Pop(0)
0x8cf: GOTO 0x8d2

0x8d0: @ StopAnimation()
0x8d1: Pop(0)
0x8d2: Return(); Pop(0)

0x8d3: GOTO 0x70e

0x8d4: Return(); Pop(0)

0x8d5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8d7: PushEmpty(bool, object, float)
0x8d8: Stack[-2] = Stack[-12]
0x8d9: Stack[-1] = (float) 70.0
0x8da: Call2 0xc03

0x8db: Pop(2)
0x8dc: Pop(1); Push((bool) Stack[-1] == 0)
0x8dd: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8de: Stack[-10] = (int) -2
0x8df: Return(); Pop(8)

0x8e0: @ CreateDialog(Stack[-4])
0x8e1: Pop(0)
0x8e2: PushEmpty(int)
0x8e3: Call2 0xd7b

0x8e4: Pop(0)
0x8e5: @@ SetNPCName(Stack[-1])
0x8e6: Pop(1)
0x8e7: PushEmpty(int)
0x8e8: Call2 0xd79

0x8e9: Pop(0)
0x8ea: @@ SetNPCDescription(Stack[-1])
0x8eb: Pop(1)
0x8ec: PushEmpty(string)
0x8ed: Call2 0xd7d

0x8ee: Pop(0)
0x8ef: @@ SetPhoto(Stack[-1])
0x8f0: Pop(1)
0x8f1: PushEmpty(string)
0x8f2: Call2 0xd7f

0x8f3: Pop(0)
0x8f4: @@ SetPhoto2(Stack[-1])
0x8f5: Pop(1)
0x8f6: PushEmpty(int)
0x8f7: Call2 0x1020

0x8f8: Pop(0)
0x8f9: @@ SetPlayerName(Stack[-1])
0x8fa: Pop(1)
0x8fb: Stack[-2] = (int) -1
0x8fc: @ IsOverrideActive(Stack[-3])
0x8fd: Pop(0)
0x8fe: Push(Stack[-3])
0x8ff: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x900: Stack[-10] = (int) -2
0x901: Return(); Pop(8)

0x902: @ DoDialog(Stack[-4])
0x903: Pop(0)
0x904: PushEmpty(bool, object)
0x905: PushEmpty(object)
0x906: Call2 0xd19

0x907: Stack[-2] = Stack[-1]
0x908: Pop(1)
0x909: Call2 0xc5a

0x90a: Pop(2)
0x90b: PushEmpty(object, object)
0x90c: Stack[-2] = Stack[-11]
0x90d: Stack[-1] = Stack[-6]
0x90e: Push(-2, 4); TaskCall(9)
0x90f: Call2 0x926

0x910: Pop(-2, 4); TaskReturn
0x911: Pop(2)
0x912: @@ IsDialogEnd(Stack[-1])
0x913: Pop(0)
0x914: Pop(0); Push((bool) Stack[-1] == 0)
0x915: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x916: @ sync()
0x917: Pop(0)
0x918: @@ IsDialogEnd(Stack[-1])
0x919: Pop(0)
0x91a: GOTO 0x914

0x91b: PushEmpty(object)
0x91c: Stack[-1] = Stack[-10]
0x91d: Call2 0xc48

0x91e: Pop(1)
0x91f: @ StopDialog(Stack[-4])
0x920: Pop(0)
0x921: @@ GetReturnValue(Stack[-2])
0x922: Pop(0)
0x923: Stack[-10] = Stack[-2]
0x924: Return(); Pop(8)

0x925: Stack[-4] = 0
0x926: PushEmpty()
0x927: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x928: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x929: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x92a: Push((int) 1)
0x92b: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x92c: PushEmpty(string)
0x92d: Stack[-1] = "Neutral"
0x92e: Call2 0x96a

0x92f: Pop(1)
0x930: Push((int) 535263)
0x931: @@ SetMessage(Stack[-1])
0x932: Pop(1)
0x933: @@ ClearReplies()
0x934: Pop(0)
0x935: PushEmpty(bool, object)
0x936: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x937: Call2 0xeea

0x938: Pop(1)
0x939: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93a: Push((int) 535264)
0x93b: Push((int) 37039)
0x93c: Push((int) 36939)
0x93d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93e: Pop(3)
0x93f: Push((int) 535339)
0x940: Push((int) -1)
0x941: Push((int) 37021)
0x942: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x943: Pop(3)
0x944: Push((int) 535354)
0x945: Push((int) -1)
0x946: Push((int) 37038)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: GOTO 0x94c

0x94a: Return(); Pop(0)

0x94b: GOTO 0x92a

0x94c: PushEmpty(bool)
0x94d: Call2 0xd81

0x94e: Pop(0)
0x94f: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x950: @ lshWaitForAnimEnd()
0x951: Pop(0)
0x952: Push( Stack[3 + Tasks[-1].StackPointer] )
0x953: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x954: GOTO 0x95a

0x955: PushEmpty(string)
0x956: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x957: Call2 0xce4

0x958: Pop(1)
0x959: GOTO 0x950

0x95a: GOTO 0x969

0x95b: Push("all")
0x95c: Push("idle")
0x95d: @ PlayAnimation(Stack[-2], Stack[-1])
0x95e: Pop(2)
0x95f: @ WaitForAnimEnd()
0x960: Pop(0)
0x961: Push( Stack[3 + Tasks[-1].StackPointer] )
0x962: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x963: GOTO 0x969

0x964: Push("all")
0x965: Push("idle")
0x966: @ PlayAnimation(Stack[-2], Stack[-1])
0x967: Pop(2)
0x968: GOTO 0x95f

0x969: Return(); Pop(0)

0x96a: PushEmpty()
0x96b: PushEmpty(bool)
0x96c: Call2 0xd81

0x96d: Pop(0)
0x96e: Pop(1); Push((bool) Stack[-1] == 0)
0x96f: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x970: Return(); Pop(0)

0x971: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x972: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x973: Return(); Pop(0)

0x974: PushEmpty(string, bool)
0x975: Stack[-2] = Stack[-3]
0x976: Push("")
0x977: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x979: Stack[-1] = (bool) 0
0x97a: GOTO 0x97c

0x97b: Stack[-1] = (bool) 1
0x97c: Call2 0xcf4

0x97d: Pop(2)
0x97e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x97f: Return(); Pop(0)

0x980: PushEmpty()
0x981: Push((int) 1)
0x982: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0x983: PushEmpty()
0x984: Call2 0xd12

0x985: Pop(0)
0x986: Push((int) 36939)
0x987: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x989: PushEmpty(object, object)
0x98a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x98b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x98c: Call2 0xe54

0x98d: Pop(2)
0x98e: Push((int) 36938)
0x98f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x990: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x991: PushEmpty(string)
0x992: Stack[-1] = "Neutral"
0x993: Call2 0x96a

0x994: Pop(1)
0x995: Push((int) 535263)
0x996: @@ SetMessage(Stack[-1])
0x997: Pop(1)
0x998: @@ ClearReplies()
0x999: Pop(0)
0x99a: PushEmpty(bool, object)
0x99b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99c: Call2 0xeea

0x99d: Pop(1)
0x99e: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x99f: Push((int) 535264)
0x9a0: Push((int) 37039)
0x9a1: Push((int) 36939)
0x9a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a3: Pop(3)
0x9a4: Push((int) 535339)
0x9a5: Push((int) -1)
0x9a6: Push((int) 37021)
0x9a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a8: Pop(3)
0x9a9: Push((int) 535354)
0x9aa: Push((int) -1)
0x9ab: Push((int) 37038)
0x9ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ad: Pop(3)
0x9ae: Return(); Pop(0)

0x9af: Push((int) 37039)
0x9b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b1: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9b2: PushEmpty(string)
0x9b3: Stack[-1] = "Rage"
0x9b4: Call2 0x96a

0x9b5: Pop(1)
0x9b6: Push((int) 535355)
0x9b7: @@ SetMessage(Stack[-1])
0x9b8: Pop(1)
0x9b9: @@ ClearReplies()
0x9ba: Pop(0)
0x9bb: Push((int) 535356)
0x9bc: Push((int) 37042)
0x9bd: Push((int) 37040)
0x9be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bf: Pop(3)
0x9c0: Push((int) 535357)
0x9c1: Push((int) 37043)
0x9c2: Push((int) 37041)
0x9c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c4: Pop(3)
0x9c5: Return(); Pop(0)

0x9c6: Push((int) 37043)
0x9c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c8: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9c9: PushEmpty(string)
0x9ca: Stack[-1] = "Neutral"
0x9cb: Call2 0x96a

0x9cc: Pop(1)
0x9cd: Push((int) 535359)
0x9ce: @@ SetMessage(Stack[-1])
0x9cf: Pop(1)
0x9d0: @@ ClearReplies()
0x9d1: Pop(0)
0x9d2: Push((int) 535360)
0x9d3: Push((int) -1)
0x9d4: Push((int) 37044)
0x9d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d6: Pop(3)
0x9d7: Push((int) 535361)
0x9d8: Push((int) 37042)
0x9d9: Push((int) 37045)
0x9da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9db: Pop(3)
0x9dc: Return(); Pop(0)

0x9dd: Push((int) 37042)
0x9de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9e0: PushEmpty(string)
0x9e1: Stack[-1] = "Rage"
0x9e2: Call2 0x96a

0x9e3: Pop(1)
0x9e4: Push((int) 535358)
0x9e5: @@ SetMessage(Stack[-1])
0x9e6: Pop(1)
0x9e7: @@ ClearReplies()
0x9e8: Pop(0)
0x9e9: Push((int) 535362)
0x9ea: Push((int) 37049)
0x9eb: Push((int) 37047)
0x9ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ed: Pop(3)
0x9ee: Push((int) 535363)
0x9ef: Push((int) -1)
0x9f0: Push((int) 37048)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Return(); Pop(0)

0x9f4: Push((int) 37049)
0x9f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0x9f7: PushEmpty(string)
0x9f8: Stack[-1] = "Patronage"
0x9f9: Call2 0x96a

0x9fa: Pop(1)
0x9fb: Push((int) 535364)
0x9fc: @@ SetMessage(Stack[-1])
0x9fd: Pop(1)
0x9fe: @@ ClearReplies()
0x9ff: Pop(0)
0xa00: Push((int) 535365)
0xa01: Push((int) -1)
0xa02: Push((int) 37050)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: Push((int) 535366)
0xa06: Push((int) -1)
0xa07: Push((int) 37051)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: Return(); Pop(0)

0xa0b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa0c: PushEmpty(bool)
0xa0d: Call2 0xd81

0xa0e: Pop(0)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa10: @ lshStopAnimation()
0xa11: Pop(0)
0xa12: GOTO 0xa15

0xa13: @ StopAnimation()
0xa14: Pop(0)
0xa15: Return(); Pop(0)

0xa16: GOTO 0x981

0xa17: Return(); Pop(0)

0xa18: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa19: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa1a: PushEmpty(bool, object, float)
0xa1b: Stack[-2] = Stack[-12]
0xa1c: Stack[-1] = (float) 70.0
0xa1d: Call2 0xc03

0xa1e: Pop(2)
0xa1f: Pop(1); Push((bool) Stack[-1] == 0)
0xa20: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa21: Stack[-10] = (int) -2
0xa22: Return(); Pop(8)

0xa23: @ CreateDialog(Stack[-4])
0xa24: Pop(0)
0xa25: PushEmpty(int)
0xa26: Call2 0xd7b

0xa27: Pop(0)
0xa28: @@ SetNPCName(Stack[-1])
0xa29: Pop(1)
0xa2a: PushEmpty(int)
0xa2b: Call2 0xd79

0xa2c: Pop(0)
0xa2d: @@ SetNPCDescription(Stack[-1])
0xa2e: Pop(1)
0xa2f: PushEmpty(string)
0xa30: Call2 0xd7d

0xa31: Pop(0)
0xa32: @@ SetPhoto(Stack[-1])
0xa33: Pop(1)
0xa34: PushEmpty(string)
0xa35: Call2 0xd7f

0xa36: Pop(0)
0xa37: @@ SetPhoto2(Stack[-1])
0xa38: Pop(1)
0xa39: PushEmpty(int)
0xa3a: Call2 0x1020

0xa3b: Pop(0)
0xa3c: @@ SetPlayerName(Stack[-1])
0xa3d: Pop(1)
0xa3e: Stack[-2] = (int) -1
0xa3f: @ IsOverrideActive(Stack[-3])
0xa40: Pop(0)
0xa41: Push(Stack[-3])
0xa42: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa43: Stack[-10] = (int) -2
0xa44: Return(); Pop(8)

0xa45: @ DoDialog(Stack[-4])
0xa46: Pop(0)
0xa47: PushEmpty(bool, object)
0xa48: PushEmpty(object)
0xa49: Call2 0xd19

0xa4a: Stack[-2] = Stack[-1]
0xa4b: Pop(1)
0xa4c: Call2 0xc5a

0xa4d: Pop(2)
0xa4e: PushEmpty(object, object)
0xa4f: Stack[-2] = Stack[-11]
0xa50: Stack[-1] = Stack[-6]
0xa51: Push(-2, 4); TaskCall(11)
0xa52: Call2 0xa69

0xa53: Pop(-2, 4); TaskReturn
0xa54: Pop(2)
0xa55: @@ IsDialogEnd(Stack[-1])
0xa56: Pop(0)
0xa57: Pop(0); Push((bool) Stack[-1] == 0)
0xa58: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa59: @ sync()
0xa5a: Pop(0)
0xa5b: @@ IsDialogEnd(Stack[-1])
0xa5c: Pop(0)
0xa5d: GOTO 0xa57

0xa5e: PushEmpty(object)
0xa5f: Stack[-1] = Stack[-10]
0xa60: Call2 0xc48

0xa61: Pop(1)
0xa62: @ StopDialog(Stack[-4])
0xa63: Pop(0)
0xa64: @@ GetReturnValue(Stack[-2])
0xa65: Pop(0)
0xa66: Stack[-10] = Stack[-2]
0xa67: Return(); Pop(8)

0xa68: Stack[-4] = 0
0xa69: PushEmpty()
0xa6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa6c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa6d: Push((int) 1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa6f: PushEmpty(string)
0xa70: Stack[-1] = "Neutral"
0xa71: Call2 0xaa3

0xa72: Pop(1)
0xa73: Push((int) 540551)
0xa74: @@ SetMessage(Stack[-1])
0xa75: Pop(1)
0xa76: @@ ClearReplies()
0xa77: Pop(0)
0xa78: Push((int) 540552)
0xa79: Push((int) -1)
0xa7a: Push((int) 42561)
0xa7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7c: Pop(3)
0xa7d: Push((int) 540795)
0xa7e: Push((int) -1)
0xa7f: Push((int) 42844)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: GOTO 0xa85

0xa83: Return(); Pop(0)

0xa84: GOTO 0xa6d

0xa85: PushEmpty(bool)
0xa86: Call2 0xd81

0xa87: Pop(0)
0xa88: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa89: @ lshWaitForAnimEnd()
0xa8a: Pop(0)
0xa8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8d: GOTO 0xa93

0xa8e: PushEmpty(string)
0xa8f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa90: Call2 0xce4

0xa91: Pop(1)
0xa92: GOTO 0xa89

0xa93: GOTO 0xaa2

0xa94: Push("all")
0xa95: Push("idle")
0xa96: @ PlayAnimation(Stack[-2], Stack[-1])
0xa97: Pop(2)
0xa98: @ WaitForAnimEnd()
0xa99: Pop(0)
0xa9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9c: GOTO 0xaa2

0xa9d: Push("all")
0xa9e: Push("idle")
0xa9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa0: Pop(2)
0xaa1: GOTO 0xa98

0xaa2: Return(); Pop(0)

0xaa3: PushEmpty()
0xaa4: PushEmpty(bool)
0xaa5: Call2 0xd81

0xaa6: Pop(0)
0xaa7: Pop(1); Push((bool) Stack[-1] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa9: Return(); Pop(0)

0xaaa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: Return(); Pop(0)

0xaad: PushEmpty(string, bool)
0xaae: Stack[-2] = Stack[-3]
0xaaf: Push("")
0xab0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-1] = (bool) 0
0xab3: GOTO 0xab5

0xab4: Stack[-1] = (bool) 1
0xab5: Call2 0xcf4

0xab6: Pop(2)
0xab7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xab8: Return(); Pop(0)

0xab9: PushEmpty()
0xaba: Push((int) 1)
0xabb: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xabc: PushEmpty()
0xabd: Call2 0xd12

0xabe: Pop(0)
0xabf: Push((int) 42560)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0xaa3

0xac5: Pop(1)
0xac6: Push((int) 540551)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 540552)
0xacc: Push((int) -1)
0xacd: Push((int) 42561)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Push((int) 540795)
0xad1: Push((int) -1)
0xad2: Push((int) 42844)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Return(); Pop(0)

0xad6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xad7: PushEmpty(bool)
0xad8: Call2 0xd81

0xad9: Pop(0)
0xada: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadb: @ lshStopAnimation()
0xadc: Pop(0)
0xadd: GOTO 0xae0

0xade: @ StopAnimation()
0xadf: Pop(0)
0xae0: Return(); Pop(0)

0xae1: GOTO 0xaba

0xae2: Return(); Pop(0)

0xae3: PushEmpty()
0xae4: Call2 0xae7

0xae5: Pop(0)
0xae6: Return(); Pop(0)

0xae7: PushEmpty(bool)
0xae8: Call2 0xbfe

0xae9: Pop(0)
0xaea: Pop(1); Push((bool) Stack[-1] == 0)
0xaeb: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaec: @ Hold()
0xaed: Pop(0)
0xaee: @ GetDirection(Stack[-0])
0xaef: Pop(0)
0xaf0: PushEmpty()
0xaf1: Call2 0xb97

0xaf2: Pop(0)
0xaf3: GOTO 0xaf0

0xaf4: Return(); Pop(0)

0xaf5: PushEmpty(object, object)
0xaf6: Push("player")
0xaf7: @ FindActor(Stack[-2], Stack[-1])
0xaf8: Pop(1)
0xaf9: Pop(0); Push((bool) Stack[-1] == 0)
0xafa: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xafb: Stack[-3] = (bool) 0
0xafc: Return(); Pop(2)

0xafd: PushEmpty(bool, object)
0xafe: Stack[-1] = Stack[-3]
0xaff: Call2 0xbf5

0xb00: Stack[-5] = Stack[-2]
0xb01: Pop(2)
0xb02: Return(); Pop(2)

0xb03: Stack[-1] = 0
0xb04: Push(CvectorIndex(Stack[-0], 0))
0xb05: Push(CvectorIndex(Stack[-0], 2))
0xb06: @ RotateAsync(Stack[-2], Stack[-1])
0xb07: Pop(2)
0xb08: Return(); Pop(0)

0xb09: PushEmpty(object, bool, object, bool)
0xb0a: Push("player")
0xb0b: @ FindActor(Stack[-3], Stack[-1])
0xb0c: Pop(1)
0xb0d: Pop(0); Push((bool) Stack[-2] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-5] = (bool) 0
0xb10: Return(); Pop(4)

0xb11: PushEmpty(float, object)
0xb12: Stack[-1] = Stack[-4]
0xb13: Call2 0xbe3

0xb14: Pop(1)
0xb15: Push((float)90000.0)
0xb16: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb18: Stack[-5] = (bool) 0
0xb19: Return(); Pop(4)

0xb1a: @ CanSee(Stack[-1], Stack[-2])
0xb1b: Pop(0)
0xb1c: Stack[-5] = Stack[-1]
0xb1d: Return(); Pop(4)

0xb1e: Stack[-2] = 0
0xb1f: PushEmpty(float, float)
0xb20: Push((int) 8)
0xb21: Push((int) 16)
0xb22: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb23: Pop(2)
0xb24: Push((int) 10)
0xb25: @ SetTimer(Stack[-1], Stack[-2])
0xb26: Pop(1)
0xb27: Return(); Pop(2)

0xb28: Push((int) 10)
0xb29: @ KillTimer(Stack[-1])
0xb2a: Pop(1)
0xb2b: Return(); Pop(0)

0xb2c: PushEmpty()
0xb2d: Push((int) 10)
0xb2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb30: PushEmpty()
0xb31: Call2 0xb28

0xb32: Pop(0)
0xb33: PushEmpty(bool)
0xb34: Stack[-1] = (bool) 0
0xb35: PushEmpty(bool)
0xb36: Call2 0xbfe

0xb37: Pop(0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb39: PushEmpty(bool)
0xb3a: Call2 0xb09

0xb3b: Pop(0)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb3d: Stack[-1] = (bool) 1
0xb3e: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb3f: PushEmpty(bool)
0xb40: Call2 0xaf5

0xb41: Pop(0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb43: PushEmpty(bool, object)
0xb44: PushEmpty(object)
0xb45: Call2 0xd19

0xb46: Stack[-2] = Stack[-1]
0xb47: Pop(1)
0xb48: Call2 0xc94

0xb49: Pop(2)
0xb4a: GOTO 0xb51

0xb4b: PushEmpty()
0xb4c: Call2 0xb04

0xb4d: Pop(0)
0xb4e: PushEmpty()
0xb4f: Call2 0xb1f

0xb50: Pop(0)
0xb51: Return(); Pop(0)

0xb52: PushEmpty()
0xb53: Call2 0xbde

0xb54: Pop(0)
0xb55: PushEmpty()
0xb56: Call2 0xb28

0xb57: Pop(0)
0xb58: @ lshStopSpeech()
0xb59: Pop(0)
0xb5a: @ lshStopAnimation()
0xb5b: Pop(0)
0xb5c: @ StopAsync()
0xb5d: Pop(0)
0xb5e: @ Hold()
0xb5f: Pop(0)
0xb60: Return(); Pop(0)

0xb61: @ StopGroup0()
0xb62: Pop(0)
0xb63: PushEmpty()
0xb64: Call2 0xb28

0xb65: Pop(0)
0xb66: PushEmpty(string)
0xb67: Stack[-1] = "Neutral"
0xb68: Call2 0xce4

0xb69: Pop(1)
0xb6a: PushEmpty()
0xb6b: Call2 0xb1f

0xb6c: Pop(0)
0xb6d: Return(); Pop(0)

0xb6e: PushEmpty()
0xb6f: Push(Stack[-1])
0xb70: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb71: PushEmpty()
0xb72: Call2 0xb1f

0xb73: Pop(0)
0xb74: GOTO 0xb79

0xb75: PushEmpty(string)
0xb76: Stack[-1] = "Neutral"
0xb77: Call2 0xce4

0xb78: Pop(1)
0xb79: Return(); Pop(0)

0xb7a: PushEmpty(bool, bool)
0xb7b: @ IsOverrideActive(Stack[-1])
0xb7c: Pop(0)
0xb7d: Pop(0); Push((bool) Stack[-1] == 0)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb7f: EventDisable(0)
0xb80: PushEmpty()
0xb81: Call2 0xbde

0xb82: Pop(0)
0xb83: PushEmpty(bool, object)
0xb84: Stack[-1] = Stack[-5]
0xb85: Call2 0xbf5

0xb86: Pop(2)
0xb87: EventEnable(0)
0xb88: PushEmpty(object)
0xb89: Stack[-1] = Stack[-4]
0xb8a: Call2 0x1031

0xb8b: Pop(1)
0xb8c: PushEmpty(string)
0xb8d: Stack[-1] = "Neutral"
0xb8e: Call2 0xce4

0xb8f: Pop(1)
0xb90: PushEmpty()
0xb91: Call2 0xb28

0xb92: Pop(0)
0xb93: PushEmpty()
0xb94: Call2 0xb1f

0xb95: Pop(0)
0xb96: Return(); Pop(2)

0xb97: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb98: @ WaitForAnimEnd()
0xb99: Pop(0)
0xb9a: PushEmpty(bool)
0xb9b: Call2 0xbfe

0xb9c: Pop(0)
0xb9d: Pop(1); Push((bool) Stack[-1] == 0)
0xb9e: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9f: Return(); Pop(12)

0xba0: PushEmpty(int)
0xba1: Call2 0xd68

0xba2: Stack[-7] = Stack[-1]
0xba3: Pop(1)
0xba4: Stack[-5] = (int) 0
0xba5: PushEmpty(bool)
0xba6: Stack[-1] = (bool) 0
0xba7: Push((int) 5)
0xba8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbaa: PushEmpty(bool)
0xbab: Call2 0xbfe

0xbac: Pop(0)
0xbad: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbae: Stack[-1] = (bool) 1
0xbaf: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbb0: Pop(0); Push((bool) Stack[-6] == 0)
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb2: Push((int) 3)
0xbb3: @ Sleep(Stack[-1], Stack[-5])
0xbb4: Pop(1)
0xbb5: Pop(0); Push((bool) Stack[-4] == 0)
0xbb6: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb7: GOTO 0xbd9

0xbb8: GOTO 0xbce

0xbb9: @ irand(Stack[-3], Stack[-6])
0xbba: Pop(0)
0xbbb: Push((int) 5)
0xbbc: @ irand(Stack[-3], Stack[-1])
0xbbd: Pop(1)
0xbbe: Push((int) 0)
0xbbf: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc1: Stack[-3] = (int) 0
0xbc2: Push("all")
0xbc3: PushEmpty(string, int)
0xbc4: Stack[-1] = Stack[-6]
0xbc5: Call2 0xd61

0xbc6: Pop(1)
0xbc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc8: Pop(2)
0xbc9: @ WaitForAnimEnd(Stack[-1])
0xbca: Pop(0)
0xbcb: Pop(0); Push((bool) Stack[-1] == 0)
0xbcc: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbcd: GOTO 0xbd9

0xbce: PushEmpty(bool)
0xbcf: Call2 0xbdc

0xbd0: Pop(0)
0xbd1: Pop(1); Push((bool) Stack[-1] == 0)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd3: GOTO 0xbd9

0xbd4: @ ResetAAS()
0xbd5: Pop(0)
0xbd6: Push((int) 1)
0xbd7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xbd8: GOTO 0xba5

0xbd9: @ ResetAAS()
0xbda: Pop(0)
0xbdb: Return(); Pop(12)

0xbdc: Stack[-1] = (bool) 1
0xbdd: Return(); Pop(0)

0xbde: @ StopAnimation()
0xbdf: Pop(0)
0xbe0: @ StopGroup0()
0xbe1: Pop(0)
0xbe2: Return(); Pop(0)

0xbe3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbe4: @ GetPosition(Stack[-3])
0xbe5: Pop(0)
0xbe6: @@ GetPosition(Stack[-2])
0xbe7: Pop(0)
0xbe8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbe9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbea: Return(); Pop(6)

0xbeb: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbec: @ GetPosition(Stack[-3])
0xbed: Pop(0)
0xbee: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xbef: Push(CvectorIndex(Stack[-2], 0))
0xbf0: Push(CvectorIndex(Stack[-3], 2))
0xbf1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xbf2: Pop(2)
0xbf3: Stack[-8] = Stack[-1]
0xbf4: Return(); Pop(6)

0xbf5: PushEmpty(cvector, cvector)
0xbf6: @@ GetPosition(Stack[-1])
0xbf7: Pop(0)
0xbf8: PushEmpty(bool, cvector)
0xbf9: Stack[-1] = Stack[-3]
0xbfa: Call2 0xbeb

0xbfb: Stack[-6] = Stack[-2]
0xbfc: Pop(2)
0xbfd: Return(); Pop(2)

0xbfe: PushEmpty(bool, bool)
0xbff: @ IsLoaded(Stack[-1])
0xc00: Pop(0)
0xc01: Stack[-3] = Stack[-1]
0xc02: Return(); Pop(2)

0xc03: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc04: @@ GetPosition(Stack[-8])
0xc05: Pop(0)
0xc06: @@ GetEyesHeight(Stack[-9])
0xc07: Pop(0)
0xc08: Push(CvectorIndex(Stack[-8], 1))
0xc09: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc0a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc0b: @ GetPosition(Stack[-7])
0xc0c: Pop(0)
0xc0d: @ GetEyesHeight(Stack[-9])
0xc0e: Pop(0)
0xc0f: Push(CvectorIndex(Stack[-7], 1))
0xc10: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc11: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc12: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc13: Push(CvectorIndex(Stack[-6], 1))
0xc14: Stack[-1] = (int) 0
0xc15: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc16: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc17: Pop(1); Push(Sqrt(Stack[-1]))
0xc18: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc19: Stack[-5] = -Stack[-6]; Pop(0);
0xc1a: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc1b: PushEmpty(cvector, cvector)
0xc1c: Push(CVector(0.0, 1.0, 0.0))
0xc1d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc1e: Call2 0xd1f

0xc1f: Pop(1)
0xc20: Push((int) 25)
0xc21: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc22: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc23: Push(CVector(0.0, 10.0, 0.0))
0xc24: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc25: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc26: @ IsOverrideActive(Stack[-2])
0xc27: Pop(0)
0xc28: Push(Stack[-2])
0xc29: IF (Stack[-1] == 0) GOTO 0xc2c; Pop(1)

0xc2a: Stack[-21] = (bool) 0
0xc2b: Return(); Pop(18)

0xc2c: @ StopWorld()
0xc2d: Pop(0)
0xc2e: Push((bool) 1)
0xc2f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xc30: Pop(1)
0xc31: Push(CvectorIndex(Stack[-4], 0))
0xc32: Push(CvectorIndex(Stack[-5], 2))
0xc33: @ Rotate(Stack[-2], Stack[-1])
0xc34: Pop(2)
0xc35: PushEmpty(bool)
0xc36: Call2 0xd81

0xc37: Pop(0)
0xc38: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc39: GOTO 0xc42

0xc3a: Push("head")
0xc3b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc3c: Pop(1)
0xc3d: Push(Stack[-1])
0xc3e: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc3f: Push("head")
0xc40: @ LookAsyncCamera(Stack[-1])
0xc41: Pop(1)
0xc42: @ CameraWaitForPlayFinish()
0xc43: Pop(0)
0xc44: @ ResumeWorld()
0xc45: Pop(0)
0xc46: Stack[-21] = (bool) 1
0xc47: Return(); Pop(18)

0xc48: PushEmpty(bool, bool)
0xc49: Push((bool) 1)
0xc4a: @ CameraSwitchToNormal(Stack[-1])
0xc4b: Pop(1)
0xc4c: PushEmpty(bool)
0xc4d: Call2 0xd81

0xc4e: Pop(0)
0xc4f: IF (Stack[-1] == 0) GOTO 0xc51; Pop(1)

0xc50: GOTO 0xc59

0xc51: Push("head")
0xc52: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc53: Pop(1)
0xc54: Push(Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc56: Push("head")
0xc57: @ UnlookAsync(Stack[-1])
0xc58: Pop(1)
0xc59: Return(); Pop(2)

0xc5a: PushEmpty(int, int, int, int)
0xc5b: Push("voice_common")
0xc5c: @ GetVariable(Stack[-1], Stack[-3])
0xc5d: Pop(1)
0xc5e: Push(Stack[-2])
0xc5f: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc60: PushEmpty(bool, object)
0xc61: Stack[-1] = Stack[-7]
0xc62: Call2 0xc94

0xc63: Pop(1)
0xc64: Pop(1); Push((bool) Stack[-1] == 0)
0xc65: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc66: PushEmpty(bool, object)
0xc67: Stack[-1] = Stack[-7]
0xc68: Call2 0xcb9

0xc69: Pop(1)
0xc6a: Pop(1); Push((bool) Stack[-1] == 0)
0xc6b: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc6c: Stack[-6] = (bool) 0
0xc6d: Return(); Pop(4)

0xc6e: Push((int) 2)
0xc6f: @ irand(Stack[-2], Stack[-1])
0xc70: Pop(1)
0xc71: Push(Stack[-1])
0xc72: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc73: Push("voice_common")
0xc74: Push((int) 1)
0xc75: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc76: Push((int) 3)
0xc77: Pop(2); Push(Stack[-2] % Stack[-1]);
0xc78: @ SetVariable(Stack[-2], Stack[-1])
0xc79: Pop(2)
0xc7a: GOTO 0xc7f

0xc7b: Push("voice_common")
0xc7c: Push((int) 0)
0xc7d: @ SetVariable(Stack[-2], Stack[-1])
0xc7e: Pop(2)
0xc7f: GOTO 0xc92

0xc80: PushEmpty(bool, object)
0xc81: Stack[-1] = Stack[-7]
0xc82: Call2 0xcb9

0xc83: Pop(1)
0xc84: Pop(1); Push((bool) Stack[-1] == 0)
0xc85: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc86: PushEmpty(bool, object)
0xc87: Stack[-1] = Stack[-7]
0xc88: Call2 0xc94

0xc89: Pop(1)
0xc8a: Pop(1); Push((bool) Stack[-1] == 0)
0xc8b: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc8c: Stack[-6] = (bool) 0
0xc8d: Return(); Pop(4)

0xc8e: Push("voice_common")
0xc8f: Push((int) 1)
0xc90: @ SetVariable(Stack[-2], Stack[-1])
0xc91: Pop(2)
0xc92: Stack[-6] = (bool) 1
0xc93: Return(); Pop(4)

0xc94: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc95: Stack[-5] = "c"
0xc96: Stack[-4] = (int) 0
0xc97: Push((int) 1)
0xc98: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xc99: Push((int) 1)
0xc9a: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc9b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc9c: @@ HasProperty(Stack[-1], Stack[-4])
0xc9d: Pop(1)
0xc9e: Pop(0); Push((bool) Stack[-3] == 0)
0xc9f: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xca0: GOTO 0xca4

0xca1: Push((int) 1)
0xca2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xca3: GOTO 0xc97

0xca4: Pop(0); Push((bool) Stack[-4] == 0)
0xca5: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xca6: Stack[-12] = (bool) 0
0xca7: Return(); Pop(10)

0xca8: Stack[-2] = (int) 0
0xca9: Push((int) 1)
0xcaa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcab: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcac: @ irand(Stack[-2], Stack[-4])
0xcad: Pop(0)
0xcae: Push((int) 1)
0xcaf: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcb0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcb1: @@ GetProperty(Stack[-1], Stack[-2])
0xcb2: Pop(1)
0xcb3: PushEmpty(bool, string)
0xcb4: Stack[-1] = Stack[-3]
0xcb5: Call2 0xd03

0xcb6: Stack[-14] = Stack[-2]
0xcb7: Pop(2)
0xcb8: Return(); Pop(10)

0xcb9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcba: Push("d")
0xcbb: PushEmpty(int)
0xcbc: Call2 0xd4a

0xcbd: Pop(0)
0xcbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcbf: Push("m")
0xcc0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcc1: Stack[-4] = (int) 0
0xcc2: Push((int) 1)
0xcc3: IF (Stack[-1] == 0) GOTO 0xccf; Pop(1)

0xcc4: Push((int) 1)
0xcc5: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcc6: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcc7: @@ HasProperty(Stack[-1], Stack[-4])
0xcc8: Pop(1)
0xcc9: Pop(0); Push((bool) Stack[-3] == 0)
0xcca: IF (Stack[-1] == 0) GOTO 0xccc; Pop(1)

0xccb: GOTO 0xccf

0xccc: Push((int) 1)
0xccd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcce: GOTO 0xcc2

0xccf: Pop(0); Push((bool) Stack[-4] == 0)
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd1: Stack[-12] = (bool) 0
0xcd2: Return(); Pop(10)

0xcd3: Stack[-2] = (int) 0
0xcd4: Push((int) 1)
0xcd5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcd6: IF (Stack[-1] == 0) GOTO 0xcd9; Pop(1)

0xcd7: @ irand(Stack[-2], Stack[-4])
0xcd8: Pop(0)
0xcd9: Push((int) 1)
0xcda: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcdb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcdc: @@ GetProperty(Stack[-1], Stack[-2])
0xcdd: Pop(1)
0xcde: PushEmpty(bool, string)
0xcdf: Stack[-1] = Stack[-3]
0xce0: Call2 0xd03

0xce1: Stack[-14] = Stack[-2]
0xce2: Pop(2)
0xce3: Return(); Pop(10)

0xce4: PushEmpty(bool, float, float, bool, float, float)
0xce5: @ lshHasAnimation(Stack[-3], Stack[-7])
0xce6: Pop(0)
0xce7: Push(Stack[-3])
0xce8: IF (Stack[-1] == 0) GOTO 0xcef; Pop(1)

0xce9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xcea: Pop(0)
0xceb: Push((bool) 0)
0xcec: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xced: Pop(1)
0xcee: GOTO 0xcf3

0xcef: Push("Can't find lsh animation : ")
0xcf0: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcf1: @ Trace(Stack[-1])
0xcf2: Pop(1)
0xcf3: Return(); Pop(6)

0xcf4: PushEmpty(bool, float, float, bool, float, float)
0xcf5: @ lshHasAnimation(Stack[-3], Stack[-8])
0xcf6: Pop(0)
0xcf7: Push(Stack[-3])
0xcf8: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcf9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xcfa: Pop(0)
0xcfb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xcfc: Pop(0)
0xcfd: GOTO 0xd02

0xcfe: Push("Can't find lsh animation : ")
0xcff: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd00: @ Trace(Stack[-1])
0xd01: Pop(1)
0xd02: Return(); Pop(6)

0xd03: PushEmpty(bool, bool)
0xd04: PushEmpty(bool)
0xd05: Call2 0xd81

0xd06: Pop(0)
0xd07: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xd08: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd09: Pop(0)
0xd0a: Push(Stack[-1])
0xd0b: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xd0c: @ lshPlaySpeech(Stack[-3])
0xd0d: Pop(0)
0xd0e: Stack[-4] = (bool) 1
0xd0f: Return(); Pop(2)

0xd10: Stack[-4] = (bool) 0
0xd11: Return(); Pop(2)

0xd12: PushEmpty(bool)
0xd13: Call2 0xd81

0xd14: Pop(0)
0xd15: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd16: @ lshStopSpeech()
0xd17: Pop(0)
0xd18: Return(); Pop(0)

0xd19: PushEmpty(object, object)
0xd1a: @ self(Stack[-1])
0xd1b: Pop(0)
0xd1c: Stack[-3] = Stack[-1]
0xd1d: Return(); Pop(2)

0xd1e: Stack[-1] = 0
0xd1f: PushEmpty(float, float)
0xd20: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd21: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd22: Push((float)0.0)
0xd23: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd24: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd25: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd26: Return(); Pop(2)

0xd27: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd28: Return(); Pop(2)

0xd29: PushEmpty(int, int)
0xd2a: @ GetVariable(Stack[-3], Stack[-1])
0xd2b: Pop(0)
0xd2c: Stack[-4] = Stack[-1]
0xd2d: Return(); Pop(2)

0xd2e: PushEmpty(object, object, object, object)
0xd2f: @ GetMainOutdoorScene(Stack[-2])
0xd30: Pop(0)
0xd31: Push(".bin")
0xd32: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd33: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd34: Pop(1)
0xd35: Stack[-6] = Stack[-1]
0xd36: Return(); Pop(4)

0xd37: Stack[-1] = 0
0xd38: Stack[-2] = 0
0xd39: PushEmpty(object, object)
0xd3a: @ FindActor(Stack[-1], Stack[-4])
0xd3b: Pop(0)
0xd3c: Pop(0); Push((bool) Stack[-1] == 0)
0xd3d: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3e: Stack[-5] = (bool) 0
0xd3f: Return(); Pop(2)

0xd40: @ Trigger(Stack[-1], Stack[-3])
0xd41: Pop(0)
0xd42: Stack[-5] = (bool) 1
0xd43: Return(); Pop(2)

0xd44: Stack[-1] = 0
0xd45: PushEmpty(float, float)
0xd46: @ GetGameTime(Stack[-1])
0xd47: Pop(0)
0xd48: Stack[-3] = Stack[-1]
0xd49: Return(); Pop(2)

0xd4a: PushEmpty(float, float)
0xd4b: @ GetGameTime(Stack[-1])
0xd4c: Pop(0)
0xd4d: Push((int) 1)
0xd4e: PushEmpty(int)
0xd4f: Push((int) 24)
0xd50: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd51: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd52: Return(); Pop(2)

0xd53: PushEmpty(float, float)
0xd54: @ GetGameTime(Stack[-1])
0xd55: Pop(0)
0xd56: PushEmpty(int)
0xd57: Stack[-1] = Stack[-2]
0xd58: Push((int) 24)
0xd59: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xd5a: Return(); Pop(2)

0xd5b: PushEmpty()
0xd5c: PushEmpty(int)
0xd5d: Call2 0xd4a

0xd5e: Pop(0)
0xd5f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xd60: Return(); Pop(0)

0xd61: PushEmpty(string, string)
0xd62: Stack[-1] = "idle"
0xd63: Push(Stack[-3])
0xd64: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd65: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd66: Stack[-4] = Stack[-1]
0xd67: Return(); Pop(2)

0xd68: PushEmpty(int, bool, int, bool)
0xd69: Stack[-2] = (int) 0
0xd6a: Push("all")
0xd6b: PushEmpty(string, int)
0xd6c: Stack[-1] = Stack[-5]
0xd6d: Call2 0xd61

0xd6e: Pop(1)
0xd6f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd70: Pop(2)
0xd71: Pop(0); Push((bool) Stack[-1] == 0)
0xd72: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd73: GOTO 0xd77

0xd74: Push((int) 1)
0xd75: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd76: GOTO 0xd6a

0xd77: Stack[-5] = Stack[-2]
0xd78: Return(); Pop(4)

0xd79: Stack[-1] = (int) 515545
0xd7a: Return(); Pop(0)

0xd7b: Stack[-1] = (int) 502870
0xd7c: Return(); Pop(0)

0xd7d: Stack[-1] = "ui/NPC_Mat.png"
0xd7e: Return(); Pop(0)

0xd7f: Stack[-1] = "ui/NPC_Mat_b.png"
0xd80: Return(); Pop(0)

0xd81: Stack[-1] = (bool) 1
0xd82: Return(); Pop(0)

0xd83: PushEmpty(object, object)
0xd84: Push("b7q01")
0xd85: Push((int) 3)
0xd86: @ SetVariable(Stack[-2], Stack[-1])
0xd87: Pop(2)
0xd88: PushEmpty(object)
0xd89: Call2 0xfee

0xd8a: Stack[-2] = Stack[-1]
0xd8b: Pop(1)
0xd8c: Push("b7q01MatGotoPrison")
0xd8d: Push("pt_map_uprava_prison")
0xd8e: Push((int) 1)
0xd8f: Push((int) 521024)
0xd90: PushEmpty(float)
0xd91: Call2 0xd45

0xd92: Pop(0)
0xd93: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd94: Pop(5)
0xd95: PushEmpty()
0xd96: Call2 0xf50

0xd97: Pop(0)
0xd98: PushEmpty(bool, string, string)
0xd99: Stack[-2] = "quest_b7_01"
0xd9a: Stack[-1] = "init_prison"
0xd9b: Call2 0xd39

0xd9c: Pop(3)
0xd9d: Return(); Pop(2)

0xd9e: Stack[-1] = 0
0xd9f: PushEmpty()
0xda0: PushEmpty(object, string, float)
0xda1: PushEmpty(object)
0xda2: Call2 0xfee

0xda3: Stack[-4] = Stack[-1]
0xda4: Pop(1)
0xda5: Stack[-2] = "pt_map_uprava_prison"
0xda6: Stack[-1] = (int) 2
0xda7: Call2 0xfff

0xda8: Pop(3)
0xda9: PushEmpty(object)
0xdaa: Call2 0xfee

0xdab: Pop(0)
0xdac: @@ ShowMap(Stack[-1])
0xdad: Pop(1)
0xdae: Return(); Pop(0)

0xdaf: PushEmpty()
0xdb0: Push("b7q02")
0xdb1: Push((int) 1)
0xdb2: @ SetVariable(Stack[-2], Stack[-1])
0xdb3: Pop(2)
0xdb4: PushEmpty()
0xdb5: Call2 0xf5d

0xdb6: Pop(0)
0xdb7: PushEmpty()
0xdb8: Call2 0xf77

0xdb9: Pop(0)
0xdba: PushEmpty(object, string)
0xdbb: Stack[-1] = "quest_b7_02"
0xdbc: Call2 0xd2e

0xdbd: Pop(2)
0xdbe: PushEmpty(bool, string, string)
0xdbf: Stack[-2] = "quest_b7_02"
0xdc0: Stack[-1] = "init_termitnik2"
0xdc1: Call2 0xd39

0xdc2: Pop(3)
0xdc3: Return(); Pop(0)

0xdc4: PushEmpty()
0xdc5: PushEmpty()
0xdc6: Call2 0xf6a

0xdc7: Pop(0)
0xdc8: PushEmpty(bool, string, string)
0xdc9: Stack[-2] = "quest_b7_02"
0xdca: Stack[-1] = "completed"
0xdcb: Call2 0xd39

0xdcc: Pop(3)
0xdcd: Return(); Pop(0)

0xdce: PushEmpty()
0xdcf: Push("b8q01")
0xdd0: Push((int) 2)
0xdd1: @ SetVariable(Stack[-2], Stack[-1])
0xdd2: Pop(2)
0xdd3: PushEmpty()
0xdd4: Call2 0xf91

0xdd5: Pop(0)
0xdd6: PushEmpty(bool, string, string)
0xdd7: Stack[-2] = "quest_b8_01"
0xdd8: Stack[-1] = "place_klara"
0xdd9: Call2 0xd39

0xdda: Pop(3)
0xddb: Return(); Pop(0)

0xddc: PushEmpty()
0xddd: Push("b8q01")
0xdde: Push((int) 4)
0xddf: @ SetVariable(Stack[-2], Stack[-1])
0xde0: Pop(2)
0xde1: PushEmpty()
0xde2: Call2 0xf9e

0xde3: Pop(0)
0xde4: PushEmpty(bool, string, string)
0xde5: Stack[-2] = "quest_b8_01"
0xde6: Stack[-1] = "remove_klara"
0xde7: Call2 0xd39

0xde8: Pop(3)
0xde9: PushEmpty(bool, string, string)
0xdea: Stack[-2] = "quest_b8_01"
0xdeb: Stack[-1] = "unlock_boiny"
0xdec: Call2 0xd39

0xded: Pop(3)
0xdee: Return(); Pop(0)

0xdef: PushEmpty()
0xdf0: Push("b8q03")
0xdf1: Push((int) 3)
0xdf2: @ SetVariable(Stack[-2], Stack[-1])
0xdf3: Pop(2)
0xdf4: Push("b8q03MladVladIsVictim")
0xdf5: Push((int) 0)
0xdf6: @ SetVariable(Stack[-2], Stack[-1])
0xdf7: Pop(2)
0xdf8: PushEmpty()
0xdf9: Call2 0xfab

0xdfa: Pop(0)
0xdfb: Return(); Pop(0)

0xdfc: PushEmpty()
0xdfd: Push("b8q03")
0xdfe: Push((int) 3)
0xdff: @ SetVariable(Stack[-2], Stack[-1])
0xe00: Pop(2)
0xe01: Push("b8q03MladVladIsVictim")
0xe02: Push((int) 1)
0xe03: @ SetVariable(Stack[-2], Stack[-1])
0xe04: Pop(2)
0xe05: PushEmpty()
0xe06: Call2 0xfb8

0xe07: Pop(0)
0xe08: Return(); Pop(0)

0xe09: PushEmpty()
0xe0a: Push("oob10Mat1")
0xe0b: Push((int) 1)
0xe0c: @ SetVariable(Stack[-2], Stack[-1])
0xe0d: Pop(2)
0xe0e: Return(); Pop(0)

0xe0f: PushEmpty()
0xe10: Push("oob10Mat2")
0xe11: Push((int) 1)
0xe12: @ SetVariable(Stack[-2], Stack[-1])
0xe13: Pop(2)
0xe14: Return(); Pop(0)

0xe15: PushEmpty(object, object)
0xe16: Push("b10q04")
0xe17: Push((int) 1)
0xe18: @ SetVariable(Stack[-2], Stack[-1])
0xe19: Pop(2)
0xe1a: PushEmpty(object)
0xe1b: Call2 0xfee

0xe1c: Stack[-2] = Stack[-1]
0xe1d: Pop(1)
0xe1e: Push("b10q04MatGotoMorlok")
0xe1f: Push("pt_b10q04_morlok")
0xe20: Push((int) 0)
0xe21: Push((int) 530534)
0xe22: PushEmpty(float)
0xe23: Call2 0xd45

0xe24: Pop(0)
0xe25: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe26: Pop(5)
0xe27: PushEmpty()
0xe28: Call2 0xf36

0xe29: Pop(0)
0xe2a: PushEmpty()
0xe2b: Call2 0xf43

0xe2c: Pop(0)
0xe2d: PushEmpty(bool, string, string)
0xe2e: Stack[-2] = "quest_b10_04"
0xe2f: Stack[-1] = "place_morloks"
0xe30: Call2 0xd39

0xe31: Pop(3)
0xe32: Return(); Pop(2)

0xe33: Stack[-1] = 0
0xe34: PushEmpty()
0xe35: PushEmpty(object, string, float)
0xe36: PushEmpty(object)
0xe37: Call2 0xfee

0xe38: Stack[-4] = Stack[-1]
0xe39: Pop(1)
0xe3a: Stack[-2] = "pt_b10q04_morlok"
0xe3b: Stack[-1] = (int) 2
0xe3c: Call2 0xfff

0xe3d: Pop(3)
0xe3e: PushEmpty(object)
0xe3f: Call2 0xfee

0xe40: Pop(0)
0xe41: @@ ShowMap(Stack[-1])
0xe42: Pop(1)
0xe43: Return(); Pop(0)

0xe44: PushEmpty()
0xe45: Push("b10MatVisit")
0xe46: Push((int) 1)
0xe47: @ SetVariable(Stack[-2], Stack[-1])
0xe48: Pop(2)
0xe49: Return(); Pop(0)

0xe4a: PushEmpty()
0xe4b: PushEmpty()
0xe4c: Call2 0xf84

0xe4d: Pop(0)
0xe4e: PushEmpty(bool, string, string)
0xe4f: Stack[-2] = "quest_b8_01"
0xe50: Stack[-1] = "fail"
0xe51: Call2 0xd39

0xe52: Pop(3)
0xe53: Return(); Pop(0)

0xe54: PushEmpty()
0xe55: Push("oob12Mat1")
0xe56: Push((int) 1)
0xe57: @ SetVariable(Stack[-2], Stack[-1])
0xe58: Pop(2)
0xe59: Return(); Pop(0)

0xe5a: PushEmpty()
0xe5b: PushEmpty(int, string)
0xe5c: Stack[-1] = "b7q02"
0xe5d: Call2 0xd29

0xe5e: Pop(1)
0xe5f: Push((int) 0)
0xe60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe61: IF (Stack[-1] == 0) GOTO 0xe64; Pop(1)

0xe62: Stack[-2] = (bool) 1
0xe63: Return(); Pop(0)

0xe64: Stack[-2] = (bool) 0
0xe65: Return(); Pop(0)

0xe66: PushEmpty()
0xe67: PushEmpty(int, string)
0xe68: Stack[-1] = "b7q02"
0xe69: Call2 0xd29

0xe6a: Pop(1)
0xe6b: Push((int) 2)
0xe6c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe6d: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe6e: Stack[-2] = (bool) 1
0xe6f: Return(); Pop(0)

0xe70: Stack[-2] = (bool) 0
0xe71: Return(); Pop(0)

0xe72: PushEmpty()
0xe73: PushEmpty(int, string)
0xe74: Stack[-1] = "b8q01"
0xe75: Call2 0xd29

0xe76: Pop(1)
0xe77: Push((int) 1)
0xe78: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe79: IF (Stack[-1] == 0) GOTO 0xe7c; Pop(1)

0xe7a: Stack[-2] = (bool) 1
0xe7b: Return(); Pop(0)

0xe7c: Stack[-2] = (bool) 0
0xe7d: Return(); Pop(0)

0xe7e: PushEmpty()
0xe7f: PushEmpty(int, string)
0xe80: Stack[-1] = "b8q01"
0xe81: Call2 0xd29

0xe82: Pop(1)
0xe83: Push((int) 3)
0xe84: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe85: IF (Stack[-1] == 0) GOTO 0xe88; Pop(1)

0xe86: Stack[-2] = (bool) 1
0xe87: Return(); Pop(0)

0xe88: Stack[-2] = (bool) 0
0xe89: Return(); Pop(0)

0xe8a: PushEmpty()
0xe8b: PushEmpty(int, string)
0xe8c: Stack[-1] = "b8q01"
0xe8d: Call2 0xd29

0xe8e: Pop(1)
0xe8f: Push((int) 4)
0xe90: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe91: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe92: Stack[-2] = (bool) 1
0xe93: Return(); Pop(0)

0xe94: Stack[-2] = (bool) 0
0xe95: Return(); Pop(0)

0xe96: PushEmpty()
0xe97: PushEmpty(int, string)
0xe98: Stack[-1] = "b8q03"
0xe99: Call2 0xd29

0xe9a: Pop(1)
0xe9b: Push((int) 2)
0xe9c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe9d: IF (Stack[-1] == 0) GOTO 0xea0; Pop(1)

0xe9e: Stack[-2] = (bool) 1
0xe9f: Return(); Pop(0)

0xea0: Stack[-2] = (bool) 0
0xea1: Return(); Pop(0)

0xea2: PushEmpty()
0xea3: PushEmpty(int, string)
0xea4: Stack[-1] = "b10q01"
0xea5: Call2 0xd29

0xea6: Pop(1)
0xea7: Push((int) 4)
0xea8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xea9: IF (Stack[-1] == 0) GOTO 0xeac; Pop(1)

0xeaa: Stack[-2] = (bool) 1
0xeab: Return(); Pop(0)

0xeac: Stack[-2] = (bool) 0
0xead: Return(); Pop(0)

0xeae: PushEmpty()
0xeaf: PushEmpty(int, string)
0xeb0: Stack[-1] = "b10q01"
0xeb1: Call2 0xd29

0xeb2: Pop(1)
0xeb3: Push((int) 1000)
0xeb4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeb5: IF (Stack[-1] == 0) GOTO 0xeb8; Pop(1)

0xeb6: Stack[-2] = (bool) 1
0xeb7: Return(); Pop(0)

0xeb8: Stack[-2] = (bool) 0
0xeb9: Return(); Pop(0)

0xeba: PushEmpty()
0xebb: PushEmpty(int, string)
0xebc: Stack[-1] = "oob10Mat1"
0xebd: Call2 0xd29

0xebe: Pop(1)
0xebf: Push((int) 0)
0xec0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xec1: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xec2: Stack[-2] = (bool) 1
0xec3: Return(); Pop(0)

0xec4: Stack[-2] = (bool) 0
0xec5: Return(); Pop(0)

0xec6: PushEmpty()
0xec7: PushEmpty(int, string)
0xec8: Stack[-1] = "b10q04PlennikTalk"
0xec9: Call2 0xd29

0xeca: Pop(1)
0xecb: Push((int) 0)
0xecc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xecd: IF (Stack[-1] == 0) GOTO 0xed0; Pop(1)

0xece: Stack[-2] = (bool) 1
0xecf: Return(); Pop(0)

0xed0: Stack[-2] = (bool) 0
0xed1: Return(); Pop(0)

0xed2: PushEmpty()
0xed3: PushEmpty(int, string)
0xed4: Stack[-1] = "oob10Mat2"
0xed5: Call2 0xd29

0xed6: Pop(1)
0xed7: Push((int) 0)
0xed8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xed9: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xeda: Stack[-2] = (bool) 1
0xedb: Return(); Pop(0)

0xedc: Stack[-2] = (bool) 0
0xedd: Return(); Pop(0)

0xede: PushEmpty()
0xedf: PushEmpty(int, string)
0xee0: Stack[-1] = "b10q04"
0xee1: Call2 0xd29

0xee2: Pop(1)
0xee3: Push((int) 0)
0xee4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xee6: Stack[-2] = (bool) 1
0xee7: Return(); Pop(0)

0xee8: Stack[-2] = (bool) 0
0xee9: Return(); Pop(0)

0xeea: PushEmpty()
0xeeb: PushEmpty(int, string)
0xeec: Stack[-1] = "oob12Mat1"
0xeed: Call2 0xd29

0xeee: Pop(1)
0xeef: Push((int) 0)
0xef0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xef1: IF (Stack[-1] == 0) GOTO 0xef4; Pop(1)

0xef2: Stack[-2] = (bool) 1
0xef3: Return(); Pop(0)

0xef4: Stack[-2] = (bool) 0
0xef5: Return(); Pop(0)

0xef6: PushEmpty()
0xef7: PushEmpty(bool, object)
0xef8: Stack[-1] = Stack[-3]
0xef9: Call2 0xf16

0xefa: Pop(1)
0xefb: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xefc: Stack[-2] = (bool) 1
0xefd: Return(); Pop(0)

0xefe: Stack[-2] = (bool) 0
0xeff: Return(); Pop(0)

0xf00: PushEmpty()
0xf01: PushEmpty(bool, object)
0xf02: Stack[-1] = Stack[-3]
0xf03: Call2 0xf2b

0xf04: Pop(1)
0xf05: IF (Stack[-1] == 0) GOTO 0xf08; Pop(1)

0xf06: Stack[-2] = (bool) 1
0xf07: Return(); Pop(0)

0xf08: Stack[-2] = (bool) 0
0xf09: Return(); Pop(0)

0xf0a: PushEmpty()
0xf0b: PushEmpty(int, string)
0xf0c: Stack[-1] = "b7q01"
0xf0d: Call2 0xd29

0xf0e: Pop(1)
0xf0f: Push((int) 2)
0xf10: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf11: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf12: Stack[-2] = (bool) 1
0xf13: Return(); Pop(0)

0xf14: Stack[-2] = (bool) 0
0xf15: Return(); Pop(0)

0xf16: PushEmpty()
0xf17: PushEmpty(bool)
0xf18: Stack[-1] = (bool) 0
0xf19: PushEmpty(int)
0xf1a: Call2 0xd53

0xf1b: Pop(0)
0xf1c: Push((int) 6)
0xf1d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf1e: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xf1f: PushEmpty(int)
0xf20: Call2 0xd53

0xf21: Pop(0)
0xf22: Push((int) 12)
0xf23: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xf24: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xf25: Stack[-1] = (bool) 1
0xf26: IF (Stack[-1] == 0) GOTO 0xf29; Pop(1)

0xf27: Stack[-2] = (bool) 1
0xf28: Return(); Pop(0)

0xf29: Stack[-2] = (bool) 0
0xf2a: Return(); Pop(0)

0xf2b: PushEmpty()
0xf2c: PushEmpty(int)
0xf2d: Call2 0xd53

0xf2e: Pop(0)
0xf2f: Push((int) 12)
0xf30: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf31: IF (Stack[-1] == 0) GOTO 0xf34; Pop(1)

0xf32: Stack[-2] = (bool) 1
0xf33: Return(); Pop(0)

0xf34: Stack[-2] = (bool) 0
0xf35: Return(); Pop(0)

0xf36: PushEmpty(object, object)
0xf37: Push((int) 545)
0xf38: Push((int) 2)
0xf39: Push((int) 530436)
0xf3a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf3b: Pop(3)
0xf3c: PushEmpty(bool, object, int)
0xf3d: Stack[-2] = Stack[-4]
0xf3e: Stack[-1] = (int) -1
0xf3f: Call2 0xfd2

0xf40: Pop(3)
0xf41: Return(); Pop(2)

0xf42: Stack[-1] = 0
0xf43: PushEmpty(object, object)
0xf44: Push((int) 546)
0xf45: Push((int) 2)
0xf46: Push((int) 530437)
0xf47: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf48: Pop(3)
0xf49: PushEmpty(bool, object, int)
0xf4a: Stack[-2] = Stack[-4]
0xf4b: Stack[-1] = (int) 545
0xf4c: Call2 0xfd2

0xf4d: Pop(3)
0xf4e: Return(); Pop(2)

0xf4f: Stack[-1] = 0
0xf50: PushEmpty(object, object)
0xf51: Push((int) 256)
0xf52: Push((int) 1)
0xf53: Push((int) 521028)
0xf54: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf55: Pop(3)
0xf56: PushEmpty(bool, object, int)
0xf57: Stack[-2] = Stack[-4]
0xf58: Stack[-1] = (int) 253
0xf59: Call2 0xfd2

0xf5a: Pop(3)
0xf5b: Return(); Pop(2)

0xf5c: Stack[-1] = 0
0xf5d: PushEmpty(object, object)
0xf5e: Push((int) 270)
0xf5f: Push((int) 2)
0xf60: Push((int) 521214)
0xf61: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf62: Pop(3)
0xf63: PushEmpty(bool, object, int)
0xf64: Stack[-2] = Stack[-4]
0xf65: Stack[-1] = (int) -1
0xf66: Call2 0xfd2

0xf67: Pop(3)
0xf68: Return(); Pop(2)

0xf69: Stack[-1] = 0
0xf6a: PushEmpty(object, object)
0xf6b: Push((int) 273)
0xf6c: Push((int) 2)
0xf6d: Push((int) 521227)
0xf6e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf6f: Pop(3)
0xf70: PushEmpty(bool, object, int)
0xf71: Stack[-2] = Stack[-4]
0xf72: Stack[-1] = (int) 270
0xf73: Call2 0xfd2

0xf74: Pop(3)
0xf75: Return(); Pop(2)

0xf76: Stack[-1] = 0
0xf77: PushEmpty(object, object)
0xf78: Push((int) 271)
0xf79: Push((int) 2)
0xf7a: Push((int) 521215)
0xf7b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf7c: Pop(3)
0xf7d: PushEmpty(bool, object, int)
0xf7e: Stack[-2] = Stack[-4]
0xf7f: Stack[-1] = (int) 270
0xf80: Call2 0xfd2

0xf81: Pop(3)
0xf82: Return(); Pop(2)

0xf83: Stack[-1] = 0
0xf84: PushEmpty(object, object)
0xf85: Push((int) 606)
0xf86: Push((int) 1)
0xf87: Push((int) 531260)
0xf88: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf89: Pop(3)
0xf8a: PushEmpty(bool, object, int)
0xf8b: Stack[-2] = Stack[-4]
0xf8c: Stack[-1] = (int) 284
0xf8d: Call2 0xfd2

0xf8e: Pop(3)
0xf8f: Return(); Pop(2)

0xf90: Stack[-1] = 0
0xf91: PushEmpty(object, object)
0xf92: Push((int) 286)
0xf93: Push((int) 1)
0xf94: Push((int) 521457)
0xf95: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: PushEmpty(bool, object, int)
0xf98: Stack[-2] = Stack[-4]
0xf99: Stack[-1] = (int) 284
0xf9a: Call2 0xfd2

0xf9b: Pop(3)
0xf9c: Return(); Pop(2)

0xf9d: Stack[-1] = 0
0xf9e: PushEmpty(object, object)
0xf9f: Push((int) 288)
0xfa0: Push((int) 1)
0xfa1: Push((int) 521459)
0xfa2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfa3: Pop(3)
0xfa4: PushEmpty(bool, object, int)
0xfa5: Stack[-2] = Stack[-4]
0xfa6: Stack[-1] = (int) 284
0xfa7: Call2 0xfd2

0xfa8: Pop(3)
0xfa9: Return(); Pop(2)

0xfaa: Stack[-1] = 0
0xfab: PushEmpty(object, object)
0xfac: Push((int) 578)
0xfad: Push((int) 2)
0xfae: Push((int) 530658)
0xfaf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfb0: Pop(3)
0xfb1: PushEmpty(bool, object, int)
0xfb2: Stack[-2] = Stack[-4]
0xfb3: Stack[-1] = (int) 575
0xfb4: Call2 0xfd2

0xfb5: Pop(3)
0xfb6: Return(); Pop(2)

0xfb7: Stack[-1] = 0
0xfb8: PushEmpty(object, object)
0xfb9: Push((int) 579)
0xfba: Push((int) 2)
0xfbb: Push((int) 530659)
0xfbc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfbd: Pop(3)
0xfbe: PushEmpty(bool, object, int)
0xfbf: Stack[-2] = Stack[-4]
0xfc0: Stack[-1] = (int) 575
0xfc1: Call2 0xfd2

0xfc2: Pop(3)
0xfc3: Return(); Pop(2)

0xfc4: Stack[-1] = 0
0xfc5: PushEmpty(object, object)
0xfc6: @ GetDiaryRoot(Stack[-1])
0xfc7: Pop(0)
0xfc8: Pop(0); Push((bool) Stack[-1] == 0)
0xfc9: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfca: Push("Can't retrieve diary root")
0xfcb: @ Trace(Stack[-1])
0xfcc: Pop(1)
0xfcd: Stack[-3] = (bool) 0
0xfce: Return(); Pop(2)

0xfcf: Stack[-3] = Stack[-1]
0xfd0: Return(); Pop(2)

0xfd1: Stack[-1] = 0
0xfd2: PushEmpty(object, object, int, object, object, int)
0xfd3: PushEmpty(object)
0xfd4: Call2 0xfc5

0xfd5: Stack[-4] = Stack[-1]
0xfd6: Pop(1)
0xfd7: @@ Find(Stack[-7], Stack[-2])
0xfd8: Pop(0)
0xfd9: Pop(0); Push((bool) Stack[-2] == 0)
0xfda: IF (Stack[-1] == 0) GOTO 0xfe1; Pop(1)

0xfdb: Push("Can't find diary parent with id: ")
0xfdc: Pop(1); Push(Stack[-1] + Stack[-8]);
0xfdd: @ Trace(Stack[-1])
0xfde: Pop(1)
0xfdf: Stack[-9] = (bool) 0
0xfe0: Return(); Pop(6)

0xfe1: @@ AddChild(Stack[-8])
0xfe2: Pop(0)
0xfe3: Push((int) 7)
0xfe4: @ SendWorldWndMessage(Stack[-1])
0xfe5: Pop(1)
0xfe6: @@ GetCategory(Stack[-1])
0xfe7: Pop(0)
0xfe8: @ SetDiarySection(Stack[-1])
0xfe9: Pop(0)
0xfea: Stack[-9] = (bool) 0
0xfeb: Return(); Pop(6)

0xfec: Stack[-2] = 0
0xfed: Stack[-3] = 0
0xfee: PushEmpty(object, object, object, object)
0xfef: @ GetMainOutdoorScene(Stack[-2])
0xff0: Pop(0)
0xff1: Pop(0); Push((bool) Stack[-2] == 0)
0xff2: IF (Stack[-1] == 0) GOTO 0xff9; Pop(1)

0xff3: Push("Can't find main outdoor scene")
0xff4: @ Trace(Stack[-1])
0xff5: Pop(1)
0xff6: Stack[-1] = 0
0xff7: Stack[-5] = Stack[-1]
0xff8: Return(); Pop(4)

0xff9: @@ GetMap(Stack[-1])
0xffa: Pop(0)
0xffb: Stack[-5] = Stack[-1]
0xffc: Return(); Pop(4)

0xffd: Stack[-1] = 0
0xffe: Stack[-2] = 0
0xfff: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1000: @ GetMainOutdoorScene(Stack[-2])
0x1001: Pop(0)
0x1002: Pop(0); Push((bool) Stack[-2] == 0)
0x1003: IF (Stack[-1] == 0) GOTO 0x1008; Pop(1)

0x1004: Push("Can't find main outdoor scene")
0x1005: @ Trace(Stack[-1])
0x1006: Pop(1)
0x1007: Return(); Pop(8)

0x1008: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1009: Pop(0)
0x100a: Pop(0); Push((bool) Stack[-1] == 0)
0x100b: IF (Stack[-1] == 0) GOTO 0x1012; Pop(1)

0x100c: Push("Warning: outdoor scene locator ")
0x100d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x100e: Push(" doesnt exist")
0x100f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1010: @ Trace(Stack[-1])
0x1011: Pop(1)
0x1012: @@ GetMap(Stack[-11])
0x1013: Pop(0)
0x1014: Pop(0); Push((bool) Stack[-11] == 0)
0x1015: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1016: Push("Can't find map")
0x1017: @ Trace(Stack[-1])
0x1018: Pop(1)
0x1019: Return(); Pop(8)

0x101a: Push(CvectorIndex(Stack[-4], 0))
0x101b: Push(CvectorIndex(Stack[-5], 2))
0x101c: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x101d: Pop(2)
0x101e: Return(); Pop(8)

0x101f: Stack[-2] = 0
0x1020: PushEmpty(int, int)
0x1021: Push("branch")
0x1022: @ GetVariable(Stack[-1], Stack[-2])
0x1023: Pop(1)
0x1024: Push((int) 0)
0x1025: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1026: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1027: Stack[-3] = (int) 1
0x1028: Return(); Pop(2)

0x1029: GOTO 0x102f

0x102a: Push((int) 1)
0x102b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102c: IF (Stack[-1] == 0) GOTO 0x102f; Pop(1)

0x102d: Stack[-3] = (int) 2
0x102e: Return(); Pop(2)

0x102f: Stack[-3] = (int) 3
0x1030: Return(); Pop(2)

0x1031: PushEmpty(int, int)
0x1032: Push("mt_mat")
0x1033: @ GetVariable(Stack[-1], Stack[-2])
0x1034: Pop(1)
0x1035: Pop(0); Push((bool) Stack[-1] == 0)
0x1036: IF (Stack[-1] == 0) GOTO 0x1041; Pop(1)

0x1037: PushEmpty(int, object)
0x1038: Stack[-1] = Stack[-5]
0x1039: Push(-2, 1); TaskCall(0)
0x103a: Call2 0x0

0x103b: Pop(-2, 1); TaskReturn
0x103c: Pop(2)
0x103d: Push("mt_mat")
0x103e: Push((int) 1)
0x103f: @ SetVariable(Stack[-2], Stack[-1])
0x1040: Pop(2)
0x1041: PushEmpty(bool, int)
0x1042: Stack[-1] = (int) 7
0x1043: Call2 0xd5b

0x1044: Pop(1)
0x1045: IF (Stack[-1] == 0) GOTO 0x104d; Pop(1)

0x1046: PushEmpty(int, object)
0x1047: Stack[-1] = Stack[-5]
0x1048: Push(-2, 1); TaskCall(2)
0x1049: Call2 0x134

0x104a: Pop(-2, 1); TaskReturn
0x104b: Pop(2)
0x104c: Return(); Pop(2)

0x104d: PushEmpty(bool, int)
0x104e: Stack[-1] = (int) 8
0x104f: Call2 0xd5b

0x1050: Pop(1)
0x1051: IF (Stack[-1] == 0) GOTO 0x1059; Pop(1)

0x1052: PushEmpty(int, object)
0x1053: Stack[-1] = Stack[-5]
0x1054: Push(-2, 1); TaskCall(4)
0x1055: Call2 0x320

0x1056: Pop(-2, 1); TaskReturn
0x1057: Pop(2)
0x1058: Return(); Pop(2)

0x1059: PushEmpty(bool, int)
0x105a: Stack[-1] = (int) 10
0x105b: Call2 0xd5b

0x105c: Pop(1)
0x105d: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x105e: PushEmpty(int, object)
0x105f: Stack[-1] = Stack[-5]
0x1060: Push(-2, 1); TaskCall(6)
0x1061: Call2 0x5fb

0x1062: Pop(-2, 1); TaskReturn
0x1063: Pop(2)
0x1064: Return(); Pop(2)

0x1065: PushEmpty(bool, int)
0x1066: Stack[-1] = (int) 12
0x1067: Call2 0xd5b

0x1068: Pop(1)
0x1069: IF (Stack[-1] == 0) GOTO 0x1071; Pop(1)

0x106a: PushEmpty(int, object)
0x106b: Stack[-1] = Stack[-5]
0x106c: Push(-2, 1); TaskCall(8)
0x106d: Call2 0x8d5

0x106e: Pop(-2, 1); TaskReturn
0x106f: Pop(2)
0x1070: Return(); Pop(2)

0x1071: PushEmpty(int, object)
0x1072: Stack[-1] = Stack[-5]
0x1073: Push(-2, 1); TaskCall(10)
0x1074: Call2 0xa18

0x1075: Pop(-2, 1); TaskReturn
0x1076: Pop(2)
0x1077: Return(); Pop(2)

