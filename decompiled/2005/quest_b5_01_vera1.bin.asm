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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	b5q01TalkToVera
	b5q01PlaceButchers
	b5q01GathererWife
	pt_gatherer3
	AddMark
	quest_b5_01
	place_butchers
	oob5Vera1_1
	b5q01VeraGotoStvorki
	pt_b5q01_vera
	vera_stvorki
	ShowMap
	b5q01
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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x238
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb1 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x23e Vars = (object)
		EVENT_26 Op = 0x26f Vars = (string)
		EVENT_6 Op = 0x277 Vars = ()
		EVENT_7 Op = 0x2b8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x340

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x524

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x522

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x526

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x528

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x511

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x384

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x9b

0x53: Pop(1)
0x54: Push((int) 518626)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool)
0x5c: Stack[-1] = (bool) 0
0x5d: PushEmpty(bool, object)
0x5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Call2 0x47c

0x60: Pop(1)
0x61: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x488

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x67: Stack[-1] = (bool) 1
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x472

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 518627)
0x71: Push((int) 19969)
0x72: Push((int) 19719)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: Push((int) 518632)
0x76: Push((int) -1)
0x77: Push((int) 19724)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: GOTO 0x7d

0x7b: Return(); Pop(0)

0x7c: GOTO 0x4e

0x7d: PushEmpty(bool)
0x7e: Call2 0x52a

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x81: @ lshWaitForAnimEnd()
0x82: Pop(0)
0x83: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: GOTO 0x8b

0x86: PushEmpty(string)
0x87: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88: Call2 0x395

0x89: Pop(1)
0x8a: GOTO 0x81

0x8b: GOTO 0x9a

0x8c: Push("all")
0x8d: Push("idle")
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ WaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: GOTO 0x90

0x9a: Return(); Pop(0)

0x9b: PushEmpty()
0x9c: PushEmpty(bool)
0x9d: Call2 0x52a

0x9e: Pop(0)
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: PushEmpty(string, bool)
0xa6: Stack[-2] = Stack[-3]
0xa7: Push("")
0xa8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xaa: Stack[-1] = (bool) 0
0xab: GOTO 0xad

0xac: Stack[-1] = (bool) 1
0xad: Call2 0x3a5

0xae: Pop(2)
0xaf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Push((int) 1)
0xb3: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0x3bf

0xb6: Pop(0)
0xb7: Push((int) 19719)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x432

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x40c

0xc3: Pop(2)
0xc4: Push((int) 19992)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x412

0xcb: Pop(2)
0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x438

0xd0: Pop(2)
0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x44d

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x452

0xda: Pop(2)
0xdb: Push((int) 19723)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x412

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x438

0xe7: Pop(2)
0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x44d

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x462

0xf1: Pop(2)
0xf2: Push((int) 19990)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x412

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x438

0xfe: Pop(2)
0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x44d

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x452

0x108: Pop(2)
0x109: Push((int) 19989)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x412

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x438

0x115: Pop(2)
0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x452

0x11a: Pop(2)
0x11b: Push((int) 19718)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Neutral"
0x120: Call2 0x9b

0x121: Pop(1)
0x122: Push((int) 518626)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: PushEmpty(bool)
0x128: Stack[-1] = (bool) 0
0x129: PushEmpty(bool)
0x12a: Stack[-1] = (bool) 0
0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0x47c

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x132: Call2 0x488

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: Stack[-1] = (bool) 1
0x136: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x472

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Stack[-1] = (bool) 1
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: Push((int) 518627)
0x13f: Push((int) 19969)
0x140: Push((int) 19719)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Push((int) 518632)
0x144: Push((int) -1)
0x145: Push((int) 19724)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 19965)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14c: Push((int) 19967)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0x9b

0x152: Pop(1)
0x153: Push((int) 518860)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 518861)
0x159: Push((int) -1)
0x15a: Push((int) 19968)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Push((int) 19969)
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call2 0x9b

