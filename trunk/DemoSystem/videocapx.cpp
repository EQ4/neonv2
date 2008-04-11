// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "videocapx.h"

/////////////////////////////////////////////////////////////////////////////
// CVideoCapX

IMPLEMENT_DYNCREATE(CVideoCapX, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CVideoCapX properties

CString CVideoCapX::GetCapFilename()
{
  CString result;
  GetProperty(0x18, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetCapFilename(LPCTSTR propVal)
{
  SetProperty(0x18, VT_BSTR, propVal);
}

BOOL CVideoCapX::GetCaptureAudio()
{
  BOOL result;
  GetProperty(0x19, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetCaptureAudio(BOOL propVal)
{
  SetProperty(0x19, VT_BOOL, propVal);
}

BOOL CVideoCapX::GetCapTimeLimitEnabled()
{
  BOOL result;
  GetProperty(0x1, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetCapTimeLimitEnabled(BOOL propVal)
{
  SetProperty(0x1, VT_BOOL, propVal);
}

long CVideoCapX::GetCapTimeLimit()
{
  long result;
  GetProperty(0x2, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetCapTimeLimit(long propVal)
{
  SetProperty(0x2, VT_I4, propVal);
}

BOOL CVideoCapX::GetConnected()
{
  BOOL result;
  GetProperty(0x1a, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetConnected(BOOL propVal)
{
  SetProperty(0x1a, VT_BOOL, propVal);
}

BOOL CVideoCapX::GetPreview()
{
  BOOL result;
  GetProperty(0x1b, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetPreview(BOOL propVal)
{
  SetProperty(0x1b, VT_BOOL, propVal);
}

double CVideoCapX::GetCaptureRate()
{
  double result;
  GetProperty(0x1c, VT_R8, (void*)&result);
  return result;
}

void CVideoCapX::SetCaptureRate(double propVal)
{
  SetProperty(0x1c, VT_R8, propVal);
}

BOOL CVideoCapX::GetPreviewScale()
{
  BOOL result;
  GetProperty(0x1d, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetPreviewScale(BOOL propVal)
{
  SetProperty(0x1d, VT_BOOL, propVal);
}

long CVideoCapX::GetVideoDeviceIndex()
{
  long result;
  GetProperty(0x1e, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoDeviceIndex(long propVal)
{
  SetProperty(0x1e, VT_I4, propVal);
}

long CVideoCapX::GetAudioDeviceIndex()
{
  long result;
  GetProperty(0x1f, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetAudioDeviceIndex(long propVal)
{
  SetProperty(0x1f, VT_I4, propVal);
}

BOOL CVideoCapX::GetIsCapturing()
{
  BOOL result;
  GetProperty(0x2d, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetIsCapturing(BOOL propVal)
{
  SetProperty(0x2d, VT_BOOL, propVal);
}

long CVideoCapX::GetVideoCodecQuality()
{
  long result;
  GetProperty(0x3, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoCodecQuality(long propVal)
{
  SetProperty(0x3, VT_I4, propVal);
}

BOOL CVideoCapX::GetServerMode()
{
  BOOL result;
  GetProperty(0x20, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetServerMode(BOOL propVal)
{
  SetProperty(0x20, VT_BOOL, propVal);
}

long CVideoCapX::GetServerPort()
{
  long result;
  GetProperty(0x21, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetServerPort(long propVal)
{
  SetProperty(0x21, VT_I4, propVal);
}

CString CVideoCapX::GetServerPassword()
{
  CString result;
  GetProperty(0x4, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetServerPassword(LPCTSTR propVal)
{
  SetProperty(0x4, VT_BSTR, propVal);
}

long CVideoCapX::GetVideoCodecIndex()
{
  long result;
  GetProperty(0x22, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoCodecIndex(long propVal)
{
  SetProperty(0x22, VT_I4, propVal);
}

long CVideoCapX::GetAudioCodecIndex()
{
  long result;
  GetProperty(0x23, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetAudioCodecIndex(long propVal)
{
  SetProperty(0x23, VT_I4, propVal);
}

long CVideoCapX::GetDebugMode()
{
  long result;
  GetProperty(0x5, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetDebugMode(long propVal)
{
  SetProperty(0x5, VT_I4, propVal);
}

BOOL CVideoCapX::GetFTPPassiveMode()
{
  BOOL result;
  GetProperty(0x6, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetFTPPassiveMode(BOOL propVal)
{
  SetProperty(0x6, VT_BOOL, propVal);
}

long CVideoCapX::GetVideoInputIndex()
{
  long result;
  GetProperty(0x24, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoInputIndex(long propVal)
{
  SetProperty(0x24, VT_I4, propVal);
}

long CVideoCapX::GetMousePointer()
{
  long result;
  GetProperty(0x25, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetMousePointer(long propVal)
{
  SetProperty(0x25, VT_I4, propVal);
}

OLE_HANDLE CVideoCapX::GetHWnd()
{
  OLE_HANDLE result;
  GetProperty(DISPID_HWND, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetHWnd(OLE_HANDLE propVal)
{
  SetProperty(DISPID_HWND, VT_I4, propVal);
}

long CVideoCapX::GetMasterStream()
{
  long result;
  GetProperty(0x7, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetMasterStream(long propVal)
{
  SetProperty(0x7, VT_I4, propVal);
}

long CVideoCapX::GetVideoWidth()
{
  long result;
  GetProperty(0x2e, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoWidth(long propVal)
{
  SetProperty(0x2e, VT_I4, propVal);
}

long CVideoCapX::GetVideoHeight()
{
  long result;
  GetProperty(0x2f, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoHeight(long propVal)
{
  SetProperty(0x2f, VT_I4, propVal);
}

BOOL CVideoCapX::GetOverlay()
{
  BOOL result;
  GetProperty(0x26, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetOverlay(BOOL propVal)
{
  SetProperty(0x26, VT_BOOL, propVal);
}

BOOL CVideoCapX::GetHasOverlay()
{
  BOOL result;
  GetProperty(0x30, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetHasOverlay(BOOL propVal)
{
  SetProperty(0x30, VT_BOOL, propVal);
}

long CVideoCapX::GetVideoFlip()
{
  long result;
  GetProperty(0x31, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoFlip(long propVal)
{
  SetProperty(0x31, VT_I4, propVal);
}

long CVideoCapX::GetAudioInputIndex()
{
  long result;
  GetProperty(0x27, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetAudioInputIndex(long propVal)
{
  SetProperty(0x27, VT_I4, propVal);
}

BOOL CVideoCapX::GetPreviewFullScreen()
{
  BOOL result;
  GetProperty(0x28, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetPreviewFullScreen(BOOL propVal)
{
  SetProperty(0x28, VT_BOOL, propVal);
}

long CVideoCapX::GetProfileIndex()
{
  long result;
  GetProperty(0x8, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetProfileIndex(long propVal)
{
  SetProperty(0x8, VT_I4, propVal);
}

long CVideoCapX::GetServerQuality()
{
  long result;
  GetProperty(0x9, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetServerQuality(long propVal)
{
  SetProperty(0x9, VT_I4, propVal);
}

CString CVideoCapX::GetProfileData()
{
  CString result;
  GetProperty(0xa, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetProfileData(LPCTSTR propVal)
{
  SetProperty(0xa, VT_BSTR, propVal);
}

BOOL CVideoCapX::GetPreviewAudio()
{
  BOOL result;
  GetProperty(0x29, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetPreviewAudio(BOOL propVal)
{
  SetProperty(0x29, VT_BOOL, propVal);
}

long CVideoCapX::GetWMTVersion()
{
  long result;
  GetProperty(0x32, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetWMTVersion(long propVal)
{
  SetProperty(0x32, VT_I4, propVal);
}

long CVideoCapX::GetDeviceType()
{
  long result;
  GetProperty(0x33, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetDeviceType(long propVal)
{
  SetProperty(0x33, VT_I4, propVal);
}

LPUNKNOWN CVideoCapX::GetUserFilterIUnknown()
{
  LPUNKNOWN result;
  GetProperty(0xb, VT_UNKNOWN, (void*)&result);
  return result;
}

void CVideoCapX::SetUserFilterIUnknown(LPUNKNOWN propVal)
{
  SetProperty(0xb, VT_UNKNOWN, propVal);
}

long CVideoCapX::GetUseVideoFilter()
{
  long result;
  GetProperty(0x2a, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetUseVideoFilter(long propVal)
{
  SetProperty(0x2a, VT_I4, propVal);
}

CString CVideoCapX::GetUserFilterCLSID()
{
  CString result;
  GetProperty(0xc, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetUserFilterCLSID(LPCTSTR propVal)
{
  SetProperty(0xc, VT_BSTR, propVal);
}

BOOL CVideoCapX::GetUseDeinterlace()
{
  BOOL result;
  GetProperty(0x2b, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetUseDeinterlace(BOOL propVal)
{
  SetProperty(0x2b, VT_BOOL, propVal);
}

long CVideoCapX::GetColorFormat()
{
  long result;
  GetProperty(0x2c, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetColorFormat(long propVal)
{
  SetProperty(0x2c, VT_I4, propVal);
}

BOOL CVideoCapX::GetSyncUsingStreamOffset()
{
  BOOL result;
  GetProperty(0xd, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetSyncUsingStreamOffset(BOOL propVal)
{
  SetProperty(0xd, VT_BOOL, propVal);
}

BOOL CVideoCapX::GetHalfSizedVideo()
{
  BOOL result;
  GetProperty(0xe, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetHalfSizedVideo(BOOL propVal)
{
  SetProperty(0xe, VT_BOOL, propVal);
}

CString CVideoCapX::GetVersion()
{
  CString result;
  GetProperty(0x34, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetVersion(LPCTSTR propVal)
{
  SetProperty(0x34, VT_BSTR, propVal);
}

BOOL CVideoCapX::GetUseVMR9()
{
  BOOL result;
  GetProperty(0xf, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetUseVMR9(BOOL propVal)
{
  SetProperty(0xf, VT_BOOL, propVal);
}

long CVideoCapX::GetOverscan()
{
  long result;
  GetProperty(0x10, VT_I4, (void*)&result);
  return result;
}

void CVideoCapX::SetOverscan(long propVal)
{
  SetProperty(0x10, VT_I4, propVal);
}

CString CVideoCapX::GetWMAttributes()
{
  CString result;
  GetProperty(0x11, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetWMAttributes(LPCTSTR propVal)
{
  SetProperty(0x11, VT_BSTR, propVal);
}

LPDISPATCH CVideoCapX::GetMouseIcon()
{
  LPDISPATCH result;
  GetProperty(0x35, VT_DISPATCH, (void*)&result);
  return result;
}

void CVideoCapX::SetMouseIcon(LPDISPATCH propVal)
{
  SetProperty(0x35, VT_DISPATCH, propVal);
}

CString CVideoCapX::GetLocalAddress()
{
  CString result;
  GetProperty(0x12, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetLocalAddress(LPCTSTR propVal)
{
  SetProperty(0x12, VT_BSTR, propVal);
}

BOOL CVideoCapX::GetEnableNewFrameEvent()
{
  BOOL result;
  GetProperty(0x13, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetEnableNewFrameEvent(BOOL propVal)
{
  SetProperty(0x13, VT_BOOL, propVal);
}

CString CVideoCapX::GetVideoSourceURL()
{
  CString result;
  GetProperty(0x14, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetVideoSourceURL(LPCTSTR propVal)
{
  SetProperty(0x14, VT_BSTR, propVal);
}

BOOL CVideoCapX::GetUseOverlay()
{
  BOOL result;
  GetProperty(0x15, VT_BOOL, (void*)&result);
  return result;
}

void CVideoCapX::SetUseOverlay(BOOL propVal)
{
  SetProperty(0x15, VT_BOOL, propVal);
}

CString CVideoCapX::GetUserFilter2CLSID()
{
  CString result;
  GetProperty(0x16, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetUserFilter2CLSID(LPCTSTR propVal)
{
  SetProperty(0x16, VT_BSTR, propVal);
}

CString CVideoCapX::GetUserFilter3CLSID()
{
  CString result;
  GetProperty(0x17, VT_BSTR, (void*)&result);
  return result;
}

void CVideoCapX::SetUserFilter3CLSID(LPCTSTR propVal)
{
  SetProperty(0x17, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CVideoCapX operations

BOOL CVideoCapX::CopyFrame()
{
  BOOL result;
  InvokeHelper(0x36, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
  return result;
}

BOOL CVideoCapX::SaveFrame(LPCTSTR filename)
{
  BOOL result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0x37, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    filename);
  return result;
}

BOOL CVideoCapX::StartCapture()
{
  BOOL result;
  InvokeHelper(0x38, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
  return result;
}

BOOL CVideoCapX::StopCapture()
{
  BOOL result;
  InvokeHelper(0x39, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
  return result;
}

BOOL CVideoCapX::SetVideoFormat(long width, long height)
{
  BOOL result;
  static BYTE parms[] =
    VTS_I4 VTS_I4;
  InvokeHelper(0x3a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    width, height);
  return result;
}

long CVideoCapX::GetCapStatus(long* ImageWidth, long* ImageHeight, long* CurrentVideoFrame, long* CurrentVideoFramesDropped, long* CurrentTimeElapsedMS, long* fCapturingNow)
{
  long result;
  static BYTE parms[] =
    VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4;
  InvokeHelper(0x3b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    ImageWidth, ImageHeight, CurrentVideoFrame, CurrentVideoFramesDropped, CurrentTimeElapsedMS, fCapturingNow);
  return result;
}

LPDISPATCH CVideoCapX::GrabFrame()
{
  LPDISPATCH result;
  InvokeHelper(0x3c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
  return result;
}

BOOL CVideoCapX::SaveFrameJPG(LPCTSTR filename, long quality)
{
  BOOL result;
  static BYTE parms[] =
    VTS_BSTR VTS_I4;
  InvokeHelper(0x3d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    filename, quality);
  return result;
}

BOOL CVideoCapX::UploadFrame(LPCTSTR server, LPCTSTR username, LPCTSTR password, LPCTSTR path, LPCTSTR filename, long port, long quality)
{
  BOOL result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
  InvokeHelper(0x3e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    server, username, password, path, filename, port, quality);
  return result;
}

BOOL CVideoCapX::GetAudioFormat(long* FmtTag, long* nChannels, long* nSamplesPerSec, long* nAvgBytesPerSec, long* nBlockAlign, long* wBitsPerSample)
{
  BOOL result;
  static BYTE parms[] =
    VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4;
  InvokeHelper(0x3f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    FmtTag, nChannels, nSamplesPerSec, nAvgBytesPerSec, nBlockAlign, wBitsPerSample);
  return result;
}

BOOL CVideoCapX::SetAudioFormat(long FmtTag, long nChannels, long nSamplesPerSec, long nAvgBytesPerSec, long nBlockAlign, long nBitsPerSample)
{
  BOOL result;
  static BYTE parms[] =
    VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
  InvokeHelper(0x40, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    FmtTag, nChannels, nSamplesPerSec, nAvgBytesPerSec, nBlockAlign, nBitsPerSample);
  return result;
}

long CVideoCapX::DetectMotion()
{
  long result;
  InvokeHelper(0x41, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

CString CVideoCapX::GetVideoDeviceName(long Index)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x79, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    Index);
  return result;
}

CString CVideoCapX::GetAudioDeviceName(long Index)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x7a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    Index);
  return result;
}

long CVideoCapX::AllocCapFile(long FileSizeMb)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x42, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    FileSizeMb);
  return result;
}

long CVideoCapX::CopyCaptureFile(LPCTSTR New)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0x43, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    New);
  return result;
}

long CVideoCapX::Recompress(LPCTSTR SrcFile, LPCTSTR DestFile)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR;
  InvokeHelper(0x44, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    SrcFile, DestFile);
  return result;
}

VARIANT CVideoCapX::GetRGB()
{
  VARIANT result;
  InvokeHelper(0x45, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetTextOverlay(long Index, LPCTSTR Caption, long X, long Y, LPCTSTR FontName, long FontSize, long FColor, long BColor)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_BSTR VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
  InvokeHelper(0x46, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Index, Caption, X, Y, FontName, FontSize, FColor, BColor);
  return result;
}

LPDISPATCH CVideoCapX::Acquire()
{
  LPDISPATCH result;
  InvokeHelper(0x47, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SelectSource()
{
  long result;
  InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetCrop(long X, long Y, long W, long H)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4 VTS_I4 VTS_I4;
  InvokeHelper(0x49, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    X, Y, W, H);
  return result;
}

long CVideoCapX::GetVideoFormat(long* width, long* height)
{
  long result;
  static BYTE parms[] =
    VTS_PI4 VTS_PI4;
  InvokeHelper(0x4a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    width, height);
  return result;
}

long CVideoCapX::SavePictureJPG(LPDISPATCH Picture, LPCTSTR filename, long quality)
{
  long result;
  static BYTE parms[] =
    VTS_DISPATCH VTS_BSTR VTS_I4;
  InvokeHelper(0x4b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Picture, filename, quality);
  return result;
}

LPDISPATCH CVideoCapX::ReceiveFrame(LPCTSTR ServerName)
{
  LPDISPATCH result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0x4c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
    ServerName);
  return result;
}

long CVideoCapX::ShowVideoSourceDlg()
{
  long result;
  InvokeHelper(0x4d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ShowVideoFormatDlg()
{
  long result;
  InvokeHelper(0x4e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ShowVideoCodecDlg()
{
  long result;
  InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ShowAudioCodecDlg()
{
  long result;
  InvokeHelper(0x50, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ShowAudioSourceDlg()
{
  long result;
  InvokeHelper(0x51, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ShowAudioFormatDlg()
{
  long result;
  InvokeHelper(0x52, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerOpen(LPCTSTR filename)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0x53, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    filename);
  return result;
}

long CVideoCapX::PlayerClose()
{
  long result;
  InvokeHelper(0x54, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerStart()
{
  long result;
  InvokeHelper(0x55, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerStop()
{
  long result;
  InvokeHelper(0x56, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerGetVideoSize(long* width, long* height)
{
  long result;
  static BYTE parms[] =
    VTS_PI4 VTS_PI4;
  InvokeHelper(0x57, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    width, height);
  return result;
}

long CVideoCapX::PlayerSetMute(long Mute)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x58, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Mute);
  return result;
}

long CVideoCapX::PlayerGetPos()
{
  long result;
  InvokeHelper(0x59, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerSetPos(double PosMS)
{
  long result;
  static BYTE parms[] =
    VTS_R8;
  InvokeHelper(0x5a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    PosMS);
  return result;
}

long CVideoCapX::PlayerSetFullScreen(long Full)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x5b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Full);
  return result;
}

long CVideoCapX::PlayerGetLenMS()
{
  long result;
  InvokeHelper(0x5c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::GetFrameAsHBITMAP()
{
  long result;
  InvokeHelper(0x5d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerSetSize(long width, long height)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4;
  InvokeHelper(0x5e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    width, height);
  return result;
}

long CVideoCapX::GetVideoProcAmp(long ValueIndex, long* Value)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_PI4;
  InvokeHelper(0x5f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    ValueIndex, Value);
  return result;
}

long CVideoCapX::SetVideoProcAmp(long ValueIndex, long Value)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4;
  InvokeHelper(0x60, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    ValueIndex, Value);
  return result;
}

long CVideoCapX::GetVideoProcAmpValueRange(long ValueIndex, long* Min, long* Max, long* SteppingDelta, long* Default)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4;
  InvokeHelper(0x61, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    ValueIndex, Min, Max, SteppingDelta, Default);
  return result;
}

long CVideoCapX::SetMotionMask(long Index, long Left, long Top, long width, long height)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
  InvokeHelper(0x62, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Index, Left, Top, width, height);
  return result;
}

CString CVideoCapX::GetVideoInputName(long Index)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x63, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    Index);
  return result;
}

long CVideoCapX::GetVideoInputCount()
{
  long result;
  InvokeHelper(0x64, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PauseCapture()
{
  long result;
  InvokeHelper(0x65, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ResumeCapture()
{
  long result;
  InvokeHelper(0x66, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::PlayerStepOneFrame()
{
  long result;
  InvokeHelper(0x67, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

double CVideoCapX::PlayerGetFrameCount()
{
  double result;
  InvokeHelper(0x68, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
  return result;
}

double CVideoCapX::PlayerSetFrame(double nFrame)
{
  double result;
  static BYTE parms[] =
    VTS_R8;
  InvokeHelper(0x69, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
    nFrame);
  return result;
}

double CVideoCapX::PlayerGetFrame()
{
  double result;
  InvokeHelper(0x6a, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
  return result;
}

long CVideoCapX::VCRSetMode(long Mode)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Mode);
  return result;
}

long CVideoCapX::SetTunerChannel(long nChannel)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    nChannel);
  return result;
}

VARIANT CVideoCapX::GetVideoCaps()
{
  VARIANT result;
  InvokeHelper(0x6d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetTVFormat(long NewFormat)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    NewFormat);
  return result;
}

long CVideoCapX::SingleFrameOpen(long fps)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    fps);
  return result;
}

long CVideoCapX::SingleFrameClose()
{
  long result;
  InvokeHelper(0x70, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SingleFrameAdd()
{
  long result;
  InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetAudioDelay(long DelayMS)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    DelayMS);
  return result;
}

long CVideoCapX::CompareImages(LPDISPATCH Picture1, LPDISPATCH Picture2, long Sensitivity)
{
  long result;
  static BYTE parms[] =
    VTS_DISPATCH VTS_DISPATCH VTS_I4;
  InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Picture1, Picture2, Sensitivity);
  return result;
}

long CVideoCapX::SetBitmapOverlay(long BitmapHandle, long X, long Y, long TransColor)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4 VTS_I4 VTS_I4;
  InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    BitmapHandle, X, Y, TransColor);
  return result;
}

long CVideoCapX::CameraControlGet(long Prop)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Prop);
  return result;
}

long CVideoCapX::CameraControlSet(long Prop, long Val)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4;
  InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Prop, Val);
  return result;
}

CString CVideoCapX::GetVideoCodecName(long nIndex)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x7b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    nIndex);
  return result;
}

long CVideoCapX::GetTimecode()
{
  long result;
  InvokeHelper(0x77, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetTunerInputType(long InputType)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x78, DISPATCH_METHOD, VT_I4, (void*)&result, parms, InputType);
  return result;
}

CString CVideoCapX::GetAudioCodecName(long Index)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x7c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    Index);
  return result;
}

long CVideoCapX::StartCapture2()
{
  long result;
  InvokeHelper(0x7d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::GetAudioInputCount()
{
  long result;
  InvokeHelper(0x7e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

CString CVideoCapX::GetAudioInputName(long Index)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x7f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    Index);
  return result;
}

long CVideoCapX::GetVideoDeviceCount()
{
  long result;
  InvokeHelper(0x80, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::GetVideoCodecCount()
{
  long result;
  InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::GetAudioCodecCount()
{
  long result;
  InvokeHelper(0x82, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::GetAudioDeviceCount()
{
  long result;
  InvokeHelper(0x83, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::StopBroadcast()
{
  long result;
  InvokeHelper(0x84, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::StartBroadcast(long port, long MaxConnections)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4;
  InvokeHelper(0x85, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    port, MaxConnections);
  return result;
}

long CVideoCapX::GetProfileCount()
{
  long result;
  InvokeHelper(0x86, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

CString CVideoCapX::GetProfileName(long ProfileIndex)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x87, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    ProfileIndex);
  return result;
}

CString CVideoCapX::GetProfileDesc(long ProfileIndex)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x88, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    ProfileIndex);
  return result;
}

long CVideoCapX::SetTunerCountryCode(long Code)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x89, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Code);
  return result;
}

long CVideoCapX::ShowTunerDlg()
{
  long result;
  InvokeHelper(0x8a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

double CVideoCapX::GetActualFrameRate()
{
  double result;
  InvokeHelper(0x8b, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetAudioInputLevel(long Level)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x8c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Level);
  return result;
}

long CVideoCapX::GetTunerSignal()
{
  long result;
  InvokeHelper(0x8d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetAudioVolume(long Volume)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x8e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Volume);
  return result;
}

long CVideoCapX::SetMasterAudioVolume(long LineID, long Volume)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4;
  InvokeHelper(0x8f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    LineID, Volume);
  return result;
}

DATE CVideoCapX::GetDateCode()
{
  DATE result;
  InvokeHelper(0x90, DISPATCH_METHOD, VT_DATE, (void*)&result, NULL);
  return result;
}

CString CVideoCapX::GetFilterSettings(long FilterID)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x91, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    FilterID);
  return result;
}

long CVideoCapX::SetFilterSettings(long Filter, LPCTSTR Data)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_BSTR;
  InvokeHelper(0x92, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Filter, Data);
  return result;
}

double CVideoCapX::GetCapFileSize()
{
  double result;
  InvokeHelper(0x93, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
  return result;
}

double CVideoCapX::PlayerSetRate(double NewRate)
{
  double result;
  static BYTE parms[] =
    VTS_R8;
  InvokeHelper(0x94, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
    NewRate);
  return result;
}

long CVideoCapX::ShowVideoCrossbarDlg()
{
  long result;
  InvokeHelper(0x95, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ShowUserFilterDlg(long FilterIndex)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x96, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    FilterIndex);
  return result;
}

long CVideoCapX::PlayerStepFrames(long nFrames)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x97, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    nFrames);
  return result;
}

long CVideoCapX::GetAudioLevel()
{
  long result;
  InvokeHelper(0x98, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::SetVideoFormatEx(long CapabilityIndex)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0x99, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    CapabilityIndex);
  return result;
}

BOOL CVideoCapX::SetHighPriority(BOOL High)
{
  BOOL result;
  static BYTE parms[] =
    VTS_BOOL;
  InvokeHelper(0x9a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    High);
  return result;
}

long CVideoCapX::LoadProfileFromURL(LPCTSTR URL)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0x9b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    URL);
  return result;
}

long CVideoCapX::HTTPUpload(LPCTSTR WebServer, LPCTSTR WebPage, LPCTSTR Fields, LPCTSTR Files)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
  InvokeHelper(0x9c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    WebServer, WebPage, Fields, Files);
  return result;
}

LPUNKNOWN CVideoCapX::GetVMR9IUnknown()
{
  LPUNKNOWN result;
  InvokeHelper(0x9d, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
  return result;
}

long CVideoCapX::ReceiveAudio(LPCTSTR ServerAddress, BOOL Play, long* nChannels, long* nSamplesPerSecond, long* nBytesPerSample, VARIANT* PCMData)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BOOL VTS_PI4 VTS_PI4 VTS_PI4 VTS_PVARIANT;
  InvokeHelper(0x9e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    ServerAddress, Play, nChannels, nSamplesPerSecond, nBytesPerSample, PCMData);
  return result;
}

long CVideoCapX::CameraControlGetRange(long Prop, long* MinVal, long* MaxVal, long* SteppingDelta, long* DefaultValue, long* CapsFlags)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4;
  InvokeHelper(0x9f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Prop, MinVal, MaxVal, SteppingDelta, DefaultValue, CapsFlags);
  return result;
}

CString CVideoCapX::GetVideoDeviceDesc(long Index)
{
  CString result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0xa0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
    Index);
  return result;
}

long CVideoCapX::DisplayRemote(LPCTSTR RemoteAddress, BOOL Audio)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BOOL;
  InvokeHelper(0xa1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    RemoteAddress, Audio);
  return result;
}

long CVideoCapX::ExportToDV(LPCTSTR filename)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0xa2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    filename);
  return result;
}

long CVideoCapX::PlayerOpenDVD(LPCTSTR path)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR;
  InvokeHelper(0xa3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    path);
  return result;
}

long CVideoCapX::SingleFrameAddPicture(long BitmapHandle)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0xa4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    BitmapHandle);
  return result;
}

long CVideoCapX::SetFadeLevel(long NewLevel)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0xa5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    NewLevel);
  return result;
}

BOOL CVideoCapX::EnableExternalTrigger(BOOL bEnable)
{
  BOOL result;
  static BYTE parms[] =
    VTS_BOOL;
  InvokeHelper(0xa6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    bEnable);
  return result;
}

long CVideoCapX::RecompressEx(LPCTSTR SrcFile1, LPCTSTR SrcFile2, LPCTSTR DestFile, double TimeStart, double TimeEnd)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR VTS_BSTR VTS_R8 VTS_R8;
  InvokeHelper(0xa7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    SrcFile1, SrcFile2, DestFile, TimeStart, TimeEnd);
  return result;
}

long CVideoCapX::AutoTune(long nChannel)
{
  long result;
  static BYTE parms[] =
    VTS_I4;
  InvokeHelper(0xa8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    nChannel);
  return result;
}

long CVideoCapX::StoreAutoTune()
{
  long result;
  InvokeHelper(0xa9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

CString CVideoCapX::GetVideoCaps2()
{
  CString result;
  InvokeHelper(0xaa, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
  return result;
}

long CVideoCapX::StartBroadcastPush(LPCTSTR URL, LPCTSTR User, LPCTSTR password)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR VTS_BSTR;
  InvokeHelper(0xab, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    URL, User, password);
  return result;
}

long CVideoCapX::PlayerOpenBroadcast(LPCTSTR filename, long port, long MaxConnections)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_I4 VTS_I4;
  InvokeHelper(0xac, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    filename, port, MaxConnections);
  return result;
}

long CVideoCapX::ShowVideoDisplayDlg()
{
  long result;
  InvokeHelper(0xad, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
  return result;
}

long CVideoCapX::GetAudioLevel2(long* Left, long* Right)
{
  long result;
  static BYTE parms[] =
    VTS_PI4 VTS_PI4;
  InvokeHelper(0xae, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Left, Right);
  return result;
}

long CVideoCapX::SendScriptCommand(LPCTSTR Type, LPCTSTR Data)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR;
  InvokeHelper(0xaf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Type, Data);
  return result;
}

BOOL CVideoCapX::UploadFile(LPCTSTR server, LPCTSTR username, LPCTSTR password, LPCTSTR path, LPCTSTR server_filename, LPCTSTR local_filepath, long port)
{
  BOOL result;
  static BYTE parms[] =
    VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
  InvokeHelper(0xb0, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
    server, username, password, path, server_filename, local_filepath, port);
  return result;
}

long CVideoCapX::SetZoom(long Left, long Top, long width, long height)
{
  long result;
  static BYTE parms[] =
    VTS_I4 VTS_I4 VTS_I4 VTS_I4;
  InvokeHelper(0xb1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    Left, Top, width, height);
  return result;
}

long CVideoCapX::SetChromaKey(LPCTSTR BackImage, long MinTransparentColor, long MaxTransparentColor)
{
  long result;
  static BYTE parms[] =
    VTS_BSTR VTS_I4 VTS_I4;
  InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
    BackImage, MinTransparentColor, MaxTransparentColor);
  return result;
}

void CVideoCapX::AboutBox()
{
  InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
