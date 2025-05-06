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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ook1Dohodyaga1
	ook1Dohodyaga2
	k1q01ooStationGotoLaska
	k1q01StationGotoLaska
	pt_map_laska
	AddMark
	ShowMap
	k1q01DobermanDead
	k1q01
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
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
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
	GetVariable (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x299
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf2 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2a3 Vars = (object)
		EVENT_7 Op = 0x2d8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x360

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x502

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x500

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x504

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x506

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4ef

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
0x41: Call2 0x3a4

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
0x4f: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x457

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x463

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x412

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral"
0x65: Call2 0xdc

0x66: Pop(1)
0x67: Push((int) 524672)
0x68: @@ SetMessage(Stack[-1])
0x69: Pop(1)
0x6a: @@ ClearReplies()
0x6b: Pop(0)
0x6c: Push((int) 526770)
0x6d: Push((int) 28048)
0x6e: Push((int) 28047)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: Push((int) 526776)
0x72: Push((int) 28048)
0x73: Push((int) 28053)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0xbe

0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x46f

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x47b

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 1
0x86: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x463

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x8f: PushEmpty(object, object)
0x90: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x91: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92: Call2 0x418

0x93: Pop(2)
0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call2 0xdc

0x97: Pop(1)
0x98: Push((int) 524668)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 526760)
0x9e: Push((int) 28045)
0x9f: Push((int) 28037)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: Push((int) 541744)
0xa3: Push((int) 28042)
0xa4: Push((int) 43941)
0xa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6: Pop(3)
0xa7: GOTO 0xbe

0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral"
0xaa: Call2 0xdc

0xab: Pop(1)
0xac: Push((int) 524670)
0xad: @@ SetMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ ClearReplies()
0xb0: Pop(0)
0xb1: Push((int) 524671)
0xb2: Push((int) -1)
0xb3: Push((int) 26010)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Push((int) 541781)
0xb7: Push((int) -1)
0xb8: Push((int) 43987)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: GOTO 0xbe

0xbc: Return(); Pop(0)

0xbd: GOTO 0x4e

0xbe: PushEmpty(bool)
0xbf: Call2 0x508

0xc0: Pop(0)
0xc1: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc2: @ lshWaitForAnimEnd()
0xc3: Pop(0)
0xc4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xcc

0xc7: PushEmpty(string)
0xc8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc9: Call2 0x3b5

0xca: Pop(1)
0xcb: GOTO 0xc2

0xcc: GOTO 0xdb

0xcd: Push("all")
0xce: Push("idle")
0xcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: @ WaitForAnimEnd()
0xd2: Pop(0)
0xd3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: GOTO 0xdb

0xd6: Push("all")
0xd7: Push("idle")
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: GOTO 0xd1

0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: PushEmpty(bool)
0xde: Call2 0x508

0xdf: Pop(0)
0xe0: Pop(1); Push((bool) Stack[-1] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(0)

0xe3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Return(); Pop(0)

0xe6: PushEmpty(string, bool)
0xe7: Stack[-2] = Stack[-3]
0xe8: Push("")
0xe9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-1] = (bool) 0
0xec: GOTO 0xee

0xed: Stack[-1] = (bool) 1
0xee: Call2 0x3c5

0xef: Pop(2)
0xf0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf1: Return(); Pop(0)

0xf2: PushEmpty()
0xf3: Push((int) 1)
0xf4: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0xf5: PushEmpty()
0xf6: Call2 0x3df

0xf7: Pop(0)
0xf8: Push((int) 28060)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x41e

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x43c

0x104: Pop(2)
0x105: Push((int) 28061)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x41e

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x43c

0x111: Pop(2)
0x112: Push((int) 28062)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x41e

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x43c

0x11e: Pop(2)
0x11f: Push((int) 26008)
0x120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x41e

0x126: Pop(2)
0x127: Push((int) 26011)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x12a: PushEmpty(bool)
0x12b: Stack[-1] = (bool) 0
0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x457

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x463

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x412

0x13c: Pop(2)
0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call2 0xdc

