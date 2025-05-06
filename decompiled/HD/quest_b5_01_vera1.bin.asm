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
	oob5Vera1_2
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x263
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x269 Vars = (object)
		EVENT_26 Op = 0x29a Vars = (string)
		EVENT_6 Op = 0x2a2 Vars = ()
		EVENT_7 Op = 0x2e3 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x36b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x563

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x561

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x565

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x567

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x550

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
0x41: Call2 0x3b0

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
0x4f: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0xa5

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
0x5f: Call2 0x4af

0x60: Pop(1)
0x61: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x4bb

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x67: Stack[-1] = (bool) 1
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x4a5

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 518627)
0x71: Push((int) 19969)
0x72: Push((int) 19719)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x4c7

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7a: Push((int) 518857)
0x7b: Push((int) 19965)
0x7c: Push((int) 19964)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: Push((int) 518632)
0x80: Push((int) -1)
0x81: Push((int) 19724)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x4e

0x87: PushEmpty(bool)
0x88: Call2 0x569

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x3c2

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all")
0x97: Push("idle")
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x569

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-2] = Stack[-3]
0xb1: Push("")
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x3d2

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x3ec

0xc0: Pop(0)
0xc1: Push((int) 19719)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x45f

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x439

0xcd: Pop(2)
0xce: Push((int) 19992)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x43f

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x465

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x480

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x485

0xe4: Pop(2)
0xe5: Push((int) 19723)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x43f

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x465

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x480

0xf6: Pop(2)
0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x495

0xfb: Pop(2)
0xfc: Push((int) 19990)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x43f

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x465

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x480

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x485

0x112: Pop(2)
0x113: Push((int) 19989)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x43f

0x11a: Pop(2)
0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x465

0x11f: Pop(2)
0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x485

0x124: Pop(2)
0x125: Push((int) 19964)
0x126: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12b: Call2 0x47a

0x12c: Pop(2)
0x12d: Push((int) 19718)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral"
0x132: Call2 0xa5

0x133: Pop(1)
0x134: Push((int) 518626)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0x4af

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x4bb

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x4a5

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 1
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 518627)
0x151: Push((int) 19969)
0x152: Push((int) 19719)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x4c7

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: Push((int) 518857)
0x15b: Push((int) 19965)
0x15c: Push((int) 19964)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 518632)
0x160: Push((int) -1)
0x161: Push((int) 19724)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 19965)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0xa5

0x16b: Pop(1)
0x16c: Push((int) 518858)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 518859)
0x172: Push((int) 19967)
0x173: Push((int) 19966)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 19967)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0xa5

0x17d: Pop(1)
0x17e: Push((int) 518860)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 518861)
0x184: Push((int) -1)
0x185: Push((int) 19968)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 19969)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Neutral"
0x18e: Call2 0xa5

0x18f: Pop(1)
0x190: Push((int) 518862)
0x191: @@ SetMessage(Stack[-1])
0x192: Pop(1)
0x193: @@ ClearReplies()
0x194: Pop(0)
0x195: Push((int) 518863)
0x196: Push((int) 19971)
0x197: Push((int) 19970)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: Push((int) 518865)
0x19b: Push((int) 19973)
0x19c: Push((int) 19972)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 19973)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral"
0x1a5: Call2 0xa5

0x1a6: Pop(1)
0x1a7: Push((int) 518866)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 518868)
0x1ad: Push((int) 19978)
0x1ae: Push((int) 19975)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 19971)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral"
0x1b7: Call2 0xa5

0x1b8: Pop(1)
0x1b9: Push((int) 518864)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 518867)
0x1bf: Push((int) 19976)
0x1c0: Push((int) 19974)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 19976)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral"
0x1c9: Call2 0xa5

0x1ca: Pop(1)
0x1cb: Push((int) 518869)
0x1cc: @@ SetMessage(Stack[-1])
0x1cd: Pop(1)
0x1ce: @@ ClearReplies()
0x1cf: Pop(0)
0x1d0: Push((int) 518870)
0x1d1: Push((int) 19978)
0x1d2: Push((int) 19977)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 19978)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral"
0x1db: Call2 0xa5

