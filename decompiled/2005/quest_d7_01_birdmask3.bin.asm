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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d7q01
	mreport is given
	d7q01_mreport
	ood7MBirdmask1
	quest_d7_01
	sobor_teleport
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	IsItemSelected
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x2c2
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe4 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x2c6 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2ce

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x452

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x450

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x454

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x456

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x43f

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
0x41: Call2 0x312

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
0x4f: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3cd

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3aa

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xce

0x5d: Pop(1)
0x5e: Push((int) 513212)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 513213)
0x64: Push((int) 14437)
0x65: Push((int) 14436)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xb0

0x69: PushEmpty(bool)
0x6a: Stack[-1] = (bool) 0
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x3b7

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x3c3

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral"
0x79: Call2 0xce

0x7a: Pop(1)
0x7b: Push((int) 513216)
0x7c: @@ SetMessage(Stack[-1])
0x7d: Pop(1)
0x7e: @@ ClearReplies()
0x7f: Pop(0)
0x80: Push((int) 513217)
0x81: Push((int) 14441)
0x82: Push((int) 14440)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: Push((int) 513220)
0x86: Push((int) 14444)
0x87: Push((int) 14443)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: Push((int) 513224)
0x8b: Push((int) 14441)
0x8c: Push((int) 14447)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: GOTO 0xb0

0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x3b7

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x95: PushEmpty(string)
0x96: Stack[-1] = "Neutral"
0x97: Call2 0xce

0x98: Pop(1)
0x99: Push((int) 513231)
0x9a: @@ SetMessage(Stack[-1])
0x9b: Pop(1)
0x9c: @@ ClearReplies()
0x9d: Pop(0)
0x9e: Push((int) 513232)
0x9f: Push((int) 14456)
0xa0: Push((int) 14455)
0xa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2: Pop(3)
0xa3: Push((int) 513248)
0xa4: Push((int) 16562)
0xa5: Push((int) 14473)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: Push((int) 513249)
0xa9: Push((int) -1)
0xaa: Push((int) 14475)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: GOTO 0xb0

0xae: Return(); Pop(0)

0xaf: GOTO 0x4e

0xb0: PushEmpty(bool)
0xb1: Call2 0x458

0xb2: Pop(0)
0xb3: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb4: @ lshWaitForAnimEnd()
0xb5: Pop(0)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbe

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbb: Call2 0x323

0xbc: Pop(1)
0xbd: GOTO 0xb4

0xbe: GOTO 0xcd

0xbf: Push("all")
0xc0: Push("idle")
0xc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: @ WaitForAnimEnd()
0xc4: Pop(0)
0xc5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: GOTO 0xcd

0xc8: Push("all")
0xc9: Push("idle")
0xca: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: GOTO 0xc3

0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: PushEmpty(bool)
0xd0: Call2 0x458

0xd1: Pop(0)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Return(); Pop(0)

0xd5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(0)

0xd8: PushEmpty(string, bool)
0xd9: Stack[-2] = Stack[-3]
0xda: Push("")
0xdb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xdd: Stack[-1] = (bool) 0
0xde: GOTO 0xe0

0xdf: Stack[-1] = (bool) 1
0xe0: Call2 0x333

0xe1: Pop(2)
0xe2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe3: Return(); Pop(0)

0xe4: PushEmpty()
0xe5: Push((int) 1)
0xe6: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0xe7: PushEmpty()
0xe8: Call2 0x342

0xe9: Pop(0)
0xea: Push((int) 43785)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x39f

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x390

0xf6: Pop(2)
0xf7: Push((int) 14438)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x39f

0xfe: Pop(2)
0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x390

0x103: Pop(2)
0x104: Push((int) 14485)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x396

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x3b0

0x110: Pop(2)
0x111: Push((int) 14446)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x396

0x118: Pop(2)
0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x3b0

0x11d: Pop(2)
0x11e: Push((int) 16565)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x396

0x125: Pop(2)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x3b0

0x12a: Pop(2)
0x12b: Push((int) 16566)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x396

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x3b0