0x140: Pop(1)
0x141: Push((int) 524672)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 526770)
0x147: Push((int) 28048)
0x148: Push((int) 28047)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 526776)
0x14c: Push((int) 28048)
0x14d: Push((int) 28053)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: PushEmpty(bool)
0x152: Stack[-1] = (bool) 0
0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 0
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x46f

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x47b

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0x463

0x164: Pop(1)
0x165: Pop(1); Push((bool) Stack[-1] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 1
0x168: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x169: PushEmpty(object, object)
0x16a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16c: Call2 0x418

0x16d: Pop(2)
0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call2 0xdc

0x171: Pop(1)
0x172: Push((int) 524668)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 526760)
0x178: Push((int) 28045)
0x179: Push((int) 28037)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Push((int) 541744)
0x17d: Push((int) 28042)
0x17e: Push((int) 43941)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral"
0x184: Call2 0xdc

0x185: Pop(1)
0x186: Push((int) 524670)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: Push((int) 524671)
0x18c: Push((int) -1)
0x18d: Push((int) 26010)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Push((int) 541781)
0x191: Push((int) -1)
0x192: Push((int) 43987)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 28045)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Neutral"
0x19b: Call2 0xdc

0x19c: Pop(1)
0x19d: Push((int) 526768)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: Push((int) 526769)
0x1a3: Push((int) 28038)
0x1a4: Push((int) 28046)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 28038)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call2 0xdc

0x1ae: Pop(1)
0x1af: Push((int) 526761)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 526762)
0x1b5: Push((int) 28040)
0x1b6: Push((int) 28039)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Push((int) 541750)
0x1ba: Push((int) 28042)
0x1bb: Push((int) 43949)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 28040)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Neutral"
0x1c4: Call2 0xdc

0x1c5: Pop(1)
0x1c6: Push((int) 526763)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 526764)
0x1cc: Push((int) 28042)
0x1cd: Push((int) 28041)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 28042)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral"
0x1d6: Call2 0xdc

0x1d7: Pop(1)
0x1d8: Push((int) 526765)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 541745)
0x1de: Push((int) 43944)
0x1df: Push((int) 43943)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 541748)
0x1e3: Push((int) 43948)
0x1e4: Push((int) 43947)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 43948)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0xdc

0x1ee: Pop(1)
0x1ef: Push((int) 541749)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 526766)
0x1f5: Push((int) 28044)
0x1f6: Push((int) 28043)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 28044)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0xdc

0x200: Pop(1)
0x201: Push((int) 526767)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 524669)
0x207: Push((int) -1)
0x208: Push((int) 26008)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 43944)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0xdc

0x212: Pop(1)
0x213: Push((int) 541746)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 541747)
0x219: Push((int) 28044)
0x21a: Push((int) 43945)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 28048)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0xdc

0x224: Pop(1)
0x225: Push((int) 526771)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 526772)
0x22b: Push((int) 28050)
0x22c: Push((int) 28049)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 526777)
0x230: Push((int) 28052)
0x231: Push((int) 28055)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 28050)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Neutral"
0x23a: Call2 0xdc

0x23b: Pop(1)
0x23c: Push((int) 526773)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 526774)
0x242: Push((int) 28052)
0x243: Push((int) 28051)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 526778)
0x247: Push((int) 28052)
0x248: Push((int) 28056)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 28052)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Neutral"
0x251: Call2 0xdc

0x252: Pop(1)
0x253: Push((int) 526775)
0x254: @@ SetMessage(Stack[-1])
0x255: Pop(1)
0x256: @@ ClearReplies()
0x257: Pop(0)
0x258: Push((int) 524673)
0x259: Push((int) 26013)
0x25a: Push((int) 26012)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Push((int) 26013)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral"
0x263: Call2 0xdc

0x264: Pop(1)
0x265: Push((int) 524674)
0x266: @@ SetMessage(Stack[-1])
0x267: Pop(1)
0x268: @@ ClearReplies()
0x269: Pop(0)
0x26a: Push((int) 524675)
0x26b: Push((int) 28059)
0x26c: Push((int) 26014)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Push((int) 526782)
0x270: Push((int) -1)
0x271: Push((int) 28062)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 28059)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral"
0x27a: Call2 0xdc