0x164: Pop(1)
0x165: Push((int) 518862)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: Push((int) 518863)
0x16b: Push((int) 19971)
0x16c: Push((int) 19970)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Push((int) 518865)
0x170: Push((int) 19973)
0x171: Push((int) 19972)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 19973)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral"
0x17a: Call2 0x9b

0x17b: Pop(1)
0x17c: Push((int) 518866)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 518868)
0x182: Push((int) 19978)
0x183: Push((int) 19975)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 19971)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral"
0x18c: Call2 0x9b

0x18d: Pop(1)
0x18e: Push((int) 518864)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: Push((int) 518867)
0x194: Push((int) 19976)
0x195: Push((int) 19974)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 19976)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral"
0x19e: Call2 0x9b

0x19f: Pop(1)
0x1a0: Push((int) 518869)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: Push((int) 518870)
0x1a6: Push((int) 19978)
0x1a7: Push((int) 19977)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 19978)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0x9b

0x1b1: Pop(1)
0x1b2: Push((int) 518871)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 518872)
0x1b8: Push((int) 19982)
0x1b9: Push((int) 19980)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Push((int) 518873)
0x1bd: Push((int) 19982)
0x1be: Push((int) 19981)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 19982)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call2 0x9b

0x1c8: Pop(1)
0x1c9: Push((int) 518874)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 518875)
0x1cf: Push((int) 19985)
0x1d0: Push((int) 19984)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 19985)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral"
0x1d9: Call2 0x9b

0x1da: Pop(1)
0x1db: Push((int) 518876)
0x1dc: @@ SetMessage(Stack[-1])
0x1dd: Pop(1)
0x1de: @@ ClearReplies()
0x1df: Pop(0)
0x1e0: Push((int) 518877)
0x1e1: Push((int) 19987)
0x1e2: Push((int) 19986)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Push((int) 518880)
0x1e6: Push((int) -1)
0x1e7: Push((int) 19989)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 19987)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call2 0x9b

0x1f1: Pop(1)
0x1f2: Push((int) 518878)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 518879)
0x1f8: Push((int) 19991)
0x1f9: Push((int) 19988)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 518881)
0x1fd: Push((int) -1)
0x1fe: Push((int) 19990)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 19991)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral"
0x207: Call2 0x9b

0x208: Pop(1)
0x209: Push((int) 518882)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 518883)
0x20f: Push((int) -1)
0x210: Push((int) 19992)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 518884)
0x214: Push((int) 19994)
0x215: Push((int) 19993)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 19994)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral"
0x21e: Call2 0x9b

0x21f: Pop(1)
0x220: Push((int) 518885)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 518631)
0x226: Push((int) -1)
0x227: Push((int) 19723)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22c: PushEmpty(bool)
0x22d: Call2 0x52a

0x22e: Pop(0)
0x22f: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x230: @ lshStopAnimation()
0x231: Pop(0)
0x232: GOTO 0x235

0x233: @ StopAnimation()
0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: GOTO 0xb2

0x237: Return(); Pop(0)

0x238: PushEmpty(float, float)
0x239: Stack[-2] = (int) 300
0x23a: Stack[-1] = (int) 100
0x23b: Call2 0x249

0x23c: Pop(2)
0x23d: Return(); Pop(0)

0x23e: PushEmpty()
0x23f: PushEmpty()
0x240: Call2 0x2cf

0x241: Pop(0)
0x242: PushEmpty(int, object)
0x243: Stack[-1] = Stack[-3]
0x244: Push(-2, 1); TaskCall(0)
0x245: Call2 0x0

0x246: Pop(-2, 1); TaskReturn
0x247: Pop(2)
0x248: Return(); Pop(0)

0x249: PushEmpty(float, bool, float, bool)
0x24a: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x24b: Push((int) 3)
0x24c: @ rand(Stack[-3], Stack[-1])
0x24d: Pop(1)
0x24e: Push((int) 3)
0x24f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x250: @ Sleep(Stack[-1], Stack[-2])
0x251: Pop(1)
0x252: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x253: PushEmpty(float, float)
0x254: Stack[-2] = Stack[-8]
0x255: Stack[-1] = Stack[-7]
0x256: Call2 0x28e