0x137: Pop(2)
0x138: Push((int) 14435)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call2 0x3cd

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x3aa

0x144: Pop(2)
0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call2 0xce

0x148: Pop(1)
0x149: Push((int) 513212)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 513213)
0x14f: Push((int) 14437)
0x150: Push((int) 14436)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x3b7

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x3c3

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call2 0xce

0x165: Pop(1)
0x166: Push((int) 513216)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 513217)
0x16c: Push((int) 14441)
0x16d: Push((int) 14440)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 513220)
0x171: Push((int) 14444)
0x172: Push((int) 14443)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Push((int) 513224)
0x176: Push((int) 14441)
0x177: Push((int) 14447)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: PushEmpty(bool, object)
0x17c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17d: Call2 0x3b7

0x17e: Pop(1)
0x17f: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xce

0x183: Pop(1)
0x184: Push((int) 513231)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 513232)
0x18a: Push((int) 14456)
0x18b: Push((int) 14455)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 513248)
0x18f: Push((int) 16562)
0x190: Push((int) 14473)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Push((int) 513249)
0x194: Push((int) -1)
0x195: Push((int) 14475)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 14456)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral"
0x19e: Call2 0xce

0x19f: Pop(1)
0x1a0: Push((int) 513233)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: Push((int) 513234)
0x1a6: Push((int) 14458)
0x1a7: Push((int) 14457)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Push((int) 513240)
0x1ab: Push((int) 14469)
0x1ac: Push((int) 14463)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Push((int) 513244)
0x1b0: Push((int) 14464)
0x1b1: Push((int) 14468)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 14464)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Neutral"
0x1ba: Call2 0xce

0x1bb: Pop(1)
0x1bc: Push((int) 513241)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 513242)
0x1c2: Push((int) -1)
0x1c3: Push((int) 14465)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Push((int) 513243)
0x1c7: Push((int) 16562)
0x1c8: Push((int) 14466)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Return(); Pop(0)

0x1cc: Push((int) 14469)
0x1cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call2 0xce

0x1d2: Pop(1)
0x1d3: Push((int) 513245)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: Push((int) 513246)
0x1d9: Push((int) -1)
0x1da: Push((int) 14470)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Push((int) 513247)
0x1de: Push((int) 16562)
0x1df: Push((int) 14471)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 14458)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0xce

0x1e9: Pop(1)
0x1ea: Push((int) 513235)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 513236)
0x1f0: Push((int) 16562)
0x1f1: Push((int) 14459)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Push((int) 513239)
0x1f5: Push((int) -1)
0x1f6: Push((int) 14462)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 16562)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0xce

0x200: Pop(1)
0x201: Push((int) 515419)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 515420)
0x207: Push((int) -1)
0x208: Push((int) 16565)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Push((int) 515421)
0x20c: Push((int) -1)
0x20d: Push((int) 16566)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Push((int) 14444)
0x212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x214: PushEmpty(string)
0x215: Stack[-1] = "Neutral"
0x216: Call2 0xce

0x217: Pop(1)
0x218: Push((int) 513221)
0x219: @@ SetMessage(Stack[-1])
0x21a: Pop(1)
0x21b: @@ ClearReplies()
0x21c: Pop(0)
0x21d: Push((int) 513222)
0x21e: Push((int) -1)
0x21f: Push((int) 14445)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Push((int) 513223)
0x223: Push((int) -1)
0x224: Push((int) 14446)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 14441)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0xce

0x22e: Pop(1)
0x22f: Push((int) 513218)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 513219)
0x235: Push((int) -1)
0x236: Push((int) 14442)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Push((int) 513259)
0x23a: Push((int) -1)
0x23b: Push((int) 14485)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 14437)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral"
0x244: Call2 0xce