0x1dc: Pop(1)
0x1dd: Push((int) 518871)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 518872)
0x1e3: Push((int) 19982)
0x1e4: Push((int) 19980)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Push((int) 518873)
0x1e8: Push((int) 19982)
0x1e9: Push((int) 19981)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 19982)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral"
0x1f2: Call2 0xa5

0x1f3: Pop(1)
0x1f4: Push((int) 518874)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 518875)
0x1fa: Push((int) 19985)
0x1fb: Push((int) 19984)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 19985)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral"
0x204: Call2 0xa5

0x205: Pop(1)
0x206: Push((int) 518876)
0x207: @@ SetMessage(Stack[-1])
0x208: Pop(1)
0x209: @@ ClearReplies()
0x20a: Pop(0)
0x20b: Push((int) 518877)
0x20c: Push((int) 19987)
0x20d: Push((int) 19986)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Push((int) 518880)
0x211: Push((int) -1)
0x212: Push((int) 19989)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 19987)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral"
0x21b: Call2 0xa5

0x21c: Pop(1)
0x21d: Push((int) 518878)
0x21e: @@ SetMessage(Stack[-1])
0x21f: Pop(1)
0x220: @@ ClearReplies()
0x221: Pop(0)
0x222: Push((int) 518879)
0x223: Push((int) 19991)
0x224: Push((int) 19988)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Push((int) 518881)
0x228: Push((int) -1)
0x229: Push((int) 19990)
0x22a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 19991)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral"
0x232: Call2 0xa5

0x233: Pop(1)
0x234: Push((int) 518882)
0x235: @@ SetMessage(Stack[-1])
0x236: Pop(1)
0x237: @@ ClearReplies()
0x238: Pop(0)
0x239: Push((int) 518883)
0x23a: Push((int) -1)
0x23b: Push((int) 19992)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Push((int) 518884)
0x23f: Push((int) 19994)
0x240: Push((int) 19993)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 19994)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral"
0x249: Call2 0xa5

0x24a: Pop(1)
0x24b: Push((int) 518885)
0x24c: @@ SetMessage(Stack[-1])
0x24d: Pop(1)
0x24e: @@ ClearReplies()
0x24f: Pop(0)
0x250: Push((int) 518631)
0x251: Push((int) -1)
0x252: Push((int) 19723)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x257: PushEmpty(bool)
0x258: Call2 0x569

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25b: @ lshStopAnimation()
0x25c: Pop(0)
0x25d: GOTO 0x260

0x25e: @ StopAnimation()
0x25f: Pop(0)
0x260: Return(); Pop(0)

0x261: GOTO 0xbc

0x262: Return(); Pop(0)

0x263: PushEmpty(float, float)
0x264: Stack[-2] = (int) 300
0x265: Stack[-1] = (int) 100
0x266: Call2 0x274

0x267: Pop(2)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: PushEmpty()
0x26b: Call2 0x2fa

0x26c: Pop(0)
0x26d: PushEmpty(int, object)
0x26e: Stack[-1] = Stack[-3]
0x26f: Push(-2, 1); TaskCall(0)
0x270: Call2 0x0

0x271: Pop(-2, 1); TaskReturn
0x272: Pop(2)
0x273: Return(); Pop(0)

0x274: PushEmpty(float, bool, float, bool)
0x275: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x276: Push((int) 3)
0x277: @ rand(Stack[-3], Stack[-1])
0x278: Pop(1)
0x279: Push((int) 3)
0x27a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27b: @ Sleep(Stack[-1], Stack[-2])
0x27c: Pop(1)
0x27d: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x27e: PushEmpty(float, float)
0x27f: Stack[-2] = Stack[-8]
0x280: Stack[-1] = Stack[-7]
0x281: Call2 0x2b9

0x282: Pop(2)
0x283: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x284: GOTO 0x276

