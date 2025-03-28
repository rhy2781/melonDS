#include <QImage>
#include <QPainter>
#include <QString>
#include <QFont>

void renderKanjiScreen(QImage& kanjiScreen, const QString& jisHex) {
    // Fill the Kanji screen with a gray background
    QPainter kanjiPainter(&kanjiScreen);
    kanjiPainter.fillRect(kanjiScreen.rect(), Qt::gray);

    // Set the pen and font for the painter
    kanjiPainter.setPen(Qt::black);
    kanjiPainter.setFont(QFont("Hiragino Sans", 24));

    // Draw the JIS hex string in the center of the screen
    kanjiPainter.drawText(kanjiScreen.rect(), Qt::AlignCenter, jisHex);
}