0x257: Pop(2)
0x258: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x259: GOTO 0x24b

0x25a: Return(); Pop(4)

0x25b: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x25c: PushEmpty(bool)
0x25d: Stack[-1] = (bool) 0
0x25e: PushEmpty(bool)
0x25f: Call2 0x33b

0x260: Pop(0)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x263: PushEmpty(bool)
0x264: Call2 0x28c

0x265: Pop(0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Stack[-1] = (bool) 1
0x268: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x269: PushEmpty(object)
0x26a: Call2 0x3c6

0x26b: Pop(0)
0x26c: @ RemoveActor(Stack[-1])
0x26d: Pop(1)
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Push("cleanup")
0x271: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x273: PushEmpty()
0x274: Call2 0x25b

0x275: Pop(0)
0x276: Return(); Pop(0)

0x277: Push( Stack[6 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x279: PushEmpty()
0x27a: Call2 0x2cf

0x27b: Pop(0)
0x27c: PushEmpty(bool)
0x27d: Stack[-1] = (bool) 0
0x27e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: PushEmpty(bool)
0x281: Call2 0x28c

0x282: Pop(0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: Stack[-1] = (bool) 1
0x285: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x286: PushEmpty(object)
0x287: Call2 0x3c6

0x288: Pop(0)
0x289: @ RemoveActor(Stack[-1])
0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: Stack[-1] = (bool) 1
0x28d: Return(); Pop(0)

0x28e: PushEmpty()
0x28f: PushEmpty(bool)
0x290: Call2 0x33b

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(0)

0x295: Push("player")
0x296: @ FindActor(Stack[-4], Stack[-1])
0x297: Pop(1)
0x298: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x299: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x29b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x29c: Push((int) 10)
0x29d: Push((float)1.0)
0x29e: @ SetTimer(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: PushEmpty()
0x2a1: Call2 0x2dd

0x2a2: Pop(0)
0x2a3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a5: Push((int) 10)
0x2a6: @ KillTimer(Stack[-1])
0x2a7: Pop(1)
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(float, float)
0x2aa: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-3] = (bool) 0
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(float, object)
0x2af: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2b0: Call2 0x333

0x2b1: Pop(1)
0x2b2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2b3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2b6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2b7: Return(); Pop(2)

0x2b8: PushEmpty()
0x2b9: Push((int) 10)
0x2ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2bc: PushEmpty(bool)
0x2bd: Call2 0x2a9

0x2be: Pop(0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c2: PushEmpty(object)
0x2c3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2c4: Call2 0x3b4

0x2c5: Pop(1)
0x2c6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2c7: GOTO 0x2ce

0x2c8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2c9: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Call2 0x32e

0x2d1: Pop(0)
0x2d2: Push((int) 10)
0x2d3: @ KillTimer(Stack[-1])
0x2d4: Pop(1)
0x2d5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2d6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d7: Push("head")
0x2d8: @ UnlookAsync(Stack[-1])
0x2d9: Pop(1)
0x2da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2db: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2de: @ WaitForAnimEnd()
0x2df: Pop(0)
0x2e0: PushEmpty(bool)
0x2e1: Call2 0x33b

0x2e2: Pop(0)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Return(); Pop(14)

0x2e6: PushEmpty(int)
0x2e7: Call2 0x3fb

0x2e8: Stack[-8] = Stack[-1]
0x2e9: Pop(1)
0x2ea: Stack[-6] = (int) 0
0x2eb: PushEmpty(bool)
0x2ec: Stack[-1] = (bool) 0
0x2ed: Push((int) 5)
0x2ee: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(bool)
0x2f1: Call2 0x33b

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = (bool) 1
0x2f5: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x2f6: Push((int) 3)
0x2f7: @ irand(Stack[-6], Stack[-1])
0x2f8: Pop(1)
0x2f9: Push((int) 0)
0x2fa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2fc: Push(Stack[-7])
0x2fd: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2fe: @ irand(Stack[-4], Stack[-7])
0x2ff: Pop(0)
0x300: Push("all")
0x301: PushEmpty(string, int)
0x302: Stack[-1] = Stack[-7]
0x303: Call2 0x3f4

0x304: Pop(1)
0x305: @ PlayAnimation(Stack[-2], Stack[-1])
0x306: Pop(2)
0x307: @ WaitForAnimEnd(Stack[-3])
0x308: Pop(0)
0x309: Pop(0); Push((bool) Stack[-3] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x329

0x30c: GOTO 0x31e

0x30d: Push((int) 1)
0x30e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x310: Push((int) 4)
0x311: @ rand(Stack[-3], Stack[-1])
0x312: Pop(1)
0x313: Push((int) 1)
0x314: Pop(1); Push(Stack[-3] + Stack[-1]);
0x315: @ Sleep(Stack[-1], Stack[-2])
0x316: Pop(1)
0x317: Pop(0); Push((bool) Stack[-1] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: GOTO 0x329

0x31a: GOTO 0x31e

0x31b: Push(Stack[-6])
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x329

0x31e: PushEmpty(bool)
0x31f: Call2 0x32c

0x320: Pop(0)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x329

0x324: @ ResetAAS()
0x325: Pop(0)
0x326: Push((int) 1)
0x327: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x328: GOTO 0x2eb

0x329: @ ResetAAS()
0x32a: Pop(0)
0x32b: Return(); Pop(14)

0x32c: Stack[-1] = (bool) 1
0x32d: Return(); Pop(0)

0x32e: @ StopAnimation()
0x32f: Pop(0)
0x330: @ StopGroup0()
0x331: Pop(0)
0x332: Return(); Pop(0)

0x333: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x334: @ GetPosition(Stack[-3])
0x335: Pop(0)
0x336: @@ GetPosition(Stack[-2])
0x337: Pop(0)
0x338: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x339: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x33a: Return(); Pop(6)

0x33b: PushEmpty(bool, bool)
0x33c: @ IsLoaded(Stack[-1])
0x33d: Pop(0)
0x33e: Stack[-3] = Stack[-1]
0x33f: Return(); Pop(2)

0x340: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x341: @@ GetPosition(Stack[-8])
0x342: Pop(0)
0x343: @@ GetEyesHeight(Stack[-9])
0x344: Pop(0)
0x345: Push(CvectorIndex(Stack[-8], 1))
0x346: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x347: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x348: @ GetPosition(Stack[-7])
0x349: Pop(0)
0x34a: @ GetEyesHeight(Stack[-9])
0x34b: Pop(0)
0x34c: Push(CvectorIndex(Stack[-7], 1))
0x34d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x34e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x34f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x350: Push(CvectorIndex(Stack[-6], 1))
0x351: Stack[-1] = (int) 0
0x352: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x353: Pop(0); Push(Stack[-6] | Stack[-6]);
0x354: Pop(1); Push(Sqrt(Stack[-1]))
0x355: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x356: Stack[-5] = -Stack[-6]; Pop(0);
0x357: Pop(0); Push(Stack[-6] * Stack[-19]);
0x358: PushEmpty(cvector, cvector)
0x359: Push(CVector(0.0, 1.0, 0.0))
0x35a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x35b: Call2 0x3cc

0x35c: Pop(1)
0x35d: Push((int) 25)
0x35e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x35f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x360: Push(CVector(0.0, 10.0, 0.0))
0x361: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x362: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x363: @ IsOverrideActive(Stack[-2])
0x364: Pop(0)
0x365: Push(Stack[-2])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-21] = (bool) 0
0x368: Return(); Pop(18)

0x369: @ StopWorld()
0x36a: Pop(0)
0x36b: @ CameraTransit(Stack[-3], Stack[-5])
0x36c: Pop(0)
0x36d: Push(CvectorIndex(Stack[-4], 0))
0x36e: Push(CvectorIndex(Stack[-5], 2))
0x36f: @ Rotate(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: PushEmpty(bool)
0x372: Call2 0x52a

0x373: Pop(0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x37e

0x376: Push("head")
0x377: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x378: Pop(1)
0x379: Push(Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37b: Push("head")
0x37c: @ LookAsyncCamera(Stack[-1])
0x37d: Pop(1)
0x37e: @ CameraWaitForPlayFinish()
0x37f: Pop(0)
0x380: @ ResumeWorld()
0x381: Pop(0)
0x382: Stack[-21] = (bool) 1
0x383: Return(); Pop(18)

0x384: PushEmpty(bool, bool)
0x385: @ CameraSwitchToNormal()
0x386: Pop(0)
0x387: PushEmpty(bool)
0x388: Call2 0x52a

0x389: Pop(0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: GOTO 0x394

0x38c: Push("head")
0x38d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38e: Pop(1)
0x38f: Push(Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: Push("head")
0x392: @ UnlookAsync(Stack[-1])
0x393: Pop(1)
0x394: Return(); Pop(2)

0x395: PushEmpty(bool, float, float, bool, float, float)
0x396: @ lshHasAnimation(Stack[-3], Stack[-7])
0x397: Pop(0)
0x398: Push(Stack[-3])
0x399: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x39b: Pop(0)
0x39c: Push((bool) 0)
0x39d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(1)
0x39f: GOTO 0x3a4

0x3a0: Push("Can't find lsh animation : ")
0x3a1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a2: @ Trace(Stack[-1])
0x3a3: Pop(1)
0x3a4: Return(); Pop(6)

0x3a5: PushEmpty(bool, float, float, bool, float, float)
0x3a6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3a7: Pop(0)
0x3a8: Push(Stack[-3])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3aa: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3ab: Pop(0)
0x3ac: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3ad: Pop(0)
0x3ae: GOTO 0x3b3

0x3af: Push("Can't find lsh animation : ")
0x3b0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3b1: @ Trace(Stack[-1])
0x3b2: Pop(1)
0x3b3: Return(); Pop(6)

0x3b4: PushEmpty(float, cvector, float, cvector)
0x3b5: @@ GetEyesHeight(Stack[-2])
0x3b6: Pop(0)
0x3b7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3b8: Push(CvectorIndex(Stack[-1], 1))
0x3b9: Stack[-1] = Stack[-3]
0x3ba: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3bb: Push("head")
0x3bc: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3bd: Pop(1)
0x3be: Return(); Pop(4)

0x3bf: PushEmpty(bool)
0x3c0: Call2 0x52a

0x3c1: Pop(0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: @ lshStopSpeech()
0x3c4: Pop(0)
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty(object, object)
0x3c7: @ self(Stack[-1])
0x3c8: Pop(0)
0x3c9: Stack[-3] = Stack[-1]
0x3ca: Return(); Pop(2)

0x3cb: Stack[-1] = 0
0x3cc: PushEmpty(float, float)
0x3cd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3ce: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3cf: Push((float)0.0)
0x3d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3d3: Return(); Pop(2)

0x3d4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3d5: Return(); Pop(2)

0x3d6: PushEmpty(int, int)
0x3d7: @ GetVariable(Stack[-3], Stack[-1])
0x3d8: Pop(0)
0x3d9: Stack[-4] = Stack[-1]
0x3da: Return(); Pop(2)

0x3db: PushEmpty(object, object)
0x3dc: @ FindActor(Stack[-1], Stack[-4])
0x3dd: Pop(0)
0x3de: Pop(0); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-5] = (bool) 0
0x3e1: Return(); Pop(2)

0x3e2: @ Trigger(Stack[-1], Stack[-3])
0x3e3: Pop(0)
0x3e4: Stack[-5] = (bool) 1
0x3e5: Return(); Pop(2)

0x3e6: Stack[-1] = 0
0x3e7: PushEmpty(float, float)
0x3e8: @ GetGameTime(Stack[-1])
0x3e9: Pop(0)
0x3ea: Stack[-3] = Stack[-1]
0x3eb: Return(); Pop(2)

0x3ec: PushEmpty(float, float)
0x3ed: @ GetGameTime(Stack[-1])
0x3ee: Pop(0)
0x3ef: PushEmpty(int)
0x3f0: Stack[-1] = Stack[-2]
0x3f1: Push((int) 24)
0x3f2: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty(string, string)
0x3f5: Stack[-1] = "idle"
0x3f6: Push(Stack[-3])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3f9: Stack[-4] = Stack[-1]
0x3fa: Return(); Pop(2)

0x3fb: PushEmpty(int, bool, int, bool)
0x3fc: Stack[-2] = (int) 0
0x3fd: Push("all")
0x3fe: PushEmpty(string, int)
0x3ff: Stack[-1] = Stack[-5]
0x400: Call2 0x3f4

0x401: Pop(1)
0x402: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: Pop(0); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: GOTO 0x40a

0x407: Push((int) 1)
0x408: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x409: GOTO 0x3fd

0x40a: Stack[-5] = Stack[-2]
0x40b: Return(); Pop(4)

0x40c: PushEmpty()
0x40d: Push("b5q01TalkToVera")
0x40e: Push((int) 1)
0x40f: @ SetVariable(Stack[-2], Stack[-1])
0x410: Pop(2)
0x411: Return(); Pop(0)

0x412: PushEmpty(object, object)
0x413: PushEmpty(int, string)
0x414: Stack[-1] = "b5q01PlaceButchers"
0x415: Call2 0x3d6

0x416: Pop(1)
0x417: Push((int) 0)
0x418: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x41a: Push("b5q01PlaceButchers")
0x41b: Push((int) 1)
0x41c: @ SetVariable(Stack[-2], Stack[-1])
0x41d: Pop(2)
0x41e: PushEmpty(object)
0x41f: Call2 0x4df

0x420: Stack[-2] = Stack[-1]
0x421: Pop(1)
0x422: Push("b5q01GathererWife")
0x423: Push("pt_gatherer3")
0x424: Push((int) 1)
0x425: Push((int) 530181)
0x426: PushEmpty(float)
0x427: Call2 0x3e7

0x428: Pop(0)
0x429: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x42a: Pop(5)
0x42b: PushEmpty(bool, string, string)
0x42c: Stack[-2] = "quest_b5_01"
0x42d: Stack[-1] = "place_butchers"
0x42e: Call2 0x3db

0x42f: Pop(3)
0x430: Stack[-1] = 0
0x431: Return(); Pop(2)

0x432: PushEmpty()
0x433: Push("oob5Vera1_1")
0x434: Push((int) 1)
0x435: @ SetVariable(Stack[-2], Stack[-1])
0x436: Pop(2)
0x437: Return(); Pop(0)

0x438: PushEmpty(object, object)
0x439: PushEmpty(object)
0x43a: Call2 0x4df

0x43b: Stack[-2] = Stack[-1]
0x43c: Pop(1)
0x43d: Push("b5q01VeraGotoStvorki")
0x43e: Push("pt_b5q01_vera")
0x43f: Push((int) 1)
0x440: Push((int) 519747)
0x441: PushEmpty(float)
0x442: Call2 0x3e7

0x443: Pop(0)
0x444: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(5)
0x446: PushEmpty(bool, string, string)
0x447: Stack[-2] = "quest_b5_01"
0x448: Stack[-1] = "vera_stvorki"
0x449: Call2 0x3db

0x44a: Pop(3)
0x44b: Return(); Pop(2)

0x44c: Stack[-1] = 0
0x44d: PushEmpty()
0x44e: PushEmpty()
0x44f: Call2 0x4a9

0x450: Pop(0)
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: PushEmpty(object, string, float)
0x454: PushEmpty(object)
0x455: Call2 0x4df

0x456: Stack[-4] = Stack[-1]
0x457: Pop(1)
0x458: Stack[-2] = "pt_gatherer3"
0x459: Stack[-1] = (int) 2
0x45a: Call2 0x4f0

0x45b: Pop(3)
0x45c: PushEmpty(object)
0x45d: Call2 0x4df

0x45e: Pop(0)
0x45f: @@ ShowMap(Stack[-1])
0x460: Pop(1)
0x461: Return(); Pop(0)

0x462: PushEmpty()
0x463: PushEmpty(object, string, float)
0x464: PushEmpty(object)
0x465: Call2 0x4df

0x466: Stack[-4] = Stack[-1]
0x467: Pop(1)
0x468: Stack[-2] = "pt_b5q01_vera"
0x469: Stack[-1] = (int) 2
0x46a: Call2 0x4f0

0x46b: Pop(3)
0x46c: PushEmpty(object)
0x46d: Call2 0x4df

0x46e: Pop(0)
0x46f: @@ ShowMap(Stack[-1])
0x470: Pop(1)
0x471: Return(); Pop(0)

0x472: PushEmpty()
0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[-3]
0x475: Call2 0x494

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-2] = (bool) 1
0x479: Return(); Pop(0)

0x47a: Stack[-2] = (bool) 0
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: PushEmpty(int, string)
0x47e: Stack[-1] = "b5q01"
0x47f: Call2 0x3d6

0x480: Pop(1)
0x481: Push((int) 1)
0x482: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-2] = (bool) 1
0x485: Return(); Pop(0)

0x486: Stack[-2] = (bool) 0
0x487: Return(); Pop(0)

0x488: PushEmpty()
0x489: PushEmpty(int, string)
0x48a: Stack[-1] = "oob5Vera1_1"
0x48b: Call2 0x3d6

0x48c: Pop(1)
0x48d: Push((int) 0)
0x48e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: Stack[-2] = (bool) 1
0x491: Return(); Pop(0)

0x492: Stack[-2] = (bool) 0
0x493: Return(); Pop(0)

0x494: PushEmpty()
0x495: PushEmpty(bool)
0x496: Stack[-1] = (bool) 0
0x497: PushEmpty(int)
0x498: Call2 0x3ec

0x499: Pop(0)
0x49a: Push((int) 0)
0x49b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49d: PushEmpty(int)
0x49e: Call2 0x3ec

0x49f: Pop(0)
0x4a0: Push((int) 20)
0x4a1: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: Stack[-1] = (bool) 1
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: Stack[-2] = (bool) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty(object, object)
0x4aa: Push((int) 389)
0x4ab: Push((int) 1)
0x4ac: Push((int) 525828)
0x4ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: PushEmpty(bool, object, int)
0x4b0: Stack[-2] = Stack[-4]
0x4b1: Stack[-1] = (int) 238
0x4b2: Call2 0x4c3

0x4b3: Pop(3)
0x4b4: Return(); Pop(2)

0x4b5: Stack[-1] = 0
0x4b6: PushEmpty(object, object)
0x4b7: @ GetDiaryRoot(Stack[-1])
0x4b8: Pop(0)
0x4b9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bb: Push("Can't retrieve diary root")
0x4bc: @ Trace(Stack[-1])
0x4bd: Pop(1)
0x4be: Stack[-3] = (bool) 0
0x4bf: Return(); Pop(2)

0x4c0: Stack[-3] = Stack[-1]
0x4c1: Return(); Pop(2)

0x4c2: Stack[-1] = 0
0x4c3: PushEmpty(object, object, int, object, object, int)
0x4c4: PushEmpty(object)
0x4c5: Call2 0x4b6

0x4c6: Stack[-4] = Stack[-1]
0x4c7: Pop(1)
0x4c8: @@ Find(Stack[-7], Stack[-2])
0x4c9: Pop(0)
0x4ca: Pop(0); Push((bool) Stack[-2] == 0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cc: Push("Can't find diary parent with id: ")
0x4cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ce: @ Trace(Stack[-1])
0x4cf: Pop(1)
0x4d0: Stack[-9] = (bool) 0
0x4d1: Return(); Pop(6)

0x4d2: @@ AddChild(Stack[-8])
0x4d3: Pop(0)
0x4d4: Push((int) 7)
0x4d5: @ SendWorldWndMessage(Stack[-1])
0x4d6: Pop(1)
0x4d7: @@ GetCategory(Stack[-1])
0x4d8: Pop(0)
0x4d9: @ SetDiarySection(Stack[-1])
0x4da: Pop(0)
0x4db: Stack[-9] = (bool) 0
0x4dc: Return(); Pop(6)

0x4dd: Stack[-2] = 0
0x4de: Stack[-3] = 0
0x4df: PushEmpty(object, object, object, object)
0x4e0: @ GetMainOutdoorScene(Stack[-2])
0x4e1: Pop(0)
0x4e2: Pop(0); Push((bool) Stack[-2] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e4: Push("Can't find main outdoor scene")
0x4e5: @ Trace(Stack[-1])
0x4e6: Pop(1)
0x4e7: Stack[-1] = 0
0x4e8: Stack[-5] = Stack[-1]
0x4e9: Return(); Pop(4)

0x4ea: @@ GetMap(Stack[-1])
0x4eb: Pop(0)
0x4ec: Stack[-5] = Stack[-1]
0x4ed: Return(); Pop(4)

0x4ee: Stack[-1] = 0
0x4ef: Stack[-2] = 0
0x4f0: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4f1: @ GetMainOutdoorScene(Stack[-2])
0x4f2: Pop(0)
0x4f3: Pop(0); Push((bool) Stack[-2] == 0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f5: Push("Can't find main outdoor scene")
0x4f6: @ Trace(Stack[-1])
0x4f7: Pop(1)
0x4f8: Return(); Pop(8)

0x4f9: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x4fa: Pop(0)
0x4fb: Pop(0); Push((bool) Stack[-1] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fd: Push("Warning: outdoor scene locator ")
0x4fe: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4ff: Push(" doesnt exist")
0x500: Pop(2); Push(Stack[-2] + Stack[-1]);
0x501: @ Trace(Stack[-1])
0x502: Pop(1)
0x503: @@ GetMap(Stack[-11])
0x504: Pop(0)
0x505: Pop(0); Push((bool) Stack[-11] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x507: Push("Can't find map")
0x508: @ Trace(Stack[-1])
0x509: Pop(1)
0x50a: Return(); Pop(8)

0x50b: Push(CvectorIndex(Stack[-4], 0))
0x50c: Push(CvectorIndex(Stack[-5], 2))
0x50d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x50e: Pop(2)
0x50f: Return(); Pop(8)

0x510: Stack[-2] = 0
0x511: PushEmpty(int, int)
0x512: Push("branch")
0x513: @ GetVariable(Stack[-1], Stack[-2])
0x514: Pop(1)
0x515: Push((int) 0)
0x516: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x518: Stack[-3] = (int) 1
0x519: Return(); Pop(2)

0x51a: GOTO 0x520

0x51b: Push((int) 1)
0x51c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51e: Stack[-3] = (int) 2
0x51f: Return(); Pop(2)

0x520: Stack[-3] = (int) 3
0x521: Return(); Pop(2)

0x522: Stack[-1] = (int) 515593
0x523: Return(); Pop(0)

0x524: Stack[-1] = (int) 512582
0x525: Return(); Pop(0)

0x526: Stack[-1] = "ui/NPC_Citizen1.png"
0x527: Return(); Pop(0)

0x528: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x529: Return(); Pop(0)

0x52a: Stack[-1] = (bool) 0
0x52b: Return(); Pop(0)