0x285: Return(); Pop(4)

0x286: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x287: PushEmpty(bool)
0x288: Stack[-1] = (bool) 0
0x289: PushEmpty(bool)
0x28a: Call2 0x366

0x28b: Pop(0)
0x28c: Pop(1); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: PushEmpty(bool)
0x28f: Call2 0x2b7

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = (bool) 1
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: PushEmpty(object)
0x295: Call2 0x3f3

0x296: Pop(0)
0x297: @ RemoveActor(Stack[-1])
0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: PushEmpty()
0x29b: Push("cleanup")
0x29c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29e: PushEmpty()
0x29f: Call2 0x286

0x2a0: Pop(0)
0x2a1: Return(); Pop(0)

0x2a2: Push( Stack[6 + Tasks[-1].StackPointer] )
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: PushEmpty()
0x2a5: Call2 0x2fa

0x2a6: Pop(0)
0x2a7: PushEmpty(bool)
0x2a8: Stack[-1] = (bool) 0
0x2a9: Push( Stack[5 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ab: PushEmpty(bool)
0x2ac: Call2 0x2b7

0x2ad: Pop(0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Stack[-1] = (bool) 1
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b1: PushEmpty(object)
0x2b2: Call2 0x3f3

0x2b3: Pop(0)
0x2b4: @ RemoveActor(Stack[-1])
0x2b5: Pop(1)
0x2b6: Return(); Pop(0)

0x2b7: Stack[-1] = (bool) 1
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x366

0x2bc: Pop(0)
0x2bd: Pop(1); Push((bool) Stack[-1] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Return(); Pop(0)

0x2c0: Push("player")
0x2c1: @ FindActor(Stack[-4], Stack[-1])
0x2c2: Pop(1)
0x2c3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2c7: Push((int) 10)
0x2c8: Push((float)1.0)
0x2c9: @ SetTimer(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: PushEmpty()
0x2cc: Call2 0x308

0x2cd: Pop(0)
0x2ce: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d0: Push((int) 10)
0x2d1: @ KillTimer(Stack[-1])
0x2d2: Pop(1)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(float, float)
0x2d5: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-3] = (bool) 0
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(float, object)
0x2da: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2db: Call2 0x35e

0x2dc: Pop(1)
0x2dd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2e1: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty()
0x2e4: Push((int) 10)
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x2d4

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2eb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(object)
0x2ee: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2ef: Call2 0x3e1

0x2f0: Pop(1)
0x2f1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f2: GOTO 0x2f9

0x2f3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f5: Push("head")
0x2f6: @ UnlookAsync(Stack[-1])
0x2f7: Pop(1)
0x2f8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Call2 0x359

0x2fc: Pop(0)
0x2fd: Push((int) 10)
0x2fe: @ KillTimer(Stack[-1])
0x2ff: Pop(1)
0x300: Push( Stack[2 + Tasks[-1].StackPointer] )
0x301: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x302: Push("head")
0x303: @ UnlookAsync(Stack[-1])
0x304: Pop(1)
0x305: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x306: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x307: Return(); Pop(0)

0x308: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x309: @ WaitForAnimEnd()
0x30a: Pop(0)
0x30b: PushEmpty(bool)
0x30c: Call2 0x366

0x30d: Pop(0)
0x30e: Pop(1); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Return(); Pop(14)

0x311: PushEmpty(int)
0x312: Call2 0x428

0x313: Stack[-8] = Stack[-1]
0x314: Pop(1)
0x315: Stack[-6] = (int) 0
0x316: PushEmpty(bool)
0x317: Stack[-1] = (bool) 0
0x318: Push((int) 5)
0x319: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: PushEmpty(bool)
0x31c: Call2 0x366

0x31d: Pop(0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Stack[-1] = (bool) 1
0x320: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x321: Push((int) 3)
0x322: @ irand(Stack[-6], Stack[-1])
0x323: Pop(1)
0x324: Push((int) 0)
0x325: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x327: Push(Stack[-7])
0x328: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x329: @ irand(Stack[-4], Stack[-7])
0x32a: Pop(0)
0x32b: Push("all")
0x32c: PushEmpty(string, int)
0x32d: Stack[-1] = Stack[-7]
0x32e: Call2 0x421

0x32f: Pop(1)
0x330: @ PlayAnimation(Stack[-2], Stack[-1])
0x331: Pop(2)
0x332: @ WaitForAnimEnd(Stack[-3])
0x333: Pop(0)
0x334: Pop(0); Push((bool) Stack[-3] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x354

0x337: GOTO 0x349

0x338: Push((int) 1)
0x339: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x33b: Push((int) 4)
0x33c: @ rand(Stack[-3], Stack[-1])
0x33d: Pop(1)
0x33e: Push((int) 1)
0x33f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x340: @ Sleep(Stack[-1], Stack[-2])
0x341: Pop(1)
0x342: Pop(0); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: GOTO 0x354

0x345: GOTO 0x349

0x346: Push(Stack[-6])
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x354

0x349: PushEmpty(bool)
0x34a: Call2 0x357

0x34b: Pop(0)
0x34c: Pop(1); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x354

0x34f: @ ResetAAS()
0x350: Pop(0)
0x351: Push((int) 1)
0x352: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x353: GOTO 0x316

0x354: @ ResetAAS()
0x355: Pop(0)
0x356: Return(); Pop(14)

0x357: Stack[-1] = (bool) 1
0x358: Return(); Pop(0)

0x359: @ StopAnimation()
0x35a: Pop(0)
0x35b: @ StopGroup0()
0x35c: Pop(0)
0x35d: Return(); Pop(0)

0x35e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x35f: @ GetPosition(Stack[-3])
0x360: Pop(0)
0x361: @@ GetPosition(Stack[-2])
0x362: Pop(0)
0x363: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x364: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x365: Return(); Pop(6)

0x366: PushEmpty(bool, bool)
0x367: @ IsLoaded(Stack[-1])
0x368: Pop(0)
0x369: Stack[-3] = Stack[-1]
0x36a: Return(); Pop(2)

0x36b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x36c: @@ GetPosition(Stack[-8])
0x36d: Pop(0)
0x36e: @@ GetEyesHeight(Stack[-9])
0x36f: Pop(0)
0x370: Push(CvectorIndex(Stack[-8], 1))
0x371: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x372: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x373: @ GetPosition(Stack[-7])
0x374: Pop(0)
0x375: @ GetEyesHeight(Stack[-9])
0x376: Pop(0)
0x377: Push(CvectorIndex(Stack[-7], 1))
0x378: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x379: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x37a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x37b: Push(CvectorIndex(Stack[-6], 1))
0x37c: Stack[-1] = (int) 0
0x37d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x37e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x37f: Pop(1); Push(Sqrt(Stack[-1]))
0x380: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x381: Stack[-5] = -Stack[-6]; Pop(0);
0x382: Pop(0); Push(Stack[-6] * Stack[-19]);
0x383: PushEmpty(cvector, cvector)
0x384: Push(CVector(0.0, 1.0, 0.0))
0x385: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x386: Call2 0x3f9

0x387: Pop(1)
0x388: Push((int) 25)
0x389: Pop(2); Push(Stack[-2] * Stack[-1]);
0x38a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38b: Push(CVector(0.0, 10.0, 0.0))
0x38c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x38d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x38e: @ IsOverrideActive(Stack[-2])
0x38f: Pop(0)
0x390: Push(Stack[-2])
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-21] = (bool) 0
0x393: Return(); Pop(18)

0x394: @ StopWorld()
0x395: Pop(0)
0x396: Push((bool) 1)
0x397: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x398: Pop(1)
0x399: Push(CvectorIndex(Stack[-4], 0))
0x39a: Push(CvectorIndex(Stack[-5], 2))
0x39b: @ Rotate(Stack[-2], Stack[-1])
0x39c: Pop(2)
0x39d: PushEmpty(bool)
0x39e: Call2 0x569

0x39f: Pop(0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3aa

0x3a2: Push("head")
0x3a3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a4: Pop(1)
0x3a5: Push(Stack[-1])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a7: Push("head")
0x3a8: @ LookAsyncCamera(Stack[-1])
0x3a9: Pop(1)
0x3aa: @ CameraWaitForPlayFinish()
0x3ab: Pop(0)
0x3ac: @ ResumeWorld()
0x3ad: Pop(0)
0x3ae: Stack[-21] = (bool) 1
0x3af: Return(); Pop(18)

0x3b0: PushEmpty(bool, bool)
0x3b1: Push((bool) 1)
0x3b2: @ CameraSwitchToNormal(Stack[-1])
0x3b3: Pop(1)
0x3b4: PushEmpty(bool)
0x3b5: Call2 0x569

0x3b6: Pop(0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b8: GOTO 0x3c1

0x3b9: Push("head")
0x3ba: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3bb: Pop(1)
0x3bc: Push(Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3be: Push("head")
0x3bf: @ UnlookAsync(Stack[-1])
0x3c0: Pop(1)
0x3c1: Return(); Pop(2)

0x3c2: PushEmpty(bool, float, float, bool, float, float)
0x3c3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3c4: Pop(0)
0x3c5: Push(Stack[-3])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3c8: Pop(0)
0x3c9: Push((bool) 0)
0x3ca: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(1)
0x3cc: GOTO 0x3d1

0x3cd: Push("Can't find lsh animation : ")
0x3ce: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3cf: @ Trace(Stack[-1])
0x3d0: Pop(1)
0x3d1: Return(); Pop(6)

0x3d2: PushEmpty(bool, float, float, bool, float, float)
0x3d3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3d4: Pop(0)
0x3d5: Push(Stack[-3])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3d8: Pop(0)
0x3d9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3da: Pop(0)
0x3db: GOTO 0x3e0

0x3dc: Push("Can't find lsh animation : ")
0x3dd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3de: @ Trace(Stack[-1])
0x3df: Pop(1)
0x3e0: Return(); Pop(6)

0x3e1: PushEmpty(float, cvector, float, cvector)
0x3e2: @@ GetEyesHeight(Stack[-2])
0x3e3: Pop(0)
0x3e4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3e5: Push(CvectorIndex(Stack[-1], 1))
0x3e6: Stack[-1] = Stack[-3]
0x3e7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3e8: Push("head")
0x3e9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3ea: Pop(1)
0x3eb: Return(); Pop(4)

0x3ec: PushEmpty(bool)
0x3ed: Call2 0x569

0x3ee: Pop(0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: @ lshStopSpeech()
0x3f1: Pop(0)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty(object, object)
0x3f4: @ self(Stack[-1])
0x3f5: Pop(0)
0x3f6: Stack[-3] = Stack[-1]
0x3f7: Return(); Pop(2)

0x3f8: Stack[-1] = 0
0x3f9: PushEmpty(float, float)
0x3fa: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3fb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3fc: Push((float)0.0)
0x3fd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x400: Return(); Pop(2)

0x401: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x402: Return(); Pop(2)

0x403: PushEmpty(int, int)
0x404: @ GetVariable(Stack[-3], Stack[-1])
0x405: Pop(0)
0x406: Stack[-4] = Stack[-1]
0x407: Return(); Pop(2)

0x408: PushEmpty(object, object)
0x409: @ FindActor(Stack[-1], Stack[-4])
0x40a: Pop(0)
0x40b: Pop(0); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-5] = (bool) 0
0x40e: Return(); Pop(2)

0x40f: @ Trigger(Stack[-1], Stack[-3])
0x410: Pop(0)
0x411: Stack[-5] = (bool) 1
0x412: Return(); Pop(2)

0x413: Stack[-1] = 0
0x414: PushEmpty(float, float)
0x415: @ GetGameTime(Stack[-1])
0x416: Pop(0)
0x417: Stack[-3] = Stack[-1]
0x418: Return(); Pop(2)

0x419: PushEmpty(float, float)
0x41a: @ GetGameTime(Stack[-1])
0x41b: Pop(0)
0x41c: PushEmpty(int)
0x41d: Stack[-1] = Stack[-2]
0x41e: Push((int) 24)
0x41f: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x420: Return(); Pop(2)

0x421: PushEmpty(string, string)
0x422: Stack[-1] = "idle"
0x423: Push(Stack[-3])
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x426: Stack[-4] = Stack[-1]
0x427: Return(); Pop(2)

0x428: PushEmpty(int, bool, int, bool)
0x429: Stack[-2] = (int) 0
0x42a: Push("all")
0x42b: PushEmpty(string, int)
0x42c: Stack[-1] = Stack[-5]
0x42d: Call2 0x421

0x42e: Pop(1)
0x42f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(2)
0x431: Pop(0); Push((bool) Stack[-1] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: GOTO 0x437

0x434: Push((int) 1)
0x435: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x436: GOTO 0x42a

0x437: Stack[-5] = Stack[-2]
0x438: Return(); Pop(4)

0x439: PushEmpty()
0x43a: Push("b5q01TalkToVera")
0x43b: Push((int) 1)
0x43c: @ SetVariable(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: Return(); Pop(0)

0x43f: PushEmpty(object, object)
0x440: PushEmpty(int, string)
0x441: Stack[-1] = "b5q01PlaceButchers"
0x442: Call2 0x403

0x443: Pop(1)
0x444: Push((int) 0)
0x445: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x447: Push("b5q01PlaceButchers")
0x448: Push((int) 1)
0x449: @ SetVariable(Stack[-2], Stack[-1])
0x44a: Pop(2)
0x44b: PushEmpty(object)
0x44c: Call2 0x51e

0x44d: Stack[-2] = Stack[-1]
0x44e: Pop(1)
0x44f: Push("b5q01GathererWife")
0x450: Push("pt_gatherer3")
0x451: Push((int) 1)
0x452: Push((int) 530181)
0x453: PushEmpty(float)
0x454: Call2 0x414

0x455: Pop(0)
0x456: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(5)
0x458: PushEmpty(bool, string, string)
0x459: Stack[-2] = "quest_b5_01"
0x45a: Stack[-1] = "place_butchers"
0x45b: Call2 0x408

0x45c: Pop(3)
0x45d: Stack[-1] = 0
0x45e: Return(); Pop(2)

0x45f: PushEmpty()
0x460: Push("oob5Vera1_1")
0x461: Push((int) 1)
0x462: @ SetVariable(Stack[-2], Stack[-1])
0x463: Pop(2)
0x464: Return(); Pop(0)

0x465: PushEmpty(object, object)
0x466: PushEmpty(object)
0x467: Call2 0x51e

0x468: Stack[-2] = Stack[-1]
0x469: Pop(1)
0x46a: Push("b5q01VeraGotoStvorki")
0x46b: Push("pt_b5q01_vera")
0x46c: Push((int) 1)
0x46d: Push((int) 519747)
0x46e: PushEmpty(float)
0x46f: Call2 0x414

0x470: Pop(0)
0x471: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(5)
0x473: PushEmpty(bool, string, string)
0x474: Stack[-2] = "quest_b5_01"
0x475: Stack[-1] = "vera_stvorki"
0x476: Call2 0x408

0x477: Pop(3)
0x478: Return(); Pop(2)

0x479: Stack[-1] = 0
0x47a: PushEmpty()
0x47b: Push("oob5Vera1_2")
0x47c: Push((int) 1)
0x47d: @ SetVariable(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: PushEmpty()
0x482: Call2 0x4e8

0x483: Pop(0)
0x484: Return(); Pop(0)

0x485: PushEmpty()
0x486: PushEmpty(object, string, float)
0x487: PushEmpty(object)
0x488: Call2 0x51e

0x489: Stack[-4] = Stack[-1]
0x48a: Pop(1)
0x48b: Stack[-2] = "pt_gatherer3"
0x48c: Stack[-1] = (int) 2
0x48d: Call2 0x52f

0x48e: Pop(3)
0x48f: PushEmpty(object)
0x490: Call2 0x51e

0x491: Pop(0)
0x492: @@ ShowMap(Stack[-1])
0x493: Pop(1)
0x494: Return(); Pop(0)

0x495: PushEmpty()
0x496: PushEmpty(object, string, float)
0x497: PushEmpty(object)
0x498: Call2 0x51e

0x499: Stack[-4] = Stack[-1]
0x49a: Pop(1)
0x49b: Stack[-2] = "pt_b5q01_vera"
0x49c: Stack[-1] = (int) 2
0x49d: Call2 0x52f

0x49e: Pop(3)
0x49f: PushEmpty(object)
0x4a0: Call2 0x51e

0x4a1: Pop(0)
0x4a2: @@ ShowMap(Stack[-1])
0x4a3: Pop(1)
0x4a4: Return(); Pop(0)

0x4a5: PushEmpty()
0x4a6: PushEmpty(bool, object)
0x4a7: Stack[-1] = Stack[-3]
0x4a8: Call2 0x4d3

0x4a9: Pop(1)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: Stack[-2] = (bool) 1
0x4ac: Return(); Pop(0)

0x4ad: Stack[-2] = (bool) 0
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(int, string)
0x4b1: Stack[-1] = "b5q01"
0x4b2: Call2 0x403

0x4b3: Pop(1)
0x4b4: Push((int) 1)
0x4b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-2] = (bool) 1
0x4b8: Return(); Pop(0)

0x4b9: Stack[-2] = (bool) 0
0x4ba: Return(); Pop(0)

0x4bb: PushEmpty()
0x4bc: PushEmpty(int, string)
0x4bd: Stack[-1] = "oob5Vera1_1"
0x4be: Call2 0x403

0x4bf: Pop(1)
0x4c0: Push((int) 0)
0x4c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-2] = (bool) 1
0x4c4: Return(); Pop(0)

0x4c5: Stack[-2] = (bool) 0
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty()
0x4c8: PushEmpty(int, string)
0x4c9: Stack[-1] = "oob5Vera1_2"
0x4ca: Call2 0x403

0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-2] = (bool) 1
0x4d0: Return(); Pop(0)

0x4d1: Stack[-2] = (bool) 0
0x4d2: Return(); Pop(0)

0x4d3: PushEmpty()
0x4d4: PushEmpty(bool)
0x4d5: Stack[-1] = (bool) 0
0x4d6: PushEmpty(int)
0x4d7: Call2 0x419

0x4d8: Pop(0)
0x4d9: Push((int) 0)
0x4da: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4dc: PushEmpty(int)
0x4dd: Call2 0x419

0x4de: Pop(0)
0x4df: Push((int) 20)
0x4e0: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e2: Stack[-1] = (bool) 1
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e4: Stack[-2] = (bool) 1
0x4e5: Return(); Pop(0)

0x4e6: Stack[-2] = (bool) 0
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty(object, object)
0x4e9: Push((int) 389)
0x4ea: Push((int) 1)
0x4eb: Push((int) 525828)
0x4ec: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: PushEmpty(bool, object, int)
0x4ef: Stack[-2] = Stack[-4]
0x4f0: Stack[-1] = (int) 238
0x4f1: Call2 0x502

0x4f2: Pop(3)
0x4f3: Return(); Pop(2)

0x4f4: Stack[-1] = 0
0x4f5: PushEmpty(object, object)
0x4f6: @ GetDiaryRoot(Stack[-1])
0x4f7: Pop(0)
0x4f8: Pop(0); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fa: Push("Can't retrieve diary root")
0x4fb: @ Trace(Stack[-1])
0x4fc: Pop(1)
0x4fd: Stack[-3] = (bool) 0
0x4fe: Return(); Pop(2)

0x4ff: Stack[-3] = Stack[-1]
0x500: Return(); Pop(2)

0x501: Stack[-1] = 0
0x502: PushEmpty(object, object, int, object, object, int)
0x503: PushEmpty(object)
0x504: Call2 0x4f5

0x505: Stack[-4] = Stack[-1]
0x506: Pop(1)
0x507: @@ Find(Stack[-7], Stack[-2])
0x508: Pop(0)
0x509: Pop(0); Push((bool) Stack[-2] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50b: Push("Can't find diary parent with id: ")
0x50c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x50d: @ Trace(Stack[-1])
0x50e: Pop(1)
0x50f: Stack[-9] = (bool) 0
0x510: Return(); Pop(6)

0x511: @@ AddChild(Stack[-8])
0x512: Pop(0)
0x513: Push((int) 7)
0x514: @ SendWorldWndMessage(Stack[-1])
0x515: Pop(1)
0x516: @@ GetCategory(Stack[-1])
0x517: Pop(0)
0x518: @ SetDiarySection(Stack[-1])
0x519: Pop(0)
0x51a: Stack[-9] = (bool) 0
0x51b: Return(); Pop(6)

0x51c: Stack[-2] = 0
0x51d: Stack[-3] = 0
0x51e: PushEmpty(object, object, object, object)
0x51f: @ GetMainOutdoorScene(Stack[-2])
0x520: Pop(0)
0x521: Pop(0); Push((bool) Stack[-2] == 0)
0x522: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x523: Push("Can't find main outdoor scene")
0x524: @ Trace(Stack[-1])
0x525: Pop(1)
0x526: Stack[-1] = 0
0x527: Stack[-5] = Stack[-1]
0x528: Return(); Pop(4)

0x529: @@ GetMap(Stack[-1])
0x52a: Pop(0)
0x52b: Stack[-5] = Stack[-1]
0x52c: Return(); Pop(4)

0x52d: Stack[-1] = 0
0x52e: Stack[-2] = 0
0x52f: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x530: @ GetMainOutdoorScene(Stack[-2])
0x531: Pop(0)
0x532: Pop(0); Push((bool) Stack[-2] == 0)
0x533: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x534: Push("Can't find main outdoor scene")
0x535: @ Trace(Stack[-1])
0x536: Pop(1)
0x537: Return(); Pop(8)

0x538: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x539: Pop(0)
0x53a: Pop(0); Push((bool) Stack[-1] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53c: Push("Warning: outdoor scene locator ")
0x53d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x53e: Push(" doesnt exist")
0x53f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x540: @ Trace(Stack[-1])
0x541: Pop(1)
0x542: @@ GetMap(Stack[-11])
0x543: Pop(0)
0x544: Pop(0); Push((bool) Stack[-11] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x546: Push("Can't find map")
0x547: @ Trace(Stack[-1])
0x548: Pop(1)
0x549: Return(); Pop(8)

0x54a: Push(CvectorIndex(Stack[-4], 0))
0x54b: Push(CvectorIndex(Stack[-5], 2))
0x54c: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x54d: Pop(2)
0x54e: Return(); Pop(8)

0x54f: Stack[-2] = 0
0x550: PushEmpty(int, int)
0x551: Push("branch")
0x552: @ GetVariable(Stack[-1], Stack[-2])
0x553: Pop(1)
0x554: Push((int) 0)
0x555: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x557: Stack[-3] = (int) 1
0x558: Return(); Pop(2)

0x559: GOTO 0x55f

0x55a: Push((int) 1)
0x55b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-3] = (int) 2
0x55e: Return(); Pop(2)

0x55f: Stack[-3] = (int) 3
0x560: Return(); Pop(2)

0x561: Stack[-1] = (int) 515593
0x562: Return(); Pop(0)

0x563: Stack[-1] = (int) 512582
0x564: Return(); Pop(0)

0x565: Stack[-1] = "ui/NPC_Citizen1.png"
0x566: Return(); Pop(0)

0x567: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x568: Return(); Pop(0)

0x569: Stack[-1] = (bool) 0
0x56a: Return(); Pop(0)

