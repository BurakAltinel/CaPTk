#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>
class QFontDialog;
class QColorDialog;
class QVBoxLayout;
class QWidget;
class QHBoxLayout;
class QListWidget;
class QStackedWidget;
class QDialogButtonBox;

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
	//! constructor/destructor
    explicit PreferencesDialog(QWidget *parent = nullptr);
    ~PreferencesDialog();

	//! getter for font dialog
    QFontDialog* GetFontDialog();

public slots:

	//! list widget item selection change handler
    void OnItemSelectionChanged();

private:

	//! set up UI
	void SetupUi();
	void retranslateUi(QDialog *PreferencesDialog);

	//! ivars
    QFontDialog *m_FontDialog;
	QVBoxLayout *verticalLayout;
	QWidget *widget;
	QHBoxLayout *horizontalLayout;
	QListWidget *listWidget;
	QStackedWidget *stackedWidget;
	QDialogButtonBox *buttonBox;
};

#endif // PREFERENCESDIALOG_H