0x27b: Pop(1)
0x27c: Push((int) 526779)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 526780)
0x282: Push((int) -1)
0x283: Push((int) 28060)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Push((int) 526781)
0x287: Push((int) -1)
0x288: Push((int) 28061)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28d: PushEmpty(bool)
0x28e: Call2 0x508

0x28f: Pop(0)
0x290: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x291: @ lshStopAnimation()
0x292: Pop(0)
0x293: GOTO 0x296

0x294: @ StopAnimation()
0x295: Pop(0)
0x296: Return(); Pop(0)

0x297: GOTO 0xf3

0x298: Return(); Pop(0)

0x299: Push((int) 3)
0x29a: @ Sleep(Stack[-1])
0x29b: Pop(1)
0x29c: PushEmpty(float, float)
0x29d: Stack[-2] = (int) 300
0x29e: Stack[-1] = (int) 100
0x29f: Call2 0x2ae

0x2a0: Pop(2)
0x2a1: GOTO 0x299

0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty()
0x2a5: Call2 0x2ef

0x2a6: Pop(0)
0x2a7: PushEmpty(int, object)
0x2a8: Stack[-1] = Stack[-3]
0x2a9: Push(-2, 1); TaskCall(0)
0x2aa: Call2 0x0

0x2ab: Pop(-2, 1); TaskReturn
0x2ac: Pop(2)
0x2ad: Return(); Pop(0)

0x2ae: PushEmpty()
0x2af: PushEmpty(bool)
0x2b0: Call2 0x35b

0x2b1: Pop(0)
0x2b2: Pop(1); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: Return(); Pop(0)

0x2b5: Push("player")
0x2b6: @ FindActor(Stack[-4], Stack[-1])
0x2b7: Pop(1)
0x2b8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2b9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2bb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2bc: Push((int) 10)
0x2bd: Push((float)1.0)
0x2be: @ SetTimer(Stack[-2], Stack[-1])
0x2bf: Pop(2)
0x2c0: PushEmpty()
0x2c1: Call2 0x2fd

0x2c2: Pop(0)
0x2c3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: Push((int) 10)
0x2c6: @ KillTimer(Stack[-1])
0x2c7: Pop(1)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(float, float)
0x2ca: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-3] = (bool) 0
0x2cd: Return(); Pop(2)

0x2ce: PushEmpty(float, object)
0x2cf: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2d0: Call2 0x353

0x2d1: Pop(1)
0x2d2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2d3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2d6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty()
0x2d9: Push((int) 10)
0x2da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2dc: PushEmpty(bool)
0x2dd: Call2 0x2c9

