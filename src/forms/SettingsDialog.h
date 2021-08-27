#pragma once

#include <QDialog>
#include <QTimer>

#include "ui_SettingsDialog.h"
#include "ConnectInfo.h"

class SettingsDialog : public QDialog
{
	Q_OBJECT

public:
	explicit SettingsDialog(QWidget* parent = 0);
	~SettingsDialog();
	void showEvent(QShowEvent *event);
	void closeEvent(QCloseEvent *event);
	void ToggleShowHide();

private Q_SLOTS:
	void DialogButtonClicked(QAbstractButton *button);
	void SaveFormData();
	void FillSessionTable();
	void EnableAuthenticationCheckBoxChanged();
	void GeneratePasswordButtonClicked();
	void ShowConnectInfoButtonClicked();
	void PasswordEdited();

private:
	Ui::SettingsDialog *ui;
	ConnectInfo *connectInfo;
	QTimer *sessionTableTimer;
	bool passwordManuallyEdited;
};