0x245: Pop(1)
0x246: Push((int) 513214)
0x247: @@ SetMessage(Stack[-1])
0x248: Pop(1)
0x249: @@ ClearReplies()
0x24a: Pop(0)
0x24b: Push((int) 513250)
0x24c: Push((int) 14478)
0x24d: Push((int) 14476)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Push((int) 513251)
0x251: Push((int) 14482)
0x252: Push((int) 14477)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 14482)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0xce

0x25c: Pop(1)
0x25d: Push((int) 513256)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: Push((int) 513257)
0x263: Push((int) 14484)
0x264: Push((int) 14483)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: Push((int) 14484)
0x269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Neutral"
0x26d: Call2 0xce

0x26e: Pop(1)
0x26f: Push((int) 513258)
0x270: @@ SetMessage(Stack[-1])
0x271: Pop(1)
0x272: @@ ClearReplies()
0x273: Pop(0)
0x274: Push((int) 513215)
0x275: Push((int) -1)
0x276: Push((int) 14438)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Return(); Pop(0)

0x27a: Push((int) 14478)
0x27b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral"
0x27f: Call2 0xce

0x280: Pop(1)
0x281: Push((int) 513252)
0x282: @@ SetMessage(Stack[-1])
0x283: Pop(1)
0x284: @@ ClearReplies()
0x285: Pop(0)
0x286: Push((int) 513253)
0x287: Push((int) 14480)
0x288: Push((int) 14479)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Push((int) 14480)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral"
0x291: Call2 0xce

0x292: Pop(1)
0x293: Push((int) 513254)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 513255)
0x299: Push((int) 43784)
0x29a: Push((int) 14481)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 541612)
0x29e: Push((int) 14482)
0x29f: Push((int) 43783)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 43784)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0xce

0x2a9: Pop(1)
0x2aa: Push((int) 541613)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 541614)
0x2b0: Push((int) -1)
0x2b1: Push((int) 43785)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b6: PushEmpty(bool)
0x2b7: Call2 0x458

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: @ lshStopAnimation()
0x2bb: Pop(0)
0x2bc: GOTO 0x2bf

0x2bd: @ StopAnimation()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: GOTO 0xe5

0x2c1: Return(); Pop(0)

0x2c2: @ Hold()
0x2c3: Pop(0)
0x2c4: GOTO 0x2c2

0x2c5: Return(); Pop(0)

0x2c6: PushEmpty()
0x2c7: PushEmpty(int, object)
0x2c8: Stack[-1] = Stack[-3]
0x2c9: Push(-2, 1); TaskCall(0)
0x2ca: Call2 0x0

0x2cb: Pop(-2, 1); TaskReturn
0x2cc: Pop(2)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2cf: @@ GetPosition(Stack[-8])
0x2d0: Pop(0)
0x2d1: @@ GetEyesHeight(Stack[-9])
0x2d2: Pop(0)
0x2d3: Push(CvectorIndex(Stack[-8], 1))
0x2d4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2d6: @ GetPosition(Stack[-7])
0x2d7: Pop(0)
0x2d8: @ GetEyesHeight(Stack[-9])
0x2d9: Pop(0)
0x2da: Push(CvectorIndex(Stack[-7], 1))
0x2db: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2dc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2dd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2de: Push(CvectorIndex(Stack[-6], 1))
0x2df: Stack[-1] = (int) 0
0x2e0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e2: Pop(1); Push(Sqrt(Stack[-1]))
0x2e3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e4: Stack[-5] = -Stack[-6]; Pop(0);
0x2e5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2e6: PushEmpty(cvector, cvector)
0x2e7: Push(CVector(0.0, 1.0, 0.0))
0x2e8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2e9: Call2 0x349

0x2ea: Pop(1)
0x2eb: Push((int) 25)
0x2ec: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ee: Push(CVector(0.0, 10.0, 0.0))
0x2ef: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2f0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f1: @ IsOverrideActive(Stack[-2])
0x2f2: Pop(0)
0x2f3: Push(Stack[-2])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: Stack[-21] = (bool) 0
0x2f6: Return(); Pop(18)