0x2de: Pop(0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2e4: Call2 0x3d4

0x2e5: Pop(1)
0x2e6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2e7: GOTO 0x2ee

0x2e8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ea: Push("head")
0x2eb: @ UnlookAsync(Stack[-1])
0x2ec: Pop(1)
0x2ed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: Call2 0x34e

0x2f1: Pop(0)
0x2f2: Push((int) 10)
0x2f3: @ KillTimer(Stack[-1])
0x2f4: Pop(1)
0x2f5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f7: Push("head")
0x2f8: @ UnlookAsync(Stack[-1])
0x2f9: Pop(1)
0x2fa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2fe: @ WaitForAnimEnd()
0x2ff: Pop(0)
0x300: PushEmpty(bool)
0x301: Call2 0x35b

0x302: Pop(0)
0x303: Pop(1); Push((bool) Stack[-1] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: Return(); Pop(14)

0x306: PushEmpty(int)
0x307: Call2 0x401

0x308: Stack[-8] = Stack[-1]
0x309: Pop(1)
0x30a: Stack[-6] = (int) 0
0x30b: PushEmpty(bool)
0x30c: Stack[-1] = (bool) 0
0x30d: Push((int) 5)
0x30e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(bool)
0x311: Call2 0x35b

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: Stack[-1] = (bool) 1
0x315: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x316: Push((int) 3)
0x317: @ irand(Stack[-6], Stack[-1])
0x318: Pop(1)
0x319: Push((int) 0)
0x31a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x31c: Push(Stack[-7])
0x31d: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x31e: @ irand(Stack[-4], Stack[-7])
0x31f: Pop(0)
0x320: Push("all")
0x321: PushEmpty(string, int)
0x322: Stack[-1] = Stack[-7]
0x323: Call2 0x3fa

0x324: Pop(1)
0x325: @ PlayAnimation(Stack[-2], Stack[-1])
0x326: Pop(2)
0x327: @ WaitForAnimEnd(Stack[-3])
0x328: Pop(0)
0x329: Pop(0); Push((bool) Stack[-3] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: GOTO 0x349

0x32c: GOTO 0x33e

0x32d: Push((int) 1)
0x32e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x330: Push((int) 4)
0x331: @ rand(Stack[-3], Stack[-1])
0x332: Pop(1)
0x333: Push((int) 1)
0x334: Pop(1); Push(Stack[-3] + Stack[-1]);
0x335: @ Sleep(Stack[-1], Stack[-2])
0x336: Pop(1)
0x337: Pop(0); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x349

0x33a: GOTO 0x33e

0x33b: Push(Stack[-6])
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x349

0x33e: PushEmpty(bool)
0x33f: Call2 0x34c

0x340: Pop(0)
0x341: Pop(1); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x349

0x344: @ ResetAAS()
0x345: Pop(0)
0x346: Push((int) 1)
0x347: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x348: GOTO 0x30b

0x349: @ ResetAAS()
0x34a: Pop(0)
0x34b: Return(); Pop(14)

0x34c: Stack[-1] = (bool) 1
0x34d: Return(); Pop(0)

0x34e: @ StopAnimation()
0x34f: Pop(0)
0x350: @ StopGroup0()
0x351: Pop(0)
0x352: Return(); Pop(0)

0x353: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x354: @ GetPosition(Stack[-3])
0x355: Pop(0)
0x356: @@ GetPosition(Stack[-2])
0x357: Pop(0)
0x358: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x359: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x35a: Return(); Pop(6)

0x35b: PushEmpty(bool, bool)
0x35c: @ IsLoaded(Stack[-1])
0x35d: Pop(0)
0x35e: Stack[-3] = Stack[-1]
0x35f: Return(); Pop(2)

0x360: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x361: @@ GetPosition(Stack[-8])
0x362: Pop(0)
0x363: @@ GetEyesHeight(Stack[-9])
0x364: Pop(0)
0x365: Push(CvectorIndex(Stack[-8], 1))
0x366: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x367: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x368: @ GetPosition(Stack[-7])
0x369: Pop(0)
0x36a: @ GetEyesHeight(Stack[-9])
0x36b: Pop(0)
0x36c: Push(CvectorIndex(Stack[-7], 1))
0x36d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x36e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x36f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x370: Push(CvectorIndex(Stack[-6], 1))
0x371: Stack[-1] = (int) 0
0x372: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x373: Pop(0); Push(Stack[-6] | Stack[-6]);
0x374: Pop(1); Push(Sqrt(Stack[-1]))
0x375: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x376: Stack[-5] = -Stack[-6]; Pop(0);
0x377: Pop(0); Push(Stack[-6] * Stack[-19]);
0x378: PushEmpty(cvector, cvector)
0x379: Push(CVector(0.0, 1.0, 0.0))
0x37a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x37b: Call2 0x3e6

0x37c: Pop(1)
0x37d: Push((int) 25)
0x37e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x37f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x380: Push(CVector(0.0, 10.0, 0.0))
0x381: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x382: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x383: @ IsOverrideActive(Stack[-2])
0x384: Pop(0)
0x385: Push(Stack[-2])
0x386: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x387: Stack[-21] = (bool) 0
0x388: Return(); Pop(18)

0x389: @ StopWorld()
0x38a: Pop(0)
0x38b: @ CameraTransit(Stack[-3], Stack[-5])
0x38c: Pop(0)
0x38d: Push(CvectorIndex(Stack[-4], 0))
0x38e: Push(CvectorIndex(Stack[-5], 2))
0x38f: @ Rotate(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: PushEmpty(bool)
0x392: Call2 0x508

0x393: Pop(0)
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: GOTO 0x39e

0x396: Push("head")
0x397: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x398: Pop(1)
0x399: Push(Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39b: Push("head")
0x39c: @ LookAsyncCamera(Stack[-1])
0x39d: Pop(1)
0x39e: @ CameraWaitForPlayFinish()
0x39f: Pop(0)
0x3a0: @ ResumeWorld()
0x3a1: Pop(0)
0x3a2: Stack[-21] = (bool) 1
0x3a3: Return(); Pop(18)

0x3a4: PushEmpty(bool, bool)
0x3a5: @ CameraSwitchToNormal()
0x3a6: Pop(0)
0x3a7: PushEmpty(bool)
0x3a8: Call2 0x508

0x3a9: Pop(0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: GOTO 0x3b4

0x3ac: Push("head")
0x3ad: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ae: Pop(1)
0x3af: Push(Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b1: Push("head")
0x3b2: @ UnlookAsync(Stack[-1])
0x3b3: Pop(1)
0x3b4: Return(); Pop(2)

0x3b5: PushEmpty(bool, float, float, bool, float, float)
0x3b6: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3b7: Pop(0)
0x3b8: Push(Stack[-3])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ba: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3bb: Pop(0)
0x3bc: Push((bool) 0)
0x3bd: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(1)
0x3bf: GOTO 0x3c4

0x3c0: Push("Can't find lsh animation : ")
0x3c1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c2: @ Trace(Stack[-1])
0x3c3: Pop(1)
0x3c4: Return(); Pop(6)

0x3c5: PushEmpty(bool, float, float, bool, float, float)
0x3c6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3c7: Pop(0)
0x3c8: Push(Stack[-3])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ca: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3cb: Pop(0)
0x3cc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3cd: Pop(0)
0x3ce: GOTO 0x3d3

0x3cf: Push("Can't find lsh animation : ")
0x3d0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3d1: @ Trace(Stack[-1])
0x3d2: Pop(1)
0x3d3: Return(); Pop(6)

0x3d4: PushEmpty(float, cvector, float, cvector)
0x3d5: @@ GetEyesHeight(Stack[-2])
0x3d6: Pop(0)
0x3d7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3d8: Push(CvectorIndex(Stack[-1], 1))
0x3d9: Stack[-1] = Stack[-3]
0x3da: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3db: Push("head")
0x3dc: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3dd: Pop(1)
0x3de: Return(); Pop(4)

0x3df: PushEmpty(bool)
0x3e0: Call2 0x508

0x3e1: Pop(0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: @ lshStopSpeech()
0x3e4: Pop(0)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty(float, float)
0x3e7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e9: Push((float)0.0)
0x3ea: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ec: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3ed: Return(); Pop(2)

0x3ee: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(int, int)
0x3f1: @ GetVariable(Stack[-3], Stack[-1])
0x3f2: Pop(0)
0x3f3: Stack[-4] = Stack[-1]
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty(float, float)
0x3f6: @ GetGameTime(Stack[-1])
0x3f7: Pop(0)
0x3f8: Stack[-3] = Stack[-1]
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(string, string)
0x3fb: Stack[-1] = "idle"
0x3fc: Push(Stack[-3])
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3ff: Stack[-4] = Stack[-1]
0x400: Return(); Pop(2)

0x401: PushEmpty(int, bool, int, bool)
0x402: Stack[-2] = (int) 0
0x403: Push("all")
0x404: PushEmpty(string, int)
0x405: Stack[-1] = Stack[-5]
0x406: Call2 0x3fa

0x407: Pop(1)
0x408: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: Pop(0); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: GOTO 0x410

0x40d: Push((int) 1)
0x40e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x40f: GOTO 0x403

0x410: Stack[-5] = Stack[-2]
0x411: Return(); Pop(4)

0x412: PushEmpty()
0x413: Push("ook1Dohodyaga1")
0x414: Push((int) 1)
0x415: @ SetVariable(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: Push("ook1Dohodyaga2")
0x41a: Push((int) 1)
0x41b: @ SetVariable(Stack[-2], Stack[-1])
0x41c: Pop(2)
0x41d: Return(); Pop(0)

0x41e: PushEmpty(object, object)
0x41f: PushEmpty(int, string)
0x420: Stack[-1] = "k1q01ooStationGotoLaska"
0x421: Call2 0x3f0

0x422: Pop(1)
0x423: Push((int) 0)
0x424: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x426: Push("k1q01ooStationGotoLaska")
0x427: Push((int) 1)
0x428: @ SetVariable(Stack[-2], Stack[-1])
0x429: Pop(2)
0x42a: PushEmpty(object)
0x42b: Call2 0x4bd

0x42c: Stack[-2] = Stack[-1]
0x42d: Pop(1)
0x42e: Push("k1q01StationGotoLaska")
0x42f: Push("pt_map_laska")
0x430: Push((int) 1)
0x431: Push((int) 524730)
0x432: PushEmpty(float)
0x433: Call2 0x3f5

0x434: Pop(0)
0x435: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(5)
0x437: PushEmpty()
0x438: Call2 0x487

0x439: Pop(0)
0x43a: Stack[-1] = 0
0x43b: Return(); Pop(2)

0x43c: PushEmpty()
0x43d: PushEmpty(int, string)
0x43e: Stack[-1] = "k1q01ooStationGotoLaska"
0x43f: Call2 0x3f0

0x440: Pop(1)
0x441: Push((int) 0)
0x442: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x444: Push("k1q01ooStationGotoLaska")
0x445: Push((int) 1)
0x446: @ SetVariable(Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: PushEmpty(object, string, float)
0x449: PushEmpty(object)
0x44a: Call2 0x4bd

0x44b: Stack[-4] = Stack[-1]
0x44c: Pop(1)
0x44d: Stack[-2] = "pt_map_laska"
0x44e: Stack[-1] = (int) 2
0x44f: Call2 0x4ce

0x450: Pop(3)
0x451: PushEmpty(object)
0x452: Call2 0x4bd

0x453: Pop(0)
0x454: @@ ShowMap(Stack[-1])
0x455: Pop(1)
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: PushEmpty(int, string)
0x459: Stack[-1] = "ook1Dohodyaga1"
0x45a: Call2 0x3f0

0x45b: Pop(1)
0x45c: Push((int) 0)
0x45d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-2] = (bool) 1
0x460: Return(); Pop(0)

0x461: Stack[-2] = (bool) 0
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: PushEmpty(int, string)
0x465: Stack[-1] = "k1q01DobermanDead"
0x466: Call2 0x3f0

0x467: Pop(1)
0x468: Push((int) 0)
0x469: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-2] = (bool) 1
0x46c: Return(); Pop(0)

0x46d: Stack[-2] = (bool) 0
0x46e: Return(); Pop(0)

0x46f: PushEmpty()
0x470: PushEmpty(int, string)
0x471: Stack[-1] = "k1q01"
0x472: Call2 0x3f0

0x473: Pop(1)
0x474: Push((int) 4)
0x475: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-2] = (bool) 1
0x478: Return(); Pop(0)

0x479: Stack[-2] = (bool) 0
0x47a: Return(); Pop(0)

0x47b: PushEmpty()
0x47c: PushEmpty(int, string)
0x47d: Stack[-1] = "ook1Dohodyaga2"
0x47e: Call2 0x3f0

0x47f: Pop(1)
0x480: Push((int) 0)
0x481: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x483: Stack[-2] = (bool) 1
0x484: Return(); Pop(0)

0x485: Stack[-2] = (bool) 0
0x486: Return(); Pop(0)

0x487: PushEmpty(object, object)
0x488: Push((int) 775)
0x489: Push((int) 1)
0x48a: Push((int) 541529)
0x48b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: PushEmpty(bool, object, int)
0x48e: Stack[-2] = Stack[-4]
0x48f: Stack[-1] = (int) 318
0x490: Call2 0x4a1

0x491: Pop(3)
0x492: Return(); Pop(2)

0x493: Stack[-1] = 0
0x494: PushEmpty(object, object)
0x495: @ GetDiaryRoot(Stack[-1])
0x496: Pop(0)
0x497: Pop(0); Push((bool) Stack[-1] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x499: Push("Can't retrieve diary root")
0x49a: @ Trace(Stack[-1])
0x49b: Pop(1)
0x49c: Stack[-3] = (bool) 0
0x49d: Return(); Pop(2)

0x49e: Stack[-3] = Stack[-1]
0x49f: Return(); Pop(2)

0x4a0: Stack[-1] = 0
0x4a1: PushEmpty(object, object, int, object, object, int)
0x4a2: PushEmpty(object)
0x4a3: Call2 0x494

0x4a4: Stack[-4] = Stack[-1]
0x4a5: Pop(1)
0x4a6: @@ Find(Stack[-7], Stack[-2])
0x4a7: Pop(0)
0x4a8: Pop(0); Push((bool) Stack[-2] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4aa: Push("Can't find diary parent with id: ")
0x4ab: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ac: @ Trace(Stack[-1])
0x4ad: Pop(1)
0x4ae: Stack[-9] = (bool) 0
0x4af: Return(); Pop(6)

0x4b0: @@ AddChild(Stack[-8])
0x4b1: Pop(0)
0x4b2: Push((int) 7)
0x4b3: @ SendWorldWndMessage(Stack[-1])
0x4b4: Pop(1)
0x4b5: @@ GetCategory(Stack[-1])
0x4b6: Pop(0)
0x4b7: @ SetDiarySection(Stack[-1])
0x4b8: Pop(0)
0x4b9: Stack[-9] = (bool) 0
0x4ba: Return(); Pop(6)

0x4bb: Stack[-2] = 0
0x4bc: Stack[-3] = 0
0x4bd: PushEmpty(object, object, object, object)
0x4be: @ GetMainOutdoorScene(Stack[-2])
0x4bf: Pop(0)
0x4c0: Pop(0); Push((bool) Stack[-2] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c2: Push("Can't find main outdoor scene")
0x4c3: @ Trace(Stack[-1])
0x4c4: Pop(1)
0x4c5: Stack[-1] = 0
0x4c6: Stack[-5] = Stack[-1]
0x4c7: Return(); Pop(4)

0x4c8: @@ GetMap(Stack[-1])
0x4c9: Pop(0)
0x4ca: Stack[-5] = Stack[-1]
0x4cb: Return(); Pop(4)

0x4cc: Stack[-1] = 0
0x4cd: Stack[-2] = 0
0x4ce: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4cf: @ GetMainOutdoorScene(Stack[-2])
0x4d0: Pop(0)
0x4d1: Pop(0); Push((bool) Stack[-2] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d3: Push("Can't find main outdoor scene")
0x4d4: @ Trace(Stack[-1])
0x4d5: Pop(1)
0x4d6: Return(); Pop(8)

0x4d7: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x4d8: Pop(0)
0x4d9: Pop(0); Push((bool) Stack[-1] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4db: Push("Warning: outdoor scene locator ")
0x4dc: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4dd: Push(" doesnt exist")
0x4de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4df: @ Trace(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ GetMap(Stack[-11])
0x4e2: Pop(0)
0x4e3: Pop(0); Push((bool) Stack[-11] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e5: Push("Can't find map")
0x4e6: @ Trace(Stack[-1])
0x4e7: Pop(1)
0x4e8: Return(); Pop(8)

0x4e9: Push(CvectorIndex(Stack[-4], 0))
0x4ea: Push(CvectorIndex(Stack[-5], 2))
0x4eb: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x4ec: Pop(2)
0x4ed: Return(); Pop(8)

0x4ee: Stack[-2] = 0
0x4ef: PushEmpty(int, int)
0x4f0: Push("branch")
0x4f1: @ GetVariable(Stack[-1], Stack[-2])
0x4f2: Pop(1)
0x4f3: Push((int) 0)
0x4f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f6: Stack[-3] = (int) 1
0x4f7: Return(); Pop(2)

0x4f8: GOTO 0x4fe

0x4f9: Push((int) 1)
0x4fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: Stack[-3] = (int) 2
0x4fd: Return(); Pop(2)

0x4fe: Stack[-3] = (int) 3
0x4ff: Return(); Pop(2)

0x500: Stack[-1] = (int) 515563
0x501: Return(); Pop(0)

0x502: Stack[-1] = (int) 503348
0x503: Return(); Pop(0)

0x504: Stack[-1] = "ui/NPC_Citizen3.png"
0x505: Return(); Pop(0)

0x506: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x507: Return(); Pop(0)

0x508: Stack[-1] = (bool) 0
0x509: Return(); Pop(0)

