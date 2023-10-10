package edu.gate.frontend;

import edu.ground.analysis.ComplianceResults;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.chart.BarChart;
import javafx.scene.chart.XYChart;
import javafx.scene.control.Label;

import java.net.URL;
import java.util.ResourceBundle;

public class ResultController extends ComboController implements Initializable {
    @FXML
    private Label overallComplianceLabel, compliantTasksLabel, complianceRateLabel;
    @FXML
    private Label tasksLabel, accuracyLabel, deviationLabel, acceptanceLabel;
    @FXML
    private BarChart<String, Double> accuracyBarChart;

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        /* Getting the compliance results from the MainApplication. */
        ComplianceResults results = MainApplication.complianceResults;
        System.out.println("ComplianceRate: " + results.getComplianceRate());
        System.out.println(results.getIdealNoise().TMP());

        /* Initialize all labels. */
        initializeLabels(results);

        /* Initialize the bar char. */
        initializeBarChart(results);

    }

    /**
     * This helper method is for code clarity and initializes all labels.
     *
     * @param results are the compliance test results.
     */
    private void initializeLabels(ComplianceResults results) {
        /* Initialize all labels. */
        overallComplianceLabel.setText(String.valueOf(results.getOverallCompliance()));
        compliantTasksLabel.setText(String.valueOf(results.getCompliantTasks()));
        complianceRateLabel.setText(results.getComplianceRate() + " %");
        tasksLabel.setText(String.valueOf(results.getTasks()));
        accuracyLabel.setText(results.getAccuracy());
        deviationLabel.setText(String.valueOf(results.getDeviation()));
        acceptanceLabel.setText(String.valueOf(results.getAcceptance()));
    }

    /**
     * This helper method is for code clarification and initializes the bar chart
     *
     * @param results are the compliance test results.
     */
    private void initializeBarChart(ComplianceResults results) {
        XYChart.Series<String, Double> series = new XYChart.Series<>();

        for (int i = 0; i < results.getMissionTotals().size(); i++) {
            series.getData().add(new XYChart.Data<>(
                    results.getMissionTotals().get(i).mission(),
                    results.getMissionTotals().get(i).percentage()));
        }

        accuracyBarChart.getData().add(series);
    }


}