0x2f7: @ StopWorld()
0x2f8: Pop(0)
0x2f9: @ CameraTransit(Stack[-3], Stack[-5])
0x2fa: Pop(0)
0x2fb: Push(CvectorIndex(Stack[-4], 0))
0x2fc: Push(CvectorIndex(Stack[-5], 2))
0x2fd: @ Rotate(Stack[-2], Stack[-1])
0x2fe: Pop(2)
0x2ff: PushEmpty(bool)
0x300: Call2 0x458

0x301: Pop(0)
0x302: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x303: GOTO 0x30c

0x304: Push("head")
0x305: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x306: Pop(1)
0x307: Push(Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x309: Push("head")
0x30a: @ LookAsyncCamera(Stack[-1])
0x30b: Pop(1)
0x30c: @ CameraWaitForPlayFinish()
0x30d: Pop(0)
0x30e: @ ResumeWorld()
0x30f: Pop(0)
0x310: Stack[-21] = (bool) 1
0x311: Return(); Pop(18)

0x312: PushEmpty(bool, bool)
0x313: @ CameraSwitchToNormal()
0x314: Pop(0)
0x315: PushEmpty(bool)
0x316: Call2 0x458

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: GOTO 0x322

0x31a: Push("head")
0x31b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x31c: Pop(1)
0x31d: Push(Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: Push("head")
0x320: @ UnlookAsync(Stack[-1])
0x321: Pop(1)
0x322: Return(); Pop(2)

0x323: PushEmpty(bool, float, float, bool, float, float)
0x324: @ lshHasAnimation(Stack[-3], Stack[-7])
0x325: Pop(0)
0x326: Push(Stack[-3])
0x327: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x328: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x329: Pop(0)
0x32a: Push((bool) 0)
0x32b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(1)
0x32d: GOTO 0x332

0x32e: Push("Can't find lsh animation : ")
0x32f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x330: @ Trace(Stack[-1])
0x331: Pop(1)
0x332: Return(); Pop(6)

0x333: PushEmpty(bool, float, float, bool, float, float)
0x334: @ lshHasAnimation(Stack[-3], Stack[-8])
0x335: Pop(0)
0x336: Push(Stack[-3])
0x337: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x338: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x339: Pop(0)
0x33a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x33b: Pop(0)
0x33c: GOTO 0x341

0x33d: Push("Can't find lsh animation : ")
0x33e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x33f: @ Trace(Stack[-1])
0x340: Pop(1)
0x341: Return(); Pop(6)

0x342: PushEmpty(bool)
0x343: Call2 0x458

0x344: Pop(0)
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: @ lshStopSpeech()
0x347: Pop(0)
0x348: Return(); Pop(0)

0x349: PushEmpty(float, float)
0x34a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x34c: Push((float)0.0)
0x34d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x350: Return(); Pop(2)

0x351: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x352: Return(); Pop(2)

0x353: PushEmpty(int, int)
0x354: @ GetVariable(Stack[-3], Stack[-1])
0x355: Pop(0)
0x356: Stack[-4] = Stack[-1]
0x357: Return(); Pop(2)

0x358: PushEmpty(object, object)
0x359: @ CreateIntVector(Stack[-1])
0x35a: Pop(0)
0x35b: @@ add(Stack[-4])
0x35c: Pop(0)
0x35d: @@ add(Stack[-3])
0x35e: Pop(0)
0x35f: Push((int) 3)
0x360: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x361: Pop(1)
0x362: Return(); Pop(2)

0x363: Stack[-1] = 0
0x364: PushEmpty(int, int, bool, int, int, bool)
0x365: @@ GetItemID(Stack[-3])
0x366: Pop(0)
0x367: Push("Category")
0x368: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x369: Pop(1)
0x36a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x36b: Pop(0)
0x36c: Pop(0); Push((bool) Stack[-1] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36e: @@ DropItems(Stack[-8], Stack[-7])
0x36f: Pop(0)
0x370: GOTO 0x376

0x371: PushEmpty(int, int)
0x372: Stack[-2] = Stack[-5]
0x373: Stack[-1] = Stack[-9]
0x374: Call2 0x358

0x375: Pop(2)
0x376: Return(); Pop(6)

0x377: PushEmpty(object, object)
0x378: @ CreateInvItem(Stack[-1])
0x379: Pop(0)
0x37a: @@ SetItemName(Stack[-4])
0x37b: Pop(0)
0x37c: PushEmpty(object, object, int)
0x37d: Stack[-3] = Stack[-8]
0x37e: Stack[-2] = Stack[-4]
0x37f: Stack[-1] = Stack[-6]
0x380: Call2 0x364

0x381: Pop(3)
0x382: Return(); Pop(2)

0x383: Stack[-1] = 0
0x384: PushEmpty(object, object)
0x385: @ FindActor(Stack[-1], Stack[-4])
0x386: Pop(0)
0x387: Pop(0); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: Stack[-5] = (bool) 0
0x38a: Return(); Pop(2)

0x38b: @ Trigger(Stack[-1], Stack[-3])
0x38c: Pop(0)
0x38d: Stack[-5] = (bool) 1
0x38e: Return(); Pop(2)

0x38f: Stack[-1] = 0
0x390: PushEmpty()
0x391: Push("playsound")
0x392: Push("giveitem")
0x393: @ TriggerWorld(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: Push("d7q01")
0x398: Push((int) 3)
0x399: @ SetVariable(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: PushEmpty()
0x39c: Call2 0x409

0x39d: Pop(0)
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: Push("mreport is given")
0x3a1: @ Trace(Stack[-1])
0x3a2: Pop(1)
0x3a3: PushEmpty(object, string, int)
0x3a4: Stack[-3] = Stack[-5]
0x3a5: Stack[-2] = "d7q01_mreport"
0x3a6: Stack[-1] = (int) 1
0x3a7: Call2 0x377

0x3a8: Pop(3)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty()
0x3ab: Push("ood7MBirdmask1")
0x3ac: Push((int) 1)
0x3ad: @ SetVariable(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: Return(); Pop(0)

0x3b0: PushEmpty()
0x3b1: PushEmpty(bool, string, string)
0x3b2: Stack[-2] = "quest_d7_01"
0x3b3: Stack[-1] = "sobor_teleport"
0x3b4: Call2 0x384

0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: PushEmpty(int, string)
0x3b9: Stack[-1] = "d7q01"
0x3ba: Call2 0x353

0x3bb: Pop(1)
0x3bc: Push((int) 2)
0x3bd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bf: Stack[-2] = (bool) 1
0x3c0: Return(); Pop(0)

0x3c1: Stack[-2] = (bool) 0
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: PushEmpty(bool, object)
0x3c5: Stack[-1] = Stack[-3]
0x3c6: Call2 0x3d9

0x3c7: Pop(1)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-2] = (bool) 1
0x3ca: Return(); Pop(0)

0x3cb: Stack[-2] = (bool) 0
0x3cc: Return(); Pop(0)

0x3cd: PushEmpty()
0x3ce: PushEmpty(int, string)
0x3cf: Stack[-1] = "ood7MBirdmask1"
0x3d0: Call2 0x353

0x3d1: Pop(1)
0x3d2: Push((int) 0)
0x3d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-2] = (bool) 1
0x3d6: Return(); Pop(0)

0x3d7: Stack[-2] = (bool) 0
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x3da: Push((int) 1)
0x3db: @@ GetItemCount(Stack[-11], Stack[-1])
0x3dc: Pop(1)
0x3dd: Push("bird_mask")
0x3de: @ GetInvItemByName(Stack[-10], Stack[-1])
0x3df: Pop(1)
0x3e0: Push("bird_balahon")
0x3e1: @ GetInvItemByName(Stack[-9], Stack[-1])
0x3e2: Pop(1)
0x3e3: Stack[-7] = (bool) 0
0x3e4: Stack[-6] = (bool) 0
0x3e5: Stack[-5] = (int) 0
0x3e6: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x3e7: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3e8: Push((int) 1)
0x3e9: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x3ea: Pop(1)
0x3eb: @@ GetItemID(Stack[-3])
0x3ec: Pop(0)
0x3ed: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3ef: Push((int) 1)
0x3f0: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x3f1: Pop(1)
0x3f2: Push(Stack[-2])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: Stack[-7] = (bool) 1
0x3f5: GOTO 0x3fe

0x3f6: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f8: Push((int) 1)
0x3f9: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x3fa: Pop(1)
0x3fb: Push(Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fd: Stack[-6] = (bool) 1
0x3fe: Stack[-4] = 0
0x3ff: Push((int) 1)
0x400: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x401: GOTO 0x3e6

0x402: Stack[-22] = (bool) 0
0x403: Push(Stack[-7])
0x404: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x405: Push(Stack[-6])
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: Stack[-22] = (bool) 1
0x408: Return(); Pop(20)

0x409: PushEmpty(object, object)
0x40a: Push((int) 169)
0x40b: Push((int) 1)
0x40c: Push((int) 515418)
0x40d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(3)
0x40f: PushEmpty(bool, object, int)
0x410: Stack[-2] = Stack[-4]
0x411: Stack[-1] = (int) 165
0x412: Call2 0x423

0x413: Pop(3)
0x414: Return(); Pop(2)

0x415: Stack[-1] = 0
0x416: PushEmpty(object, object)
0x417: @ GetDiaryRoot(Stack[-1])
0x418: Pop(0)
0x419: Pop(0); Push((bool) Stack[-1] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41b: Push("Can't retrieve diary root")
0x41c: @ Trace(Stack[-1])
0x41d: Pop(1)
0x41e: Stack[-3] = (bool) 0
0x41f: Return(); Pop(2)

0x420: Stack[-3] = Stack[-1]
0x421: Return(); Pop(2)

0x422: Stack[-1] = 0
0x423: PushEmpty(object, object, int, object, object, int)
0x424: PushEmpty(object)
0x425: Call2 0x416

0x426: Stack[-4] = Stack[-1]
0x427: Pop(1)
0x428: @@ Find(Stack[-7], Stack[-2])
0x429: Pop(0)
0x42a: Pop(0); Push((bool) Stack[-2] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42c: Push("Can't find diary parent with id: ")
0x42d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x42e: @ Trace(Stack[-1])
0x42f: Pop(1)
0x430: Stack[-9] = (bool) 0
0x431: Return(); Pop(6)

0x432: @@ AddChild(Stack[-8])
0x433: Pop(0)
0x434: Push((int) 7)
0x435: @ SendWorldWndMessage(Stack[-1])
0x436: Pop(1)
0x437: @@ GetCategory(Stack[-1])
0x438: Pop(0)
0x439: @ SetDiarySection(Stack[-1])
0x43a: Pop(0)
0x43b: Stack[-9] = (bool) 0
0x43c: Return(); Pop(6)

0x43d: Stack[-2] = 0
0x43e: Stack[-3] = 0
0x43f: PushEmpty(int, int)
0x440: Push("branch")
0x441: @ GetVariable(Stack[-1], Stack[-2])
0x442: Pop(1)
0x443: Push((int) 0)
0x444: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x446: Stack[-3] = (int) 1
0x447: Return(); Pop(2)

0x448: GOTO 0x44e

0x449: Push((int) 1)
0x44a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-3] = (int) 2
0x44d: Return(); Pop(2)

0x44e: Stack[-3] = (int) 3
0x44f: Return(); Pop(2)

0x450: Stack[-1] = (int) 515571
0x451: Return(); Pop(0)

0x452: Stack[-1] = (int) 504029
0x453: Return(); Pop(0)

0x454: Stack[-1] = "ui/NPC_bmask.png"
0x455: Return(); Pop(0)

0x456: Stack[-1] = "ui/NPC_bmask_b.png"
0x457: Return(); Pop(0)

0x458: Stack[-1] = (bool) 0
0x459: Return(); Pop(0)

